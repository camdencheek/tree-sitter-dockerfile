#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_LF = 1,
  aux_sym_from_instruction_token1 = 2,
  aux_sym_from_instruction_token2 = 3,
  aux_sym_run_instruction_token1 = 4,
  aux_sym_cmd_instruction_token1 = 5,
  aux_sym_label_instruction_token1 = 6,
  aux_sym_expose_instruction_token1 = 7,
  aux_sym_env_instruction_token1 = 8,
  aux_sym_add_instruction_token1 = 9,
  aux_sym_copy_instruction_token1 = 10,
  aux_sym_entrypoint_instruction_token1 = 11,
  aux_sym_volume_instruction_token1 = 12,
  aux_sym_user_instruction_token1 = 13,
  aux_sym_user_instruction_token2 = 14,
  anon_sym_COLON = 15,
  aux_sym_user_instruction_token3 = 16,
  aux_sym_workdir_instruction_token1 = 17,
  aux_sym_arg_instruction_token1 = 18,
  aux_sym_arg_instruction_token2 = 19,
  anon_sym_EQ = 20,
  aux_sym_onbuild_instruction_token1 = 21,
  aux_sym_stopsignal_instruction_token1 = 22,
  aux_sym_stopsignal_instruction_token2 = 23,
  aux_sym_healthcheck_instruction_token1 = 24,
  anon_sym_NONE = 25,
  aux_sym_shell_instruction_token1 = 26,
  sym_path = 27,
  aux_sym_env_pair_token1 = 28,
  aux_sym_expose_port_token1 = 29,
  anon_sym_SLASHtcp = 30,
  anon_sym_SLASHudp = 31,
  aux_sym_label_pair_token1 = 32,
  aux_sym_image_spec_token1 = 33,
  sym_image_tag = 34,
  sym_image_digest = 35,
  anon_sym_DASH_DASH = 36,
  aux_sym_param_token1 = 37,
  anon_sym_EQ2 = 38,
  aux_sym_param_token2 = 39,
  sym_name = 40,
  anon_sym_LBRACK = 41,
  anon_sym_COMMA = 42,
  anon_sym_RBRACK = 43,
  aux_sym_shell_command_token1 = 44,
  anon_sym_BSLASH_LF = 45,
  aux_sym_shell_command_token2 = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_double_quoted_string_token1 = 48,
  aux_sym_unquoted_string_token1 = 49,
  anon_sym_BSLASH = 50,
  sym_escape_sequence = 51,
  sym__non_newline_whitespace = 52,
  anon_sym_POUND = 53,
  aux_sym_comment_token1 = 54,
  sym_source_file = 55,
  sym__instruction = 56,
  sym_from_instruction = 57,
  sym_run_instruction = 58,
  sym_cmd_instruction = 59,
  sym_label_instruction = 60,
  sym_expose_instruction = 61,
  sym_env_instruction = 62,
  sym_add_instruction = 63,
  sym_copy_instruction = 64,
  sym_entrypoint_instruction = 65,
  sym_volume_instruction = 66,
  sym_user_instruction = 67,
  sym_workdir_instruction = 68,
  sym_arg_instruction = 69,
  sym_onbuild_instruction = 70,
  sym_stopsignal_instruction = 71,
  sym_healthcheck_instruction = 72,
  sym_shell_instruction = 73,
  sym_env_pair = 74,
  sym_expose_port = 75,
  sym_label_pair = 76,
  sym_image_spec = 77,
  sym_param = 78,
  sym_string_array = 79,
  sym_shell_command = 80,
  sym_double_quoted_string = 81,
  sym_unquoted_string = 82,
  sym_comment = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_label_instruction_repeat1 = 85,
  aux_sym_expose_instruction_repeat1 = 86,
  aux_sym_env_instruction_repeat1 = 87,
  aux_sym_volume_instruction_repeat1 = 88,
  aux_sym_healthcheck_instruction_repeat1 = 89,
  aux_sym_string_array_repeat1 = 90,
  aux_sym_shell_command_repeat1 = 91,
  aux_sym_double_quoted_string_repeat1 = 92,
  aux_sym_unquoted_string_repeat1 = 93,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_from_instruction_token1] = "FROM",
  [aux_sym_from_instruction_token2] = "AS",
  [aux_sym_run_instruction_token1] = "RUN",
  [aux_sym_cmd_instruction_token1] = "CMD",
  [aux_sym_label_instruction_token1] = "LABEL",
  [aux_sym_expose_instruction_token1] = "EXPOSE",
  [aux_sym_env_instruction_token1] = "ENV",
  [aux_sym_add_instruction_token1] = "ADD",
  [aux_sym_copy_instruction_token1] = "COPY",
  [aux_sym_entrypoint_instruction_token1] = "ENTRYPOINT",
  [aux_sym_volume_instruction_token1] = "VOLUME",
  [aux_sym_user_instruction_token1] = "USER",
  [aux_sym_user_instruction_token2] = "unquoted_string",
  [anon_sym_COLON] = ":",
  [aux_sym_user_instruction_token3] = "unquoted_string",
  [aux_sym_workdir_instruction_token1] = "WORKDIR",
  [aux_sym_arg_instruction_token1] = "ARG",
  [aux_sym_arg_instruction_token2] = "unquoted_string",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "ONBUILD",
  [aux_sym_stopsignal_instruction_token1] = "STOPSIGNAL",
  [aux_sym_stopsignal_instruction_token2] = "stopsignal_instruction_token2",
  [aux_sym_healthcheck_instruction_token1] = "HEALTHCHECK",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "SHELL",
  [sym_path] = "path",
  [aux_sym_env_pair_token1] = "unquoted_string",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "unquoted_string",
  [aux_sym_image_spec_token1] = "name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [anon_sym_EQ2] = "=",
  [aux_sym_param_token2] = "param_token2",
  [sym_name] = "name",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym_shell_command_token1] = "shell_command_token1",
  [anon_sym_BSLASH_LF] = "\\\n",
  [aux_sym_shell_command_token2] = "shell_command_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym__non_newline_whitespace] = "_non_newline_whitespace",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_env_pair] = "env_pair",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_param] = "param",
  [sym_string_array] = "string_array",
  [sym_shell_command] = "shell_command",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [aux_sym_user_instruction_token2] = sym_unquoted_string,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_user_instruction_token3] = sym_unquoted_string,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = sym_unquoted_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym_stopsignal_instruction_token2] = aux_sym_stopsignal_instruction_token2,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [sym_path] = sym_path,
  [aux_sym_env_pair_token1] = sym_unquoted_string,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = sym_unquoted_string,
  [aux_sym_image_spec_token1] = aux_sym_image_spec_token1,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [anon_sym_EQ2] = anon_sym_EQ,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [sym_name] = sym_name,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_shell_command_token1] = aux_sym_shell_command_token1,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [aux_sym_shell_command_token2] = aux_sym_shell_command_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__non_newline_whitespace] = sym__non_newline_whitespace,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_env_pair] = sym_env_pair,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_param] = sym_param,
  [sym_string_array] = sym_string_array,
  [sym_shell_command] = sym_shell_command,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_instruction_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_instruction_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_env_pair_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_image_spec_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_command_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__non_newline_whitespace] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_default = 1,
  field_group = 2,
  field_key = 3,
  field_name = 4,
  field_user = 5,
  field_value = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_user, 2},
  [1] =
    {field_name, 2},
  [2] =
    {field_key, 0},
    {field_value, 2},
  [4] =
    {field_name, 0},
    {field_value, 2},
  [6] =
    {field_group, 4},
    {field_user, 2},
  [8] =
    {field_default, 4},
    {field_name, 2},
  [10] =
    {field_name, 1},
    {field_value, 3},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(133);
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == '=') ADVANCE(239);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == 'A') ADVANCE(251);
      if (lookahead == 'C') ADVANCE(283);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == 'F') ADVANCE(306);
      if (lookahead == 'H') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'N') ADVANCE(291);
      if (lookahead == 'O') ADVANCE(288);
      if (lookahead == 'R') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(267);
      if (lookahead == 'U') ADVANCE(308);
      if (lookahead == 'V') ADVANCE(292);
      if (lookahead == 'W') ADVANCE(294);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 'h') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == 'v') ADVANCE(207);
      if (lookahead == 'w') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(354);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(354);
      if (lookahead == ' ') ADVANCE(364);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(354);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == 'U') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(354);
      if (lookahead == 'U') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '#') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(358);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '=') ADVANCE(239);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(363);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(363);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(330);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(355);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '=') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(338);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '\\') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(338);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(330);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(330);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(330);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(341);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(353);
      END_STATE();
    case 40:
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(356);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(333);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 51:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 57:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 68:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(64);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 71:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(320);
      END_STATE();
    case 77:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 78:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 85:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 86:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(57);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 100:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 101:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 110:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 112:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 113:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 114:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 115:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 117:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(152);
      END_STATE();
    case 119:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 129:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(339);
      END_STATE();
    case 130:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(340);
      END_STATE();
    case 131:
      if (eof) ADVANCE(133);
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '=') ADVANCE(345);
      if (lookahead == 'A') ADVANCE(251);
      if (lookahead == 'C') ADVANCE(283);
      if (lookahead == 'E') ADVANCE(285);
      if (lookahead == 'F') ADVANCE(306);
      if (lookahead == 'H') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'N') ADVANCE(291);
      if (lookahead == 'O') ADVANCE(288);
      if (lookahead == 'R') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(267);
      if (lookahead == 'U') ADVANCE(308);
      if (lookahead == 'V') ADVANCE(292);
      if (lookahead == 'W') ADVANCE(294);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == 'v') ADVANCE(93);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 132:
      if (eof) ADVANCE(133);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '=') ADVANCE(345);
      if (lookahead == 'N') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(54);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(103);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(93);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(132)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_user_instruction_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'B') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'B') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'D') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'D') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'E') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'G') ADVANCE(236);
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'H') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'H') ADVANCE(53);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'H') ADVANCE(63);
      if (lookahead == 'h') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'K') ADVANCE(320);
      if (lookahead == 'k') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'K') ADVANCE(59);
      if (lookahead == 'k') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'L') ADVANCE(323);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'L') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'L') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'M') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'M') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'M') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == 'X') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == 'x') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'N') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'O') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'O') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'P') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'P') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'R') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'R') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'R') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'T') ADVANCE(154);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == 'V') ADVANCE(148);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'Y') ADVANCE(152);
      if (lookahead == 'y') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == 'Y') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_user_instruction_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'A') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'A') ADVANCE(276);
      if (lookahead == 'a') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'A') ADVANCE(278);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'B') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'B') ADVANCE(263);
      if (lookahead == 'b') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'C') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'C') ADVANCE(268);
      if (lookahead == 'c') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'D') ADVANCE(252);
      if (lookahead == 'R') ADVANCE(264);
      if (lookahead == 'S') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'D') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'D') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'D') ADVANCE(271);
      if (lookahead == 'd') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'E') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'E') ADVANCE(303);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'E') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'G') ADVANCE(237);
      if (lookahead == 'g') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'G') ADVANCE(290);
      if (lookahead == 'g') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'H') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'H') ADVANCE(261);
      if (lookahead == 'T') ADVANCE(295);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'I') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'I') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'I') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'K') ADVANCE(319);
      if (lookahead == 'k') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'K') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'L') ADVANCE(319);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'L') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'L') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'L') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'L') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'L') ADVANCE(275);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'M') ADVANCE(137);
      if (lookahead == 'm') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'M') ADVANCE(253);
      if (lookahead == 'O') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'M') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'N') ADVANCE(312);
      if (lookahead == 'X') ADVANCE(300);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'N') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'N') ADVANCE(247);
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'N') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'N') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'O') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'O') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'O') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'O') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'O') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'O') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'O') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'P') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'P') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'P') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'P') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'R') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'R') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'R') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'R') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'S') ADVANCE(269);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'S') ADVANCE(262);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'S') ADVANCE(257);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'T') ADVANCE(266);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'T') ADVANCE(305);
      if (lookahead == 'V') ADVANCE(149);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'v') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'U') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'U') ADVANCE(287);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'U') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'Y') ADVANCE(153);
      if (lookahead == 'y') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (lookahead == 'Y') ADVANCE(301);
      if (lookahead == 'y') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(319);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '[') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '[') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '-') ADVANCE(329);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead == '-' ||
          lookahead == '[') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_env_pair_token1);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_image_spec_token1);
      if (lookahead == '\n') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_image_spec_token1);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_image_spec_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_image_digest);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(338);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_shell_command_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_shell_command_token2);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_shell_command_token2);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(363);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(363);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(353);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(356);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(363);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(338);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(330);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(347);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(379);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(354);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(379);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 132},
  [2] = {.lex_state = 132},
  [3] = {.lex_state = 132},
  [4] = {.lex_state = 132},
  [5] = {.lex_state = 132},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 132},
  [10] = {.lex_state = 132},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 132},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 132},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 132},
  [74] = {.lex_state = 132},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 132},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 378},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 29},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 368},
  [125] = {.lex_state = 368},
  [126] = {.lex_state = 368},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 368},
  [129] = {.lex_state = 368},
  [130] = {.lex_state = 368},
  [131] = {.lex_state = 368},
  [132] = {.lex_state = 368},
  [133] = {.lex_state = 33},
  [134] = {.lex_state = 368},
  [135] = {.lex_state = 368},
  [136] = {.lex_state = 368},
  [137] = {.lex_state = 368},
  [138] = {.lex_state = 368},
  [139] = {.lex_state = 368},
  [140] = {.lex_state = 34},
  [141] = {.lex_state = 368},
  [142] = {.lex_state = 368},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 368},
  [145] = {.lex_state = 132},
  [146] = {.lex_state = 132},
  [147] = {.lex_state = 26},
  [148] = {.lex_state = 26},
  [149] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_from_instruction_token1] = ACTIONS(1),
    [aux_sym_from_instruction_token2] = ACTIONS(1),
    [aux_sym_run_instruction_token1] = ACTIONS(1),
    [aux_sym_cmd_instruction_token1] = ACTIONS(1),
    [aux_sym_label_instruction_token1] = ACTIONS(1),
    [aux_sym_expose_instruction_token1] = ACTIONS(1),
    [aux_sym_env_instruction_token1] = ACTIONS(1),
    [aux_sym_add_instruction_token1] = ACTIONS(1),
    [aux_sym_copy_instruction_token1] = ACTIONS(1),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(1),
    [aux_sym_volume_instruction_token1] = ACTIONS(1),
    [aux_sym_user_instruction_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_user_instruction_token3] = ACTIONS(1),
    [aux_sym_workdir_instruction_token1] = ACTIONS(1),
    [aux_sym_arg_instruction_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(1),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(1),
    [aux_sym_stopsignal_instruction_token2] = ACTIONS(1),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(1),
    [anon_sym_NONE] = ACTIONS(1),
    [aux_sym_shell_instruction_token1] = ACTIONS(1),
    [aux_sym_expose_port_token1] = ACTIONS(1),
    [anon_sym_SLASHtcp] = ACTIONS(1),
    [anon_sym_SLASHudp] = ACTIONS(1),
    [sym_image_digest] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(117),
    [sym__instruction] = STATE(116),
    [sym_from_instruction] = STATE(115),
    [sym_run_instruction] = STATE(115),
    [sym_cmd_instruction] = STATE(115),
    [sym_label_instruction] = STATE(115),
    [sym_expose_instruction] = STATE(115),
    [sym_env_instruction] = STATE(115),
    [sym_add_instruction] = STATE(115),
    [sym_copy_instruction] = STATE(115),
    [sym_entrypoint_instruction] = STATE(115),
    [sym_volume_instruction] = STATE(115),
    [sym_user_instruction] = STATE(115),
    [sym_workdir_instruction] = STATE(115),
    [sym_arg_instruction] = STATE(115),
    [sym_onbuild_instruction] = STATE(115),
    [sym_stopsignal_instruction] = STATE(115),
    [sym_healthcheck_instruction] = STATE(115),
    [sym_shell_instruction] = STATE(115),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_from_instruction_token1] = ACTIONS(9),
    [aux_sym_run_instruction_token1] = ACTIONS(11),
    [aux_sym_cmd_instruction_token1] = ACTIONS(13),
    [aux_sym_label_instruction_token1] = ACTIONS(15),
    [aux_sym_expose_instruction_token1] = ACTIONS(17),
    [aux_sym_env_instruction_token1] = ACTIONS(19),
    [aux_sym_add_instruction_token1] = ACTIONS(21),
    [aux_sym_copy_instruction_token1] = ACTIONS(23),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(25),
    [aux_sym_volume_instruction_token1] = ACTIONS(27),
    [aux_sym_user_instruction_token1] = ACTIONS(29),
    [aux_sym_workdir_instruction_token1] = ACTIONS(31),
    [aux_sym_arg_instruction_token1] = ACTIONS(33),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(35),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(37),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(39),
    [aux_sym_shell_instruction_token1] = ACTIONS(41),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(116), 1,
      sym__instruction,
    STATE(115), 17,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
  [89] = 23,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(50), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(53), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(56), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(59), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(62), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(65), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(68), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(71), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(74), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(77), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(80), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(83), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(86), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(89), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(92), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(95), 1,
      aux_sym_shell_instruction_token1,
    STATE(116), 1,
      sym__instruction,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(115), 17,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
  [176] = 22,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    STATE(4), 1,
      sym_comment,
    STATE(88), 1,
      sym__instruction,
    STATE(115), 17,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
  [259] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_comment,
    ACTIONS(45), 18,
      ts_builtin_sym_end,
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
  [289] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(102), 1,
      anon_sym_BSLASH,
    ACTIONS(104), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(63), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [315] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(110), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [341] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(102), 1,
      anon_sym_BSLASH,
    ACTIONS(104), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(121), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [367] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(112), 1,
      anon_sym_NONE,
    ACTIONS(114), 1,
      anon_sym_DASH_DASH,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(74), 1,
      sym_param,
    STATE(82), 1,
      sym_cmd_instruction,
  [395] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(114), 1,
      anon_sym_DASH_DASH,
    STATE(10), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(74), 1,
      sym_param,
    STATE(101), 1,
      sym_cmd_instruction,
  [420] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      aux_sym_env_pair_token1,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(125), 1,
      anon_sym_BSLASH,
    STATE(11), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [443] = 8,
    ACTIONS(100), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(102), 1,
      anon_sym_BSLASH,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      aux_sym_label_pair_token1,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
  [468] = 8,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(110), 1,
      anon_sym_BSLASH,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(128), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      aux_sym_env_pair_token1,
    STATE(11), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(13), 1,
      sym_comment,
  [493] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      aux_sym_label_pair_token1,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(132), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    STATE(14), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [516] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(140), 1,
      aux_sym_expose_port_token1,
    STATE(15), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(56), 1,
      sym_expose_port,
  [538] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(144), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(146), 1,
      sym_image_tag,
    ACTIONS(148), 1,
      sym_image_digest,
    STATE(16), 1,
      sym_comment,
  [560] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(17), 1,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(152), 2,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [578] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(158), 1,
      sym_escape_sequence,
    STATE(18), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_double_quoted_string_repeat1,
  [600] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(158), 1,
      sym_escape_sequence,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_double_quoted_string_repeat1,
  [622] = 6,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      aux_sym_label_pair_token1,
    STATE(55), 1,
      sym_label_pair,
    STATE(20), 2,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [642] = 6,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(172), 1,
      sym_escape_sequence,
    STATE(21), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [662] = 6,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 1,
      aux_sym_expose_port_token1,
    STATE(56), 1,
      sym_expose_port,
    STATE(22), 2,
      sym_comment,
      aux_sym_expose_instruction_repeat1,
  [682] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(158), 1,
      sym_escape_sequence,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(23), 1,
      sym_comment,
  [704] = 6,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      aux_sym_env_pair_token1,
    STATE(51), 1,
      sym_env_pair,
    STATE(24), 2,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [724] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(25), 1,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(152), 2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [742] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 1,
      aux_sym_env_pair_token1,
    STATE(24), 1,
      aux_sym_env_instruction_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(51), 1,
      sym_env_pair,
  [764] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(191), 1,
      aux_sym_image_spec_token1,
    ACTIONS(193), 1,
      anon_sym_DASH_DASH,
    STATE(27), 1,
      sym_comment,
    STATE(61), 1,
      sym_param,
    STATE(68), 1,
      sym_image_spec,
  [786] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      aux_sym_shell_command_token1,
    STATE(28), 1,
      sym_comment,
    STATE(108), 2,
      sym_string_array,
      sym_shell_command,
  [806] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      aux_sym_shell_command_token1,
    STATE(29), 1,
      sym_comment,
    STATE(107), 2,
      sym_string_array,
      sym_shell_command,
  [826] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(158), 1,
      sym_escape_sequence,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
  [848] = 6,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(203), 1,
      aux_sym_expose_port_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [868] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(207), 1,
      anon_sym_LF,
    ACTIONS(209), 1,
      aux_sym_label_pair_token1,
    STATE(20), 1,
      aux_sym_label_instruction_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(55), 1,
      sym_label_pair,
  [890] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(213), 1,
      anon_sym_DASH_DASH,
    STATE(74), 1,
      sym_param,
    STATE(33), 2,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [910] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(158), 1,
      sym_escape_sequence,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(34), 1,
      sym_comment,
  [932] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      aux_sym_shell_command_token1,
    STATE(35), 1,
      sym_comment,
    STATE(91), 2,
      sym_string_array,
      sym_shell_command,
  [952] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(218), 1,
      sym_path,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(90), 1,
      sym_string_array,
  [974] = 7,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(158), 1,
      sym_escape_sequence,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(37), 1,
      sym_comment,
  [996] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      aux_sym_expose_port_token1,
    STATE(15), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(56), 1,
      sym_expose_port,
  [1015] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      aux_sym_env_pair_token1,
    STATE(26), 1,
      aux_sym_env_instruction_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(51), 1,
      sym_env_pair,
  [1034] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_string_array_repeat1,
  [1053] = 6,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(234), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(236), 1,
      sym_image_digest,
    STATE(41), 1,
      sym_comment,
  [1072] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(42), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [1089] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_string_array_repeat1,
    STATE(43), 1,
      sym_comment,
  [1108] = 6,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(218), 1,
      sym_path,
    ACTIONS(245), 1,
      anon_sym_LF,
    STATE(44), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_volume_instruction_repeat1,
  [1127] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(249), 1,
      aux_sym_double_quoted_string_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1144] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 1,
      sym_path,
    STATE(46), 2,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [1161] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      aux_sym_label_pair_token1,
    STATE(32), 1,
      aux_sym_label_instruction_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(55), 1,
      sym_label_pair,
  [1180] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_double_quoted_string,
    STATE(48), 1,
      sym_comment,
  [1199] = 6,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(262), 1,
      sym_path,
    ACTIONS(264), 1,
      anon_sym_DASH_DASH,
    STATE(49), 1,
      sym_comment,
    STATE(92), 1,
      sym_param,
  [1218] = 6,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_DASH_DASH,
    ACTIONS(266), 1,
      sym_path,
    STATE(50), 1,
      sym_comment,
    STATE(98), 1,
      sym_param,
  [1237] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      aux_sym_env_pair_token1,
    STATE(51), 1,
      sym_comment,
  [1253] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 1,
      aux_sym_env_pair_token1,
    STATE(52), 1,
      sym_comment,
  [1269] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 1,
      aux_sym_from_instruction_token2,
    STATE(53), 1,
      sym_comment,
  [1285] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 1,
      aux_sym_label_pair_token1,
    STATE(54), 1,
      sym_comment,
  [1301] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 1,
      aux_sym_label_pair_token1,
    STATE(55), 1,
      sym_comment,
  [1317] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 1,
      aux_sym_expose_port_token1,
    STATE(56), 1,
      sym_comment,
  [1333] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      aux_sym_label_pair_token1,
    STATE(57), 1,
      sym_comment,
  [1349] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      aux_sym_env_pair_token1,
    STATE(58), 1,
      sym_comment,
  [1365] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_comment,
    STATE(70), 1,
      sym_double_quoted_string,
  [1381] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 1,
      anon_sym_BSLASH_LF,
    STATE(60), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_shell_command_repeat1,
  [1397] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(191), 1,
      aux_sym_image_spec_token1,
    STATE(61), 1,
      sym_comment,
    STATE(78), 1,
      sym_image_spec,
  [1413] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(302), 1,
      anon_sym_BSLASH_LF,
    STATE(62), 2,
      sym_comment,
      aux_sym_shell_command_repeat1,
  [1427] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(307), 1,
      aux_sym_label_pair_token1,
    STATE(63), 1,
      sym_comment,
  [1443] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1457] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(309), 1,
      anon_sym_LF,
    ACTIONS(311), 1,
      aux_sym_expose_port_token1,
    STATE(65), 1,
      sym_comment,
  [1473] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    STATE(66), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_LF,
      sym_path,
  [1487] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1501] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(317), 1,
      aux_sym_from_instruction_token2,
    STATE(68), 1,
      sym_comment,
  [1517] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym_comment,
  [1533] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1547] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 1,
      anon_sym_EQ,
    STATE(71), 1,
      sym_comment,
  [1563] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(298), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(327), 1,
      anon_sym_LF,
    STATE(62), 1,
      aux_sym_shell_command_repeat1,
    STATE(72), 1,
      sym_comment,
  [1579] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym_comment,
    ACTIONS(329), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [1593] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(74), 1,
      sym_comment,
    ACTIONS(331), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [1607] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(282), 1,
      aux_sym_env_pair_token1,
    STATE(75), 1,
      sym_comment,
  [1623] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_comment,
    STATE(84), 1,
      sym_string_array,
  [1639] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(234), 1,
      aux_sym_from_instruction_token2,
    STATE(77), 1,
      sym_comment,
  [1655] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(333), 1,
      anon_sym_LF,
    ACTIONS(335), 1,
      aux_sym_from_instruction_token2,
    STATE(78), 1,
      sym_comment,
  [1671] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(337), 1,
      sym_path,
    STATE(79), 1,
      sym_comment,
  [1684] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      anon_sym_EQ2,
    STATE(80), 1,
      sym_comment,
  [1697] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      sym_name,
    STATE(81), 1,
      sym_comment,
  [1710] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(343), 1,
      anon_sym_LF,
    STATE(82), 1,
      sym_comment,
  [1723] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      anon_sym_LF,
    STATE(83), 1,
      sym_comment,
  [1736] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(347), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_comment,
  [1749] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(349), 1,
      aux_sym_comment_token1,
    STATE(85), 1,
      sym_comment,
  [1762] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      aux_sym_shell_command_token2,
    STATE(86), 1,
      sym_comment,
  [1775] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(353), 1,
      anon_sym_LF,
    STATE(87), 1,
      sym_comment,
  [1788] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(355), 1,
      anon_sym_LF,
    STATE(88), 1,
      sym_comment,
  [1801] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      anon_sym_LF,
    STATE(89), 1,
      sym_comment,
  [1814] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      anon_sym_LF,
    STATE(90), 1,
      sym_comment,
  [1827] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      anon_sym_LF,
    STATE(91), 1,
      sym_comment,
  [1840] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(363), 1,
      sym_path,
    STATE(92), 1,
      sym_comment,
  [1853] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      sym_path,
    STATE(93), 1,
      sym_comment,
  [1866] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_LF,
    STATE(94), 1,
      sym_comment,
  [1879] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      sym_path,
    STATE(95), 1,
      sym_comment,
  [1892] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      anon_sym_LF,
    STATE(96), 1,
      sym_comment,
  [1905] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      sym_path,
    STATE(97), 1,
      sym_comment,
  [1918] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      sym_path,
    STATE(98), 1,
      sym_comment,
  [1931] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      aux_sym_user_instruction_token3,
    STATE(99), 1,
      sym_comment,
  [1944] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(379), 1,
      sym_path,
    STATE(100), 1,
      sym_comment,
  [1957] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(381), 1,
      anon_sym_LF,
    STATE(101), 1,
      sym_comment,
  [1970] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(383), 1,
      anon_sym_EQ,
    STATE(102), 1,
      sym_comment,
  [1983] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(385), 1,
      anon_sym_EQ,
    STATE(103), 1,
      sym_comment,
  [1996] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(387), 1,
      aux_sym_param_token2,
    STATE(104), 1,
      sym_comment,
  [2009] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      anon_sym_LF,
    STATE(105), 1,
      sym_comment,
  [2022] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      sym_name,
    STATE(106), 1,
      sym_comment,
  [2035] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(393), 1,
      anon_sym_LF,
    STATE(107), 1,
      sym_comment,
  [2048] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      anon_sym_LF,
    STATE(108), 1,
      sym_comment,
  [2061] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(397), 1,
      aux_sym_param_token1,
    STATE(109), 1,
      sym_comment,
  [2074] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      aux_sym_stopsignal_instruction_token2,
    STATE(110), 1,
      sym_comment,
  [2087] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(401), 1,
      anon_sym_LF,
    STATE(111), 1,
      sym_comment,
  [2100] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      aux_sym_arg_instruction_token2,
    STATE(112), 1,
      sym_comment,
  [2113] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      anon_sym_BSLASH_LF,
    STATE(113), 1,
      sym_comment,
  [2126] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(407), 1,
      aux_sym_user_instruction_token2,
    STATE(114), 1,
      sym_comment,
  [2139] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym_comment,
  [2152] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      anon_sym_LF,
    STATE(116), 1,
      sym_comment,
  [2165] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_comment,
  [2178] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      anon_sym_LF,
    STATE(118), 1,
      sym_comment,
  [2191] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(417), 1,
      anon_sym_LF,
    STATE(119), 1,
      sym_comment,
  [2204] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      anon_sym_LF,
    STATE(120), 1,
      sym_comment,
  [2217] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      anon_sym_LF,
    STATE(121), 1,
      sym_comment,
  [2230] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(423), 1,
      aux_sym_image_spec_token1,
    STATE(122), 1,
      sym_comment,
  [2243] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(425), 1,
      anon_sym_LF,
    STATE(123), 1,
      sym_comment,
  [2256] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(427), 1,
      sym__non_newline_whitespace,
    STATE(124), 1,
      sym_comment,
  [2269] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(429), 1,
      sym__non_newline_whitespace,
    STATE(125), 1,
      sym_comment,
  [2282] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(431), 1,
      sym__non_newline_whitespace,
    STATE(126), 1,
      sym_comment,
  [2295] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_LF,
    STATE(127), 1,
      sym_comment,
  [2308] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      sym__non_newline_whitespace,
    STATE(128), 1,
      sym_comment,
  [2321] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      sym__non_newline_whitespace,
    STATE(129), 1,
      sym_comment,
  [2334] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      sym__non_newline_whitespace,
    STATE(130), 1,
      sym_comment,
  [2347] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      sym__non_newline_whitespace,
    STATE(131), 1,
      sym_comment,
  [2360] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(443), 1,
      sym__non_newline_whitespace,
    STATE(132), 1,
      sym_comment,
  [2373] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      sym_path,
    STATE(133), 1,
      sym_comment,
  [2386] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(445), 1,
      sym__non_newline_whitespace,
    STATE(134), 1,
      sym_comment,
  [2399] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      sym__non_newline_whitespace,
    STATE(135), 1,
      sym_comment,
  [2412] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(449), 1,
      sym__non_newline_whitespace,
    STATE(136), 1,
      sym_comment,
  [2425] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(451), 1,
      sym__non_newline_whitespace,
    STATE(137), 1,
      sym_comment,
  [2438] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(453), 1,
      sym__non_newline_whitespace,
    STATE(138), 1,
      sym_comment,
  [2451] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(455), 1,
      sym__non_newline_whitespace,
    STATE(139), 1,
      sym_comment,
  [2464] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      aux_sym_param_token2,
    STATE(140), 1,
      sym_comment,
  [2477] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(459), 1,
      sym__non_newline_whitespace,
    STATE(141), 1,
      sym_comment,
  [2490] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      sym__non_newline_whitespace,
    STATE(142), 1,
      sym_comment,
  [2503] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      aux_sym_param_token2,
    STATE(143), 1,
      sym_comment,
  [2516] = 4,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(465), 1,
      sym__non_newline_whitespace,
    STATE(144), 1,
      sym_comment,
  [2529] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(467), 1,
      anon_sym_EQ2,
    STATE(145), 1,
      sym_comment,
  [2542] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(469), 1,
      anon_sym_EQ2,
    STATE(146), 1,
      sym_comment,
  [2555] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(471), 1,
      aux_sym_param_token1,
    STATE(147), 1,
      sym_comment,
  [2568] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(473), 1,
      aux_sym_param_token1,
    STATE(148), 1,
      sym_comment,
  [2581] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 259,
  [SMALL_STATE(6)] = 289,
  [SMALL_STATE(7)] = 315,
  [SMALL_STATE(8)] = 341,
  [SMALL_STATE(9)] = 367,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 420,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 468,
  [SMALL_STATE(14)] = 493,
  [SMALL_STATE(15)] = 516,
  [SMALL_STATE(16)] = 538,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 622,
  [SMALL_STATE(21)] = 642,
  [SMALL_STATE(22)] = 662,
  [SMALL_STATE(23)] = 682,
  [SMALL_STATE(24)] = 704,
  [SMALL_STATE(25)] = 724,
  [SMALL_STATE(26)] = 742,
  [SMALL_STATE(27)] = 764,
  [SMALL_STATE(28)] = 786,
  [SMALL_STATE(29)] = 806,
  [SMALL_STATE(30)] = 826,
  [SMALL_STATE(31)] = 848,
  [SMALL_STATE(32)] = 868,
  [SMALL_STATE(33)] = 890,
  [SMALL_STATE(34)] = 910,
  [SMALL_STATE(35)] = 932,
  [SMALL_STATE(36)] = 952,
  [SMALL_STATE(37)] = 974,
  [SMALL_STATE(38)] = 996,
  [SMALL_STATE(39)] = 1015,
  [SMALL_STATE(40)] = 1034,
  [SMALL_STATE(41)] = 1053,
  [SMALL_STATE(42)] = 1072,
  [SMALL_STATE(43)] = 1089,
  [SMALL_STATE(44)] = 1108,
  [SMALL_STATE(45)] = 1127,
  [SMALL_STATE(46)] = 1144,
  [SMALL_STATE(47)] = 1161,
  [SMALL_STATE(48)] = 1180,
  [SMALL_STATE(49)] = 1199,
  [SMALL_STATE(50)] = 1218,
  [SMALL_STATE(51)] = 1237,
  [SMALL_STATE(52)] = 1253,
  [SMALL_STATE(53)] = 1269,
  [SMALL_STATE(54)] = 1285,
  [SMALL_STATE(55)] = 1301,
  [SMALL_STATE(56)] = 1317,
  [SMALL_STATE(57)] = 1333,
  [SMALL_STATE(58)] = 1349,
  [SMALL_STATE(59)] = 1365,
  [SMALL_STATE(60)] = 1381,
  [SMALL_STATE(61)] = 1397,
  [SMALL_STATE(62)] = 1413,
  [SMALL_STATE(63)] = 1427,
  [SMALL_STATE(64)] = 1443,
  [SMALL_STATE(65)] = 1457,
  [SMALL_STATE(66)] = 1473,
  [SMALL_STATE(67)] = 1487,
  [SMALL_STATE(68)] = 1501,
  [SMALL_STATE(69)] = 1517,
  [SMALL_STATE(70)] = 1533,
  [SMALL_STATE(71)] = 1547,
  [SMALL_STATE(72)] = 1563,
  [SMALL_STATE(73)] = 1579,
  [SMALL_STATE(74)] = 1593,
  [SMALL_STATE(75)] = 1607,
  [SMALL_STATE(76)] = 1623,
  [SMALL_STATE(77)] = 1639,
  [SMALL_STATE(78)] = 1655,
  [SMALL_STATE(79)] = 1671,
  [SMALL_STATE(80)] = 1684,
  [SMALL_STATE(81)] = 1697,
  [SMALL_STATE(82)] = 1710,
  [SMALL_STATE(83)] = 1723,
  [SMALL_STATE(84)] = 1736,
  [SMALL_STATE(85)] = 1749,
  [SMALL_STATE(86)] = 1762,
  [SMALL_STATE(87)] = 1775,
  [SMALL_STATE(88)] = 1788,
  [SMALL_STATE(89)] = 1801,
  [SMALL_STATE(90)] = 1814,
  [SMALL_STATE(91)] = 1827,
  [SMALL_STATE(92)] = 1840,
  [SMALL_STATE(93)] = 1853,
  [SMALL_STATE(94)] = 1866,
  [SMALL_STATE(95)] = 1879,
  [SMALL_STATE(96)] = 1892,
  [SMALL_STATE(97)] = 1905,
  [SMALL_STATE(98)] = 1918,
  [SMALL_STATE(99)] = 1931,
  [SMALL_STATE(100)] = 1944,
  [SMALL_STATE(101)] = 1957,
  [SMALL_STATE(102)] = 1970,
  [SMALL_STATE(103)] = 1983,
  [SMALL_STATE(104)] = 1996,
  [SMALL_STATE(105)] = 2009,
  [SMALL_STATE(106)] = 2022,
  [SMALL_STATE(107)] = 2035,
  [SMALL_STATE(108)] = 2048,
  [SMALL_STATE(109)] = 2061,
  [SMALL_STATE(110)] = 2074,
  [SMALL_STATE(111)] = 2087,
  [SMALL_STATE(112)] = 2100,
  [SMALL_STATE(113)] = 2113,
  [SMALL_STATE(114)] = 2126,
  [SMALL_STATE(115)] = 2139,
  [SMALL_STATE(116)] = 2152,
  [SMALL_STATE(117)] = 2165,
  [SMALL_STATE(118)] = 2178,
  [SMALL_STATE(119)] = 2191,
  [SMALL_STATE(120)] = 2204,
  [SMALL_STATE(121)] = 2217,
  [SMALL_STATE(122)] = 2230,
  [SMALL_STATE(123)] = 2243,
  [SMALL_STATE(124)] = 2256,
  [SMALL_STATE(125)] = 2269,
  [SMALL_STATE(126)] = 2282,
  [SMALL_STATE(127)] = 2295,
  [SMALL_STATE(128)] = 2308,
  [SMALL_STATE(129)] = 2321,
  [SMALL_STATE(130)] = 2334,
  [SMALL_STATE(131)] = 2347,
  [SMALL_STATE(132)] = 2360,
  [SMALL_STATE(133)] = 2373,
  [SMALL_STATE(134)] = 2386,
  [SMALL_STATE(135)] = 2399,
  [SMALL_STATE(136)] = 2412,
  [SMALL_STATE(137)] = 2425,
  [SMALL_STATE(138)] = 2438,
  [SMALL_STATE(139)] = 2451,
  [SMALL_STATE(140)] = 2464,
  [SMALL_STATE(141)] = 2477,
  [SMALL_STATE(142)] = 2490,
  [SMALL_STATE(143)] = 2503,
  [SMALL_STATE(144)] = 2516,
  [SMALL_STATE(145)] = 2529,
  [SMALL_STATE(146)] = 2542,
  [SMALL_STATE(147)] = 2555,
  [SMALL_STATE(148)] = 2568,
  [SMALL_STATE(149)] = 2581,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(17),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(17),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(25),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(25),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(103),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(45),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(31),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(102),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(148),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(59),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(66),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(86),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 7),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [413] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 6),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 7),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
