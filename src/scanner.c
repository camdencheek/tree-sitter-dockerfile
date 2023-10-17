#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <wctype.h>

#include <tree_sitter/parser.h>

#define min(a, b) a < b ? a : b

typedef struct {
  bool in_heredoc;
  bool stripping_heredoc;
  unsigned heredoc_count;
  char *heredocs[10];
} scanner_state;

enum TokenType {
  HEREDOC_MARKER,
  HEREDOC_CONTENT,
  HEREDOC_END,
  ERROR_SENTINEL,
};

void *tree_sitter_dockerfile_external_scanner_create() {
  scanner_state *state = malloc(sizeof(scanner_state));
  memset(state, 0, sizeof(scanner_state));
  return state;
}

void tree_sitter_dockerfile_external_scanner_destroy(void *payload) {
  if (!payload)
    return;

  scanner_state *state = payload;
  for (unsigned i = 0; i < sizeof(state->heredocs) / sizeof(char *); i++) {
    if (state->heredocs[i]) {
      free(state->heredocs[i]);
    }
  }

  free(state);
}

unsigned tree_sitter_dockerfile_external_scanner_serialize(void *payload,
                                                           char *buffer) {
  scanner_state *state = payload;

  unsigned pos = 0;
  buffer[pos++] = state->in_heredoc;
  buffer[pos++] = state->stripping_heredoc;

  for (unsigned i = 0; i < state->heredoc_count; i++) {
    // Add the ending null byte to the length since we'll have to copy it as well.
    unsigned len = strlen(state->heredocs[i]) + 1;

    // If we run out of space, just drop the heredocs that don't fit.
    if (pos + len >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
      break;
    }

    memcpy(&buffer[pos], state->heredocs[i], len);
    pos += len;
  }

  // Add a null byte at the end to make it easy to detect.
  buffer[pos++] = 0;
  return pos;
}

void tree_sitter_dockerfile_external_scanner_deserialize(void *payload,
                                                         const char *buffer,
                                                         unsigned length) {
  scanner_state *state = payload;
  // Free all current heredocs to avoid leaking memory when we overwrite the
  // array later.
  for (unsigned i = 0; i < state->heredoc_count; i++) {
    free(state->heredocs[i]);
    state->heredocs[i] = NULL;
  }

  if (length == 0) {
    state->in_heredoc = false;
    state->stripping_heredoc = false;
    state->heredoc_count = 0;
  } else {
    unsigned pos = 0;
    state->in_heredoc = buffer[pos++];
    state->stripping_heredoc = buffer[pos++];

    unsigned heredoc_count = 0;
    for (unsigned i = 0; i < (sizeof(state->heredocs) / sizeof(char *)); i++) {
      unsigned len = strlen(&buffer[pos]);

      // We found the ending null byte which means that we're done.
      if (len == 0)
        break;

      // Account for the ending null byte in strings (again).
      len++;
      char *heredoc = malloc(len);
      memcpy(heredoc, &buffer[pos], len);
      state->heredocs[i] = heredoc;
      heredoc_count++;

      pos += len;
    }

    state->heredoc_count = heredoc_count;
  }
}

static void skip_whitespace(TSLexer *lexer) {
  while (lexer->lookahead != '\0' && lexer->lookahead != '\n' &&
         iswspace(lexer->lookahead))
    lexer->advance(lexer, true);
}

