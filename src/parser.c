#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 261
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

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
  anon_sym_COLON = 14,
  aux_sym__user_name_group_token1 = 15,
  aux_sym_workdir_instruction_token1 = 16,
  aux_sym_arg_instruction_token1 = 17,
  aux_sym_arg_instruction_token2 = 18,
  anon_sym_EQ = 19,
  aux_sym_onbuild_instruction_token1 = 20,
  aux_sym_stopsignal_instruction_token1 = 21,
  aux_sym__stopsignal_value_token1 = 22,
  aux_sym_healthcheck_instruction_token1 = 23,
  anon_sym_NONE = 24,
  aux_sym_shell_instruction_token1 = 25,
  aux_sym_path_token1 = 26,
  aux_sym_path_token2 = 27,
  anon_sym_DOLLAR = 28,
  anon_sym_LBRACE = 29,
  aux_sym_expansion_token1 = 30,
  anon_sym_RBRACE = 31,
  sym_variable = 32,
  aux_sym_env_pair_token1 = 33,
  aux_sym__spaced_env_pair_token1 = 34,
  aux_sym_expose_port_token1 = 35,
  anon_sym_SLASHtcp = 36,
  anon_sym_SLASHudp = 37,
  aux_sym_label_pair_token1 = 38,
  aux_sym_image_name_token1 = 39,
  aux_sym_image_tag_token1 = 40,
  anon_sym_AT = 41,
  aux_sym_image_digest_token1 = 42,
  anon_sym_DASH_DASH = 43,
  aux_sym_param_token1 = 44,
  aux_sym_param_token2 = 45,
  aux_sym_image_alias_token1 = 46,
  anon_sym_LBRACK = 47,
  anon_sym_COMMA = 48,
  anon_sym_RBRACK = 49,
  aux_sym_shell_fragment_token1 = 50,
  aux_sym_shell_fragment_token2 = 51,
  sym_line_continuation = 52,
  anon_sym_POUND = 53,
  aux_sym__anon_comment_token1 = 54,
  anon_sym_DQUOTE = 55,
  aux_sym_double_quoted_string_token1 = 56,
  aux_sym_unquoted_string_token1 = 57,
  anon_sym_BSLASH = 58,
  sym_escape_sequence = 59,
  sym__non_newline_whitespace = 60,
  sym_source_file = 61,
  sym__instruction = 62,
  sym_from_instruction = 63,
  sym_run_instruction = 64,
  sym_cmd_instruction = 65,
  sym_label_instruction = 66,
  sym_expose_instruction = 67,
  sym_env_instruction = 68,
  sym_add_instruction = 69,
  sym_copy_instruction = 70,
  sym_entrypoint_instruction = 71,
  sym_volume_instruction = 72,
  sym_user_instruction = 73,
  aux_sym__user_name_group = 74,
  sym_workdir_instruction = 75,
  sym_arg_instruction = 76,
  sym_onbuild_instruction = 77,
  sym_stopsignal_instruction = 78,
  aux_sym__stopsignal_value = 79,
  sym_healthcheck_instruction = 80,
  sym_shell_instruction = 81,
  sym_path = 82,
  sym_expansion = 83,
  sym_env_pair = 84,
  sym__spaced_env_pair = 85,
  sym_expose_port = 86,
  sym_label_pair = 87,
  sym_image_spec = 88,
  sym_image_name = 89,
  sym_image_tag = 90,
  sym_image_digest = 91,
  sym_param = 92,
  sym_image_alias = 93,
  sym_string_array = 94,
  sym_shell_command = 95,
  sym_shell_fragment = 96,
  sym__comment_line = 97,
  sym__anon_comment = 98,
  sym_double_quoted_string = 99,
  sym_unquoted_string = 100,
  sym_comment = 101,
  aux_sym_source_file_repeat1 = 102,
  aux_sym_label_instruction_repeat1 = 103,
  aux_sym_expose_instruction_repeat1 = 104,
  aux_sym_env_instruction_repeat1 = 105,
  aux_sym_volume_instruction_repeat1 = 106,
  aux_sym_healthcheck_instruction_repeat1 = 107,
  aux_sym_path_repeat1 = 108,
  aux_sym_image_name_repeat1 = 109,
  aux_sym_image_tag_repeat1 = 110,
  aux_sym_image_digest_repeat1 = 111,
  aux_sym_image_alias_repeat1 = 112,
  aux_sym_string_array_repeat1 = 113,
  aux_sym_shell_command_repeat1 = 114,
  aux_sym_shell_command_repeat2 = 115,
  aux_sym_shell_fragment_repeat1 = 116,
  aux_sym_double_quoted_string_repeat1 = 117,
  aux_sym_unquoted_string_repeat1 = 118,
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
  [anon_sym_COLON] = ":",
  [aux_sym__user_name_group_token1] = "_user_name_group_token1",
  [aux_sym_workdir_instruction_token1] = "WORKDIR",
  [aux_sym_arg_instruction_token1] = "ARG",
  [aux_sym_arg_instruction_token2] = "unquoted_string",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "ONBUILD",
  [aux_sym_stopsignal_instruction_token1] = "STOPSIGNAL",
  [aux_sym__stopsignal_value_token1] = "_stopsignal_value_token1",
  [aux_sym_healthcheck_instruction_token1] = "HEALTHCHECK",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "SHELL",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym_env_pair_token1] = "unquoted_string",
  [aux_sym__spaced_env_pair_token1] = "_spaced_env_pair_token1",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "unquoted_string",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [sym_line_continuation] = "line_continuation",
  [anon_sym_POUND] = "#",
  [aux_sym__anon_comment_token1] = "_anon_comment_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym__non_newline_whitespace] = "_non_newline_whitespace",
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
  [aux_sym__user_name_group] = "_user_name_group",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [aux_sym__stopsignal_value] = "_stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym_env_pair] = "env_pair",
  [sym__spaced_env_pair] = "env_pair",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_image_alias] = "image_alias",
  [sym_string_array] = "string_array",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym__comment_line] = "_comment_line",
  [sym__anon_comment] = "comment",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__user_name_group_token1] = aux_sym__user_name_group_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = sym_unquoted_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym__stopsignal_value_token1] = aux_sym__stopsignal_value_token1,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym_env_pair_token1] = sym_unquoted_string,
  [aux_sym__spaced_env_pair_token1] = aux_sym__spaced_env_pair_token1,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = sym_unquoted_string,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [sym_line_continuation] = sym_line_continuation,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__anon_comment_token1] = aux_sym__anon_comment_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__non_newline_whitespace] = sym__non_newline_whitespace,
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
  [aux_sym__user_name_group] = aux_sym__user_name_group,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [aux_sym__stopsignal_value] = aux_sym__stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym_env_pair] = sym_env_pair,
  [sym__spaced_env_pair] = sym_env_pair,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_image_alias] = sym_image_alias,
  [sym_string_array] = sym_string_array,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym__comment_line] = sym__comment_line,
  [sym__anon_comment] = sym_comment,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_name_group_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym__stopsignal_value_token1] = {
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
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_env_pair_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__anon_comment_token1] = {
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
  [aux_sym__user_name_group] = {
    .visible = false,
    .named = false,
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
  [aux_sym__stopsignal_value] = {
    .visible = false,
    .named = false,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__spaced_env_pair] = {
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
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
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
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_line] = {
    .visible = false,
    .named = true,
  },
  [sym__anon_comment] = {
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
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
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
  [aux_sym_shell_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
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
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_tag = 7,
  field_user = 8,
  field_value = 9,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 2, .inherited = true},
    {field_value, 2, .inherited = true},
  [3] =
    {field_user, 2},
  [4] =
    {field_name, 2},
  [5] =
    {field_name, 0},
    {field_tag, 1},
  [7] =
    {field_digest, 1},
    {field_name, 0},
  [9] =
    {field_as, 4},
  [10] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [13] =
    {field_key, 0},
    {field_value, 2},
  [15] =
    {field_name, 0},
    {field_value, 2},
  [17] =
    {field_group, 4},
    {field_user, 2},
  [19] =
    {field_default, 4},
    {field_name, 2},
  [21] =
    {field_name, 1},
    {field_value, 3},
  [23] =
    {field_as, 5},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [2] = sym_unquoted_string,
  },
  [11] = {
    [2] = sym_unquoted_string,
    [4] = sym_unquoted_string,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__user_name_group, 2,
    aux_sym__user_name_group,
    sym_unquoted_string,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '@') ADVANCE(200);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(214);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '@') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(212);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(233);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(233);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '@') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '@') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(176);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(176);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(196);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(196);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(199);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 102:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 132:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 133:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 145:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 146:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '[') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == ']') ADVANCE(211);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(214);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_env_pair_token1);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(196);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(196);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(199);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(179);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 145},
  [2] = {.lex_state = 145},
  [3] = {.lex_state = 145},
  [4] = {.lex_state = 145},
  [5] = {.lex_state = 145},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 145},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 51},
  [51] = {.lex_state = 145},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 145},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 31},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 51},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 28},
  [83] = {.lex_state = 32},
  [84] = {.lex_state = 25},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 28},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 145},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 50},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 32},
  [108] = {.lex_state = 28},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 145},
  [111] = {.lex_state = 51},
  [112] = {.lex_state = 46},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 145},
  [115] = {.lex_state = 145},
  [116] = {.lex_state = 51},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 24},
  [119] = {.lex_state = 51},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 24},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 145},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 37},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 145},
  [137] = {.lex_state = 39},
  [138] = {.lex_state = 39},
  [139] = {.lex_state = 145},
  [140] = {.lex_state = 39},
  [141] = {.lex_state = 39},
  [142] = {.lex_state = 39},
  [143] = {.lex_state = 39},
  [144] = {.lex_state = 39},
  [145] = {.lex_state = 39},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 39},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 39},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 39},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 39},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 35},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 49},
  [163] = {.lex_state = 145},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 145},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 145},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 145},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 145},
  [175] = {.lex_state = 40},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 40},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 145},
  [181] = {.lex_state = 40},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 40},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 40},
  [188] = {.lex_state = 40},
  [189] = {.lex_state = 145},
  [190] = {.lex_state = 40},
  [191] = {.lex_state = 52},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 47},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 40},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 40},
  [200] = {.lex_state = 40},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 40},
  [205] = {.lex_state = 40},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 225},
  [209] = {.lex_state = 42},
  [210] = {.lex_state = 145},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 42},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 53},
  [219] = {.lex_state = 40},
  [220] = {.lex_state = 145},
  [221] = {.lex_state = 53},
  [222] = {.lex_state = 40},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 40},
  [225] = {.lex_state = 145},
  [226] = {.lex_state = 53},
  [227] = {.lex_state = 40},
  [228] = {.lex_state = 40},
  [229] = {.lex_state = 145},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 145},
  [232] = {.lex_state = 40},
  [233] = {.lex_state = 145},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 145},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 145},
  [238] = {.lex_state = 225},
  [239] = {.lex_state = 145},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 145},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 145},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 145},
  [246] = {.lex_state = 52},
  [247] = {.lex_state = 145},
  [248] = {.lex_state = 52},
  [249] = {.lex_state = 145},
  [250] = {.lex_state = 52},
  [251] = {.lex_state = 52},
  [252] = {.lex_state = 52},
  [253] = {.lex_state = 52},
  [254] = {.lex_state = 52},
  [255] = {.lex_state = 52},
  [256] = {.lex_state = 52},
  [257] = {.lex_state = 52},
  [258] = {.lex_state = 52},
  [259] = {.lex_state = 42},
  [260] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__user_name_group_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(244),
    [sym__instruction] = STATE(196),
    [sym_from_instruction] = STATE(240),
    [sym_run_instruction] = STATE(240),
    [sym_cmd_instruction] = STATE(240),
    [sym_label_instruction] = STATE(240),
    [sym_expose_instruction] = STATE(240),
    [sym_env_instruction] = STATE(240),
    [sym_add_instruction] = STATE(240),
    [sym_copy_instruction] = STATE(240),
    [sym_entrypoint_instruction] = STATE(240),
    [sym_volume_instruction] = STATE(240),
    [sym_user_instruction] = STATE(240),
    [sym_workdir_instruction] = STATE(240),
    [sym_arg_instruction] = STATE(240),
    [sym_onbuild_instruction] = STATE(240),
    [sym_stopsignal_instruction] = STATE(240),
    [sym_healthcheck_instruction] = STATE(240),
    [sym_shell_instruction] = STATE(240),
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
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
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
    STATE(196), 1,
      sym__instruction,
    STATE(240), 17,
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
      sym_line_continuation,
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
    STATE(196), 1,
      sym__instruction,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(240), 17,
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
      sym_line_continuation,
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
    STATE(197), 1,
      sym__instruction,
    STATE(240), 17,
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
      sym_line_continuation,
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
  [289] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(106), 1,
      anon_sym_BSLASH,
    STATE(6), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(73), 1,
      sym_expansion,
    STATE(223), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [321] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      anon_sym_DOLLAR,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(60), 1,
      sym_expansion,
    STATE(150), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [353] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(106), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(73), 1,
      sym_expansion,
    STATE(148), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [385] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(118), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(120), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      aux_sym_image_name_token1,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(45), 1,
      sym_expansion,
    STATE(9), 2,
      sym_comment,
      aux_sym_image_name_repeat1,
    ACTIONS(116), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [413] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(130), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      aux_sym_image_name_token1,
    STATE(9), 1,
      aux_sym_image_name_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(45), 1,
      sym_expansion,
    ACTIONS(128), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [443] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      aux_sym_image_name_token1,
    ACTIONS(136), 1,
      anon_sym_DASH_DASH,
    STATE(10), 1,
      aux_sym_image_name_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(30), 1,
      sym_param,
    STATE(45), 1,
      sym_expansion,
    STATE(48), 1,
      sym_image_name,
    STATE(154), 1,
      sym_image_spec,
  [477] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(106), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(73), 1,
      sym_expansion,
    STATE(207), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [509] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(140), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      aux_sym_label_pair_token1,
    ACTIONS(145), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(73), 1,
      sym_expansion,
    STATE(13), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [538] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(155), 1,
      sym_shell_fragment,
    ACTIONS(153), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(213), 2,
      sym_string_array,
      sym_shell_command,
  [565] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(234), 1,
      sym__anon_comment,
    STATE(236), 1,
      sym_shell_fragment,
    ACTIONS(153), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(20), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [592] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(143), 1,
      aux_sym_env_pair_token1,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(160), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(163), 1,
      anon_sym_BSLASH,
    STATE(60), 1,
      sym_expansion,
    STATE(16), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [621] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(168), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      aux_sym_image_tag_token1,
    STATE(71), 1,
      sym_expansion,
    ACTIONS(166), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(17), 2,
      sym_comment,
      aux_sym_image_tag_repeat1,
  [648] = 10,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      anon_sym_DOLLAR,
    ACTIONS(112), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      aux_sym_env_pair_token1,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(60), 1,
      sym_expansion,
  [679] = 10,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(106), 1,
      anon_sym_BSLASH,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      aux_sym_label_pair_token1,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(73), 1,
      sym_expansion,
  [710] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(179), 1,
      sym_shell_fragment,
    STATE(234), 1,
      sym__anon_comment,
    ACTIONS(153), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(53), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [737] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(155), 1,
      sym_shell_fragment,
    ACTIONS(153), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(203), 2,
      sym_string_array,
      sym_shell_command,
  [764] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(155), 1,
      sym_shell_fragment,
    ACTIONS(153), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(211), 2,
      sym_string_array,
      sym_shell_command,
  [791] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(182), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      aux_sym_image_tag_token1,
    STATE(17), 1,
      aux_sym_image_tag_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(71), 1,
      sym_expansion,
    ACTIONS(180), 2,
      anon_sym_LF,
      anon_sym_AT,
  [820] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      aux_sym_path_token2,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(101), 1,
      sym_expansion,
    ACTIONS(188), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [846] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(200), 1,
      sym_escape_sequence,
    STATE(25), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(95), 1,
      sym_expansion,
  [874] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(204), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    STATE(85), 1,
      sym_expansion,
    ACTIONS(202), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(26), 2,
      aux_sym__user_name_group,
      sym_comment,
  [898] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(200), 1,
      sym_escape_sequence,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(95), 1,
      sym_expansion,
  [926] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      aux_sym_path_token2,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      aux_sym_path_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(101), 1,
      sym_expansion,
    ACTIONS(212), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [952] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(29), 1,
      sym_comment,
    ACTIONS(216), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token1,
    ACTIONS(214), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [972] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      aux_sym_image_name_token1,
    STATE(10), 1,
      aux_sym_image_name_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(45), 1,
      sym_expansion,
    STATE(48), 1,
      sym_image_name,
    STATE(133), 1,
      sym_image_spec,
  [1000] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_path_token1,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_DASH_DASH,
    STATE(31), 1,
      sym_comment,
    STATE(50), 1,
      sym_expansion,
    STATE(79), 1,
      sym_param,
    STATE(205), 1,
      sym_path,
  [1028] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_path_token1,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      anon_sym_DASH_DASH,
    STATE(32), 1,
      sym_comment,
    STATE(50), 1,
      sym_expansion,
    STATE(81), 1,
      sym_param,
    STATE(204), 1,
      sym_path,
  [1056] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(232), 1,
      sym_escape_sequence,
    STATE(95), 1,
      sym_expansion,
    STATE(33), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [1082] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      aux_sym_path_token1,
    STATE(28), 1,
      sym_expansion,
    STATE(34), 1,
      sym_comment,
    STATE(121), 1,
      sym_path,
    STATE(202), 1,
      sym_string_array,
  [1110] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(237), 1,
      anon_sym_LF,
    ACTIONS(239), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      aux_sym_expose_port_token1,
    STATE(35), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(130), 1,
      sym_expose_port,
    STATE(131), 1,
      sym_expansion,
  [1138] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(200), 1,
      sym_escape_sequence,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(95), 1,
      sym_expansion,
  [1166] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(245), 1,
      anon_sym_LF,
    ACTIONS(247), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(249), 1,
      anon_sym_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_image_digest_token1,
    STATE(37), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_image_digest_repeat1,
    STATE(96), 1,
      sym_expansion,
  [1194] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      aux_sym_path_token2,
    ACTIONS(258), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_expansion,
    ACTIONS(253), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(38), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1218] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(39), 1,
      sym_comment,
    ACTIONS(263), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token1,
    ACTIONS(261), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [1238] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(265), 1,
      anon_sym_NONE,
    ACTIONS(267), 1,
      anon_sym_DASH_DASH,
    STATE(40), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(165), 1,
      sym_param,
    STATE(194), 1,
      sym_cmd_instruction,
  [1266] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      aux_sym_image_digest_token1,
    STATE(96), 1,
      sym_expansion,
    STATE(41), 2,
      sym_comment,
      aux_sym_image_digest_repeat1,
  [1292] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(200), 1,
      sym_escape_sequence,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(95), 1,
      sym_expansion,
  [1320] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(200), 1,
      sym_escape_sequence,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(95), 1,
      sym_expansion,
  [1348] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      anon_sym_DOLLAR,
    ACTIONS(283), 1,
      anon_sym_LF,
    ACTIONS(285), 1,
      anon_sym_COLON,
    ACTIONS(287), 1,
      aux_sym__user_name_group_token1,
    STATE(26), 1,
      aux_sym__user_name_group,
    STATE(44), 1,
      sym_comment,
    STATE(85), 1,
      sym_expansion,
  [1376] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(45), 1,
      sym_comment,
    ACTIONS(291), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token1,
    ACTIONS(289), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [1396] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(200), 1,
      sym_escape_sequence,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(95), 1,
      sym_expansion,
  [1424] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      aux_sym_expose_port_token1,
    STATE(130), 1,
      sym_expose_port,
    STATE(131), 1,
      sym_expansion,
    STATE(47), 2,
      sym_comment,
      aux_sym_expose_instruction_repeat1,
  [1450] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(309), 1,
      anon_sym_AT,
    STATE(48), 1,
      sym_comment,
    STATE(100), 1,
      sym_image_tag,
    STATE(166), 1,
      sym_image_digest,
  [1478] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 1,
      aux_sym_path_token2,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(117), 1,
      sym_expansion,
    STATE(49), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1501] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(319), 1,
      aux_sym_path_token2,
    ACTIONS(321), 1,
      sym__non_newline_whitespace,
    STATE(50), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_path_repeat1,
    STATE(111), 1,
      sym_expansion,
  [1526] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_DOLLAR,
    ACTIONS(323), 1,
      aux_sym_expose_port_token1,
    STATE(35), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(51), 1,
      sym_comment,
    STATE(130), 1,
      sym_expose_port,
    STATE(131), 1,
      sym_expansion,
  [1551] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(319), 1,
      aux_sym_path_token2,
    ACTIONS(325), 1,
      sym__non_newline_whitespace,
    STATE(52), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_path_repeat1,
    STATE(111), 1,
      sym_expansion,
  [1576] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym__anon_comment,
    ACTIONS(327), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(53), 3,
      sym__comment_line,
      sym_comment,
      aux_sym_shell_command_repeat1,
  [1595] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(216), 1,
      aux_sym_expose_port_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
  [1614] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(55), 1,
      sym_comment,
    ACTIONS(263), 2,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [1633] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      aux_sym_image_alias_token1,
    STATE(56), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_image_alias_repeat1,
    STATE(127), 1,
      sym_expansion,
    STATE(230), 1,
      sym_image_alias,
  [1658] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(57), 1,
      sym_comment,
    ACTIONS(216), 2,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(214), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [1677] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(58), 1,
      sym_comment,
    ACTIONS(263), 2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [1696] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(59), 1,
      sym_comment,
    ACTIONS(216), 2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(214), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [1715] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(60), 1,
      sym_comment,
    ACTIONS(338), 2,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(336), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [1734] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(263), 1,
      aux_sym_expose_port_token1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
  [1753] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      aux_sym_path_token2,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_path_repeat1,
    STATE(117), 1,
      sym_expansion,
  [1778] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(267), 1,
      anon_sym_DASH_DASH,
    STATE(63), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(165), 1,
      sym_param,
    STATE(212), 1,
      sym_cmd_instruction,
  [1803] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 1,
      anon_sym_DOLLAR,
    ACTIONS(349), 1,
      aux_sym_image_alias_token1,
    STATE(127), 1,
      sym_expansion,
    STATE(64), 2,
      sym_comment,
      aux_sym_image_alias_repeat1,
  [1826] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(352), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__user_name_group,
    STATE(65), 1,
      sym_comment,
    STATE(85), 1,
      sym_expansion,
  [1851] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(354), 1,
      anon_sym_LF,
    ACTIONS(356), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym__stopsignal_value,
    STATE(109), 1,
      sym_expansion,
  [1876] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(67), 1,
      sym_comment,
    ACTIONS(263), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [1895] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(68), 1,
      sym_comment,
    ACTIONS(216), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(214), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [1914] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      aux_sym_image_alias_token1,
    STATE(69), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_image_alias_repeat1,
    STATE(127), 1,
      sym_expansion,
    STATE(216), 1,
      sym_image_alias,
  [1939] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(362), 1,
      aux_sym_expose_port_token1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
    ACTIONS(364), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1960] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(71), 1,
      sym_comment,
    ACTIONS(368), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(366), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [1979] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(332), 1,
      anon_sym_DOLLAR,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(372), 1,
      aux_sym_image_alias_token1,
    STATE(64), 1,
      aux_sym_image_alias_repeat1,
    STATE(72), 1,
      sym_comment,
    STATE(127), 1,
      sym_expansion,
  [2004] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(73), 1,
      sym_comment,
    ACTIONS(338), 2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(336), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [2023] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      sym__non_newline_whitespace,
    ACTIONS(374), 1,
      aux_sym_path_token2,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    STATE(111), 1,
      sym_expansion,
    STATE(74), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [2046] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      aux_sym_path_token2,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      aux_sym_path_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(117), 1,
      sym_expansion,
  [2071] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(385), 1,
      anon_sym_DOLLAR,
    STATE(109), 1,
      sym_expansion,
    STATE(76), 2,
      aux_sym__stopsignal_value,
      sym_comment,
  [2094] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(263), 1,
      aux_sym_from_instruction_token2,
    STATE(77), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_image_digest_token1,
  [2112] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    STATE(62), 1,
      sym_expansion,
    STATE(78), 1,
      sym_comment,
    STATE(214), 1,
      sym_path,
  [2134] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_path_token1,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_expansion,
    STATE(79), 1,
      sym_comment,
    STATE(177), 1,
      sym_path,
  [2156] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(390), 1,
      aux_sym_env_pair_token1,
    STATE(80), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_env_instruction_repeat1,
    STATE(159), 1,
      sym_env_pair,
    STATE(206), 1,
      sym__spaced_env_pair,
  [2178] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      aux_sym_path_token1,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_expansion,
    STATE(81), 1,
      sym_comment,
    STATE(199), 1,
      sym_path,
  [2200] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    STATE(62), 1,
      sym_expansion,
    STATE(82), 1,
      sym_comment,
    STATE(183), 1,
      sym_path,
  [2222] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      aux_sym__user_name_group_token1,
    STATE(65), 1,
      aux_sym__user_name_group,
    STATE(83), 1,
      sym_comment,
    STATE(85), 1,
      sym_expansion,
  [2244] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2262] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_comment,
    ACTIONS(392), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
  [2278] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(214), 1,
      anon_sym_DOLLAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2296] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      aux_sym_path_token1,
    STATE(28), 1,
      sym_expansion,
    STATE(87), 1,
      sym_comment,
    STATE(157), 1,
      sym_path,
  [2318] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      aux_sym_env_pair_token1,
    STATE(88), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_env_instruction_repeat1,
    STATE(159), 1,
      sym_env_pair,
  [2340] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(400), 1,
      anon_sym_DASH_DASH,
    STATE(165), 1,
      sym_param,
    STATE(89), 2,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [2360] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      aux_sym_label_pair_token1,
    STATE(90), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_label_instruction_repeat1,
    STATE(156), 1,
      sym_label_pair,
  [2382] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(216), 1,
      aux_sym_from_instruction_token2,
    STATE(91), 1,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_image_digest_token1,
  [2400] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    STATE(62), 1,
      sym_expansion,
    STATE(92), 1,
      sym_comment,
    STATE(182), 1,
      sym_path,
  [2422] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      sym_line_continuation,
    STATE(93), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(409), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2442] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(94), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_DOLLAR,
      aux_sym_double_quoted_string_token1,
    ACTIONS(216), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2460] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(95), 1,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_DOLLAR,
      aux_sym_double_quoted_string_token1,
    ACTIONS(415), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2478] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(419), 1,
      aux_sym_from_instruction_token2,
    STATE(96), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_image_digest_token1,
  [2496] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(97), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DOLLAR,
      aux_sym_double_quoted_string_token1,
    ACTIONS(263), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2514] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 1,
      aux_sym_image_tag_token1,
    STATE(23), 1,
      aux_sym_image_tag_repeat1,
    STATE(71), 1,
      sym_expansion,
    STATE(98), 1,
      sym_comment,
  [2536] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_image_digest_token1,
    STATE(37), 1,
      aux_sym_image_digest_repeat1,
    STATE(96), 1,
      sym_expansion,
    STATE(99), 1,
      sym_comment,
  [2558] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(421), 1,
      anon_sym_LF,
    ACTIONS(423), 1,
      aux_sym_from_instruction_token2,
    STATE(100), 1,
      sym_comment,
    STATE(135), 1,
      sym_image_digest,
  [2580] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2598] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(429), 1,
      aux_sym__stopsignal_value_token1,
    STATE(66), 1,
      aux_sym__stopsignal_value,
    STATE(102), 1,
      sym_comment,
    STATE(109), 1,
      sym_expansion,
  [2620] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    STATE(62), 1,
      sym_expansion,
    STATE(103), 1,
      sym_comment,
    STATE(201), 1,
      sym_path,
  [2642] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(436), 1,
      sym_line_continuation,
    ACTIONS(433), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(104), 2,
      sym_comment,
      aux_sym_shell_fragment_repeat1,
  [2660] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(438), 1,
      anon_sym_LF,
    ACTIONS(440), 1,
      aux_sym_label_pair_token1,
    STATE(156), 1,
      sym_label_pair,
    STATE(105), 2,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [2680] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(445), 1,
      aux_sym_env_pair_token1,
    STATE(159), 1,
      sym_env_pair,
    STATE(106), 2,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [2700] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      aux_sym__user_name_group_token1,
    STATE(44), 1,
      aux_sym__user_name_group,
    STATE(85), 1,
      sym_expansion,
    STATE(107), 1,
      sym_comment,
  [2722] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    STATE(62), 1,
      sym_expansion,
    STATE(108), 1,
      sym_comment,
    STATE(217), 1,
      sym_path,
  [2744] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      aux_sym__stopsignal_value_token1,
    STATE(109), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [2761] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym_string_array_repeat1,
  [2780] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      aux_sym_path_token2,
    STATE(111), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2797] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(456), 1,
      aux_sym_label_pair_token1,
    STATE(90), 1,
      aux_sym_label_instruction_repeat1,
    STATE(112), 1,
      sym_comment,
    STATE(156), 1,
      sym_label_pair,
  [2816] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(460), 1,
      aux_sym_expose_port_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [2833] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(114), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [2850] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_double_quoted_string,
    STATE(115), 1,
      sym_comment,
  [2869] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(216), 1,
      aux_sym_path_token2,
    STATE(116), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2886] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      aux_sym_path_token2,
    STATE(117), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [2903] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      sym__non_newline_whitespace,
    STATE(118), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_volume_instruction_repeat1,
  [2922] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(263), 1,
      aux_sym_path_token2,
    STATE(119), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2939] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(477), 1,
      sym__non_newline_whitespace,
    STATE(120), 2,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [2956] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      sym__non_newline_whitespace,
    ACTIONS(480), 1,
      anon_sym_LF,
    STATE(118), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(121), 1,
      sym_comment,
  [2975] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(216), 1,
      aux_sym_path_token2,
    STATE(122), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [2992] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(263), 1,
      aux_sym_path_token2,
    STATE(123), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3009] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(216), 1,
      aux_sym__stopsignal_value_token1,
    STATE(124), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3026] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(263), 1,
      aux_sym__stopsignal_value_token1,
    STATE(125), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3043] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(216), 1,
      aux_sym_image_alias_token1,
    STATE(126), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3060] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(484), 1,
      aux_sym_image_alias_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3077] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_string_array_repeat1,
    STATE(128), 1,
      sym_comment,
  [3096] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(263), 1,
      aux_sym_image_alias_token1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3113] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(490), 1,
      aux_sym_expose_port_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3130] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(362), 1,
      aux_sym_expose_port_token1,
    STATE(131), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3147] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_LF,
    STATE(132), 1,
      sym_comment,
    ACTIONS(494), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_line_continuation,
  [3162] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(496), 1,
      anon_sym_LF,
    ACTIONS(498), 1,
      aux_sym_from_instruction_token2,
    STATE(133), 1,
      sym_comment,
  [3178] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym_comment,
    ACTIONS(500), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3190] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(502), 1,
      anon_sym_LF,
    ACTIONS(504), 1,
      aux_sym_from_instruction_token2,
    STATE(135), 1,
      sym_comment,
  [3206] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3220] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    ACTIONS(510), 1,
      sym_variable,
    STATE(137), 1,
      sym_comment,
  [3236] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
    ACTIONS(514), 1,
      sym_variable,
    STATE(138), 1,
      sym_comment,
  [3252] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_comment,
    STATE(169), 1,
      sym_double_quoted_string,
  [3268] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    ACTIONS(518), 1,
      sym_variable,
    STATE(140), 1,
      sym_comment,
  [3284] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      sym_variable,
    STATE(141), 1,
      sym_comment,
  [3300] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      sym_variable,
    STATE(142), 1,
      sym_comment,
  [3316] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    ACTIONS(530), 1,
      sym_variable,
    STATE(143), 1,
      sym_comment,
  [3332] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    ACTIONS(534), 1,
      sym_variable,
    STATE(144), 1,
      sym_comment,
  [3348] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    ACTIONS(538), 1,
      sym_variable,
    STATE(145), 1,
      sym_comment,
  [3364] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(542), 1,
      sym_line_continuation,
    STATE(146), 2,
      sym_comment,
      aux_sym_shell_command_repeat2,
  [3378] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
    ACTIONS(547), 1,
      sym_variable,
    STATE(147), 1,
      sym_comment,
  [3394] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      aux_sym_label_pair_token1,
    STATE(148), 1,
      sym_comment,
  [3410] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
    ACTIONS(555), 1,
      sym_variable,
    STATE(149), 1,
      sym_comment,
  [3426] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      aux_sym_env_pair_token1,
    STATE(150), 1,
      sym_comment,
  [3442] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
    ACTIONS(563), 1,
      sym_variable,
    STATE(151), 1,
      sym_comment,
  [3458] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(152), 1,
      sym_comment,
    STATE(192), 1,
      sym_string_array,
  [3474] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
    ACTIONS(567), 1,
      sym_variable,
    STATE(153), 1,
      sym_comment,
  [3490] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      aux_sym_from_instruction_token2,
    STATE(154), 1,
      sym_comment,
  [3506] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 1,
      sym_line_continuation,
    STATE(155), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_shell_command_repeat2,
  [3522] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      aux_sym_label_pair_token1,
    STATE(156), 1,
      sym_comment,
  [3538] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(157), 1,
      sym_comment,
    ACTIONS(475), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3552] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(581), 1,
      anon_sym_EQ,
    ACTIONS(583), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(158), 1,
      sym_comment,
  [3568] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(585), 1,
      anon_sym_LF,
    ACTIONS(587), 1,
      aux_sym_env_pair_token1,
    STATE(159), 1,
      sym_comment,
  [3584] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_comment,
  [3600] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      aux_sym_env_pair_token1,
    STATE(161), 1,
      sym_comment,
  [3616] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_DOLLAR,
    ACTIONS(599), 1,
      aux_sym_image_name_token1,
    STATE(162), 1,
      sym_comment,
  [3632] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(597), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3646] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(601), 1,
      aux_sym_env_pair_token1,
    STATE(164), 1,
      sym_comment,
  [3662] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(603), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3676] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(605), 1,
      anon_sym_LF,
    ACTIONS(607), 1,
      aux_sym_from_instruction_token2,
    STATE(166), 1,
      sym_comment,
  [3692] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(593), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3706] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(575), 1,
      sym_line_continuation,
    ACTIONS(609), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_shell_command_repeat2,
    STATE(168), 1,
      sym_comment,
  [3722] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3736] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      aux_sym_label_pair_token1,
    STATE(170), 1,
      sym_comment,
  [3752] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_DOLLAR,
    ACTIONS(599), 1,
      aux_sym_path_token1,
    STATE(171), 1,
      sym_comment,
  [3768] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(601), 1,
      aux_sym_label_pair_token1,
    STATE(172), 1,
      sym_comment,
  [3784] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      sym__non_newline_whitespace,
    STATE(173), 1,
      sym_comment,
  [3797] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_comment,
  [3810] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(615), 1,
      sym__non_newline_whitespace,
    STATE(175), 1,
      sym_comment,
  [3823] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(617), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_comment,
  [3836] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      sym__non_newline_whitespace,
    STATE(177), 1,
      sym_comment,
  [3849] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_comment,
  [3862] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      sym_line_continuation,
    STATE(179), 1,
      sym_comment,
  [3875] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      anon_sym_EQ,
    STATE(180), 1,
      sym_comment,
  [3888] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(627), 1,
      sym__non_newline_whitespace,
    STATE(181), 1,
      sym_comment,
  [3901] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(629), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_comment,
  [3914] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(631), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_comment,
  [3927] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(633), 1,
      sym__non_newline_whitespace,
    STATE(184), 1,
      sym_comment,
  [3940] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(635), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_comment,
  [3953] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      sym__non_newline_whitespace,
    STATE(186), 1,
      sym_comment,
  [3966] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(639), 1,
      sym__non_newline_whitespace,
    STATE(187), 1,
      sym_comment,
  [3979] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      sym__non_newline_whitespace,
    STATE(188), 1,
      sym_comment,
  [3992] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(643), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_comment,
  [4005] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      sym__non_newline_whitespace,
    STATE(190), 1,
      sym_comment,
  [4018] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(647), 1,
      aux_sym_expansion_token1,
    STATE(191), 1,
      sym_comment,
  [4031] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(649), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_comment,
  [4044] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(651), 1,
      aux_sym_arg_instruction_token2,
    STATE(193), 1,
      sym_comment,
  [4057] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(653), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_comment,
  [4070] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      sym__non_newline_whitespace,
    STATE(195), 1,
      sym_comment,
  [4083] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_comment,
  [4096] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(659), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_comment,
  [4109] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(661), 1,
      sym__non_newline_whitespace,
    STATE(198), 1,
      sym_comment,
  [4122] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(663), 1,
      sym__non_newline_whitespace,
    STATE(199), 1,
      sym_comment,
  [4135] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(665), 1,
      sym__non_newline_whitespace,
    STATE(200), 1,
      sym_comment,
  [4148] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(667), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_comment,
  [4161] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_comment,
  [4174] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_comment,
  [4187] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(673), 1,
      sym__non_newline_whitespace,
    STATE(204), 1,
      sym_comment,
  [4200] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(675), 1,
      sym__non_newline_whitespace,
    STATE(205), 1,
      sym_comment,
  [4213] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(677), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_comment,
  [4226] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(679), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_comment,
  [4239] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      aux_sym__anon_comment_token1,
    STATE(208), 1,
      sym_comment,
  [4252] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(683), 1,
      aux_sym_param_token1,
    STATE(209), 1,
      sym_comment,
  [4265] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(685), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym_comment,
  [4278] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_comment,
  [4291] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(689), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_comment,
  [4304] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_comment,
  [4317] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(214), 1,
      sym_comment,
  [4330] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(695), 1,
      aux_sym_param_token1,
    STATE(215), 1,
      sym_comment,
  [4343] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_comment,
  [4356] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      anon_sym_LF,
    STATE(217), 1,
      sym_comment,
  [4369] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(701), 1,
      aux_sym_param_token2,
    STATE(218), 1,
      sym_comment,
  [4382] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      sym__non_newline_whitespace,
    STATE(219), 1,
      sym_comment,
  [4395] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_comment,
  [4408] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      aux_sym_param_token2,
    STATE(221), 1,
      sym_comment,
  [4421] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      sym__non_newline_whitespace,
    STATE(222), 1,
      sym_comment,
  [4434] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      anon_sym_LF,
    STATE(223), 1,
      sym_comment,
  [4447] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      sym__non_newline_whitespace,
    STATE(224), 1,
      sym_comment,
  [4460] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_comment,
  [4473] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(717), 1,
      aux_sym_param_token2,
    STATE(226), 1,
      sym_comment,
  [4486] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      sym__non_newline_whitespace,
    STATE(227), 1,
      sym_comment,
  [4499] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      sym__non_newline_whitespace,
    STATE(228), 1,
      sym_comment,
  [4512] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_comment,
  [4525] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(230), 1,
      sym_comment,
  [4538] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4551] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(729), 1,
      sym__non_newline_whitespace,
    STATE(232), 1,
      sym_comment,
  [4564] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
  [4577] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      anon_sym_LF,
    STATE(234), 1,
      sym_comment,
  [4590] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_comment,
  [4603] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(737), 1,
      sym_line_continuation,
    STATE(236), 1,
      sym_comment,
  [4616] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
  [4629] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      aux_sym__anon_comment_token1,
    STATE(238), 1,
      sym_comment,
  [4642] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [4655] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      anon_sym_LF,
    STATE(240), 1,
      sym_comment,
  [4668] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_comment,
  [4681] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_comment,
  [4694] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_comment,
  [4707] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
    STATE(244), 1,
      sym_comment,
  [4720] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_comment,
  [4733] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      aux_sym_expansion_token1,
    STATE(246), 1,
      sym_comment,
  [4746] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      anon_sym_EQ,
    STATE(247), 1,
      sym_comment,
  [4759] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      aux_sym_expansion_token1,
    STATE(248), 1,
      sym_comment,
  [4772] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      anon_sym_EQ,
    STATE(249), 1,
      sym_comment,
  [4785] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      aux_sym_expansion_token1,
    STATE(250), 1,
      sym_comment,
  [4798] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(767), 1,
      aux_sym_expansion_token1,
    STATE(251), 1,
      sym_comment,
  [4811] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      aux_sym_expansion_token1,
    STATE(252), 1,
      sym_comment,
  [4824] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(771), 1,
      aux_sym_expansion_token1,
    STATE(253), 1,
      sym_comment,
  [4837] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(773), 1,
      aux_sym_expansion_token1,
    STATE(254), 1,
      sym_comment,
  [4850] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(775), 1,
      aux_sym_expansion_token1,
    STATE(255), 1,
      sym_comment,
  [4863] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(777), 1,
      aux_sym_expansion_token1,
    STATE(256), 1,
      sym_comment,
  [4876] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(779), 1,
      aux_sym_expansion_token1,
    STATE(257), 1,
      sym_comment,
  [4889] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      aux_sym_expansion_token1,
    STATE(258), 1,
      sym_comment,
  [4902] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      aux_sym_param_token1,
    STATE(259), 1,
      sym_comment,
  [4915] = 1,
    ACTIONS(785), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 259,
  [SMALL_STATE(6)] = 289,
  [SMALL_STATE(7)] = 321,
  [SMALL_STATE(8)] = 353,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 413,
  [SMALL_STATE(11)] = 443,
  [SMALL_STATE(12)] = 477,
  [SMALL_STATE(13)] = 509,
  [SMALL_STATE(14)] = 538,
  [SMALL_STATE(15)] = 565,
  [SMALL_STATE(16)] = 592,
  [SMALL_STATE(17)] = 621,
  [SMALL_STATE(18)] = 648,
  [SMALL_STATE(19)] = 679,
  [SMALL_STATE(20)] = 710,
  [SMALL_STATE(21)] = 737,
  [SMALL_STATE(22)] = 764,
  [SMALL_STATE(23)] = 791,
  [SMALL_STATE(24)] = 820,
  [SMALL_STATE(25)] = 846,
  [SMALL_STATE(26)] = 874,
  [SMALL_STATE(27)] = 898,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 952,
  [SMALL_STATE(30)] = 972,
  [SMALL_STATE(31)] = 1000,
  [SMALL_STATE(32)] = 1028,
  [SMALL_STATE(33)] = 1056,
  [SMALL_STATE(34)] = 1082,
  [SMALL_STATE(35)] = 1110,
  [SMALL_STATE(36)] = 1138,
  [SMALL_STATE(37)] = 1166,
  [SMALL_STATE(38)] = 1194,
  [SMALL_STATE(39)] = 1218,
  [SMALL_STATE(40)] = 1238,
  [SMALL_STATE(41)] = 1266,
  [SMALL_STATE(42)] = 1292,
  [SMALL_STATE(43)] = 1320,
  [SMALL_STATE(44)] = 1348,
  [SMALL_STATE(45)] = 1376,
  [SMALL_STATE(46)] = 1396,
  [SMALL_STATE(47)] = 1424,
  [SMALL_STATE(48)] = 1450,
  [SMALL_STATE(49)] = 1478,
  [SMALL_STATE(50)] = 1501,
  [SMALL_STATE(51)] = 1526,
  [SMALL_STATE(52)] = 1551,
  [SMALL_STATE(53)] = 1576,
  [SMALL_STATE(54)] = 1595,
  [SMALL_STATE(55)] = 1614,
  [SMALL_STATE(56)] = 1633,
  [SMALL_STATE(57)] = 1658,
  [SMALL_STATE(58)] = 1677,
  [SMALL_STATE(59)] = 1696,
  [SMALL_STATE(60)] = 1715,
  [SMALL_STATE(61)] = 1734,
  [SMALL_STATE(62)] = 1753,
  [SMALL_STATE(63)] = 1778,
  [SMALL_STATE(64)] = 1803,
  [SMALL_STATE(65)] = 1826,
  [SMALL_STATE(66)] = 1851,
  [SMALL_STATE(67)] = 1876,
  [SMALL_STATE(68)] = 1895,
  [SMALL_STATE(69)] = 1914,
  [SMALL_STATE(70)] = 1939,
  [SMALL_STATE(71)] = 1960,
  [SMALL_STATE(72)] = 1979,
  [SMALL_STATE(73)] = 2004,
  [SMALL_STATE(74)] = 2023,
  [SMALL_STATE(75)] = 2046,
  [SMALL_STATE(76)] = 2071,
  [SMALL_STATE(77)] = 2094,
  [SMALL_STATE(78)] = 2112,
  [SMALL_STATE(79)] = 2134,
  [SMALL_STATE(80)] = 2156,
  [SMALL_STATE(81)] = 2178,
  [SMALL_STATE(82)] = 2200,
  [SMALL_STATE(83)] = 2222,
  [SMALL_STATE(84)] = 2244,
  [SMALL_STATE(85)] = 2262,
  [SMALL_STATE(86)] = 2278,
  [SMALL_STATE(87)] = 2296,
  [SMALL_STATE(88)] = 2318,
  [SMALL_STATE(89)] = 2340,
  [SMALL_STATE(90)] = 2360,
  [SMALL_STATE(91)] = 2382,
  [SMALL_STATE(92)] = 2400,
  [SMALL_STATE(93)] = 2422,
  [SMALL_STATE(94)] = 2442,
  [SMALL_STATE(95)] = 2460,
  [SMALL_STATE(96)] = 2478,
  [SMALL_STATE(97)] = 2496,
  [SMALL_STATE(98)] = 2514,
  [SMALL_STATE(99)] = 2536,
  [SMALL_STATE(100)] = 2558,
  [SMALL_STATE(101)] = 2580,
  [SMALL_STATE(102)] = 2598,
  [SMALL_STATE(103)] = 2620,
  [SMALL_STATE(104)] = 2642,
  [SMALL_STATE(105)] = 2660,
  [SMALL_STATE(106)] = 2680,
  [SMALL_STATE(107)] = 2700,
  [SMALL_STATE(108)] = 2722,
  [SMALL_STATE(109)] = 2744,
  [SMALL_STATE(110)] = 2761,
  [SMALL_STATE(111)] = 2780,
  [SMALL_STATE(112)] = 2797,
  [SMALL_STATE(113)] = 2816,
  [SMALL_STATE(114)] = 2833,
  [SMALL_STATE(115)] = 2850,
  [SMALL_STATE(116)] = 2869,
  [SMALL_STATE(117)] = 2886,
  [SMALL_STATE(118)] = 2903,
  [SMALL_STATE(119)] = 2922,
  [SMALL_STATE(120)] = 2939,
  [SMALL_STATE(121)] = 2956,
  [SMALL_STATE(122)] = 2975,
  [SMALL_STATE(123)] = 2992,
  [SMALL_STATE(124)] = 3009,
  [SMALL_STATE(125)] = 3026,
  [SMALL_STATE(126)] = 3043,
  [SMALL_STATE(127)] = 3060,
  [SMALL_STATE(128)] = 3077,
  [SMALL_STATE(129)] = 3096,
  [SMALL_STATE(130)] = 3113,
  [SMALL_STATE(131)] = 3130,
  [SMALL_STATE(132)] = 3147,
  [SMALL_STATE(133)] = 3162,
  [SMALL_STATE(134)] = 3178,
  [SMALL_STATE(135)] = 3190,
  [SMALL_STATE(136)] = 3206,
  [SMALL_STATE(137)] = 3220,
  [SMALL_STATE(138)] = 3236,
  [SMALL_STATE(139)] = 3252,
  [SMALL_STATE(140)] = 3268,
  [SMALL_STATE(141)] = 3284,
  [SMALL_STATE(142)] = 3300,
  [SMALL_STATE(143)] = 3316,
  [SMALL_STATE(144)] = 3332,
  [SMALL_STATE(145)] = 3348,
  [SMALL_STATE(146)] = 3364,
  [SMALL_STATE(147)] = 3378,
  [SMALL_STATE(148)] = 3394,
  [SMALL_STATE(149)] = 3410,
  [SMALL_STATE(150)] = 3426,
  [SMALL_STATE(151)] = 3442,
  [SMALL_STATE(152)] = 3458,
  [SMALL_STATE(153)] = 3474,
  [SMALL_STATE(154)] = 3490,
  [SMALL_STATE(155)] = 3506,
  [SMALL_STATE(156)] = 3522,
  [SMALL_STATE(157)] = 3538,
  [SMALL_STATE(158)] = 3552,
  [SMALL_STATE(159)] = 3568,
  [SMALL_STATE(160)] = 3584,
  [SMALL_STATE(161)] = 3600,
  [SMALL_STATE(162)] = 3616,
  [SMALL_STATE(163)] = 3632,
  [SMALL_STATE(164)] = 3646,
  [SMALL_STATE(165)] = 3662,
  [SMALL_STATE(166)] = 3676,
  [SMALL_STATE(167)] = 3692,
  [SMALL_STATE(168)] = 3706,
  [SMALL_STATE(169)] = 3722,
  [SMALL_STATE(170)] = 3736,
  [SMALL_STATE(171)] = 3752,
  [SMALL_STATE(172)] = 3768,
  [SMALL_STATE(173)] = 3784,
  [SMALL_STATE(174)] = 3797,
  [SMALL_STATE(175)] = 3810,
  [SMALL_STATE(176)] = 3823,
  [SMALL_STATE(177)] = 3836,
  [SMALL_STATE(178)] = 3849,
  [SMALL_STATE(179)] = 3862,
  [SMALL_STATE(180)] = 3875,
  [SMALL_STATE(181)] = 3888,
  [SMALL_STATE(182)] = 3901,
  [SMALL_STATE(183)] = 3914,
  [SMALL_STATE(184)] = 3927,
  [SMALL_STATE(185)] = 3940,
  [SMALL_STATE(186)] = 3953,
  [SMALL_STATE(187)] = 3966,
  [SMALL_STATE(188)] = 3979,
  [SMALL_STATE(189)] = 3992,
  [SMALL_STATE(190)] = 4005,
  [SMALL_STATE(191)] = 4018,
  [SMALL_STATE(192)] = 4031,
  [SMALL_STATE(193)] = 4044,
  [SMALL_STATE(194)] = 4057,
  [SMALL_STATE(195)] = 4070,
  [SMALL_STATE(196)] = 4083,
  [SMALL_STATE(197)] = 4096,
  [SMALL_STATE(198)] = 4109,
  [SMALL_STATE(199)] = 4122,
  [SMALL_STATE(200)] = 4135,
  [SMALL_STATE(201)] = 4148,
  [SMALL_STATE(202)] = 4161,
  [SMALL_STATE(203)] = 4174,
  [SMALL_STATE(204)] = 4187,
  [SMALL_STATE(205)] = 4200,
  [SMALL_STATE(206)] = 4213,
  [SMALL_STATE(207)] = 4226,
  [SMALL_STATE(208)] = 4239,
  [SMALL_STATE(209)] = 4252,
  [SMALL_STATE(210)] = 4265,
  [SMALL_STATE(211)] = 4278,
  [SMALL_STATE(212)] = 4291,
  [SMALL_STATE(213)] = 4304,
  [SMALL_STATE(214)] = 4317,
  [SMALL_STATE(215)] = 4330,
  [SMALL_STATE(216)] = 4343,
  [SMALL_STATE(217)] = 4356,
  [SMALL_STATE(218)] = 4369,
  [SMALL_STATE(219)] = 4382,
  [SMALL_STATE(220)] = 4395,
  [SMALL_STATE(221)] = 4408,
  [SMALL_STATE(222)] = 4421,
  [SMALL_STATE(223)] = 4434,
  [SMALL_STATE(224)] = 4447,
  [SMALL_STATE(225)] = 4460,
  [SMALL_STATE(226)] = 4473,
  [SMALL_STATE(227)] = 4486,
  [SMALL_STATE(228)] = 4499,
  [SMALL_STATE(229)] = 4512,
  [SMALL_STATE(230)] = 4525,
  [SMALL_STATE(231)] = 4538,
  [SMALL_STATE(232)] = 4551,
  [SMALL_STATE(233)] = 4564,
  [SMALL_STATE(234)] = 4577,
  [SMALL_STATE(235)] = 4590,
  [SMALL_STATE(236)] = 4603,
  [SMALL_STATE(237)] = 4616,
  [SMALL_STATE(238)] = 4629,
  [SMALL_STATE(239)] = 4642,
  [SMALL_STATE(240)] = 4655,
  [SMALL_STATE(241)] = 4668,
  [SMALL_STATE(242)] = 4681,
  [SMALL_STATE(243)] = 4694,
  [SMALL_STATE(244)] = 4707,
  [SMALL_STATE(245)] = 4720,
  [SMALL_STATE(246)] = 4733,
  [SMALL_STATE(247)] = 4746,
  [SMALL_STATE(248)] = 4759,
  [SMALL_STATE(249)] = 4772,
  [SMALL_STATE(250)] = 4785,
  [SMALL_STATE(251)] = 4798,
  [SMALL_STATE(252)] = 4811,
  [SMALL_STATE(253)] = 4824,
  [SMALL_STATE(254)] = 4837,
  [SMALL_STATE(255)] = 4850,
  [SMALL_STATE(256)] = 4863,
  [SMALL_STATE(257)] = 4876,
  [SMALL_STATE(258)] = 4889,
  [SMALL_STATE(259)] = 4902,
  [SMALL_STATE(260)] = 4915,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(228),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(153),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(45),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(138),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(73),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(73),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(137),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(60),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(60),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(142),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(71),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(85),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(151),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(140),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(95),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(95),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(101),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(147),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(141),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(96),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(151),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(70),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(117),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(145),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(238),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(143),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(127),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 11),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(111),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(149),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(109),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(144),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(209),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(132),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(210),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(180),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(139),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(87),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(15),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3, .production_id = 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 12),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 14),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 7),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [753] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
