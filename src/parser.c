#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 263
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
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
  aux_sym__spaced_env_pair_token1 = 35,
  aux_sym__env_key_token1 = 36,
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
  sym__env_key = 88,
  sym_expose_port = 89,
  sym_label_pair = 90,
  sym_image_spec = 91,
  sym_image_name = 92,
  sym_image_tag = 93,
  sym_image_digest = 94,
  sym_param = 95,
  sym_image_alias = 96,
  sym_string_array = 97,
  sym_shell_command = 98,
  sym_shell_fragment = 99,
  sym__comment_line = 100,
  sym__anon_comment = 101,
  sym_double_quoted_string = 102,
  sym_unquoted_string = 103,
  sym_comment = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_label_instruction_repeat1 = 106,
  aux_sym_expose_instruction_repeat1 = 107,
  aux_sym_env_instruction_repeat1 = 108,
  aux_sym_volume_instruction_repeat1 = 109,
  aux_sym_healthcheck_instruction_repeat1 = 110,
  aux_sym_path_repeat1 = 111,
  aux_sym_image_name_repeat1 = 112,
  aux_sym_image_tag_repeat1 = 113,
  aux_sym_image_digest_repeat1 = 114,
  aux_sym_image_alias_repeat1 = 115,
  aux_sym_string_array_repeat1 = 116,
  aux_sym_shell_command_repeat1 = 117,
  aux_sym_shell_command_repeat2 = 118,
  aux_sym_shell_fragment_repeat1 = 119,
  aux_sym_double_quoted_string_repeat1 = 120,
  aux_sym_unquoted_string_repeat1 = 121,
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
  [aux_sym__spaced_env_pair_token1] = "_spaced_env_pair_token1",
  [aux_sym__env_key_token1] = "unquoted_string",
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
  [sym__env_key] = "_env_key",
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
  [aux_sym__spaced_env_pair_token1] = aux_sym__spaced_env_pair_token1,
  [aux_sym__env_key_token1] = sym_unquoted_string,
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
  [sym__env_key] = sym__env_key,
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
  [aux_sym__spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__env_key_token1] = {
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
  [sym__env_key] = {
    .visible = false,
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
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == ',') ADVANCE(219);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '@') ADVANCE(209);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '{') ADVANCE(190);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == 'U') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '@') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(221);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '@') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(238);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(238);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '@') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(185);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(212);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(179);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 83:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 87:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 95:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 119:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 122:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      END_STATE();
    case 137:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 139:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 140:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 141:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
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
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == ',') ADVANCE(219);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(113);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 151:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == ',') ADVANCE(219);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(128);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(113);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 152:
      if (eof) ADVANCE(153);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(225);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == ',') ADVANCE(219);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(186);
      if (lookahead == ']') ADVANCE(220);
      if (lookahead == '{') ADVANCE(190);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(170);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(238);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(188);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(193);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 150},
  [2] = {.lex_state = 150},
  [3] = {.lex_state = 150},
  [4] = {.lex_state = 150},
  [5] = {.lex_state = 150},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 150},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 48},
  [64] = {.lex_state = 48},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 33},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 150},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 150},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 28},
  [88] = {.lex_state = 34},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 150},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 34},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 28},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 47},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 25},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 150},
  [113] = {.lex_state = 48},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 150},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 150},
  [123] = {.lex_state = 48},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 150},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 22},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 48},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 38},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 38},
  [137] = {.lex_state = 150},
  [138] = {.lex_state = 38},
  [139] = {.lex_state = 38},
  [140] = {.lex_state = 150},
  [141] = {.lex_state = 38},
  [142] = {.lex_state = 38},
  [143] = {.lex_state = 38},
  [144] = {.lex_state = 38},
  [145] = {.lex_state = 38},
  [146] = {.lex_state = 38},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 38},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 38},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 15},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 36},
  [157] = {.lex_state = 15},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 25},
  [160] = {.lex_state = 15},
  [161] = {.lex_state = 150},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 46},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 150},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 150},
  [169] = {.lex_state = 28},
  [170] = {.lex_state = 150},
  [171] = {.lex_state = 37},
  [172] = {.lex_state = 16},
  [173] = {.lex_state = 39},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 39},
  [182] = {.lex_state = 150},
  [183] = {.lex_state = 39},
  [184] = {.lex_state = 150},
  [185] = {.lex_state = 39},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 39},
  [188] = {.lex_state = 39},
  [189] = {.lex_state = 39},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 39},
  [192] = {.lex_state = 39},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 150},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 39},
  [204] = {.lex_state = 39},
  [205] = {.lex_state = 150},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 39},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 49},
  [210] = {.lex_state = 39},
  [211] = {.lex_state = 150},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 183},
  [216] = {.lex_state = 43},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 44},
  [220] = {.lex_state = 43},
  [221] = {.lex_state = 39},
  [222] = {.lex_state = 150},
  [223] = {.lex_state = 50},
  [224] = {.lex_state = 39},
  [225] = {.lex_state = 39},
  [226] = {.lex_state = 39},
  [227] = {.lex_state = 150},
  [228] = {.lex_state = 50},
  [229] = {.lex_state = 39},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 150},
  [232] = {.lex_state = 183},
  [233] = {.lex_state = 150},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 150},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 150},
  [238] = {.lex_state = 183},
  [239] = {.lex_state = 150},
  [240] = {.lex_state = 50},
  [241] = {.lex_state = 150},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 150},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 150},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 150},
  [248] = {.lex_state = 49},
  [249] = {.lex_state = 150},
  [250] = {.lex_state = 49},
  [251] = {.lex_state = 150},
  [252] = {.lex_state = 49},
  [253] = {.lex_state = 49},
  [254] = {.lex_state = 49},
  [255] = {.lex_state = 49},
  [256] = {.lex_state = 49},
  [257] = {.lex_state = 49},
  [258] = {.lex_state = 49},
  [259] = {.lex_state = 49},
  [260] = {.lex_state = 49},
  [261] = {.lex_state = 43},
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_param_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(244),
    [sym__instruction] = STATE(190),
    [sym_from_instruction] = STATE(197),
    [sym_run_instruction] = STATE(197),
    [sym_cmd_instruction] = STATE(197),
    [sym_label_instruction] = STATE(197),
    [sym_expose_instruction] = STATE(197),
    [sym_env_instruction] = STATE(197),
    [sym_add_instruction] = STATE(197),
    [sym_copy_instruction] = STATE(197),
    [sym_entrypoint_instruction] = STATE(197),
    [sym_volume_instruction] = STATE(197),
    [sym_user_instruction] = STATE(197),
    [sym_workdir_instruction] = STATE(197),
    [sym_arg_instruction] = STATE(197),
    [sym_onbuild_instruction] = STATE(197),
    [sym_stopsignal_instruction] = STATE(197),
    [sym_healthcheck_instruction] = STATE(197),
    [sym_shell_instruction] = STATE(197),
    [sym_maintainer_instruction] = STATE(197),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
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
  [0] = 24,
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
    ACTIONS(98), 1,
      aux_sym_maintainer_instruction_token1,
    STATE(190), 1,
      sym__instruction,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(197), 18,
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
  [91] = 25,
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
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(190), 1,
      sym__instruction,
    STATE(197), 18,
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
    STATE(195), 1,
      sym__instruction,
    STATE(197), 18,
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
    ACTIONS(45), 19,
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
  [302] = 9,
    ACTIONS(105), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(107), 1,
      anon_sym_DOLLAR,
    ACTIONS(109), 1,
      aux_sym_image_name_token1,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_image_name_repeat1,
    STATE(39), 1,
      sym_expansion,
    ACTIONS(103), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [332] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(61), 1,
      sym_expansion,
    STATE(174), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [364] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(61), 1,
      sym_expansion,
    STATE(200), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [396] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      aux_sym_image_name_token1,
    STATE(39), 1,
      sym_expansion,
    STATE(9), 2,
      sym_comment,
      aux_sym_image_name_repeat1,
    ACTIONS(123), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [424] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(74), 1,
      sym_expansion,
    STATE(152), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [456] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(109), 1,
      aux_sym_image_name_token1,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_DASH_DASH,
    STATE(6), 1,
      aux_sym_image_name_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(31), 1,
      sym_image_name,
    STATE(32), 1,
      sym_param,
    STATE(39), 1,
      sym_expansion,
    STATE(153), 1,
      sym_image_spec,
  [490] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(61), 1,
      sym_expansion,
    STATE(149), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [522] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym_shell_fragment,
    ACTIONS(147), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(202), 2,
      sym_string_array,
      sym_shell_command,
  [549] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(151), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      aux_sym_label_pair_token1,
    ACTIONS(156), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym_expansion,
    STATE(14), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [578] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(154), 1,
      aux_sym__env_key_token1,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(165), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(168), 1,
      anon_sym_BSLASH,
    STATE(74), 1,
      sym_expansion,
    STATE(15), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [607] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym_shell_fragment,
    ACTIONS(147), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(212), 2,
      sym_string_array,
      sym_shell_command,
  [634] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(173), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(175), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      aux_sym_image_tag_token1,
    STATE(53), 1,
      sym_expansion,
    ACTIONS(171), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(17), 2,
      sym_comment,
      aux_sym_image_tag_repeat1,
  [661] = 10,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    ACTIONS(185), 1,
      aux_sym_label_pair_token1,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(61), 1,
      sym_expansion,
  [692] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(177), 1,
      sym_shell_fragment,
    STATE(234), 1,
      sym__anon_comment,
    ACTIONS(147), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(71), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [719] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym_shell_fragment,
    ACTIONS(147), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(214), 2,
      sym_string_array,
      sym_shell_command,
  [746] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(234), 1,
      sym__anon_comment,
    STATE(236), 1,
      sym_shell_fragment,
    ACTIONS(147), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(19), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [773] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(191), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      aux_sym_image_tag_token1,
    STATE(17), 1,
      aux_sym_image_tag_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(53), 1,
      sym_expansion,
    ACTIONS(189), 2,
      anon_sym_LF,
      anon_sym_AT,
  [802] = 10,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      aux_sym__env_key_token1,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(74), 1,
      sym_expansion,
  [833] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      aux_sym_path_token2,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_path_repeat1,
    STATE(97), 1,
      sym_expansion,
    ACTIONS(199), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [859] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(210), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_expansion,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(25), 2,
      aux_sym__user_name_group,
      sym_comment,
  [883] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    STATE(26), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(89), 1,
      sym_expansion,
  [911] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(223), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(225), 1,
      anon_sym_DOLLAR,
    ACTIONS(227), 1,
      aux_sym_image_digest_token1,
    STATE(27), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_image_digest_repeat1,
    STATE(99), 1,
      sym_expansion,
  [939] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(89), 1,
      sym_expansion,
  [967] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(89), 1,
      sym_expansion,
  [995] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LF,
    ACTIONS(235), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(237), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      aux_sym_image_digest_token1,
    STATE(99), 1,
      sym_expansion,
    STATE(30), 2,
      sym_comment,
      aux_sym_image_digest_repeat1,
  [1021] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(245), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(249), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym_comment,
    STATE(102), 1,
      sym_image_tag,
    STATE(132), 1,
      sym_image_digest,
  [1049] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(109), 1,
      aux_sym_image_name_token1,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      anon_sym_DOLLAR,
    STATE(6), 1,
      aux_sym_image_name_repeat1,
    STATE(31), 1,
      sym_image_name,
    STATE(32), 1,
      sym_comment,
    STATE(39), 1,
      sym_expansion,
    STATE(133), 1,
      sym_image_spec,
  [1077] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 1,
      anon_sym_DOLLAR,
    ACTIONS(255), 1,
      aux_sym_expose_port_token1,
    STATE(33), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(109), 2,
      sym_expansion,
      sym_expose_port,
  [1103] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(265), 1,
      sym_escape_sequence,
    STATE(89), 1,
      sym_expansion,
    STATE(34), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [1129] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      aux_sym_path_token1,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(272), 1,
      anon_sym_DASH_DASH,
    STATE(35), 1,
      sym_comment,
    STATE(50), 1,
      sym_expansion,
    STATE(85), 1,
      sym_param,
    STATE(204), 1,
      sym_path,
  [1157] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      aux_sym_path_token1,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(272), 1,
      anon_sym_DASH_DASH,
    STATE(36), 1,
      sym_comment,
    STATE(50), 1,
      sym_expansion,
    STATE(87), 1,
      sym_param,
    STATE(203), 1,
      sym_path,
  [1185] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(276), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1205] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      aux_sym_path_token1,
    ACTIONS(280), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      sym_expansion,
    STATE(38), 1,
      sym_comment,
    STATE(130), 1,
      sym_path,
    STATE(199), 1,
      sym_string_array,
  [1233] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(284), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1253] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      aux_sym_path_token2,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_path_repeat1,
    STATE(97), 1,
      sym_expansion,
    ACTIONS(286), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1279] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(290), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1299] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(294), 1,
      aux_sym_path_token2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    STATE(97), 1,
      sym_expansion,
    ACTIONS(292), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(42), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1323] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(89), 1,
      sym_expansion,
  [1351] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(302), 1,
      anon_sym_NONE,
    ACTIONS(304), 1,
      anon_sym_DASH_DASH,
    STATE(44), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(166), 1,
      sym_param,
    STATE(194), 1,
      sym_cmd_instruction,
  [1379] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(308), 1,
      anon_sym_DOLLAR,
    ACTIONS(311), 1,
      aux_sym_expose_port_token1,
    STATE(45), 2,
      sym_comment,
      aux_sym_expose_instruction_repeat1,
    STATE(109), 2,
      sym_expansion,
      sym_expose_port,
  [1403] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_DOLLAR,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_COLON,
    ACTIONS(318), 1,
      aux_sym__user_name_group_token1,
    STATE(25), 1,
      aux_sym__user_name_group,
    STATE(46), 1,
      sym_comment,
    STATE(90), 1,
      sym_expansion,
  [1431] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(89), 1,
      sym_expansion,
  [1459] = 9,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(89), 1,
      sym_expansion,
  [1487] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(326), 1,
      aux_sym_path_token2,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_path_repeat1,
    STATE(127), 1,
      sym_expansion,
  [1512] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      aux_sym_path_token2,
    ACTIONS(332), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      sym__non_newline_whitespace,
    STATE(50), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_path_repeat1,
    STATE(113), 1,
      sym_expansion,
  [1537] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(290), 3,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
  [1556] = 6,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_LF,
    STATE(52), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(340), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1577] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(344), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1596] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(346), 1,
      aux_sym__env_key_token1,
    STATE(54), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_env_instruction_repeat1,
    STATE(157), 1,
      sym_env_pair,
    STATE(158), 1,
      sym__env_key,
    STATE(206), 1,
      sym__spaced_env_pair,
  [1621] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(350), 1,
      anon_sym_DOLLAR,
    ACTIONS(352), 1,
      aux_sym_image_alias_token1,
    STATE(55), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_image_alias_repeat1,
    STATE(128), 1,
      sym_expansion,
  [1646] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      anon_sym_DOLLAR,
    ACTIONS(356), 1,
      aux_sym_image_alias_token1,
    STATE(55), 1,
      aux_sym_image_alias_repeat1,
    STATE(56), 1,
      sym_comment,
    STATE(128), 1,
      sym_expansion,
    STATE(193), 1,
      sym_image_alias,
  [1671] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(276), 3,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
  [1690] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(360), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(363), 1,
      anon_sym_DOLLAR,
    STATE(126), 1,
      sym_expansion,
    STATE(58), 2,
      aux_sym__stopsignal_value,
      sym_comment,
  [1713] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(290), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1732] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(276), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1751] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(368), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1770] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(288), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1789] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(370), 1,
      aux_sym_path_token2,
    ACTIONS(373), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      sym__non_newline_whitespace,
    STATE(113), 1,
      sym_expansion,
    STATE(63), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1812] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(324), 1,
      sym__non_newline_whitespace,
    ACTIONS(330), 1,
      aux_sym_path_token2,
    ACTIONS(332), 1,
      anon_sym_DOLLAR,
    STATE(63), 1,
      aux_sym_path_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(113), 1,
      sym_expansion,
  [1837] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(378), 1,
      anon_sym_LF,
    ACTIONS(380), 1,
      aux_sym__env_key_token1,
    STATE(157), 1,
      sym_env_pair,
    STATE(205), 1,
      sym__env_key,
    STATE(65), 2,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [1860] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_DOLLAR,
    ACTIONS(318), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(383), 1,
      anon_sym_LF,
    STATE(25), 1,
      aux_sym__user_name_group,
    STATE(66), 1,
      sym_comment,
    STATE(90), 1,
      sym_expansion,
  [1885] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(387), 1,
      anon_sym_DOLLAR,
    ACTIONS(390), 1,
      aux_sym_image_alias_token1,
    STATE(128), 1,
      sym_expansion,
    STATE(67), 2,
      sym_comment,
      aux_sym_image_alias_repeat1,
  [1908] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(290), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1927] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(276), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1946] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      anon_sym_DOLLAR,
    ACTIONS(356), 1,
      aux_sym_image_alias_token1,
    STATE(55), 1,
      aux_sym_image_alias_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(128), 1,
      sym_expansion,
    STATE(246), 1,
      sym_image_alias,
  [1971] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym__anon_comment,
    ACTIONS(393), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(71), 3,
      sym__comment_line,
      sym_comment,
      aux_sym_shell_command_repeat1,
  [1990] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(304), 1,
      anon_sym_DASH_DASH,
    STATE(72), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(166), 1,
      sym_param,
    STATE(230), 1,
      sym_cmd_instruction,
  [2015] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(274), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [2034] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(74), 1,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(368), 3,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
  [2053] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(400), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(402), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      aux_sym__stopsignal_value,
    STATE(75), 1,
      sym_comment,
    STATE(126), 1,
      sym_expansion,
  [2078] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      aux_sym_expose_port_token1,
    STATE(33), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(109), 2,
      sym_expansion,
      sym_expose_port,
  [2101] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      aux_sym_path_token2,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    STATE(127), 1,
      sym_expansion,
    STATE(77), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [2124] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      aux_sym_path_token2,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      anon_sym_LF,
    STATE(49), 1,
      aux_sym_path_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(127), 1,
      sym_expansion,
  [2149] = 8,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      aux_sym__env_key_token1,
    STATE(65), 1,
      aux_sym_env_instruction_repeat1,
    STATE(79), 1,
      sym_comment,
    STATE(157), 1,
      sym_env_pair,
    STATE(205), 1,
      sym__env_key,
  [2174] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(420), 1,
      aux_sym_label_pair_token1,
    STATE(80), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_label_instruction_repeat1,
    STATE(155), 1,
      sym_label_pair,
  [2196] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      aux_sym_path_token1,
    ACTIONS(280), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      sym_expansion,
    STATE(81), 1,
      sym_comment,
    STATE(159), 1,
      sym_path,
  [2218] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(318), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      aux_sym__user_name_group,
    STATE(82), 1,
      sym_comment,
    STATE(90), 1,
      sym_expansion,
  [2240] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      aux_sym_path_token1,
    ACTIONS(424), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    STATE(83), 1,
      sym_comment,
    STATE(198), 1,
      sym_path,
  [2262] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(84), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2278] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      aux_sym_path_token1,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_expansion,
    STATE(85), 1,
      sym_comment,
    STATE(207), 1,
      sym_path,
  [2300] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2316] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      aux_sym_path_token1,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      sym_expansion,
    STATE(87), 1,
      sym_comment,
    STATE(210), 1,
      sym_path,
  [2338] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(75), 1,
      aux_sym__stopsignal_value,
    STATE(88), 1,
      sym_comment,
    STATE(126), 1,
      sym_expansion,
  [2360] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(432), 1,
      aux_sym_double_quoted_string_token1,
    STATE(89), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2378] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [2396] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(438), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(440), 1,
      anon_sym_DASH_DASH,
    STATE(166), 1,
      sym_param,
    STATE(91), 2,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [2416] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      aux_sym_double_quoted_string_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2434] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      aux_sym_double_quoted_string_token1,
    STATE(93), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2452] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(318), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      aux_sym__user_name_group,
    STATE(90), 1,
      sym_expansion,
    STATE(94), 1,
      sym_comment,
  [2474] = 6,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(445), 1,
      aux_sym_label_pair_token1,
    STATE(155), 1,
      sym_label_pair,
    STATE(95), 2,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [2494] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      aux_sym_path_token1,
    ACTIONS(424), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    STATE(96), 1,
      sym_comment,
    STATE(208), 1,
      sym_path,
  [2516] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2532] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      aux_sym_path_token1,
    ACTIONS(424), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    STATE(98), 1,
      sym_comment,
    STATE(179), 1,
      sym_path,
  [2554] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(452), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2572] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      aux_sym_image_tag_token1,
    ACTIONS(454), 1,
      anon_sym_DOLLAR,
    STATE(22), 1,
      aux_sym_image_tag_repeat1,
    STATE(53), 1,
      sym_expansion,
    STATE(100), 1,
      sym_comment,
  [2594] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      aux_sym_image_digest_token1,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym_image_digest_repeat1,
    STATE(99), 1,
      sym_expansion,
    STATE(101), 1,
      sym_comment,
  [2616] = 7,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_AT,
    ACTIONS(458), 1,
      anon_sym_LF,
    ACTIONS(460), 1,
      aux_sym_from_instruction_token2,
    STATE(102), 1,
      sym_comment,
    STATE(135), 1,
      sym_image_digest,
  [2638] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      aux_sym_path_token1,
    ACTIONS(424), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    STATE(103), 1,
      sym_comment,
    STATE(213), 1,
      sym_path,
  [2660] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(290), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2678] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(276), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2696] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      aux_sym_path_token1,
    ACTIONS(424), 1,
      anon_sym_DOLLAR,
    STATE(78), 1,
      sym_expansion,
    STATE(106), 1,
      sym_comment,
    STATE(180), 1,
      sym_path,
  [2718] = 6,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(466), 1,
      sym_line_continuation,
    STATE(107), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(464), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2738] = 5,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      sym_line_continuation,
    ACTIONS(470), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(108), 2,
      sym_comment,
      aux_sym_shell_fragment_repeat1,
  [2756] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(475), 1,
      anon_sym_LF,
    STATE(109), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2773] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(481), 1,
      sym__non_newline_whitespace,
    STATE(110), 2,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [2790] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      anon_sym_LF,
    STATE(111), 1,
      sym_comment,
    ACTIONS(290), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2807] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym_string_array_repeat1,
  [2826] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      sym__non_newline_whitespace,
    STATE(113), 1,
      sym_comment,
    ACTIONS(448), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2843] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      anon_sym_LF,
    STATE(114), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2860] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    STATE(115), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [2877] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      aux_sym_label_pair_token1,
    STATE(80), 1,
      aux_sym_label_instruction_repeat1,
    STATE(116), 1,
      sym_comment,
    STATE(155), 1,
      sym_label_pair,
  [2896] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      anon_sym_LF,
    STATE(117), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2913] = 4,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(118), 1,
      sym_comment,
    ACTIONS(499), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_line_continuation,
  [2928] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      anon_sym_LF,
    STATE(119), 1,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2945] = 6,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      sym__non_newline_whitespace,
    STATE(110), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(120), 1,
      sym_comment,
  [2964] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      anon_sym_LF,
    STATE(121), 1,
      sym_comment,
    ACTIONS(290), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2981] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_double_quoted_string,
    STATE(122), 1,
      sym_comment,
  [3000] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      sym__non_newline_whitespace,
    STATE(123), 1,
      sym_comment,
    ACTIONS(276), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3017] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_comment,
    ACTIONS(276), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [3034] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_string_array_repeat1,
    STATE(125), 1,
      sym_comment,
  [3053] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_LF,
    STATE(126), 1,
      sym_comment,
    ACTIONS(517), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [3070] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      anon_sym_LF,
    STATE(127), 1,
      sym_comment,
    ACTIONS(448), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3087] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3104] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      sym__non_newline_whitespace,
    STATE(129), 1,
      sym_comment,
    ACTIONS(290), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3121] = 6,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(507), 1,
      sym__non_newline_whitespace,
    ACTIONS(523), 1,
      anon_sym_LF,
    STATE(120), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(130), 1,
      sym_comment,
  [3140] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_comment,
    ACTIONS(276), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3157] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      aux_sym_from_instruction_token2,
    STATE(132), 1,
      sym_comment,
  [3173] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 1,
      aux_sym_from_instruction_token2,
    STATE(133), 1,
      sym_comment,
  [3189] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      sym_variable,
    STATE(134), 1,
      sym_comment,
  [3205] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(539), 1,
      aux_sym_from_instruction_token2,
    STATE(135), 1,
      sym_comment,
  [3221] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    ACTIONS(543), 1,
      sym_variable,
    STATE(136), 1,
      sym_comment,
  [3237] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3251] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      sym_variable,
    STATE(138), 1,
      sym_comment,
  [3267] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      sym_variable,
    STATE(139), 1,
      sym_comment,
  [3283] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_comment,
    STATE(170), 1,
      sym_double_quoted_string,
  [3299] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      sym_variable,
    STATE(141), 1,
      sym_comment,
  [3315] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      sym_variable,
    STATE(142), 1,
      sym_comment,
  [3331] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
    ACTIONS(565), 1,
      sym_variable,
    STATE(143), 1,
      sym_comment,
  [3347] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    ACTIONS(569), 1,
      sym_variable,
    STATE(144), 1,
      sym_comment,
  [3363] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
    ACTIONS(573), 1,
      sym_variable,
    STATE(145), 1,
      sym_comment,
  [3379] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
    ACTIONS(577), 1,
      sym_variable,
    STATE(146), 1,
      sym_comment,
  [3395] = 4,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 1,
      sym_line_continuation,
    STATE(147), 2,
      sym_comment,
      aux_sym_shell_command_repeat2,
  [3409] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      sym_variable,
    STATE(148), 1,
      sym_comment,
  [3425] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 1,
      aux_sym_label_pair_token1,
    STATE(149), 1,
      sym_comment,
  [3441] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym_variable,
    STATE(150), 1,
      sym_comment,
  [3457] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_comment,
    STATE(186), 1,
      sym_string_array,
  [3473] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 1,
      aux_sym__env_key_token1,
    STATE(152), 1,
      sym_comment,
  [3489] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      aux_sym_from_instruction_token2,
    STATE(153), 1,
      sym_comment,
  [3505] = 5,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      anon_sym_LF,
    ACTIONS(606), 1,
      sym_line_continuation,
    STATE(154), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_shell_command_repeat2,
  [3521] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      aux_sym_label_pair_token1,
    STATE(155), 1,
      sym_comment,
  [3537] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [3551] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      anon_sym_LF,
    ACTIONS(616), 1,
      aux_sym__env_key_token1,
    STATE(157), 1,
      sym_comment,
  [3567] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      anon_sym_EQ,
    ACTIONS(620), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(158), 1,
      sym_comment,
  [3583] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3597] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(624), 1,
      aux_sym__env_key_token1,
    STATE(160), 1,
      sym_comment,
  [3613] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    ACTIONS(626), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3627] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      aux_sym__env_key_token1,
    STATE(162), 1,
      sym_comment,
  [3643] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(630), 1,
      aux_sym_image_name_token1,
    STATE(163), 1,
      sym_comment,
  [3659] = 5,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      sym_line_continuation,
    ACTIONS(632), 1,
      anon_sym_LF,
    STATE(147), 1,
      aux_sym_shell_command_repeat2,
    STATE(164), 1,
      sym_comment,
  [3675] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(636), 1,
      anon_sym_EQ,
    STATE(165), 1,
      sym_comment,
  [3691] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(638), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3705] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(624), 1,
      aux_sym_label_pair_token1,
    STATE(167), 1,
      sym_comment,
  [3721] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3735] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      anon_sym_DOLLAR,
    ACTIONS(630), 1,
      aux_sym_path_token1,
    STATE(169), 1,
      sym_comment,
  [3751] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3765] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    STATE(171), 1,
      sym_comment,
    ACTIONS(640), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3777] = 5,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      aux_sym_label_pair_token1,
    STATE(172), 1,
      sym_comment,
  [3793] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      sym__non_newline_whitespace,
    STATE(173), 1,
      sym_comment,
  [3806] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_LF,
    STATE(174), 1,
      sym_comment,
  [3819] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      anon_sym_LF,
    STATE(175), 1,
      sym_comment,
  [3832] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_comment,
  [3845] = 4,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      anon_sym_LF,
    ACTIONS(652), 1,
      sym_line_continuation,
    STATE(177), 1,
      sym_comment,
  [3858] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      sym__non_newline_whitespace,
    STATE(178), 1,
      sym_comment,
  [3871] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_comment,
  [3884] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_comment,
  [3897] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      sym__non_newline_whitespace,
    STATE(181), 1,
      sym_comment,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      anon_sym_EQ,
    STATE(182), 1,
      sym_comment,
  [3923] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      sym__non_newline_whitespace,
    STATE(183), 1,
      sym_comment,
  [3936] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(184), 1,
      sym_comment,
  [3949] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      sym__non_newline_whitespace,
    STATE(185), 1,
      sym_comment,
  [3962] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(668), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_comment,
  [3975] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      sym__non_newline_whitespace,
    STATE(187), 1,
      sym_comment,
  [3988] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      sym__non_newline_whitespace,
    STATE(188), 1,
      sym_comment,
  [4001] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      sym__non_newline_whitespace,
    STATE(189), 1,
      sym_comment,
  [4014] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_comment,
  [4027] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      sym__non_newline_whitespace,
    STATE(191), 1,
      sym_comment,
  [4040] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      sym__non_newline_whitespace,
    STATE(192), 1,
      sym_comment,
  [4053] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_LF,
    STATE(193), 1,
      sym_comment,
  [4066] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_comment,
  [4079] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_comment,
  [4092] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      sym__non_newline_whitespace,
    STATE(196), 1,
      sym_comment,
  [4105] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(690), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_comment,
  [4118] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(692), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_comment,
  [4131] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(694), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_comment,
  [4144] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_comment,
  [4157] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_comment,
  [4170] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_comment,
  [4183] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(702), 1,
      sym__non_newline_whitespace,
    STATE(203), 1,
      sym_comment,
  [4196] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(704), 1,
      sym__non_newline_whitespace,
    STATE(204), 1,
      sym_comment,
  [4209] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym_comment,
  [4222] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(706), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_comment,
  [4235] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(708), 1,
      sym__non_newline_whitespace,
    STATE(207), 1,
      sym_comment,
  [4248] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_LF,
    STATE(208), 1,
      sym_comment,
  [4261] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(712), 1,
      aux_sym_expansion_token1,
    STATE(209), 1,
      sym_comment,
  [4274] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(714), 1,
      sym__non_newline_whitespace,
    STATE(210), 1,
      sym_comment,
  [4287] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(716), 1,
      anon_sym_EQ,
    STATE(211), 1,
      sym_comment,
  [4300] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_comment,
  [4313] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(720), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_comment,
  [4326] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(214), 1,
      sym_comment,
  [4339] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(215), 1,
      sym_comment,
  [4352] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      aux_sym_param_token1,
    STATE(216), 1,
      sym_comment,
  [4365] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(217), 1,
      sym_comment,
  [4378] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_LF,
    STATE(218), 1,
      sym_comment,
  [4391] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(732), 1,
      aux_sym_arg_instruction_token2,
    STATE(219), 1,
      sym_comment,
  [4404] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(734), 1,
      aux_sym_param_token1,
    STATE(220), 1,
      sym_comment,
  [4417] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      sym__non_newline_whitespace,
    STATE(221), 1,
      sym_comment,
  [4430] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_comment,
  [4443] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(740), 1,
      aux_sym_param_token2,
    STATE(223), 1,
      sym_comment,
  [4456] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(742), 1,
      sym__non_newline_whitespace,
    STATE(224), 1,
      sym_comment,
  [4469] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(744), 1,
      sym__non_newline_whitespace,
    STATE(225), 1,
      sym_comment,
  [4482] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(746), 1,
      sym__non_newline_whitespace,
    STATE(226), 1,
      sym_comment,
  [4495] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_comment,
  [4508] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(750), 1,
      aux_sym_param_token2,
    STATE(228), 1,
      sym_comment,
  [4521] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(752), 1,
      sym__non_newline_whitespace,
    STATE(229), 1,
      sym_comment,
  [4534] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(230), 1,
      sym_comment,
  [4547] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4560] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(758), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(232), 1,
      sym_comment,
  [4573] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
  [4586] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(762), 1,
      anon_sym_LF,
    STATE(234), 1,
      sym_comment,
  [4599] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_comment,
  [4612] = 4,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      sym_line_continuation,
    STATE(236), 1,
      sym_comment,
  [4625] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
  [4638] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(770), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(238), 1,
      sym_comment,
  [4651] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [4664] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(774), 1,
      aux_sym_param_token2,
    STATE(240), 1,
      sym_comment,
  [4677] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_comment,
  [4690] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(778), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_comment,
  [4703] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_comment,
  [4716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(782), 1,
      ts_builtin_sym_end,
    STATE(244), 1,
      sym_comment,
  [4729] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_comment,
  [4742] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(786), 1,
      anon_sym_LF,
    STATE(246), 1,
      sym_comment,
  [4755] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_comment,
  [4768] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(790), 1,
      aux_sym_expansion_token1,
    STATE(248), 1,
      sym_comment,
  [4781] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(792), 1,
      anon_sym_EQ,
    STATE(249), 1,
      sym_comment,
  [4794] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(794), 1,
      aux_sym_expansion_token1,
    STATE(250), 1,
      sym_comment,
  [4807] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(796), 1,
      anon_sym_EQ,
    STATE(251), 1,
      sym_comment,
  [4820] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      aux_sym_expansion_token1,
    STATE(252), 1,
      sym_comment,
  [4833] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(800), 1,
      aux_sym_expansion_token1,
    STATE(253), 1,
      sym_comment,
  [4846] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      aux_sym_expansion_token1,
    STATE(254), 1,
      sym_comment,
  [4859] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(804), 1,
      aux_sym_expansion_token1,
    STATE(255), 1,
      sym_comment,
  [4872] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      aux_sym_expansion_token1,
    STATE(256), 1,
      sym_comment,
  [4885] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      aux_sym_expansion_token1,
    STATE(257), 1,
      sym_comment,
  [4898] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(810), 1,
      aux_sym_expansion_token1,
    STATE(258), 1,
      sym_comment,
  [4911] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      aux_sym_expansion_token1,
    STATE(259), 1,
      sym_comment,
  [4924] = 4,
    ACTIONS(111), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    ACTIONS(814), 1,
      aux_sym_expansion_token1,
    STATE(260), 1,
      sym_comment,
  [4937] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(816), 1,
      aux_sym_param_token1,
    STATE(261), 1,
      sym_comment,
  [4950] = 1,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 271,
  [SMALL_STATE(6)] = 302,
  [SMALL_STATE(7)] = 332,
  [SMALL_STATE(8)] = 364,
  [SMALL_STATE(9)] = 396,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 456,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 522,
  [SMALL_STATE(14)] = 549,
  [SMALL_STATE(15)] = 578,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 661,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 719,
  [SMALL_STATE(21)] = 746,
  [SMALL_STATE(22)] = 773,
  [SMALL_STATE(23)] = 802,
  [SMALL_STATE(24)] = 833,
  [SMALL_STATE(25)] = 859,
  [SMALL_STATE(26)] = 883,
  [SMALL_STATE(27)] = 911,
  [SMALL_STATE(28)] = 939,
  [SMALL_STATE(29)] = 967,
  [SMALL_STATE(30)] = 995,
  [SMALL_STATE(31)] = 1021,
  [SMALL_STATE(32)] = 1049,
  [SMALL_STATE(33)] = 1077,
  [SMALL_STATE(34)] = 1103,
  [SMALL_STATE(35)] = 1129,
  [SMALL_STATE(36)] = 1157,
  [SMALL_STATE(37)] = 1185,
  [SMALL_STATE(38)] = 1205,
  [SMALL_STATE(39)] = 1233,
  [SMALL_STATE(40)] = 1253,
  [SMALL_STATE(41)] = 1279,
  [SMALL_STATE(42)] = 1299,
  [SMALL_STATE(43)] = 1323,
  [SMALL_STATE(44)] = 1351,
  [SMALL_STATE(45)] = 1379,
  [SMALL_STATE(46)] = 1403,
  [SMALL_STATE(47)] = 1431,
  [SMALL_STATE(48)] = 1459,
  [SMALL_STATE(49)] = 1487,
  [SMALL_STATE(50)] = 1512,
  [SMALL_STATE(51)] = 1537,
  [SMALL_STATE(52)] = 1556,
  [SMALL_STATE(53)] = 1577,
  [SMALL_STATE(54)] = 1596,
  [SMALL_STATE(55)] = 1621,
  [SMALL_STATE(56)] = 1646,
  [SMALL_STATE(57)] = 1671,
  [SMALL_STATE(58)] = 1690,
  [SMALL_STATE(59)] = 1713,
  [SMALL_STATE(60)] = 1732,
  [SMALL_STATE(61)] = 1751,
  [SMALL_STATE(62)] = 1770,
  [SMALL_STATE(63)] = 1789,
  [SMALL_STATE(64)] = 1812,
  [SMALL_STATE(65)] = 1837,
  [SMALL_STATE(66)] = 1860,
  [SMALL_STATE(67)] = 1885,
  [SMALL_STATE(68)] = 1908,
  [SMALL_STATE(69)] = 1927,
  [SMALL_STATE(70)] = 1946,
  [SMALL_STATE(71)] = 1971,
  [SMALL_STATE(72)] = 1990,
  [SMALL_STATE(73)] = 2015,
  [SMALL_STATE(74)] = 2034,
  [SMALL_STATE(75)] = 2053,
  [SMALL_STATE(76)] = 2078,
  [SMALL_STATE(77)] = 2101,
  [SMALL_STATE(78)] = 2124,
  [SMALL_STATE(79)] = 2149,
  [SMALL_STATE(80)] = 2174,
  [SMALL_STATE(81)] = 2196,
  [SMALL_STATE(82)] = 2218,
  [SMALL_STATE(83)] = 2240,
  [SMALL_STATE(84)] = 2262,
  [SMALL_STATE(85)] = 2278,
  [SMALL_STATE(86)] = 2300,
  [SMALL_STATE(87)] = 2316,
  [SMALL_STATE(88)] = 2338,
  [SMALL_STATE(89)] = 2360,
  [SMALL_STATE(90)] = 2378,
  [SMALL_STATE(91)] = 2396,
  [SMALL_STATE(92)] = 2416,
  [SMALL_STATE(93)] = 2434,
  [SMALL_STATE(94)] = 2452,
  [SMALL_STATE(95)] = 2474,
  [SMALL_STATE(96)] = 2494,
  [SMALL_STATE(97)] = 2516,
  [SMALL_STATE(98)] = 2532,
  [SMALL_STATE(99)] = 2554,
  [SMALL_STATE(100)] = 2572,
  [SMALL_STATE(101)] = 2594,
  [SMALL_STATE(102)] = 2616,
  [SMALL_STATE(103)] = 2638,
  [SMALL_STATE(104)] = 2660,
  [SMALL_STATE(105)] = 2678,
  [SMALL_STATE(106)] = 2696,
  [SMALL_STATE(107)] = 2718,
  [SMALL_STATE(108)] = 2738,
  [SMALL_STATE(109)] = 2756,
  [SMALL_STATE(110)] = 2773,
  [SMALL_STATE(111)] = 2790,
  [SMALL_STATE(112)] = 2807,
  [SMALL_STATE(113)] = 2826,
  [SMALL_STATE(114)] = 2843,
  [SMALL_STATE(115)] = 2860,
  [SMALL_STATE(116)] = 2877,
  [SMALL_STATE(117)] = 2896,
  [SMALL_STATE(118)] = 2913,
  [SMALL_STATE(119)] = 2928,
  [SMALL_STATE(120)] = 2945,
  [SMALL_STATE(121)] = 2964,
  [SMALL_STATE(122)] = 2981,
  [SMALL_STATE(123)] = 3000,
  [SMALL_STATE(124)] = 3017,
  [SMALL_STATE(125)] = 3034,
  [SMALL_STATE(126)] = 3053,
  [SMALL_STATE(127)] = 3070,
  [SMALL_STATE(128)] = 3087,
  [SMALL_STATE(129)] = 3104,
  [SMALL_STATE(130)] = 3121,
  [SMALL_STATE(131)] = 3140,
  [SMALL_STATE(132)] = 3157,
  [SMALL_STATE(133)] = 3173,
  [SMALL_STATE(134)] = 3189,
  [SMALL_STATE(135)] = 3205,
  [SMALL_STATE(136)] = 3221,
  [SMALL_STATE(137)] = 3237,
  [SMALL_STATE(138)] = 3251,
  [SMALL_STATE(139)] = 3267,
  [SMALL_STATE(140)] = 3283,
  [SMALL_STATE(141)] = 3299,
  [SMALL_STATE(142)] = 3315,
  [SMALL_STATE(143)] = 3331,
  [SMALL_STATE(144)] = 3347,
  [SMALL_STATE(145)] = 3363,
  [SMALL_STATE(146)] = 3379,
  [SMALL_STATE(147)] = 3395,
  [SMALL_STATE(148)] = 3409,
  [SMALL_STATE(149)] = 3425,
  [SMALL_STATE(150)] = 3441,
  [SMALL_STATE(151)] = 3457,
  [SMALL_STATE(152)] = 3473,
  [SMALL_STATE(153)] = 3489,
  [SMALL_STATE(154)] = 3505,
  [SMALL_STATE(155)] = 3521,
  [SMALL_STATE(156)] = 3537,
  [SMALL_STATE(157)] = 3551,
  [SMALL_STATE(158)] = 3567,
  [SMALL_STATE(159)] = 3583,
  [SMALL_STATE(160)] = 3597,
  [SMALL_STATE(161)] = 3613,
  [SMALL_STATE(162)] = 3627,
  [SMALL_STATE(163)] = 3643,
  [SMALL_STATE(164)] = 3659,
  [SMALL_STATE(165)] = 3675,
  [SMALL_STATE(166)] = 3691,
  [SMALL_STATE(167)] = 3705,
  [SMALL_STATE(168)] = 3721,
  [SMALL_STATE(169)] = 3735,
  [SMALL_STATE(170)] = 3751,
  [SMALL_STATE(171)] = 3765,
  [SMALL_STATE(172)] = 3777,
  [SMALL_STATE(173)] = 3793,
  [SMALL_STATE(174)] = 3806,
  [SMALL_STATE(175)] = 3819,
  [SMALL_STATE(176)] = 3832,
  [SMALL_STATE(177)] = 3845,
  [SMALL_STATE(178)] = 3858,
  [SMALL_STATE(179)] = 3871,
  [SMALL_STATE(180)] = 3884,
  [SMALL_STATE(181)] = 3897,
  [SMALL_STATE(182)] = 3910,
  [SMALL_STATE(183)] = 3923,
  [SMALL_STATE(184)] = 3936,
  [SMALL_STATE(185)] = 3949,
  [SMALL_STATE(186)] = 3962,
  [SMALL_STATE(187)] = 3975,
  [SMALL_STATE(188)] = 3988,
  [SMALL_STATE(189)] = 4001,
  [SMALL_STATE(190)] = 4014,
  [SMALL_STATE(191)] = 4027,
  [SMALL_STATE(192)] = 4040,
  [SMALL_STATE(193)] = 4053,
  [SMALL_STATE(194)] = 4066,
  [SMALL_STATE(195)] = 4079,
  [SMALL_STATE(196)] = 4092,
  [SMALL_STATE(197)] = 4105,
  [SMALL_STATE(198)] = 4118,
  [SMALL_STATE(199)] = 4131,
  [SMALL_STATE(200)] = 4144,
  [SMALL_STATE(201)] = 4157,
  [SMALL_STATE(202)] = 4170,
  [SMALL_STATE(203)] = 4183,
  [SMALL_STATE(204)] = 4196,
  [SMALL_STATE(205)] = 4209,
  [SMALL_STATE(206)] = 4222,
  [SMALL_STATE(207)] = 4235,
  [SMALL_STATE(208)] = 4248,
  [SMALL_STATE(209)] = 4261,
  [SMALL_STATE(210)] = 4274,
  [SMALL_STATE(211)] = 4287,
  [SMALL_STATE(212)] = 4300,
  [SMALL_STATE(213)] = 4313,
  [SMALL_STATE(214)] = 4326,
  [SMALL_STATE(215)] = 4339,
  [SMALL_STATE(216)] = 4352,
  [SMALL_STATE(217)] = 4365,
  [SMALL_STATE(218)] = 4378,
  [SMALL_STATE(219)] = 4391,
  [SMALL_STATE(220)] = 4404,
  [SMALL_STATE(221)] = 4417,
  [SMALL_STATE(222)] = 4430,
  [SMALL_STATE(223)] = 4443,
  [SMALL_STATE(224)] = 4456,
  [SMALL_STATE(225)] = 4469,
  [SMALL_STATE(226)] = 4482,
  [SMALL_STATE(227)] = 4495,
  [SMALL_STATE(228)] = 4508,
  [SMALL_STATE(229)] = 4521,
  [SMALL_STATE(230)] = 4534,
  [SMALL_STATE(231)] = 4547,
  [SMALL_STATE(232)] = 4560,
  [SMALL_STATE(233)] = 4573,
  [SMALL_STATE(234)] = 4586,
  [SMALL_STATE(235)] = 4599,
  [SMALL_STATE(236)] = 4612,
  [SMALL_STATE(237)] = 4625,
  [SMALL_STATE(238)] = 4638,
  [SMALL_STATE(239)] = 4651,
  [SMALL_STATE(240)] = 4664,
  [SMALL_STATE(241)] = 4677,
  [SMALL_STATE(242)] = 4690,
  [SMALL_STATE(243)] = 4703,
  [SMALL_STATE(244)] = 4716,
  [SMALL_STATE(245)] = 4729,
  [SMALL_STATE(246)] = 4742,
  [SMALL_STATE(247)] = 4755,
  [SMALL_STATE(248)] = 4768,
  [SMALL_STATE(249)] = 4781,
  [SMALL_STATE(250)] = 4794,
  [SMALL_STATE(251)] = 4807,
  [SMALL_STATE(252)] = 4820,
  [SMALL_STATE(253)] = 4833,
  [SMALL_STATE(254)] = 4846,
  [SMALL_STATE(255)] = 4859,
  [SMALL_STATE(256)] = 4872,
  [SMALL_STATE(257)] = 4885,
  [SMALL_STATE(258)] = 4898,
  [SMALL_STATE(259)] = 4911,
  [SMALL_STATE(260)] = 4924,
  [SMALL_STATE(261)] = 4937,
  [SMALL_STATE(262)] = 4950,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(150),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(138),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(61),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(61),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(134),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(74),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(74),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(142),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(53),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(90),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(136),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(141),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(99),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(139),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(89),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(89),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(97),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(146),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(136),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(52),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(126),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(144),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(113),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(148),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(182),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 11),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(143),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(128),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(238),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(127),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(145),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_group, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(220),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(211),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(118),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(81),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(140),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 4),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(21),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 4),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 14),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 12),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3, .production_id = 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [782] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 7),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
