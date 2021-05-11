#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 263
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  aux_sym_maintainer_instruction_token1 = 26,
  aux_sym_maintainer_instruction_token2 = 27,
  aux_sym_path_token1 = 28,
  aux_sym_path_token2 = 29,
  anon_sym_DOLLAR = 30,
  anon_sym_LBRACE = 31,
  aux_sym_expansion_token1 = 32,
  anon_sym_RBRACE = 33,
  sym_variable = 34,
  aux_sym_env_pair_token1 = 35,
  aux_sym__spaced_env_pair_token1 = 36,
  aux_sym_expose_port_token1 = 37,
  anon_sym_SLASHtcp = 38,
  anon_sym_SLASHudp = 39,
  aux_sym_label_pair_token1 = 40,
  aux_sym_image_name_token1 = 41,
  aux_sym_image_tag_token1 = 42,
  anon_sym_AT = 43,
  aux_sym_image_digest_token1 = 44,
  anon_sym_DASH_DASH = 45,
  aux_sym_param_token1 = 46,
  aux_sym_param_token2 = 47,
  aux_sym_image_alias_token1 = 48,
  anon_sym_LBRACK = 49,
  anon_sym_COMMA = 50,
  anon_sym_RBRACK = 51,
  aux_sym_shell_fragment_token1 = 52,
  aux_sym_shell_fragment_token2 = 53,
  sym_line_continuation = 54,
  anon_sym_POUND = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_double_quoted_string_token1 = 57,
  aux_sym_unquoted_string_token1 = 58,
  anon_sym_BSLASH = 59,
  sym_escape_sequence = 60,
  sym__non_newline_whitespace = 61,
  sym_source_file = 62,
  sym__instruction = 63,
  sym_from_instruction = 64,
  sym_run_instruction = 65,
  sym_cmd_instruction = 66,
  sym_label_instruction = 67,
  sym_expose_instruction = 68,
  sym_env_instruction = 69,
  sym_add_instruction = 70,
  sym_copy_instruction = 71,
  sym_entrypoint_instruction = 72,
  sym_volume_instruction = 73,
  sym_user_instruction = 74,
  aux_sym__user_name_group = 75,
  sym_workdir_instruction = 76,
  sym_arg_instruction = 77,
  sym_onbuild_instruction = 78,
  sym_stopsignal_instruction = 79,
  aux_sym__stopsignal_value = 80,
  sym_healthcheck_instruction = 81,
  sym_shell_instruction = 82,
  sym_maintainer_instruction = 83,
  sym_path = 84,
  sym_expansion = 85,
  sym_env_pair = 86,
  sym__spaced_env_pair = 87,
  sym_expose_port = 88,
  sym_label_pair = 89,
  sym_image_spec = 90,
  sym_image_name = 91,
  sym_image_tag = 92,
  sym_image_digest = 93,
  sym_param = 94,
  sym_image_alias = 95,
  sym_string_array = 96,
  sym_shell_command = 97,
  sym_shell_fragment = 98,
  sym__comment_line = 99,
  sym__anon_comment = 100,
  sym_double_quoted_string = 101,
  sym_unquoted_string = 102,
  sym_comment = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_label_instruction_repeat1 = 105,
  aux_sym_expose_instruction_repeat1 = 106,
  aux_sym_env_instruction_repeat1 = 107,
  aux_sym_volume_instruction_repeat1 = 108,
  aux_sym_healthcheck_instruction_repeat1 = 109,
  aux_sym_path_repeat1 = 110,
  aux_sym_image_name_repeat1 = 111,
  aux_sym_image_tag_repeat1 = 112,
  aux_sym_image_digest_repeat1 = 113,
  aux_sym_image_alias_repeat1 = 114,
  aux_sym_string_array_repeat1 = 115,
  aux_sym_shell_command_repeat1 = 116,
  aux_sym_shell_command_repeat2 = 117,
  aux_sym_shell_fragment_repeat1 = 118,
  aux_sym_double_quoted_string_repeat1 = 119,
  aux_sym_unquoted_string_repeat1 = 120,
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
  [aux_sym_maintainer_instruction_token1] = "MAINTAINER",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
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
  [sym_maintainer_instruction] = "maintainer_instruction",
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
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
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
  [sym_maintainer_instruction] = sym_maintainer_instruction,
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
  [aux_sym_maintainer_instruction_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token2] = {
    .visible = false,
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
  [sym_maintainer_instruction] = {
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
      if (eof) ADVANCE(157);
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '@') ADVANCE(213);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '{') ADVANCE(194);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(227);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == 'U') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '@') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(225);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(243);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(243);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == '@') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '@') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(189);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(189);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(229);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(183);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 90:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(182);
      END_STATE();
    case 98:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 122:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 140:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 141:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 142:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 143:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 144:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 154:
      if (eof) ADVANCE(157);
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(131);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 155:
      if (eof) ADVANCE(157);
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(131);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 156:
      if (eof) ADVANCE(157);
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '{') ADVANCE(194);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(227);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_env_pair_token1);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(192);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(220);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(249);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 154},
  [2] = {.lex_state = 154},
  [3] = {.lex_state = 154},
  [4] = {.lex_state = 154},
  [5] = {.lex_state = 154},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 154},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 154},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 51},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 154},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 51},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 31},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 154},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 28},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 28},
  [91] = {.lex_state = 32},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 50},
  [94] = {.lex_state = 30},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 28},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 45},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 25},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 28},
  [108] = {.lex_state = 25},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 154},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 154},
  [115] = {.lex_state = 51},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 46},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 51},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 51},
  [124] = {.lex_state = 154},
  [125] = {.lex_state = 154},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 39},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 39},
  [137] = {.lex_state = 39},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 154},
  [141] = {.lex_state = 154},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 154},
  [145] = {.lex_state = 39},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 39},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 39},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 154},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 35},
  [155] = {.lex_state = 28},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 39},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 49},
  [165] = {.lex_state = 39},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 39},
  [168] = {.lex_state = 37},
  [169] = {.lex_state = 154},
  [170] = {.lex_state = 39},
  [171] = {.lex_state = 154},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 40},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 42},
  [182] = {.lex_state = 154},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 154},
  [186] = {.lex_state = 47},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 42},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 187},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 187},
  [202] = {.lex_state = 40},
  [203] = {.lex_state = 40},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 40},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 40},
  [211] = {.lex_state = 40},
  [212] = {.lex_state = 40},
  [213] = {.lex_state = 40},
  [214] = {.lex_state = 40},
  [215] = {.lex_state = 40},
  [216] = {.lex_state = 40},
  [217] = {.lex_state = 40},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 40},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 40},
  [222] = {.lex_state = 154},
  [223] = {.lex_state = 52},
  [224] = {.lex_state = 40},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 40},
  [227] = {.lex_state = 154},
  [228] = {.lex_state = 52},
  [229] = {.lex_state = 40},
  [230] = {.lex_state = 52},
  [231] = {.lex_state = 154},
  [232] = {.lex_state = 154},
  [233] = {.lex_state = 154},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 154},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 154},
  [238] = {.lex_state = 53},
  [239] = {.lex_state = 154},
  [240] = {.lex_state = 154},
  [241] = {.lex_state = 154},
  [242] = {.lex_state = 40},
  [243] = {.lex_state = 154},
  [244] = {.lex_state = 187},
  [245] = {.lex_state = 154},
  [246] = {.lex_state = 40},
  [247] = {.lex_state = 154},
  [248] = {.lex_state = 53},
  [249] = {.lex_state = 154},
  [250] = {.lex_state = 53},
  [251] = {.lex_state = 154},
  [252] = {.lex_state = 53},
  [253] = {.lex_state = 53},
  [254] = {.lex_state = 53},
  [255] = {.lex_state = 53},
  [256] = {.lex_state = 53},
  [257] = {.lex_state = 53},
  [258] = {.lex_state = 53},
  [259] = {.lex_state = 53},
  [260] = {.lex_state = 53},
  [261] = {.lex_state = 42},
  [262] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(193),
    [sym__instruction] = STATE(192),
    [sym_from_instruction] = STATE(189),
    [sym_run_instruction] = STATE(189),
    [sym_cmd_instruction] = STATE(189),
    [sym_label_instruction] = STATE(189),
    [sym_expose_instruction] = STATE(189),
    [sym_env_instruction] = STATE(189),
    [sym_add_instruction] = STATE(189),
    [sym_copy_instruction] = STATE(189),
    [sym_entrypoint_instruction] = STATE(189),
    [sym_volume_instruction] = STATE(189),
    [sym_user_instruction] = STATE(189),
    [sym_workdir_instruction] = STATE(189),
    [sym_arg_instruction] = STATE(189),
    [sym_onbuild_instruction] = STATE(189),
    [sym_stopsignal_instruction] = STATE(189),
    [sym_healthcheck_instruction] = STATE(189),
    [sym_shell_instruction] = STATE(189),
    [sym_maintainer_instruction] = STATE(189),
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
    [aux_sym_maintainer_instruction_token1] = ACTIONS(43),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 25,
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
      aux_sym_maintainer_instruction_token1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(192), 1,
      sym__instruction,
    STATE(189), 18,
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
      sym_maintainer_instruction,
  [93] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(52), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(55), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(58), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(61), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(64), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(67), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(70), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(73), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(76), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(79), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(82), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(85), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(88), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(91), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(94), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(97), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(100), 1,
      aux_sym_maintainer_instruction_token1,
    STATE(192), 1,
      sym__instruction,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(189), 18,
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
      sym_maintainer_instruction,
  [184] = 23,
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
      aux_sym_maintainer_instruction_token1,
    STATE(4), 1,
      sym_comment,
    STATE(209), 1,
      sym__instruction,
    STATE(189), 18,
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
      sym_maintainer_instruction,
  [271] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_comment,
    ACTIONS(47), 19,
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
      aux_sym_maintainer_instruction_token1,
  [302] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(103), 1,
      anon_sym_DOLLAR,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    STATE(6), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(67), 1,
      sym_expansion,
    STATE(187), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [334] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(117), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      aux_sym_image_name_token1,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(48), 1,
      sym_expansion,
    STATE(7), 2,
      sym_comment,
      aux_sym_image_name_repeat1,
    ACTIONS(113), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [362] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_image_name_token1,
    ACTIONS(129), 1,
      anon_sym_DASH_DASH,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_image_name_repeat1,
    STATE(45), 1,
      sym_param,
    STATE(47), 1,
      sym_image_name,
    STATE(48), 1,
      sym_expansion,
    STATE(172), 1,
      sym_image_spec,
  [396] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_image_name_token1,
    ACTIONS(133), 1,
      aux_sym_from_instruction_token2,
    STATE(7), 1,
      aux_sym_image_name_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(48), 1,
      sym_expansion,
    ACTIONS(131), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [426] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(103), 1,
      anon_sym_DOLLAR,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(67), 1,
      sym_expansion,
    STATE(150), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [458] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(103), 1,
      anon_sym_DOLLAR,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(67), 1,
      sym_expansion,
    STATE(194), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [490] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(58), 1,
      sym_expansion,
    STATE(134), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [522] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(145), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(149), 1,
      aux_sym_image_tag_token1,
    STATE(13), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_image_tag_repeat1,
    STATE(74), 1,
      sym_expansion,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_AT,
  [551] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(178), 1,
      sym_shell_fragment,
    STATE(199), 1,
      sym__anon_comment,
    ACTIONS(151), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(51), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [578] = 10,
    ACTIONS(103), 1,
      anon_sym_DOLLAR,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(111), 1,
      anon_sym_BSLASH,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      aux_sym_label_pair_token1,
    STATE(15), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(67), 1,
      sym_expansion,
  [609] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(161), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(163), 1,
      anon_sym_DOLLAR,
    ACTIONS(166), 1,
      aux_sym_image_tag_token1,
    STATE(74), 1,
      sym_expansion,
    ACTIONS(159), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(16), 2,
      sym_comment,
      aux_sym_image_tag_repeat1,
  [636] = 10,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(139), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      aux_sym_env_pair_token1,
    STATE(17), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(58), 1,
      sym_expansion,
  [667] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(166), 1,
      sym_shell_fragment,
    ACTIONS(151), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(218), 2,
      sym_string_array,
      sym_shell_command,
  [694] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(166), 1,
      sym_shell_fragment,
    ACTIONS(151), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(184), 2,
      sym_string_array,
      sym_shell_command,
  [721] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(173), 1,
      anon_sym_DOLLAR,
    ACTIONS(176), 1,
      aux_sym_label_pair_token1,
    ACTIONS(178), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(181), 1,
      anon_sym_BSLASH,
    STATE(67), 1,
      sym_expansion,
    STATE(20), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [750] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(199), 1,
      sym__anon_comment,
    STATE(200), 1,
      sym_shell_fragment,
    ACTIONS(151), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(14), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [777] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      aux_sym_env_pair_token1,
    ACTIONS(184), 1,
      anon_sym_DOLLAR,
    ACTIONS(187), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(190), 1,
      anon_sym_BSLASH,
    STATE(58), 1,
      sym_expansion,
    STATE(22), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [806] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(166), 1,
      sym_shell_fragment,
    ACTIONS(151), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(206), 2,
      sym_string_array,
      sym_shell_command,
  [833] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(201), 1,
      sym_escape_sequence,
    STATE(80), 1,
      sym_expansion,
    STATE(24), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [859] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(206), 1,
      aux_sym_path_token2,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_path_repeat1,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(204), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [885] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      aux_sym_expose_port_token1,
    STATE(117), 1,
      sym_expansion,
    STATE(119), 1,
      sym_expose_port,
    STATE(26), 2,
      sym_comment,
      aux_sym_expose_instruction_repeat1,
  [911] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(222), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym__user_name_group,
    STATE(78), 1,
      sym_expansion,
  [939] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(228), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(232), 1,
      aux_sym_image_digest_token1,
    STATE(28), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_image_digest_repeat1,
    STATE(84), 1,
      sym_expansion,
  [967] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(240), 1,
      sym_escape_sequence,
    STATE(29), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(80), 1,
      sym_expansion,
  [995] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(240), 1,
      sym_escape_sequence,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(80), 1,
      sym_expansion,
  [1023] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(240), 1,
      sym_escape_sequence,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(80), 1,
      sym_expansion,
  [1051] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 1,
      aux_sym_expose_port_token1,
    STATE(26), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(117), 1,
      sym_expansion,
    STATE(119), 1,
      sym_expose_port,
  [1079] = 7,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(252), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    ACTIONS(250), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(33), 2,
      aux_sym__user_name_group,
      sym_comment,
  [1103] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(34), 1,
      sym_comment,
    ACTIONS(260), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token1,
    ACTIONS(258), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [1123] = 7,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(264), 1,
      aux_sym_path_token2,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(262), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(35), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1147] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(36), 1,
      sym_comment,
    ACTIONS(272), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token1,
    ACTIONS(270), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [1167] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(240), 1,
      sym_escape_sequence,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(37), 1,
      sym_comment,
    STATE(80), 1,
      sym_expansion,
  [1195] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(278), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(280), 1,
      anon_sym_DOLLAR,
    ACTIONS(283), 1,
      aux_sym_image_digest_token1,
    STATE(84), 1,
      sym_expansion,
    STATE(38), 2,
      sym_comment,
      aux_sym_image_digest_repeat1,
  [1221] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      aux_sym_path_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      anon_sym_DASH_DASH,
    STATE(39), 1,
      sym_comment,
    STATE(68), 1,
      sym_expansion,
    STATE(79), 1,
      sym_param,
    STATE(173), 1,
      sym_path,
  [1249] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      aux_sym_path_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      anon_sym_DASH_DASH,
    STATE(40), 1,
      sym_comment,
    STATE(68), 1,
      sym_expansion,
    STATE(81), 1,
      sym_param,
    STATE(205), 1,
      sym_path,
  [1277] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    ACTIONS(292), 1,
      aux_sym_path_token1,
    STATE(25), 1,
      sym_expansion,
    STATE(41), 1,
      sym_comment,
    STATE(129), 1,
      sym_path,
    STATE(207), 1,
      sym_string_array,
  [1305] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(240), 1,
      sym_escape_sequence,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(80), 1,
      sym_expansion,
  [1333] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(238), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(240), 1,
      sym_escape_sequence,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(80), 1,
      sym_expansion,
  [1361] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(206), 1,
      aux_sym_path_token2,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(98), 1,
      sym_expansion,
    ACTIONS(298), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1387] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_image_name_token1,
    STATE(9), 1,
      aux_sym_image_name_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(47), 1,
      sym_image_name,
    STATE(48), 1,
      sym_expansion,
    STATE(157), 1,
      sym_image_spec,
  [1415] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(300), 1,
      anon_sym_NONE,
    ACTIONS(302), 1,
      anon_sym_DASH_DASH,
    STATE(46), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(152), 1,
      sym_param,
    STATE(225), 1,
      sym_cmd_instruction,
  [1443] = 9,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(310), 1,
      anon_sym_AT,
    STATE(47), 1,
      sym_comment,
    STATE(95), 1,
      sym_image_tag,
    STATE(156), 1,
      sym_image_digest,
  [1471] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(48), 1,
      sym_comment,
    ACTIONS(314), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token1,
    ACTIONS(312), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [1491] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(316), 1,
      aux_sym_expose_port_token1,
    STATE(32), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(117), 1,
      sym_expansion,
    STATE(119), 1,
      sym_expose_port,
  [1516] = 6,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(320), 1,
      aux_sym_expose_port_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
    ACTIONS(322), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1537] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(326), 1,
      anon_sym_POUND,
    STATE(199), 1,
      sym__anon_comment,
    ACTIONS(324), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(51), 3,
      sym__comment_line,
      sym_comment,
      aux_sym_shell_command_repeat1,
  [1556] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      aux_sym_expose_port_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(270), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
  [1575] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      aux_sym_image_alias_token1,
    STATE(53), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_image_alias_repeat1,
    STATE(109), 1,
      sym_expansion,
    STATE(220), 1,
      sym_image_alias,
  [1600] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(54), 1,
      sym_comment,
    ACTIONS(260), 2,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(258), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [1619] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(333), 1,
      aux_sym_path_token2,
    ACTIONS(335), 1,
      sym__non_newline_whitespace,
    STATE(55), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_path_repeat1,
    STATE(115), 1,
      sym_expansion,
  [1644] = 7,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    ACTIONS(342), 1,
      aux_sym_image_alias_token1,
    STATE(109), 1,
      sym_expansion,
    STATE(56), 2,
      sym_comment,
      aux_sym_image_alias_repeat1,
  [1667] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(349), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym__stopsignal_value,
    STATE(131), 1,
      sym_expansion,
  [1692] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(58), 1,
      sym_comment,
    ACTIONS(353), 2,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(351), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [1711] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(355), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym__user_name_group,
    STATE(59), 1,
      sym_comment,
    STATE(78), 1,
      sym_expansion,
  [1736] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(260), 1,
      aux_sym_expose_port_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
  [1755] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(61), 1,
      sym_comment,
    ACTIONS(272), 2,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(270), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [1774] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(62), 1,
      sym_comment,
    ACTIONS(260), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(258), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [1793] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(302), 1,
      anon_sym_DASH_DASH,
    STATE(63), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(152), 1,
      sym_param,
    STATE(234), 1,
      sym_cmd_instruction,
  [1818] = 7,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(357), 1,
      aux_sym_path_token2,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    ACTIONS(363), 1,
      sym__non_newline_whitespace,
    STATE(115), 1,
      sym_expansion,
    STATE(64), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1841] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      aux_sym_path_token2,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_path_repeat1,
    STATE(122), 1,
      sym_expansion,
  [1866] = 7,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(373), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(376), 1,
      anon_sym_DOLLAR,
    STATE(131), 1,
      sym_expansion,
    STATE(66), 2,
      aux_sym__stopsignal_value,
      sym_comment,
  [1889] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(67), 1,
      sym_comment,
    ACTIONS(353), 2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(351), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [1908] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    ACTIONS(333), 1,
      aux_sym_path_token2,
    ACTIONS(365), 1,
      sym__non_newline_whitespace,
    STATE(55), 1,
      aux_sym_path_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(115), 1,
      sym_expansion,
  [1933] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      aux_sym_path_token2,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    STATE(69), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(122), 1,
      sym_expansion,
  [1958] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      aux_sym_image_alias_token1,
    STATE(70), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_image_alias_repeat1,
    STATE(109), 1,
      sym_expansion,
    STATE(175), 1,
      sym_image_alias,
  [1983] = 7,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(379), 1,
      aux_sym_path_token2,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    STATE(122), 1,
      sym_expansion,
    STATE(71), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [2006] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(72), 1,
      sym_comment,
    ACTIONS(272), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(270), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [2025] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(73), 1,
      sym_comment,
    ACTIONS(272), 2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(270), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [2044] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(74), 1,
      sym_comment,
    ACTIONS(387), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(385), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_AT,
  [2063] = 8,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(389), 1,
      anon_sym_LF,
    ACTIONS(391), 1,
      aux_sym_image_alias_token1,
    STATE(56), 1,
      aux_sym_image_alias_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(109), 1,
      sym_expansion,
  [2088] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(76), 1,
      sym_comment,
    ACTIONS(260), 2,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
    ACTIONS(258), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      anon_sym_BSLASH,
  [2107] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
      anon_sym_DOLLAR,
    ACTIONS(393), 1,
      aux_sym__stopsignal_value_token1,
    STATE(57), 1,
      aux_sym__stopsignal_value,
    STATE(77), 1,
      sym_comment,
    STATE(131), 1,
      sym_expansion,
  [2129] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(78), 1,
      sym_comment,
    ACTIONS(395), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
  [2145] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      aux_sym_path_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    STATE(68), 1,
      sym_expansion,
    STATE(79), 1,
      sym_comment,
    STATE(246), 1,
      sym_path,
  [2167] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(80), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_DOLLAR,
      aux_sym_double_quoted_string_token1,
    ACTIONS(399), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2185] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      aux_sym_path_token1,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    STATE(68), 1,
      sym_expansion,
    STATE(81), 1,
      sym_comment,
    STATE(242), 1,
      sym_path,
  [2207] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(82), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_DOLLAR,
      aux_sym_double_quoted_string_token1,
    ACTIONS(260), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2225] = 7,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(401), 1,
      anon_sym_LF,
    ACTIONS(403), 1,
      aux_sym_env_pair_token1,
    STATE(83), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_env_instruction_repeat1,
    STATE(151), 1,
      sym_env_pair,
  [2247] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(407), 1,
      aux_sym_from_instruction_token2,
    STATE(84), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_image_digest_token1,
  [2265] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(411), 1,
      anon_sym_DASH_DASH,
    STATE(152), 1,
      sym_param,
    STATE(85), 2,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [2285] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      aux_sym_from_instruction_token2,
    STATE(86), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_image_digest_token1,
  [2303] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_DOLLAR,
      aux_sym_double_quoted_string_token1,
    ACTIONS(272), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2321] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    STATE(65), 1,
      sym_expansion,
    STATE(88), 1,
      sym_comment,
    STATE(179), 1,
      sym_path,
  [2343] = 7,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(418), 1,
      aux_sym_label_pair_token1,
    STATE(89), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_label_instruction_repeat1,
    STATE(161), 1,
      sym_label_pair,
  [2365] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    STATE(65), 1,
      sym_expansion,
    STATE(90), 1,
      sym_comment,
    STATE(180), 1,
      sym_path,
  [2387] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(59), 1,
      aux_sym__user_name_group,
    STATE(78), 1,
      sym_expansion,
    STATE(91), 1,
      sym_comment,
  [2409] = 6,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(424), 1,
      sym_line_continuation,
    STATE(92), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(422), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2429] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(149), 1,
      aux_sym_image_tag_token1,
    STATE(13), 1,
      aux_sym_image_tag_repeat1,
    STATE(74), 1,
      sym_expansion,
    STATE(93), 1,
      sym_comment,
  [2451] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      anon_sym_DOLLAR,
    ACTIONS(232), 1,
      aux_sym_image_digest_token1,
    STATE(28), 1,
      aux_sym_image_digest_repeat1,
    STATE(84), 1,
      sym_expansion,
    STATE(94), 1,
      sym_comment,
  [2473] = 7,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(426), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      aux_sym_from_instruction_token2,
    STATE(95), 1,
      sym_comment,
    STATE(139), 1,
      sym_image_digest,
  [2495] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_DOLLAR,
    ACTIONS(292), 1,
      aux_sym_path_token1,
    STATE(25), 1,
      sym_expansion,
    STATE(96), 1,
      sym_comment,
    STATE(159), 1,
      sym_path,
  [2517] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    STATE(65), 1,
      sym_expansion,
    STATE(97), 1,
      sym_comment,
    STATE(190), 1,
      sym_path,
  [2539] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(432), 1,
      anon_sym_DOLLAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2557] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(260), 1,
      aux_sym_from_instruction_token2,
    STATE(99), 1,
      sym_comment,
    ACTIONS(258), 3,
      anon_sym_LF,
      anon_sym_DOLLAR,
      aux_sym_image_digest_token1,
  [2575] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    STATE(65), 1,
      sym_expansion,
    STATE(100), 1,
      sym_comment,
    STATE(208), 1,
      sym_path,
  [2597] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__user_name_group,
    STATE(78), 1,
      sym_expansion,
    STATE(101), 1,
      sym_comment,
  [2619] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(434), 1,
      aux_sym_env_pair_token1,
    STATE(83), 1,
      aux_sym_env_instruction_repeat1,
    STATE(102), 1,
      sym_comment,
    STATE(151), 1,
      sym_env_pair,
    STATE(195), 1,
      sym__spaced_env_pair,
  [2641] = 6,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(438), 1,
      aux_sym_env_pair_token1,
    STATE(151), 1,
      sym_env_pair,
    STATE(103), 2,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [2661] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      sym_line_continuation,
    ACTIONS(443), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(104), 2,
      sym_comment,
      aux_sym_shell_fragment_repeat1,
  [2679] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(272), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2697] = 6,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(450), 1,
      aux_sym_label_pair_token1,
    STATE(161), 1,
      sym_label_pair,
    STATE(106), 2,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [2717] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      aux_sym_path_token1,
    STATE(65), 1,
      sym_expansion,
    STATE(107), 1,
      sym_comment,
    STATE(191), 1,
      sym_path,
  [2739] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(258), 1,
      anon_sym_DOLLAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2757] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(455), 1,
      aux_sym_image_alias_token1,
    STATE(109), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [2774] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      aux_sym_path_token2,
    STATE(110), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [2791] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_string_array_repeat1,
  [2810] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(461), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym_comment,
    ACTIONS(463), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_line_continuation,
  [2825] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(467), 1,
      aux_sym_expose_port_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [2842] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_double_quoted_string,
    STATE(114), 1,
      sym_comment,
  [2861] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(430), 1,
      aux_sym_path_token2,
    STATE(115), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2878] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      sym__non_newline_whitespace,
    STATE(116), 2,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [2895] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(320), 1,
      aux_sym_expose_port_token1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [2912] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(478), 1,
      aux_sym_label_pair_token1,
    STATE(89), 1,
      aux_sym_label_instruction_repeat1,
    STATE(118), 1,
      sym_comment,
    STATE(161), 1,
      sym_label_pair,
  [2931] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(482), 1,
      aux_sym_expose_port_token1,
    STATE(119), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [2948] = 6,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(484), 1,
      anon_sym_LF,
    ACTIONS(486), 1,
      sym__non_newline_whitespace,
    STATE(116), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(120), 1,
      sym_comment,
  [2967] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      aux_sym_path_token2,
    STATE(121), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2984] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(430), 1,
      aux_sym_path_token2,
    STATE(122), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3001] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(260), 1,
      aux_sym_path_token2,
    STATE(123), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [3018] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym_string_array_repeat1,
  [3037] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    STATE(125), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [3054] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(260), 1,
      aux_sym__stopsignal_value_token1,
    STATE(126), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3071] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      aux_sym__stopsignal_value_token1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3088] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(260), 1,
      aux_sym_path_token2,
    STATE(128), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3105] = 6,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(486), 1,
      sym__non_newline_whitespace,
    ACTIONS(495), 1,
      anon_sym_LF,
    STATE(120), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(129), 1,
      sym_comment,
  [3124] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(260), 1,
      aux_sym_image_alias_token1,
    STATE(130), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3141] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      aux_sym__stopsignal_value_token1,
    STATE(131), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3158] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      aux_sym_image_alias_token1,
    STATE(132), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_LF,
      anon_sym_DOLLAR,
  [3175] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(503), 1,
      sym_variable,
    STATE(133), 1,
      sym_comment,
  [3191] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      aux_sym_env_pair_token1,
    STATE(134), 1,
      sym_comment,
  [3207] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    ACTIONS(511), 1,
      sym_variable,
    STATE(135), 1,
      sym_comment,
  [3223] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(515), 1,
      sym_variable,
    STATE(136), 1,
      sym_comment,
  [3239] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      sym_variable,
    STATE(137), 1,
      sym_comment,
  [3255] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      anon_sym_EQ,
    STATE(138), 1,
      sym_comment,
  [3271] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      aux_sym_from_instruction_token2,
    STATE(139), 1,
      sym_comment,
  [3287] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3301] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_comment,
    STATE(171), 1,
      sym_double_quoted_string,
  [3317] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(533), 1,
      aux_sym_env_pair_token1,
    STATE(142), 1,
      sym_comment,
  [3333] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 1,
      sym_line_continuation,
    STATE(143), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_shell_command_repeat2,
  [3349] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_comment,
    ACTIONS(539), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3363] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    ACTIONS(543), 1,
      sym_variable,
    STATE(145), 1,
      sym_comment,
  [3379] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym_env_pair_token1,
    STATE(146), 1,
      sym_comment,
  [3395] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      sym_variable,
    STATE(147), 1,
      sym_comment,
  [3411] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 1,
      sym_line_continuation,
    STATE(148), 2,
      sym_comment,
      aux_sym_shell_command_repeat2,
  [3425] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
    ACTIONS(558), 1,
      sym_variable,
    STATE(149), 1,
      sym_comment,
  [3441] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(562), 1,
      aux_sym_label_pair_token1,
    STATE(150), 1,
      sym_comment,
  [3457] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      aux_sym_env_pair_token1,
    STATE(151), 1,
      sym_comment,
  [3473] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    ACTIONS(568), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3487] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(533), 1,
      aux_sym_label_pair_token1,
    STATE(153), 1,
      sym_comment,
  [3503] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_EQ,
    ACTIONS(572), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(154), 1,
      sym_comment,
  [3519] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      aux_sym_path_token1,
    STATE(155), 1,
      sym_comment,
  [3535] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 1,
      aux_sym_from_instruction_token2,
    STATE(156), 1,
      sym_comment,
  [3551] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 1,
      aux_sym_from_instruction_token2,
    STATE(157), 1,
      sym_comment,
  [3567] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      sym_variable,
    STATE(158), 1,
      sym_comment,
  [3583] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    STATE(159), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3597] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    ACTIONS(590), 1,
      sym_variable,
    STATE(160), 1,
      sym_comment,
  [3613] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      aux_sym_label_pair_token1,
    STATE(161), 1,
      sym_comment,
  [3629] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym_label_pair_token1,
    STATE(162), 1,
      sym_comment,
  [3645] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(163), 1,
      sym_comment,
    STATE(236), 1,
      sym_string_array,
  [3661] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      aux_sym_image_name_token1,
    STATE(164), 1,
      sym_comment,
  [3677] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      sym_variable,
    STATE(165), 1,
      sym_comment,
  [3693] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      sym_line_continuation,
    ACTIONS(600), 1,
      anon_sym_LF,
    STATE(143), 1,
      aux_sym_shell_command_repeat2,
    STATE(166), 1,
      sym_comment,
  [3709] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      sym_variable,
    STATE(167), 1,
      sym_comment,
  [3725] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    STATE(168), 1,
      sym_comment,
    ACTIONS(606), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3737] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3751] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    ACTIONS(610), 1,
      sym_variable,
    STATE(170), 1,
      sym_comment,
  [3767] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3781] = 5,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      aux_sym_from_instruction_token2,
    STATE(172), 1,
      sym_comment,
  [3797] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      sym__non_newline_whitespace,
    STATE(173), 1,
      sym_comment,
  [3810] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      sym__non_newline_whitespace,
    STATE(174), 1,
      sym_comment,
  [3823] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_LF,
    STATE(175), 1,
      sym_comment,
  [3836] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_comment,
  [3849] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      anon_sym_LF,
    STATE(177), 1,
      sym_comment,
  [3862] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      sym_line_continuation,
    STATE(178), 1,
      sym_comment,
  [3875] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_comment,
  [3888] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(632), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_comment,
  [3901] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(634), 1,
      aux_sym_param_token1,
    STATE(181), 1,
      sym_comment,
  [3914] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(570), 1,
      anon_sym_EQ,
    STATE(182), 1,
      sym_comment,
  [3927] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_comment,
  [3940] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(638), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_comment,
  [3953] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_EQ,
    STATE(185), 1,
      sym_comment,
  [3966] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      aux_sym_arg_instruction_token2,
    STATE(186), 1,
      sym_comment,
  [3979] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(644), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym_comment,
  [3992] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      aux_sym_param_token1,
    STATE(188), 1,
      sym_comment,
  [4005] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_comment,
  [4018] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(650), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_comment,
  [4031] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_comment,
  [4044] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(654), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_comment,
  [4057] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      ts_builtin_sym_end,
    STATE(193), 1,
      sym_comment,
  [4070] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_comment,
  [4083] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_comment,
  [4096] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(662), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(196), 1,
      sym_comment,
  [4109] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(664), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_comment,
  [4122] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      sym__non_newline_whitespace,
    STATE(198), 1,
      sym_comment,
  [4135] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_comment,
  [4148] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      sym_line_continuation,
    STATE(200), 1,
      sym_comment,
  [4161] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(201), 1,
      sym_comment,
  [4174] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      sym__non_newline_whitespace,
    STATE(202), 1,
      sym_comment,
  [4187] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      sym__non_newline_whitespace,
    STATE(203), 1,
      sym_comment,
  [4200] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(678), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_comment,
  [4213] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      sym__non_newline_whitespace,
    STATE(205), 1,
      sym_comment,
  [4226] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(682), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_comment,
  [4239] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_comment,
  [4252] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(686), 1,
      anon_sym_LF,
    STATE(208), 1,
      sym_comment,
  [4265] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_comment,
  [4278] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(690), 1,
      sym__non_newline_whitespace,
    STATE(210), 1,
      sym_comment,
  [4291] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      sym__non_newline_whitespace,
    STATE(211), 1,
      sym_comment,
  [4304] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(694), 1,
      sym__non_newline_whitespace,
    STATE(212), 1,
      sym_comment,
  [4317] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(696), 1,
      sym__non_newline_whitespace,
    STATE(213), 1,
      sym_comment,
  [4330] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(698), 1,
      sym__non_newline_whitespace,
    STATE(214), 1,
      sym_comment,
  [4343] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      sym__non_newline_whitespace,
    STATE(215), 1,
      sym_comment,
  [4356] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(702), 1,
      sym__non_newline_whitespace,
    STATE(216), 1,
      sym_comment,
  [4369] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      sym__non_newline_whitespace,
    STATE(217), 1,
      sym_comment,
  [4382] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(706), 1,
      anon_sym_LF,
    STATE(218), 1,
      sym_comment,
  [4395] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      sym__non_newline_whitespace,
    STATE(219), 1,
      sym_comment,
  [4408] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(710), 1,
      anon_sym_LF,
    STATE(220), 1,
      sym_comment,
  [4421] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(712), 1,
      sym__non_newline_whitespace,
    STATE(221), 1,
      sym_comment,
  [4434] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_comment,
  [4447] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(716), 1,
      aux_sym_param_token2,
    STATE(223), 1,
      sym_comment,
  [4460] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(718), 1,
      sym__non_newline_whitespace,
    STATE(224), 1,
      sym_comment,
  [4473] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(720), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym_comment,
  [4486] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(722), 1,
      sym__non_newline_whitespace,
    STATE(226), 1,
      sym_comment,
  [4499] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_comment,
  [4512] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      aux_sym_param_token2,
    STATE(228), 1,
      sym_comment,
  [4525] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(728), 1,
      sym__non_newline_whitespace,
    STATE(229), 1,
      sym_comment,
  [4538] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      aux_sym_param_token2,
    STATE(230), 1,
      sym_comment,
  [4551] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4564] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_comment,
  [4577] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
  [4590] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(738), 1,
      anon_sym_LF,
    STATE(234), 1,
      sym_comment,
  [4603] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_comment,
  [4616] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(236), 1,
      sym_comment,
  [4629] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
  [4642] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(746), 1,
      aux_sym_expansion_token1,
    STATE(238), 1,
      sym_comment,
  [4655] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [4668] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(750), 1,
      anon_sym_EQ,
    STATE(240), 1,
      sym_comment,
  [4681] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_comment,
  [4694] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(754), 1,
      sym__non_newline_whitespace,
    STATE(242), 1,
      sym_comment,
  [4707] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_comment,
  [4720] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(244), 1,
      sym_comment,
  [4733] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_comment,
  [4746] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(762), 1,
      sym__non_newline_whitespace,
    STATE(246), 1,
      sym_comment,
  [4759] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_comment,
  [4772] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(766), 1,
      aux_sym_expansion_token1,
    STATE(248), 1,
      sym_comment,
  [4785] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(768), 1,
      anon_sym_EQ,
    STATE(249), 1,
      sym_comment,
  [4798] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(770), 1,
      aux_sym_expansion_token1,
    STATE(250), 1,
      sym_comment,
  [4811] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(772), 1,
      anon_sym_EQ,
    STATE(251), 1,
      sym_comment,
  [4824] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(774), 1,
      aux_sym_expansion_token1,
    STATE(252), 1,
      sym_comment,
  [4837] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(776), 1,
      aux_sym_expansion_token1,
    STATE(253), 1,
      sym_comment,
  [4850] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(778), 1,
      aux_sym_expansion_token1,
    STATE(254), 1,
      sym_comment,
  [4863] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(780), 1,
      aux_sym_expansion_token1,
    STATE(255), 1,
      sym_comment,
  [4876] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(782), 1,
      aux_sym_expansion_token1,
    STATE(256), 1,
      sym_comment,
  [4889] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(784), 1,
      aux_sym_expansion_token1,
    STATE(257), 1,
      sym_comment,
  [4902] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(786), 1,
      aux_sym_expansion_token1,
    STATE(258), 1,
      sym_comment,
  [4915] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(788), 1,
      aux_sym_expansion_token1,
    STATE(259), 1,
      sym_comment,
  [4928] = 4,
    ACTIONS(105), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_line_continuation,
    ACTIONS(790), 1,
      aux_sym_expansion_token1,
    STATE(260), 1,
      sym_comment,
  [4941] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(792), 1,
      aux_sym_param_token1,
    STATE(261), 1,
      sym_comment,
  [4954] = 1,
    ACTIONS(794), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 271,
  [SMALL_STATE(6)] = 302,
  [SMALL_STATE(7)] = 334,
  [SMALL_STATE(8)] = 362,
  [SMALL_STATE(9)] = 396,
  [SMALL_STATE(10)] = 426,
  [SMALL_STATE(11)] = 458,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 522,
  [SMALL_STATE(14)] = 551,
  [SMALL_STATE(15)] = 578,
  [SMALL_STATE(16)] = 609,
  [SMALL_STATE(17)] = 636,
  [SMALL_STATE(18)] = 667,
  [SMALL_STATE(19)] = 694,
  [SMALL_STATE(20)] = 721,
  [SMALL_STATE(21)] = 750,
  [SMALL_STATE(22)] = 777,
  [SMALL_STATE(23)] = 806,
  [SMALL_STATE(24)] = 833,
  [SMALL_STATE(25)] = 859,
  [SMALL_STATE(26)] = 885,
  [SMALL_STATE(27)] = 911,
  [SMALL_STATE(28)] = 939,
  [SMALL_STATE(29)] = 967,
  [SMALL_STATE(30)] = 995,
  [SMALL_STATE(31)] = 1023,
  [SMALL_STATE(32)] = 1051,
  [SMALL_STATE(33)] = 1079,
  [SMALL_STATE(34)] = 1103,
  [SMALL_STATE(35)] = 1123,
  [SMALL_STATE(36)] = 1147,
  [SMALL_STATE(37)] = 1167,
  [SMALL_STATE(38)] = 1195,
  [SMALL_STATE(39)] = 1221,
  [SMALL_STATE(40)] = 1249,
  [SMALL_STATE(41)] = 1277,
  [SMALL_STATE(42)] = 1305,
  [SMALL_STATE(43)] = 1333,
  [SMALL_STATE(44)] = 1361,
  [SMALL_STATE(45)] = 1387,
  [SMALL_STATE(46)] = 1415,
  [SMALL_STATE(47)] = 1443,
  [SMALL_STATE(48)] = 1471,
  [SMALL_STATE(49)] = 1491,
  [SMALL_STATE(50)] = 1516,
  [SMALL_STATE(51)] = 1537,
  [SMALL_STATE(52)] = 1556,
  [SMALL_STATE(53)] = 1575,
  [SMALL_STATE(54)] = 1600,
  [SMALL_STATE(55)] = 1619,
  [SMALL_STATE(56)] = 1644,
  [SMALL_STATE(57)] = 1667,
  [SMALL_STATE(58)] = 1692,
  [SMALL_STATE(59)] = 1711,
  [SMALL_STATE(60)] = 1736,
  [SMALL_STATE(61)] = 1755,
  [SMALL_STATE(62)] = 1774,
  [SMALL_STATE(63)] = 1793,
  [SMALL_STATE(64)] = 1818,
  [SMALL_STATE(65)] = 1841,
  [SMALL_STATE(66)] = 1866,
  [SMALL_STATE(67)] = 1889,
  [SMALL_STATE(68)] = 1908,
  [SMALL_STATE(69)] = 1933,
  [SMALL_STATE(70)] = 1958,
  [SMALL_STATE(71)] = 1983,
  [SMALL_STATE(72)] = 2006,
  [SMALL_STATE(73)] = 2025,
  [SMALL_STATE(74)] = 2044,
  [SMALL_STATE(75)] = 2063,
  [SMALL_STATE(76)] = 2088,
  [SMALL_STATE(77)] = 2107,
  [SMALL_STATE(78)] = 2129,
  [SMALL_STATE(79)] = 2145,
  [SMALL_STATE(80)] = 2167,
  [SMALL_STATE(81)] = 2185,
  [SMALL_STATE(82)] = 2207,
  [SMALL_STATE(83)] = 2225,
  [SMALL_STATE(84)] = 2247,
  [SMALL_STATE(85)] = 2265,
  [SMALL_STATE(86)] = 2285,
  [SMALL_STATE(87)] = 2303,
  [SMALL_STATE(88)] = 2321,
  [SMALL_STATE(89)] = 2343,
  [SMALL_STATE(90)] = 2365,
  [SMALL_STATE(91)] = 2387,
  [SMALL_STATE(92)] = 2409,
  [SMALL_STATE(93)] = 2429,
  [SMALL_STATE(94)] = 2451,
  [SMALL_STATE(95)] = 2473,
  [SMALL_STATE(96)] = 2495,
  [SMALL_STATE(97)] = 2517,
  [SMALL_STATE(98)] = 2539,
  [SMALL_STATE(99)] = 2557,
  [SMALL_STATE(100)] = 2575,
  [SMALL_STATE(101)] = 2597,
  [SMALL_STATE(102)] = 2619,
  [SMALL_STATE(103)] = 2641,
  [SMALL_STATE(104)] = 2661,
  [SMALL_STATE(105)] = 2679,
  [SMALL_STATE(106)] = 2697,
  [SMALL_STATE(107)] = 2717,
  [SMALL_STATE(108)] = 2739,
  [SMALL_STATE(109)] = 2757,
  [SMALL_STATE(110)] = 2774,
  [SMALL_STATE(111)] = 2791,
  [SMALL_STATE(112)] = 2810,
  [SMALL_STATE(113)] = 2825,
  [SMALL_STATE(114)] = 2842,
  [SMALL_STATE(115)] = 2861,
  [SMALL_STATE(116)] = 2878,
  [SMALL_STATE(117)] = 2895,
  [SMALL_STATE(118)] = 2912,
  [SMALL_STATE(119)] = 2931,
  [SMALL_STATE(120)] = 2948,
  [SMALL_STATE(121)] = 2967,
  [SMALL_STATE(122)] = 2984,
  [SMALL_STATE(123)] = 3001,
  [SMALL_STATE(124)] = 3018,
  [SMALL_STATE(125)] = 3037,
  [SMALL_STATE(126)] = 3054,
  [SMALL_STATE(127)] = 3071,
  [SMALL_STATE(128)] = 3088,
  [SMALL_STATE(129)] = 3105,
  [SMALL_STATE(130)] = 3124,
  [SMALL_STATE(131)] = 3141,
  [SMALL_STATE(132)] = 3158,
  [SMALL_STATE(133)] = 3175,
  [SMALL_STATE(134)] = 3191,
  [SMALL_STATE(135)] = 3207,
  [SMALL_STATE(136)] = 3223,
  [SMALL_STATE(137)] = 3239,
  [SMALL_STATE(138)] = 3255,
  [SMALL_STATE(139)] = 3271,
  [SMALL_STATE(140)] = 3287,
  [SMALL_STATE(141)] = 3301,
  [SMALL_STATE(142)] = 3317,
  [SMALL_STATE(143)] = 3333,
  [SMALL_STATE(144)] = 3349,
  [SMALL_STATE(145)] = 3363,
  [SMALL_STATE(146)] = 3379,
  [SMALL_STATE(147)] = 3395,
  [SMALL_STATE(148)] = 3411,
  [SMALL_STATE(149)] = 3425,
  [SMALL_STATE(150)] = 3441,
  [SMALL_STATE(151)] = 3457,
  [SMALL_STATE(152)] = 3473,
  [SMALL_STATE(153)] = 3487,
  [SMALL_STATE(154)] = 3503,
  [SMALL_STATE(155)] = 3519,
  [SMALL_STATE(156)] = 3535,
  [SMALL_STATE(157)] = 3551,
  [SMALL_STATE(158)] = 3567,
  [SMALL_STATE(159)] = 3583,
  [SMALL_STATE(160)] = 3597,
  [SMALL_STATE(161)] = 3613,
  [SMALL_STATE(162)] = 3629,
  [SMALL_STATE(163)] = 3645,
  [SMALL_STATE(164)] = 3661,
  [SMALL_STATE(165)] = 3677,
  [SMALL_STATE(166)] = 3693,
  [SMALL_STATE(167)] = 3709,
  [SMALL_STATE(168)] = 3725,
  [SMALL_STATE(169)] = 3737,
  [SMALL_STATE(170)] = 3751,
  [SMALL_STATE(171)] = 3767,
  [SMALL_STATE(172)] = 3781,
  [SMALL_STATE(173)] = 3797,
  [SMALL_STATE(174)] = 3810,
  [SMALL_STATE(175)] = 3823,
  [SMALL_STATE(176)] = 3836,
  [SMALL_STATE(177)] = 3849,
  [SMALL_STATE(178)] = 3862,
  [SMALL_STATE(179)] = 3875,
  [SMALL_STATE(180)] = 3888,
  [SMALL_STATE(181)] = 3901,
  [SMALL_STATE(182)] = 3914,
  [SMALL_STATE(183)] = 3927,
  [SMALL_STATE(184)] = 3940,
  [SMALL_STATE(185)] = 3953,
  [SMALL_STATE(186)] = 3966,
  [SMALL_STATE(187)] = 3979,
  [SMALL_STATE(188)] = 3992,
  [SMALL_STATE(189)] = 4005,
  [SMALL_STATE(190)] = 4018,
  [SMALL_STATE(191)] = 4031,
  [SMALL_STATE(192)] = 4044,
  [SMALL_STATE(193)] = 4057,
  [SMALL_STATE(194)] = 4070,
  [SMALL_STATE(195)] = 4083,
  [SMALL_STATE(196)] = 4096,
  [SMALL_STATE(197)] = 4109,
  [SMALL_STATE(198)] = 4122,
  [SMALL_STATE(199)] = 4135,
  [SMALL_STATE(200)] = 4148,
  [SMALL_STATE(201)] = 4161,
  [SMALL_STATE(202)] = 4174,
  [SMALL_STATE(203)] = 4187,
  [SMALL_STATE(204)] = 4200,
  [SMALL_STATE(205)] = 4213,
  [SMALL_STATE(206)] = 4226,
  [SMALL_STATE(207)] = 4239,
  [SMALL_STATE(208)] = 4252,
  [SMALL_STATE(209)] = 4265,
  [SMALL_STATE(210)] = 4278,
  [SMALL_STATE(211)] = 4291,
  [SMALL_STATE(212)] = 4304,
  [SMALL_STATE(213)] = 4317,
  [SMALL_STATE(214)] = 4330,
  [SMALL_STATE(215)] = 4343,
  [SMALL_STATE(216)] = 4356,
  [SMALL_STATE(217)] = 4369,
  [SMALL_STATE(218)] = 4382,
  [SMALL_STATE(219)] = 4395,
  [SMALL_STATE(220)] = 4408,
  [SMALL_STATE(221)] = 4421,
  [SMALL_STATE(222)] = 4434,
  [SMALL_STATE(223)] = 4447,
  [SMALL_STATE(224)] = 4460,
  [SMALL_STATE(225)] = 4473,
  [SMALL_STATE(226)] = 4486,
  [SMALL_STATE(227)] = 4499,
  [SMALL_STATE(228)] = 4512,
  [SMALL_STATE(229)] = 4525,
  [SMALL_STATE(230)] = 4538,
  [SMALL_STATE(231)] = 4551,
  [SMALL_STATE(232)] = 4564,
  [SMALL_STATE(233)] = 4577,
  [SMALL_STATE(234)] = 4590,
  [SMALL_STATE(235)] = 4603,
  [SMALL_STATE(236)] = 4616,
  [SMALL_STATE(237)] = 4629,
  [SMALL_STATE(238)] = 4642,
  [SMALL_STATE(239)] = 4655,
  [SMALL_STATE(240)] = 4668,
  [SMALL_STATE(241)] = 4681,
  [SMALL_STATE(242)] = 4694,
  [SMALL_STATE(243)] = 4707,
  [SMALL_STATE(244)] = 4720,
  [SMALL_STATE(245)] = 4733,
  [SMALL_STATE(246)] = 4746,
  [SMALL_STATE(247)] = 4759,
  [SMALL_STATE(248)] = 4772,
  [SMALL_STATE(249)] = 4785,
  [SMALL_STATE(250)] = 4798,
  [SMALL_STATE(251)] = 4811,
  [SMALL_STATE(252)] = 4824,
  [SMALL_STATE(253)] = 4837,
  [SMALL_STATE(254)] = 4850,
  [SMALL_STATE(255)] = 4863,
  [SMALL_STATE(256)] = 4876,
  [SMALL_STATE(257)] = 4889,
  [SMALL_STATE(258)] = 4902,
  [SMALL_STATE(259)] = 4915,
  [SMALL_STATE(260)] = 4928,
  [SMALL_STATE(261)] = 4941,
  [SMALL_STATE(262)] = 4954,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(165),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(48),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(149),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(74),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(167),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(67),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(67),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(170),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(58),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(58),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(160),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(80),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(80),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(137),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(50),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(78),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(137),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(98),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(135),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(158),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(84),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(201),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(147),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(109),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 11),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(115),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(136),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(131),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(145),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(122),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(133),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(188),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(182),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(112),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(185),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(96),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(141),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(21),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 14),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 12),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [656] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3, .production_id = 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 7),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