static bool scan_marker(scanner_state *state, TSLexer *lexer) {
  skip_whitespace(lexer);

  if (lexer->lookahead != '<')
    return false;
  lexer->advance(lexer, false);

  if (lexer->lookahead != '<')
    return false;
  lexer->advance(lexer, false);

  bool stripping = false;
  if (lexer->lookahead == '-') {
    stripping = true;
    lexer->advance(lexer, false);
  }

  int32_t quote = 0;
  if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
    quote = lexer->lookahead;
    lexer->advance(lexer, false);
  }

  // Reserve a reasonable amount of space for the heredoc delimiter string.
  // This amount should be small enough that it won't waste memory even if we
  // have to keep track of several open heredocs but it should also be large
  // enough that any reasonable delimiter will fit. The usual strings like
  // EOF, EOT, EOS, FILE, etc. are pretty short anyway.
  // Hardcoding this amount means we avoid having to dynamically resize it and
  // we're limited to about 1024 bytes for our state serialization anyway (due
  // to tree-sitter limits) so we can't handle many large heredoc delimiters even
  // if we changed this.
  unsigned del_space = 128;

  // We start recording the actual string at position 1 since we store whether
  // it's a stripping heredoc in the first position (with either a dash or a
  // space).
  unsigned del_idx = 1;

  char *delimiter = malloc(sizeof(char) * del_space);
  while (lexer->lookahead != '\0' &&
         (quote ? lexer->lookahead != quote : !iswspace(lexer->lookahead))) {
    if (lexer->lookahead == '\\') {
      lexer->advance(lexer, false);

      if (lexer->lookahead == '\0') {
        if (delimiter) free(delimiter);
        return false;
      }
    }

    if (delimiter) {
      delimiter[del_idx++] = lexer->lookahead;
    }
    lexer->advance(lexer, false);

    // If we run out of space, stop recording the delimiter but keep advancing
    // the lexer to ensure that we at least parse the marker correctly.
    if (del_idx >= del_space - 1) {
      free(delimiter);
      delimiter = NULL;
      del_idx = 0;
    }
  }

  if (quote) {
    if (lexer->lookahead != quote) {
      if (delimiter) free(delimiter);
      return false;
    }
    lexer->advance(lexer, false);
  }

  if (!delimiter) {
    lexer->result_symbol = HEREDOC_MARKER;
    return true;
  }

  delimiter[0] = stripping ? '-' : ' ';
  delimiter[del_idx] = '\0';

  if (state->heredoc_count == 0) {
    state->heredoc_count = 1;
    state->heredocs[0] = delimiter;
    state->stripping_heredoc = stripping;
  } else if (state->heredoc_count >= (sizeof(state->heredocs) / sizeof(char*))) {
    // We can't store more than 10 right now.
    free(delimiter);
  } else {
    state->heredocs[state->heredoc_count++] = delimiter;
  }

  lexer->result_symbol = HEREDOC_MARKER;
  return true;
}

static bool scan_content(scanner_state *state, TSLexer *lexer,
                         const bool *valid_symbols) {
  if (state->heredoc_count == 0) {
    state->in_heredoc = false;
    return false;
  }

  state->in_heredoc = true;

  if (state->stripping_heredoc) {
    skip_whitespace(lexer);
  }

  if (valid_symbols[HEREDOC_END]) {
    unsigned delim_idx = 1;
    // Look for the current heredoc delimiter.
    while (state->heredocs[0][delim_idx] != '\0' && lexer->lookahead != '\0' &&
           lexer->lookahead == state->heredocs[0][delim_idx]) {
      lexer->advance(lexer, false);
      delim_idx++;
    }

    // Check if the entire string matched.
    if (state->heredocs[0][delim_idx] == '\0') {
      lexer->result_symbol = HEREDOC_END;

      // Shift the first heredoc off the list.
      free(state->heredocs[0]);

      for (unsigned i = 1; i < state->heredoc_count; i++) {
        state->heredocs[i - 1] = state->heredocs[i];
      }
      state->heredocs[state->heredoc_count - 1] = NULL;
      state->heredoc_count--;

      if (state->heredoc_count > 0) {
        state->stripping_heredoc = state->heredocs[0][0] == '-';
      } else {
        state->in_heredoc = false;
      }

      return true;
    }
  }

  if (!valid_symbols[HEREDOC_CONTENT])
    return false;

  lexer->result_symbol = HEREDOC_CONTENT;

  for (;;) {
    switch (lexer->lookahead) {
    case '\0':
      if (lexer->eof(lexer)) {
        state->in_heredoc = false;
        return true;
      }
      lexer->advance(lexer, false);
      break;

    case '\n':
      return true;

    default:
      lexer->advance(lexer, false);
    }
  }
}

bool tree_sitter_dockerfile_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  scanner_state *state = payload;

  if (valid_symbols[ERROR_SENTINEL]) {
    if (state->in_heredoc) {
      return scan_content(state, lexer, valid_symbols);
    } else {
      return scan_marker(state, lexer);
    }
  }

  if (valid_symbols[HEREDOC_MARKER]) {
    return scan_marker(state, lexer);
  }

  if (valid_symbols[HEREDOC_CONTENT] || valid_symbols[HEREDOC_END]) {
    return scan_content(state, lexer, valid_symbols);
  }

  return false;
}
