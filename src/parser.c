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
      if (eof) ADVANCE(149);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '@') ADVANCE(201);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '{') ADVANCE(182);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == 'U') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '@') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(234);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(234);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == '@') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '@') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(177);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(185);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(204);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 85:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 87:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(174);
      END_STATE();
    case 94:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 102:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 116:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 117:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 133:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 134:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 135:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 146:
      if (eof) ADVANCE(149);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(110);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 147:
      if (eof) ADVANCE(149);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(124);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(110);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 148:
      if (eof) ADVANCE(149);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '[') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '{') ADVANCE(182);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_env_pair_token1);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(185);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(200);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(180);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(185);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 146},
  [2] = {.lex_state = 146},
  [3] = {.lex_state = 146},
  [4] = {.lex_state = 146},
  [5] = {.lex_state = 146},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 146},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 146},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 146},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 52},
  [75] = {.lex_state = 24},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 30},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 37},
  [84] = {.lex_state = 26},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 26},
  [87] = {.lex_state = 30},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 146},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 30},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 51},
  [99] = {.lex_state = 35},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 30},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 37},
  [108] = {.lex_state = 30},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 146},
  [111] = {.lex_state = 52},
  [112] = {.lex_state = 45},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 146},
  [115] = {.lex_state = 146},
  [116] = {.lex_state = 52},
  [117] = {.lex_state = 24},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 52},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 146},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 40},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 146},
  [137] = {.lex_state = 42},
  [138] = {.lex_state = 42},
  [139] = {.lex_state = 146},
  [140] = {.lex_state = 42},
  [141] = {.lex_state = 42},
  [142] = {.lex_state = 42},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 42},
  [145] = {.lex_state = 42},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 42},
  [148] = {.lex_state = 18},
  [149] = {.lex_state = 42},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 42},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 42},
  [154] = {.lex_state = 15},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 27},
  [158] = {.lex_state = 39},
  [159] = {.lex_state = 17},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 17},
  [162] = {.lex_state = 50},
  [163] = {.lex_state = 146},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 146},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 146},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 146},
  [170] = {.lex_state = 18},
  [171] = {.lex_state = 30},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 43},
  [174] = {.lex_state = 146},
  [175] = {.lex_state = 43},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 43},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 146},
  [181] = {.lex_state = 43},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 43},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 43},
  [187] = {.lex_state = 43},
  [188] = {.lex_state = 43},
  [189] = {.lex_state = 146},
  [190] = {.lex_state = 43},
  [191] = {.lex_state = 53},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 46},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 43},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 43},
  [199] = {.lex_state = 43},
  [200] = {.lex_state = 43},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 43},
  [205] = {.lex_state = 43},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 226},
  [209] = {.lex_state = 48},
  [210] = {.lex_state = 146},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 48},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 54},
  [219] = {.lex_state = 43},
  [220] = {.lex_state = 146},
  [221] = {.lex_state = 54},
  [222] = {.lex_state = 43},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 43},
  [225] = {.lex_state = 146},
  [226] = {.lex_state = 54},
  [227] = {.lex_state = 43},
  [228] = {.lex_state = 43},
  [229] = {.lex_state = 146},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 146},
  [232] = {.lex_state = 43},
  [233] = {.lex_state = 146},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 146},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 146},
  [238] = {.lex_state = 226},
  [239] = {.lex_state = 146},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 146},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 146},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 146},
  [246] = {.lex_state = 53},
  [247] = {.lex_state = 146},
  [248] = {.lex_state = 53},
  [249] = {.lex_state = 146},
  [250] = {.lex_state = 53},
  [251] = {.lex_state = 53},
  [252] = {.lex_state = 53},
  [253] = {.lex_state = 53},
  [254] = {.lex_state = 53},
  [255] = {.lex_state = 53},
  [256] = {.lex_state = 53},
  [257] = {.lex_state = 53},
  [258] = {.lex_state = 53},
  [259] = {.lex_state = 48},
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
    ACTIONS(134), 1,
      aux_sym_image_name_token1,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
    ACTIONS(138), 1,
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
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      aux_sym_label_pair_token1,
    ACTIONS(147), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(150), 1,
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
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(155), 1,
      sym_shell_fragment,
    ACTIONS(155), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(213), 2,
      sym_string_array,
      sym_shell_command,
  [565] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(157), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(234), 1,
      sym__anon_comment,
    STATE(236), 1,
      sym_shell_fragment,
    ACTIONS(155), 2,
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
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      aux_sym_env_pair_token1,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(165), 1,
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
    ACTIONS(170), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      aux_sym_image_tag_token1,
    STATE(71), 1,
      sym_expansion,
    ACTIONS(168), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(17), 2,
      sym_comment,
      aux_sym_image_tag_repeat1,
  [648] = 10,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      aux_sym_env_pair_token1,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(60), 1,
      sym_expansion,
  [679] = 10,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(106), 1,
      anon_sym_BSLASH,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(182), 1,
      aux_sym_label_pair_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(73), 1,
      sym_expansion,
  [710] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(157), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(179), 1,
      sym_shell_fragment,
    STATE(234), 1,
      sym__anon_comment,
    ACTIONS(155), 2,
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
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(155), 1,
      sym_shell_fragment,
    ACTIONS(155), 2,
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
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(155), 1,
      sym_shell_fragment,
    ACTIONS(155), 2,
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
    ACTIONS(188), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(190), 1,
      anon_sym_DOLLAR,
    ACTIONS(192), 1,
      aux_sym_image_tag_token1,
    STATE(17), 1,
      aux_sym_image_tag_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(71), 1,
      sym_expansion,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_AT,
  [820] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(196), 1,
      aux_sym_path_token2,
    ACTIONS(198), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(101), 1,
      sym_expansion,
    ACTIONS(194), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [846] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
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
    ACTIONS(210), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(213), 1,
      anon_sym_DOLLAR,
    STATE(85), 1,
      sym_expansion,
    ACTIONS(208), 2,
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
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(216), 1,
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
    ACTIONS(196), 1,
      aux_sym_path_token2,
    ACTIONS(198), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      aux_sym_path_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(101), 1,
      sym_expansion,
    ACTIONS(218), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [952] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(29), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(222), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [972] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      aux_sym_image_name_token1,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
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
    ACTIONS(224), 1,
      aux_sym_path_token1,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
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
    ACTIONS(224), 1,
      aux_sym_path_token1,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
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
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(238), 1,
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
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      aux_sym_path_token1,
    ACTIONS(243), 1,
      anon_sym_DOLLAR,
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
    ACTIONS(245), 1,
      anon_sym_LF,
    ACTIONS(247), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
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
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(251), 1,
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
    ACTIONS(253), 1,
      anon_sym_LF,
    ACTIONS(255), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(259), 1,
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
    ACTIONS(263), 1,
      aux_sym_path_token2,
    ACTIONS(266), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      sym_expansion,
    ACTIONS(261), 2,
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
    ACTIONS(269), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(271), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1238] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(273), 1,
      anon_sym_NONE,
    ACTIONS(275), 1,
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
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(279), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
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
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(287), 1,
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
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(289), 1,
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
    ACTIONS(247), 1,
      anon_sym_DOLLAR,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 1,
      anon_sym_COLON,
    ACTIONS(295), 1,
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
    ACTIONS(297), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(299), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1396] = 9,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(301), 1,
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
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      anon_sym_DOLLAR,
    ACTIONS(308), 1,
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
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(317), 1,
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
    ACTIONS(319), 1,
      anon_sym_LF,
    ACTIONS(321), 1,
      aux_sym_path_token2,
    ACTIONS(324), 1,
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
    ACTIONS(327), 1,
      aux_sym_path_token2,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
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
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    ACTIONS(335), 1,
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
    ACTIONS(327), 1,
      aux_sym_path_token2,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(337), 1,
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
    ACTIONS(341), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym__anon_comment,
    ACTIONS(339), 2,
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
    STATE(54), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(220), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1614] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(55), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(271), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [1633] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
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
    ACTIONS(220), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(222), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [1677] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(58), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(271), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1696] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(59), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(222), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1715] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(60), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(350), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [1734] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(61), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(269), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1753] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(352), 1,
      aux_sym_path_token2,
    ACTIONS(354), 1,
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
    ACTIONS(275), 1,
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
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(361), 1,
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
    ACTIONS(247), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(364), 1,
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
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(368), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(370), 1,
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
    ACTIONS(269), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(271), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1895] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(68), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(222), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1914] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(346), 1,
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
    ACTIONS(372), 1,
      anon_sym_LF,
    STATE(70), 1,
      sym_comment,
    ACTIONS(374), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(376), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1960] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(71), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(380), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1979] = 8,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
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
    ACTIONS(348), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(350), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [2023] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      sym__non_newline_whitespace,
    ACTIONS(388), 1,
      aux_sym_path_token2,
    ACTIONS(391), 1,
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
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(352), 1,
      aux_sym_path_token2,
    ACTIONS(354), 1,
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
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(399), 1,
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
    STATE(77), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(271), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2112] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
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
    ACTIONS(224), 1,
      aux_sym_path_token1,
    ACTIONS(226), 1,
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
    ACTIONS(406), 1,
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
    ACTIONS(224), 1,
      aux_sym_path_token1,
    ACTIONS(226), 1,
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
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
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
    ACTIONS(295), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      aux_sym__user_name_group,
    STATE(83), 1,
      sym_comment,
    STATE(85), 1,
      sym_expansion,
  [2244] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(84), 1,
      sym_comment,
    ACTIONS(271), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2260] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(410), 1,
      anon_sym_DOLLAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(408), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [2278] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(86), 1,
      sym_comment,
    ACTIONS(222), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2294] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      aux_sym_path_token1,
    ACTIONS(243), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym_expansion,
    STATE(87), 1,
      sym_comment,
    STATE(157), 1,
      sym_path,
  [2316] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(414), 1,
      aux_sym_env_pair_token1,
    STATE(88), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_env_instruction_repeat1,
    STATE(159), 1,
      sym_env_pair,
  [2338] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(418), 1,
      anon_sym_DASH_DASH,
    STATE(165), 1,
      sym_param,
    STATE(89), 2,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [2358] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(421), 1,
      anon_sym_LF,
    ACTIONS(423), 1,
      aux_sym_label_pair_token1,
    STATE(90), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_label_instruction_repeat1,
    STATE(156), 1,
      sym_label_pair,
  [2380] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(91), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(222), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2398] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_expansion,
    STATE(92), 1,
      sym_comment,
    STATE(182), 1,
      sym_path,
  [2420] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(429), 1,
      sym_line_continuation,
    STATE(93), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(427), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2440] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      aux_sym_double_quoted_string_token1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(222), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2458] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(433), 1,
      aux_sym_double_quoted_string_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2476] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(96), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(437), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2494] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      aux_sym_double_quoted_string_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2512] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      aux_sym_image_tag_token1,
    ACTIONS(439), 1,
      anon_sym_DOLLAR,
    STATE(23), 1,
      aux_sym_image_tag_repeat1,
    STATE(71), 1,
      sym_expansion,
    STATE(98), 1,
      sym_comment,
  [2534] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      aux_sym_image_digest_token1,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    STATE(37), 1,
      aux_sym_image_digest_repeat1,
    STATE(96), 1,
      sym_expansion,
    STATE(99), 1,
      sym_comment,
  [2556] = 7,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(317), 1,
      anon_sym_AT,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(445), 1,
      aux_sym_from_instruction_token2,
    STATE(100), 1,
      sym_comment,
    STATE(135), 1,
      sym_image_digest,
  [2578] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(101), 1,
      sym_comment,
    ACTIONS(447), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2594] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(451), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      aux_sym__stopsignal_value,
    STATE(102), 1,
      sym_comment,
    STATE(109), 1,
      sym_expansion,
  [2616] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_expansion,
    STATE(103), 1,
      sym_comment,
    STATE(201), 1,
      sym_path,
  [2638] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      sym_line_continuation,
    ACTIONS(455), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(104), 2,
      sym_comment,
      aux_sym_shell_fragment_repeat1,
  [2656] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(462), 1,
      aux_sym_label_pair_token1,
    STATE(156), 1,
      sym_label_pair,
    STATE(105), 2,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [2676] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      aux_sym_env_pair_token1,
    STATE(159), 1,
      sym_env_pair,
    STATE(106), 2,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [2696] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      aux_sym__user_name_group,
    STATE(85), 1,
      sym_expansion,
    STATE(107), 1,
      sym_comment,
  [2718] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_expansion,
    STATE(108), 1,
      sym_comment,
    STATE(217), 1,
      sym_path,
  [2740] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(470), 1,
      anon_sym_LF,
    STATE(109), 1,
      sym_comment,
    ACTIONS(472), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2757] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym_string_array_repeat1,
  [2776] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(478), 1,
      sym__non_newline_whitespace,
    STATE(111), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2793] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(480), 1,
      aux_sym_label_pair_token1,
    STATE(90), 1,
      aux_sym_label_instruction_repeat1,
    STATE(112), 1,
      sym_comment,
    STATE(156), 1,
      sym_label_pair,
  [2812] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(482), 1,
      anon_sym_LF,
    STATE(113), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2829] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(114), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [2846] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    ACTIONS(493), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_double_quoted_string,
    STATE(115), 1,
      sym_comment,
  [2865] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      sym__non_newline_whitespace,
    STATE(116), 1,
      sym_comment,
    ACTIONS(222), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2882] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(478), 1,
      anon_sym_LF,
    STATE(117), 1,
      sym_comment,
    ACTIONS(447), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2899] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 1,
      sym__non_newline_whitespace,
    STATE(118), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_volume_instruction_repeat1,
  [2918] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      sym__non_newline_whitespace,
    STATE(119), 1,
      sym_comment,
    ACTIONS(271), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2935] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_LF,
    ACTIONS(501), 1,
      sym__non_newline_whitespace,
    STATE(120), 2,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [2952] = 6,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(497), 1,
      sym__non_newline_whitespace,
    ACTIONS(504), 1,
      anon_sym_LF,
    STATE(118), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(121), 1,
      sym_comment,
  [2971] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_comment,
    ACTIONS(222), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2988] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_LF,
    STATE(123), 1,
      sym_comment,
    ACTIONS(271), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3005] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_comment,
    ACTIONS(222), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [3022] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_LF,
    STATE(125), 1,
      sym_comment,
    ACTIONS(271), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [3039] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(126), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3056] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(127), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3073] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_string_array_repeat1,
    STATE(128), 1,
      sym_comment,
  [3092] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_LF,
    STATE(129), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3109] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      anon_sym_LF,
    STATE(130), 1,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3126] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(372), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_comment,
    ACTIONS(374), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3143] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_LF,
    STATE(132), 1,
      sym_comment,
    ACTIONS(518), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_line_continuation,
  [3158] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(520), 1,
      anon_sym_LF,
    ACTIONS(522), 1,
      aux_sym_from_instruction_token2,
    STATE(133), 1,
      sym_comment,
  [3174] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym_comment,
    ACTIONS(524), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3186] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 1,
      aux_sym_from_instruction_token2,
    STATE(135), 1,
      sym_comment,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3216] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    ACTIONS(534), 1,
      sym_variable,
    STATE(137), 1,
      sym_comment,
  [3232] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    ACTIONS(538), 1,
      sym_variable,
    STATE(138), 1,
      sym_comment,
  [3248] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(493), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_comment,
    STATE(169), 1,
      sym_double_quoted_string,
  [3264] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
    ACTIONS(542), 1,
      sym_variable,
    STATE(140), 1,
      sym_comment,
  [3280] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
    ACTIONS(546), 1,
      sym_variable,
    STATE(141), 1,
      sym_comment,
  [3296] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
    ACTIONS(550), 1,
      sym_variable,
    STATE(142), 1,
      sym_comment,
  [3312] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      sym_variable,
    STATE(143), 1,
      sym_comment,
  [3328] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
    ACTIONS(558), 1,
      sym_variable,
    STATE(144), 1,
      sym_comment,
  [3344] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      sym_variable,
    STATE(145), 1,
      sym_comment,
  [3360] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      sym_line_continuation,
    STATE(146), 2,
      sym_comment,
      aux_sym_shell_command_repeat2,
  [3374] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    ACTIONS(571), 1,
      sym_variable,
    STATE(147), 1,
      sym_comment,
  [3390] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 1,
      aux_sym_label_pair_token1,
    STATE(148), 1,
      sym_comment,
  [3406] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    ACTIONS(579), 1,
      sym_variable,
    STATE(149), 1,
      sym_comment,
  [3422] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 1,
      aux_sym_env_pair_token1,
    STATE(150), 1,
      sym_comment,
  [3438] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
    ACTIONS(587), 1,
      sym_variable,
    STATE(151), 1,
      sym_comment,
  [3454] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(152), 1,
      sym_comment,
    STATE(192), 1,
      sym_string_array,
  [3470] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(591), 1,
      sym_variable,
    STATE(153), 1,
      sym_comment,
  [3486] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(593), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      aux_sym_from_instruction_token2,
    STATE(154), 1,
      sym_comment,
  [3502] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_LF,
    ACTIONS(599), 1,
      sym_line_continuation,
    STATE(155), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_shell_command_repeat2,
  [3518] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(601), 1,
      anon_sym_LF,
    ACTIONS(603), 1,
      aux_sym_label_pair_token1,
    STATE(156), 1,
      sym_comment,
  [3534] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    STATE(157), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3548] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(605), 1,
      anon_sym_EQ,
    ACTIONS(607), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(158), 1,
      sym_comment,
  [3564] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(609), 1,
      anon_sym_LF,
    ACTIONS(611), 1,
      aux_sym_env_pair_token1,
    STATE(159), 1,
      sym_comment,
  [3580] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(613), 1,
      anon_sym_LF,
    ACTIONS(615), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_comment,
  [3596] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(617), 1,
      anon_sym_LF,
    ACTIONS(619), 1,
      aux_sym_env_pair_token1,
    STATE(161), 1,
      sym_comment,
  [3612] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(621), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      aux_sym_image_name_token1,
    STATE(162), 1,
      sym_comment,
  [3628] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(621), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3642] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      aux_sym_env_pair_token1,
    STATE(164), 1,
      sym_comment,
  [3658] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(627), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3672] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      aux_sym_from_instruction_token2,
    STATE(166), 1,
      sym_comment,
  [3688] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(617), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3702] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      sym_line_continuation,
    ACTIONS(633), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_shell_command_repeat2,
    STATE(168), 1,
      sym_comment,
  [3718] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3732] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(617), 1,
      anon_sym_LF,
    ACTIONS(619), 1,
      aux_sym_label_pair_token1,
    STATE(170), 1,
      sym_comment,
  [3748] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(621), 1,
      anon_sym_DOLLAR,
    ACTIONS(623), 1,
      aux_sym_path_token1,
    STATE(171), 1,
      sym_comment,
  [3764] = 5,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      aux_sym_label_pair_token1,
    STATE(172), 1,
      sym_comment,
  [3780] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(635), 1,
      sym__non_newline_whitespace,
    STATE(173), 1,
      sym_comment,
  [3793] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_comment,
  [3806] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(639), 1,
      sym__non_newline_whitespace,
    STATE(175), 1,
      sym_comment,
  [3819] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_comment,
  [3832] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(643), 1,
      sym__non_newline_whitespace,
    STATE(177), 1,
      sym_comment,
  [3845] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_comment,
  [3858] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(647), 1,
      anon_sym_LF,
    ACTIONS(649), 1,
      sym_line_continuation,
    STATE(179), 1,
      sym_comment,
  [3871] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_EQ,
    STATE(180), 1,
      sym_comment,
  [3884] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(651), 1,
      sym__non_newline_whitespace,
    STATE(181), 1,
      sym_comment,
  [3897] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(653), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_comment,
  [3910] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_comment,
  [3923] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      sym__non_newline_whitespace,
    STATE(184), 1,
      sym_comment,
  [3936] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(659), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_comment,
  [3949] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(661), 1,
      sym__non_newline_whitespace,
    STATE(186), 1,
      sym_comment,
  [3962] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(663), 1,
      sym__non_newline_whitespace,
    STATE(187), 1,
      sym_comment,
  [3975] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(665), 1,
      sym__non_newline_whitespace,
    STATE(188), 1,
      sym_comment,
  [3988] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(667), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_comment,
  [4001] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      sym__non_newline_whitespace,
    STATE(190), 1,
      sym_comment,
  [4014] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      aux_sym_expansion_token1,
    STATE(191), 1,
      sym_comment,
  [4027] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(673), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_comment,
  [4040] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      aux_sym_arg_instruction_token2,
    STATE(193), 1,
      sym_comment,
  [4053] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(677), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_comment,
  [4066] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(679), 1,
      sym__non_newline_whitespace,
    STATE(195), 1,
      sym_comment,
  [4079] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_comment,
  [4092] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(683), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_comment,
  [4105] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      sym__non_newline_whitespace,
    STATE(198), 1,
      sym_comment,
  [4118] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      sym__non_newline_whitespace,
    STATE(199), 1,
      sym_comment,
  [4131] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(689), 1,
      sym__non_newline_whitespace,
    STATE(200), 1,
      sym_comment,
  [4144] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_comment,
  [4157] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_comment,
  [4170] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_comment,
  [4183] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      sym__non_newline_whitespace,
    STATE(204), 1,
      sym_comment,
  [4196] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      sym__non_newline_whitespace,
    STATE(205), 1,
      sym_comment,
  [4209] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_comment,
  [4222] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_comment,
  [4235] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      aux_sym__anon_comment_token1,
    STATE(208), 1,
      sym_comment,
  [4248] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      aux_sym_param_token1,
    STATE(209), 1,
      sym_comment,
  [4261] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym_comment,
  [4274] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_comment,
  [4287] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_comment,
  [4300] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_comment,
  [4313] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_LF,
    STATE(214), 1,
      sym_comment,
  [4326] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(719), 1,
      aux_sym_param_token1,
    STATE(215), 1,
      sym_comment,
  [4339] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_comment,
  [4352] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(723), 1,
      anon_sym_LF,
    STATE(217), 1,
      sym_comment,
  [4365] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(725), 1,
      aux_sym_param_token2,
    STATE(218), 1,
      sym_comment,
  [4378] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      sym__non_newline_whitespace,
    STATE(219), 1,
      sym_comment,
  [4391] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_comment,
  [4404] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      aux_sym_param_token2,
    STATE(221), 1,
      sym_comment,
  [4417] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      sym__non_newline_whitespace,
    STATE(222), 1,
      sym_comment,
  [4430] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      anon_sym_LF,
    STATE(223), 1,
      sym_comment,
  [4443] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      sym__non_newline_whitespace,
    STATE(224), 1,
      sym_comment,
  [4456] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_comment,
  [4469] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(741), 1,
      aux_sym_param_token2,
    STATE(226), 1,
      sym_comment,
  [4482] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(743), 1,
      sym__non_newline_whitespace,
    STATE(227), 1,
      sym_comment,
  [4495] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      sym__non_newline_whitespace,
    STATE(228), 1,
      sym_comment,
  [4508] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_comment,
  [4521] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_LF,
    STATE(230), 1,
      sym_comment,
  [4534] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4547] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      sym__non_newline_whitespace,
    STATE(232), 1,
      sym_comment,
  [4560] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
  [4573] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      anon_sym_LF,
    STATE(234), 1,
      sym_comment,
  [4586] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_comment,
  [4599] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(761), 1,
      sym_line_continuation,
    STATE(236), 1,
      sym_comment,
  [4612] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
  [4625] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      aux_sym__anon_comment_token1,
    STATE(238), 1,
      sym_comment,
  [4638] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [4651] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      anon_sym_LF,
    STATE(240), 1,
      sym_comment,
  [4664] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_comment,
  [4677] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(773), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_comment,
  [4690] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_comment,
  [4703] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(777), 1,
      ts_builtin_sym_end,
    STATE(244), 1,
      sym_comment,
  [4716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_comment,
  [4729] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      aux_sym_expansion_token1,
    STATE(246), 1,
      sym_comment,
  [4742] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      anon_sym_EQ,
    STATE(247), 1,
      sym_comment,
  [4755] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(785), 1,
      aux_sym_expansion_token1,
    STATE(248), 1,
      sym_comment,
  [4768] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(787), 1,
      anon_sym_EQ,
    STATE(249), 1,
      sym_comment,
  [4781] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(789), 1,
      aux_sym_expansion_token1,
    STATE(250), 1,
      sym_comment,
  [4794] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(791), 1,
      aux_sym_expansion_token1,
    STATE(251), 1,
      sym_comment,
  [4807] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(793), 1,
      aux_sym_expansion_token1,
    STATE(252), 1,
      sym_comment,
  [4820] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(795), 1,
      aux_sym_expansion_token1,
    STATE(253), 1,
      sym_comment,
  [4833] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(797), 1,
      aux_sym_expansion_token1,
    STATE(254), 1,
      sym_comment,
  [4846] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(799), 1,
      aux_sym_expansion_token1,
    STATE(255), 1,
      sym_comment,
  [4859] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(801), 1,
      aux_sym_expansion_token1,
    STATE(256), 1,
      sym_comment,
  [4872] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(803), 1,
      aux_sym_expansion_token1,
    STATE(257), 1,
      sym_comment,
  [4885] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      sym_line_continuation,
    ACTIONS(805), 1,
      aux_sym_expansion_token1,
    STATE(258), 1,
      sym_comment,
  [4898] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(807), 1,
      aux_sym_param_token1,
    STATE(259), 1,
      sym_comment,
  [4911] = 1,
    ACTIONS(809), 1,
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
  [SMALL_STATE(85)] = 2260,
  [SMALL_STATE(86)] = 2278,
  [SMALL_STATE(87)] = 2294,
  [SMALL_STATE(88)] = 2316,
  [SMALL_STATE(89)] = 2338,
  [SMALL_STATE(90)] = 2358,
  [SMALL_STATE(91)] = 2380,
  [SMALL_STATE(92)] = 2398,
  [SMALL_STATE(93)] = 2420,
  [SMALL_STATE(94)] = 2440,
  [SMALL_STATE(95)] = 2458,
  [SMALL_STATE(96)] = 2476,
  [SMALL_STATE(97)] = 2494,
  [SMALL_STATE(98)] = 2512,
  [SMALL_STATE(99)] = 2534,
  [SMALL_STATE(100)] = 2556,
  [SMALL_STATE(101)] = 2578,
  [SMALL_STATE(102)] = 2594,
  [SMALL_STATE(103)] = 2616,
  [SMALL_STATE(104)] = 2638,
  [SMALL_STATE(105)] = 2656,
  [SMALL_STATE(106)] = 2676,
  [SMALL_STATE(107)] = 2696,
  [SMALL_STATE(108)] = 2718,
  [SMALL_STATE(109)] = 2740,
  [SMALL_STATE(110)] = 2757,
  [SMALL_STATE(111)] = 2776,
  [SMALL_STATE(112)] = 2793,
  [SMALL_STATE(113)] = 2812,
  [SMALL_STATE(114)] = 2829,
  [SMALL_STATE(115)] = 2846,
  [SMALL_STATE(116)] = 2865,
  [SMALL_STATE(117)] = 2882,
  [SMALL_STATE(118)] = 2899,
  [SMALL_STATE(119)] = 2918,
  [SMALL_STATE(120)] = 2935,
  [SMALL_STATE(121)] = 2952,
  [SMALL_STATE(122)] = 2971,
  [SMALL_STATE(123)] = 2988,
  [SMALL_STATE(124)] = 3005,
  [SMALL_STATE(125)] = 3022,
  [SMALL_STATE(126)] = 3039,
  [SMALL_STATE(127)] = 3056,
  [SMALL_STATE(128)] = 3073,
  [SMALL_STATE(129)] = 3092,
  [SMALL_STATE(130)] = 3109,
  [SMALL_STATE(131)] = 3126,
  [SMALL_STATE(132)] = 3143,
  [SMALL_STATE(133)] = 3158,
  [SMALL_STATE(134)] = 3174,
  [SMALL_STATE(135)] = 3186,
  [SMALL_STATE(136)] = 3202,
  [SMALL_STATE(137)] = 3216,
  [SMALL_STATE(138)] = 3232,
  [SMALL_STATE(139)] = 3248,
  [SMALL_STATE(140)] = 3264,
  [SMALL_STATE(141)] = 3280,
  [SMALL_STATE(142)] = 3296,
  [SMALL_STATE(143)] = 3312,
  [SMALL_STATE(144)] = 3328,
  [SMALL_STATE(145)] = 3344,
  [SMALL_STATE(146)] = 3360,
  [SMALL_STATE(147)] = 3374,
  [SMALL_STATE(148)] = 3390,
  [SMALL_STATE(149)] = 3406,
  [SMALL_STATE(150)] = 3422,
  [SMALL_STATE(151)] = 3438,
  [SMALL_STATE(152)] = 3454,
  [SMALL_STATE(153)] = 3470,
  [SMALL_STATE(154)] = 3486,
  [SMALL_STATE(155)] = 3502,
  [SMALL_STATE(156)] = 3518,
  [SMALL_STATE(157)] = 3534,
  [SMALL_STATE(158)] = 3548,
  [SMALL_STATE(159)] = 3564,
  [SMALL_STATE(160)] = 3580,
  [SMALL_STATE(161)] = 3596,
  [SMALL_STATE(162)] = 3612,
  [SMALL_STATE(163)] = 3628,
  [SMALL_STATE(164)] = 3642,
  [SMALL_STATE(165)] = 3658,
  [SMALL_STATE(166)] = 3672,
  [SMALL_STATE(167)] = 3688,
  [SMALL_STATE(168)] = 3702,
  [SMALL_STATE(169)] = 3718,
  [SMALL_STATE(170)] = 3732,
  [SMALL_STATE(171)] = 3748,
  [SMALL_STATE(172)] = 3764,
  [SMALL_STATE(173)] = 3780,
  [SMALL_STATE(174)] = 3793,
  [SMALL_STATE(175)] = 3806,
  [SMALL_STATE(176)] = 3819,
  [SMALL_STATE(177)] = 3832,
  [SMALL_STATE(178)] = 3845,
  [SMALL_STATE(179)] = 3858,
  [SMALL_STATE(180)] = 3871,
  [SMALL_STATE(181)] = 3884,
  [SMALL_STATE(182)] = 3897,
  [SMALL_STATE(183)] = 3910,
  [SMALL_STATE(184)] = 3923,
  [SMALL_STATE(185)] = 3936,
  [SMALL_STATE(186)] = 3949,
  [SMALL_STATE(187)] = 3962,
  [SMALL_STATE(188)] = 3975,
  [SMALL_STATE(189)] = 3988,
  [SMALL_STATE(190)] = 4001,
  [SMALL_STATE(191)] = 4014,
  [SMALL_STATE(192)] = 4027,
  [SMALL_STATE(193)] = 4040,
  [SMALL_STATE(194)] = 4053,
  [SMALL_STATE(195)] = 4066,
  [SMALL_STATE(196)] = 4079,
  [SMALL_STATE(197)] = 4092,
  [SMALL_STATE(198)] = 4105,
  [SMALL_STATE(199)] = 4118,
  [SMALL_STATE(200)] = 4131,
  [SMALL_STATE(201)] = 4144,
  [SMALL_STATE(202)] = 4157,
  [SMALL_STATE(203)] = 4170,
  [SMALL_STATE(204)] = 4183,
  [SMALL_STATE(205)] = 4196,
  [SMALL_STATE(206)] = 4209,
  [SMALL_STATE(207)] = 4222,
  [SMALL_STATE(208)] = 4235,
  [SMALL_STATE(209)] = 4248,
  [SMALL_STATE(210)] = 4261,
  [SMALL_STATE(211)] = 4274,
  [SMALL_STATE(212)] = 4287,
  [SMALL_STATE(213)] = 4300,
  [SMALL_STATE(214)] = 4313,
  [SMALL_STATE(215)] = 4326,
  [SMALL_STATE(216)] = 4339,
  [SMALL_STATE(217)] = 4352,
  [SMALL_STATE(218)] = 4365,
  [SMALL_STATE(219)] = 4378,
  [SMALL_STATE(220)] = 4391,
  [SMALL_STATE(221)] = 4404,
  [SMALL_STATE(222)] = 4417,
  [SMALL_STATE(223)] = 4430,
  [SMALL_STATE(224)] = 4443,
  [SMALL_STATE(225)] = 4456,
  [SMALL_STATE(226)] = 4469,
  [SMALL_STATE(227)] = 4482,
  [SMALL_STATE(228)] = 4495,
  [SMALL_STATE(229)] = 4508,
  [SMALL_STATE(230)] = 4521,
  [SMALL_STATE(231)] = 4534,
  [SMALL_STATE(232)] = 4547,
  [SMALL_STATE(233)] = 4560,
  [SMALL_STATE(234)] = 4573,
  [SMALL_STATE(235)] = 4586,
  [SMALL_STATE(236)] = 4599,
  [SMALL_STATE(237)] = 4612,
  [SMALL_STATE(238)] = 4625,
  [SMALL_STATE(239)] = 4638,
  [SMALL_STATE(240)] = 4651,
  [SMALL_STATE(241)] = 4664,
  [SMALL_STATE(242)] = 4677,
  [SMALL_STATE(243)] = 4690,
  [SMALL_STATE(244)] = 4703,
  [SMALL_STATE(245)] = 4716,
  [SMALL_STATE(246)] = 4729,
  [SMALL_STATE(247)] = 4742,
  [SMALL_STATE(248)] = 4755,
  [SMALL_STATE(249)] = 4768,
  [SMALL_STATE(250)] = 4781,
  [SMALL_STATE(251)] = 4794,
  [SMALL_STATE(252)] = 4807,
  [SMALL_STATE(253)] = 4820,
  [SMALL_STATE(254)] = 4833,
  [SMALL_STATE(255)] = 4846,
  [SMALL_STATE(256)] = 4859,
  [SMALL_STATE(257)] = 4872,
  [SMALL_STATE(258)] = 4885,
  [SMALL_STATE(259)] = 4898,
  [SMALL_STATE(260)] = 4911,
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
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(153),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(45),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(138),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(73),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(73),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(137),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(60),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(60),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(142),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(71),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(85),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(151),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(140),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(95),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(95),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(101),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(147),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(141),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(96),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(151),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(70),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(117),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(145),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(238),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(143),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(127),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 11),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(111),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(149),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(109),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(144),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_group, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(209),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(132),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(210),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(180),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(139),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 4),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(87),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(15),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3, .production_id = 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 12),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 14),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 7),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [777] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
