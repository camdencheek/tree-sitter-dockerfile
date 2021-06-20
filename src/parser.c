#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 246
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
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
  aux_sym_cross_build_instruction_token1 = 28,
  aux_sym_path_token1 = 29,
  aux_sym_path_token2 = 30,
  anon_sym_DOLLAR = 31,
  anon_sym_LBRACE = 32,
  aux_sym_expansion_token1 = 33,
  anon_sym_RBRACE = 34,
  sym_variable = 35,
  aux_sym__spaced_env_pair_token1 = 36,
  aux_sym__env_key_token1 = 37,
  aux_sym_expose_port_token1 = 38,
  anon_sym_SLASHtcp = 39,
  anon_sym_SLASHudp = 40,
  aux_sym_label_pair_token1 = 41,
  aux_sym_image_name_token1 = 42,
  aux_sym_image_tag_token1 = 43,
  anon_sym_AT = 44,
  aux_sym_image_digest_token1 = 45,
  anon_sym_DASH_DASH = 46,
  aux_sym_param_token1 = 47,
  aux_sym_param_token2 = 48,
  aux_sym_image_alias_token1 = 49,
  anon_sym_LBRACK = 50,
  anon_sym_COMMA = 51,
  anon_sym_RBRACK = 52,
  aux_sym_shell_fragment_token1 = 53,
  aux_sym_shell_fragment_token2 = 54,
  sym_line_continuation = 55,
  anon_sym_POUND = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_double_quoted_string_token1 = 58,
  aux_sym_unquoted_string_token1 = 59,
  anon_sym_BSLASH = 60,
  sym_escape_sequence = 61,
  sym__non_newline_whitespace = 62,
  sym_source_file = 63,
  sym__instruction = 64,
  sym_from_instruction = 65,
  sym_run_instruction = 66,
  sym_cmd_instruction = 67,
  sym_label_instruction = 68,
  sym_expose_instruction = 69,
  sym_env_instruction = 70,
  sym_add_instruction = 71,
  sym_copy_instruction = 72,
  sym_entrypoint_instruction = 73,
  sym_volume_instruction = 74,
  sym_user_instruction = 75,
  aux_sym__user_name_group = 76,
  sym_workdir_instruction = 77,
  sym_arg_instruction = 78,
  sym_onbuild_instruction = 79,
  sym_stopsignal_instruction = 80,
  aux_sym__stopsignal_value = 81,
  sym_healthcheck_instruction = 82,
  sym_shell_instruction = 83,
  sym_maintainer_instruction = 84,
  sym_cross_build_instruction = 85,
  sym_path = 86,
  sym_expansion = 87,
  sym_env_pair = 88,
  sym__spaced_env_pair = 89,
  sym__env_key = 90,
  sym_expose_port = 91,
  sym_label_pair = 92,
  sym_image_spec = 93,
  sym_image_name = 94,
  sym_image_tag = 95,
  sym_image_digest = 96,
  sym_param = 97,
  sym_image_alias = 98,
  sym_string_array = 99,
  sym_shell_command = 100,
  sym_shell_fragment = 101,
  sym__comment_line = 102,
  sym__anon_comment = 103,
  sym_double_quoted_string = 104,
  sym_unquoted_string = 105,
  sym_comment = 106,
  aux_sym_source_file_repeat1 = 107,
  aux_sym_label_instruction_repeat1 = 108,
  aux_sym_expose_instruction_repeat1 = 109,
  aux_sym_env_instruction_repeat1 = 110,
  aux_sym_volume_instruction_repeat1 = 111,
  aux_sym_healthcheck_instruction_repeat1 = 112,
  aux_sym_path_repeat1 = 113,
  aux_sym_image_name_repeat1 = 114,
  aux_sym_image_tag_repeat1 = 115,
  aux_sym_image_digest_repeat1 = 116,
  aux_sym_image_alias_repeat1 = 117,
  aux_sym_string_array_repeat1 = 118,
  aux_sym_shell_command_repeat1 = 119,
  aux_sym_shell_command_repeat2 = 120,
  aux_sym_shell_fragment_repeat1 = 121,
  aux_sym_double_quoted_string_repeat1 = 122,
  aux_sym_unquoted_string_repeat1 = 123,
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
  [aux_sym_cross_build_instruction_token1] = "CROSS_BUILD",
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
  [sym_cross_build_instruction] = "cross_build_instruction",
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
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
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
  [sym_cross_build_instruction] = sym_cross_build_instruction,
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
  [aux_sym_cross_build_instruction_token1] = {
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
  [sym_cross_build_instruction] = {
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
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(231);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == 'U') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(239);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(239);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(229);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(193);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(186);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 46:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 85:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 87:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(185);
      END_STATE();
    case 97:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 107:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 147:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(116);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(177);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(231);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(245);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 157},
  [2] = {.lex_state = 157},
  [3] = {.lex_state = 157},
  [4] = {.lex_state = 157},
  [5] = {.lex_state = 157},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 157},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 157},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 157},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 46},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 28},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 157},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 28},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 38},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 28},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 28},
  [101] = {.lex_state = 28},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 157},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 47},
  [109] = {.lex_state = 39},
  [110] = {.lex_state = 39},
  [111] = {.lex_state = 157},
  [112] = {.lex_state = 157},
  [113] = {.lex_state = 157},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 157},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 45},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 45},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 157},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 45},
  [129] = {.lex_state = 45},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 157},
  [133] = {.lex_state = 45},
  [134] = {.lex_state = 21},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 21},
  [140] = {.lex_state = 28},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 45},
  [144] = {.lex_state = 45},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 45},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 45},
  [150] = {.lex_state = 37},
  [151] = {.lex_state = 45},
  [152] = {.lex_state = 45},
  [153] = {.lex_state = 157},
  [154] = {.lex_state = 157},
  [155] = {.lex_state = 45},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 39},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 51},
  [161] = {.lex_state = 48},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 190},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 190},
  [172] = {.lex_state = 190},
  [173] = {.lex_state = 39},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 39},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 39},
  [179] = {.lex_state = 39},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 50},
  [182] = {.lex_state = 39},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 190},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 52},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 157},
  [193] = {.lex_state = 39},
  [194] = {.lex_state = 39},
  [195] = {.lex_state = 39},
  [196] = {.lex_state = 39},
  [197] = {.lex_state = 39},
  [198] = {.lex_state = 157},
  [199] = {.lex_state = 39},
  [200] = {.lex_state = 39},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 39},
  [203] = {.lex_state = 157},
  [204] = {.lex_state = 39},
  [205] = {.lex_state = 157},
  [206] = {.lex_state = 52},
  [207] = {.lex_state = 39},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 39},
  [210] = {.lex_state = 157},
  [211] = {.lex_state = 52},
  [212] = {.lex_state = 39},
  [213] = {.lex_state = 157},
  [214] = {.lex_state = 157},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 157},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 157},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 157},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 157},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 157},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 157},
  [227] = {.lex_state = 39},
  [228] = {.lex_state = 157},
  [229] = {.lex_state = 39},
  [230] = {.lex_state = 157},
  [231] = {.lex_state = 51},
  [232] = {.lex_state = 157},
  [233] = {.lex_state = 51},
  [234] = {.lex_state = 157},
  [235] = {.lex_state = 51},
  [236] = {.lex_state = 51},
  [237] = {.lex_state = 51},
  [238] = {.lex_state = 51},
  [239] = {.lex_state = 51},
  [240] = {.lex_state = 51},
  [241] = {.lex_state = 51},
  [242] = {.lex_state = 51},
  [243] = {.lex_state = 51},
  [244] = {.lex_state = 50},
  [245] = {.lex_state = 50},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(168),
    [sym__instruction] = STATE(167),
    [sym_from_instruction] = STATE(167),
    [sym_run_instruction] = STATE(167),
    [sym_cmd_instruction] = STATE(167),
    [sym_label_instruction] = STATE(167),
    [sym_expose_instruction] = STATE(167),
    [sym_env_instruction] = STATE(167),
    [sym_add_instruction] = STATE(167),
    [sym_copy_instruction] = STATE(167),
    [sym_entrypoint_instruction] = STATE(167),
    [sym_volume_instruction] = STATE(167),
    [sym_user_instruction] = STATE(167),
    [sym_workdir_instruction] = STATE(167),
    [sym_arg_instruction] = STATE(167),
    [sym_onbuild_instruction] = STATE(167),
    [sym_stopsignal_instruction] = STATE(167),
    [sym_healthcheck_instruction] = STATE(167),
    [sym_shell_instruction] = STATE(167),
    [sym_maintainer_instruction] = STATE(167),
    [sym_cross_build_instruction] = STATE(167),
    [sym_comment] = STATE(167),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_from_instruction_token1] = ACTIONS(7),
    [aux_sym_run_instruction_token1] = ACTIONS(9),
    [aux_sym_cmd_instruction_token1] = ACTIONS(11),
    [aux_sym_label_instruction_token1] = ACTIONS(13),
    [aux_sym_expose_instruction_token1] = ACTIONS(15),
    [aux_sym_env_instruction_token1] = ACTIONS(17),
    [aux_sym_add_instruction_token1] = ACTIONS(19),
    [aux_sym_copy_instruction_token1] = ACTIONS(21),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(23),
    [aux_sym_volume_instruction_token1] = ACTIONS(25),
    [aux_sym_user_instruction_token1] = ACTIONS(27),
    [aux_sym_workdir_instruction_token1] = ACTIONS(29),
    [aux_sym_arg_instruction_token1] = ACTIONS(31),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(33),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(35),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(37),
    [aux_sym_shell_instruction_token1] = ACTIONS(39),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(41),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(43),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(45),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(45), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(167), 21,
      sym__instruction,
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
      sym_cross_build_instruction,
      sym_comment,
  [93] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(54), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(57), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(60), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(63), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(66), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(69), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(72), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(75), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(78), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(81), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(84), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(87), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(90), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(93), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(96), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(99), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(102), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(105), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(167), 21,
      sym__instruction,
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
      sym_cross_build_instruction,
      sym_comment,
  [186] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(7), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(9), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(219), 20,
      sym__instruction,
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
      sym_cross_build_instruction,
  [269] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 21,
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
      aux_sym_cross_build_instruction_token1,
      anon_sym_POUND,
  [296] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(87), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(162), 1,
      sym_shell_fragment,
    STATE(183), 1,
      sym__anon_comment,
    ACTIONS(111), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(29), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [320] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(16), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(163), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [342] = 6,
    ACTIONS(123), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      aux_sym_image_name_token1,
    ACTIONS(129), 1,
      sym_line_continuation,
    STATE(9), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(121), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [364] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(133), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(135), 1,
      anon_sym_DOLLAR,
    ACTIONS(138), 1,
      aux_sym_image_name_token1,
    STATE(9), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(131), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [386] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(141), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(139), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [408] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(16), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(175), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [430] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(16), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(136), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [452] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(87), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(183), 1,
      sym__anon_comment,
    STATE(184), 1,
      sym_shell_fragment,
    ACTIONS(111), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(6), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [476] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(149), 1,
      aux_sym_image_name_token1,
    ACTIONS(151), 1,
      anon_sym_DASH_DASH,
    STATE(46), 1,
      sym_param,
    STATE(47), 1,
      sym_image_name,
    STATE(127), 1,
      sym_image_spec,
    STATE(8), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [502] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(159), 1,
      aux_sym_image_tag_token1,
    ACTIONS(153), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(17), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [523] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      anon_sym_DOLLAR,
    ACTIONS(165), 1,
      aux_sym_label_pair_token1,
    ACTIONS(167), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [544] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(171), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(173), 1,
      anon_sym_DOLLAR,
    ACTIONS(176), 1,
      aux_sym_image_tag_token1,
    ACTIONS(169), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(17), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [565] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      anon_sym_DOLLAR,
    ACTIONS(184), 1,
      aux_sym__env_key_token1,
    ACTIONS(186), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [586] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      aux_sym__env_key_token1,
    ACTIONS(189), 1,
      anon_sym_DOLLAR,
    ACTIONS(191), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [607] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(123), 1,
      sym_shell_fragment,
    ACTIONS(111), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(187), 2,
      sym_string_array,
      sym_shell_command,
  [628] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(123), 1,
      sym_shell_fragment,
    ACTIONS(111), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(191), 2,
      sym_string_array,
      sym_shell_command,
  [649] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(123), 1,
      sym_shell_fragment,
    ACTIONS(111), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(225), 2,
      sym_string_array,
      sym_shell_command,
  [670] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      aux_sym_label_pair_token1,
    ACTIONS(195), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [691] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(203), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(205), 1,
      anon_sym_DOLLAR,
    ACTIONS(208), 1,
      aux_sym_image_digest_token1,
    STATE(24), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [711] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(217), 1,
      sym_escape_sequence,
    STATE(30), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [731] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(221), 1,
      aux_sym_path_token2,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(38), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [749] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(227), 1,
      aux_sym_path_token2,
    ACTIONS(225), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(26), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [767] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(229), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(231), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [781] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(235), 1,
      anon_sym_POUND,
    STATE(183), 1,
      sym__anon_comment,
    ACTIONS(233), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(29), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [799] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(246), 1,
      sym_escape_sequence,
    STATE(30), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [819] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(253), 1,
      sym_escape_sequence,
    STATE(25), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [839] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(259), 1,
      aux_sym_expose_port_token1,
    STATE(41), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [857] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(265), 1,
      sym_escape_sequence,
    STATE(37), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [877] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      aux_sym_path_token1,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DASH_DASH,
    STATE(68), 1,
      sym_expansion,
    STATE(101), 1,
      sym_param,
    STATE(229), 1,
      sym_path,
  [899] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      aux_sym_path_token1,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DASH_DASH,
    STATE(68), 1,
      sym_expansion,
    STATE(78), 1,
      sym_param,
    STATE(227), 1,
      sym_path,
  [921] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      aux_sym_path_token1,
    ACTIONS(275), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym_expansion,
    STATE(104), 1,
      sym_path,
    STATE(223), 1,
      sym_string_array,
  [943] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(217), 1,
      sym_escape_sequence,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    STATE(30), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [963] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      aux_sym_path_token2,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(38), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [981] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(217), 1,
      sym_escape_sequence,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    STATE(30), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1001] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(211), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(293), 1,
      sym_escape_sequence,
    STATE(39), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1021] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      aux_sym_expose_port_token1,
    STATE(41), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1039] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(303), 1,
      anon_sym_NONE,
    ACTIONS(305), 1,
      anon_sym_DASH_DASH,
    STATE(217), 1,
      sym_cmd_instruction,
    STATE(71), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1059] = 7,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(311), 1,
      aux_sym__user_name_group_token1,
    STATE(44), 1,
      aux_sym__user_name_group,
    STATE(79), 1,
      sym_expansion,
  [1081] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(318), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      aux_sym__user_name_group,
    STATE(79), 1,
      sym_expansion,
    ACTIONS(313), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1101] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(323), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(325), 1,
      anon_sym_DOLLAR,
    ACTIONS(327), 1,
      aux_sym_image_digest_token1,
    STATE(24), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [1121] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(149), 1,
      aux_sym_image_name_token1,
    STATE(47), 1,
      sym_image_name,
    STATE(121), 1,
      sym_image_spec,
    STATE(8), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [1141] = 7,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      anon_sym_LF,
    ACTIONS(331), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(333), 1,
      anon_sym_COLON,
    ACTIONS(335), 1,
      anon_sym_AT,
    STATE(97), 1,
      sym_image_tag,
    STATE(142), 1,
      sym_image_digest,
  [1163] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(337), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(339), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1177] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(337), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(339), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1190] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(231), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(229), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1203] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      anon_sym_DOLLAR,
    ACTIONS(343), 1,
      aux_sym_image_alias_token1,
    STATE(201), 1,
      sym_image_alias,
    STATE(56), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1220] = 4,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(347), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(349), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1235] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(231), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(229), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1248] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      aux_sym_path_token2,
    ACTIONS(356), 1,
      anon_sym_DOLLAR,
    STATE(54), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1265] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(339), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(337), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1278] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
    ACTIONS(363), 1,
      aux_sym_image_alias_token1,
    STATE(70), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1295] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    STATE(57), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1312] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(231), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(229), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1325] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      aux_sym_path_token2,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    STATE(54), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1342] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(339), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(337), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1355] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(339), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(337), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1368] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(231), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1381] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(379), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      aux_sym_expose_port_token1,
    STATE(32), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1396] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      sym__non_newline_whitespace,
    ACTIONS(383), 1,
      aux_sym_path_token2,
    ACTIONS(386), 1,
      anon_sym_DOLLAR,
    STATE(64), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1413] = 6,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(311), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(389), 1,
      anon_sym_LF,
    STATE(44), 1,
      aux_sym__user_name_group,
    STATE(79), 1,
      sym_expansion,
  [1432] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 1,
      aux_sym_path_token2,
    STATE(59), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1449] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      aux_sym__env_key_token1,
    STATE(198), 1,
      sym__env_key,
    STATE(75), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1466] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      sym__non_newline_whitespace,
    ACTIONS(399), 1,
      aux_sym_path_token2,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    STATE(72), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1483] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    STATE(57), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1500] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      aux_sym_image_alias_token1,
    STATE(70), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1517] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(305), 1,
      anon_sym_DASH_DASH,
    STATE(190), 1,
      sym_cmd_instruction,
    STATE(88), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1534] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(373), 1,
      sym__non_newline_whitespace,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(417), 1,
      aux_sym_path_token2,
    STATE(64), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1551] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(419), 1,
      aux_sym__env_key_token1,
    STATE(145), 1,
      sym__env_key,
    STATE(159), 1,
      sym__spaced_env_pair,
    STATE(67), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1568] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      anon_sym_DOLLAR,
    ACTIONS(343), 1,
      aux_sym_image_alias_token1,
    STATE(188), 1,
      sym_image_alias,
    STATE(56), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1585] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(421), 1,
      anon_sym_LF,
    ACTIONS(423), 1,
      aux_sym__env_key_token1,
    STATE(198), 1,
      sym__env_key,
    STATE(75), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1602] = 4,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(426), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      aux_sym_label_pair_token1,
    STATE(90), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1616] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(379), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      aux_sym__user_name_group,
    STATE(79), 1,
      sym_expansion,
  [1632] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      aux_sym_path_token1,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    STATE(68), 1,
      sym_expansion,
    STATE(196), 1,
      sym_path,
  [1648] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(432), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1660] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(379), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      aux_sym__user_name_group,
    STATE(79), 1,
      sym_expansion,
  [1676] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      aux_sym_path_token1,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_expansion,
    STATE(221), 1,
      sym_path,
  [1692] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(438), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(440), 1,
      anon_sym_DOLLAR,
    STATE(69), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1706] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      aux_sym_path_token1,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_expansion,
    STATE(166), 1,
      sym_path,
  [1722] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      aux_sym_path_token1,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_expansion,
    STATE(165), 1,
      sym_path,
  [1738] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(231), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1748] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(339), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1758] = 4,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      sym_line_continuation,
    STATE(89), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(444), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [1772] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(448), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(450), 1,
      anon_sym_DASH_DASH,
    STATE(88), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1786] = 4,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      sym_line_continuation,
    STATE(89), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(455), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [1800] = 4,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(462), 1,
      aux_sym_label_pair_token1,
    STATE(90), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1814] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(339), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1826] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(229), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(231), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1838] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      aux_sym_path_token1,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_expansion,
    STATE(170), 1,
      sym_path,
  [1854] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(337), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(339), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [1866] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
      anon_sym_DOLLAR,
    ACTIONS(467), 1,
      aux_sym_image_tag_token1,
    STATE(15), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [1880] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(469), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      aux_sym_image_digest_token1,
    STATE(45), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [1894] = 5,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      anon_sym_AT,
    ACTIONS(473), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      aux_sym_from_instruction_token2,
    STATE(125), 1,
      sym_image_digest,
  [1910] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(434), 1,
      aux_sym_path_token1,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_expansion,
    STATE(164), 1,
      sym_path,
  [1926] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(231), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [1938] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(273), 1,
      aux_sym_path_token1,
    ACTIONS(275), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym_expansion,
    STATE(146), 1,
      sym_path,
  [1954] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      aux_sym_path_token1,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    STATE(68), 1,
      sym_expansion,
    STATE(197), 1,
      sym_path,
  [1970] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(231), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [1981] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(231), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [1992] = 4,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(479), 1,
      sym__non_newline_whitespace,
    STATE(114), 1,
      aux_sym_volume_instruction_repeat1,
  [2005] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_string_array_repeat1,
  [2018] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(486), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2027] = 4,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(488), 1,
      anon_sym_LF,
    ACTIONS(490), 1,
      sym__non_newline_whitespace,
    STATE(107), 1,
      aux_sym_volume_instruction_repeat1,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      aux_sym_label_pair_token1,
    STATE(76), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [2051] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(229), 1,
      sym__non_newline_whitespace,
    ACTIONS(231), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2062] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      sym__non_newline_whitespace,
    ACTIONS(339), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2073] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_string_array_repeat1,
  [2086] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_string_array_repeat1,
  [2099] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    ACTIONS(503), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_double_quoted_string,
  [2112] = 4,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(479), 1,
      sym__non_newline_whitespace,
    ACTIONS(505), 1,
      anon_sym_LF,
    STATE(107), 1,
      aux_sym_volume_instruction_repeat1,
  [2125] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2136] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2147] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(229), 1,
      anon_sym_LF,
    ACTIONS(231), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2158] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(509), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2169] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2180] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(503), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym_double_quoted_string,
  [2190] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(513), 1,
      aux_sym_from_instruction_token2,
  [2200] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      sym_variable,
  [2210] = 3,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(521), 1,
      sym_line_continuation,
    STATE(137), 1,
      aux_sym_shell_command_repeat2,
  [2220] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      sym_variable,
  [2230] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 1,
      aux_sym_from_instruction_token2,
  [2240] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(531), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2248] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      aux_sym_from_instruction_token2,
  [2258] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    ACTIONS(539), 1,
      sym_variable,
  [2268] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    ACTIONS(543), 1,
      sym_variable,
  [2278] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      anon_sym_EQ,
  [2288] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      aux_sym__env_key_token1,
  [2298] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(553), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [2306] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      sym_variable,
  [2316] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      aux_sym__env_key_token1,
  [2326] = 3,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      sym_line_continuation,
    STATE(135), 1,
      aux_sym_shell_command_repeat2,
  [2336] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(566), 1,
      anon_sym_LF,
    ACTIONS(568), 1,
      aux_sym_label_pair_token1,
  [2346] = 3,
    ACTIONS(521), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_shell_command_repeat2,
  [2356] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      aux_sym_label_pair_token1,
  [2366] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      aux_sym__env_key_token1,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      aux_sym_path_token1,
  [2386] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      aux_sym_label_pair_token1,
  [2396] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      aux_sym_from_instruction_token2,
  [2406] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    ACTIONS(584), 1,
      sym_variable,
  [2416] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    ACTIONS(588), 1,
      sym_variable,
  [2426] = 3,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(590), 1,
      anon_sym_EQ,
    ACTIONS(592), 1,
      aux_sym__spaced_env_pair_token1,
  [2436] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(488), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2444] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      sym_variable,
  [2454] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    STATE(215), 1,
      sym_string_array,
  [2464] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(600), 1,
      sym_variable,
  [2474] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      aux_sym_image_name_token1,
  [2484] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      sym_variable,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(608), 1,
      sym_variable,
  [2504] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(484), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(549), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2520] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      sym_variable,
  [2530] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(614), 1,
      anon_sym_LF,
  [2537] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      sym__non_newline_whitespace,
  [2544] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      anon_sym_LF,
  [2551] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_LF,
  [2558] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      aux_sym_expansion_token1,
  [2565] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      aux_sym_arg_instruction_token2,
  [2572] = 2,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      sym_line_continuation,
  [2579] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      anon_sym_LF,
  [2586] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(632), 1,
      anon_sym_LF,
  [2593] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(634), 1,
      anon_sym_LF,
  [2600] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      anon_sym_LF,
  [2607] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(638), 1,
      anon_sym_LF,
  [2614] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
  [2621] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(642), 1,
      aux_sym_maintainer_instruction_token2,
  [2628] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(644), 1,
      anon_sym_LF,
  [2635] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(646), 1,
      aux_sym_maintainer_instruction_token2,
  [2642] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      aux_sym_maintainer_instruction_token2,
  [2649] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(650), 1,
      sym__non_newline_whitespace,
  [2656] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      anon_sym_LF,
  [2663] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(654), 1,
      anon_sym_LF,
  [2670] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(656), 1,
      sym__non_newline_whitespace,
  [2677] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_LF,
  [2684] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      sym__non_newline_whitespace,
  [2691] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(662), 1,
      sym__non_newline_whitespace,
  [2698] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(664), 1,
      anon_sym_LF,
  [2705] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      aux_sym_param_token1,
  [2712] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      sym__non_newline_whitespace,
  [2719] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(670), 1,
      anon_sym_LF,
  [2726] = 2,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(672), 1,
      sym_line_continuation,
  [2733] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      aux_sym_maintainer_instruction_token2,
  [2740] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      anon_sym_LF,
  [2747] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(678), 1,
      anon_sym_LF,
  [2754] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      anon_sym_LF,
  [2761] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(682), 1,
      aux_sym_param_token2,
  [2768] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      anon_sym_LF,
  [2775] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(686), 1,
      anon_sym_LF,
  [2782] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      anon_sym_EQ,
  [2789] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(690), 1,
      sym__non_newline_whitespace,
  [2796] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      sym__non_newline_whitespace,
  [2803] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(694), 1,
      sym__non_newline_whitespace,
  [2810] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(696), 1,
      sym__non_newline_whitespace,
  [2817] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(698), 1,
      sym__non_newline_whitespace,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(590), 1,
      anon_sym_EQ,
  [2831] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      sym__non_newline_whitespace,
  [2838] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(702), 1,
      sym__non_newline_whitespace,
  [2845] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      anon_sym_LF,
  [2852] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(706), 1,
      sym__non_newline_whitespace,
  [2859] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [2866] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(710), 1,
      sym__non_newline_whitespace,
  [2873] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [2880] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(714), 1,
      aux_sym_param_token2,
  [2887] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(716), 1,
      sym__non_newline_whitespace,
  [2894] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(718), 1,
      anon_sym_LF,
  [2901] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(720), 1,
      sym__non_newline_whitespace,
  [2908] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(724), 1,
      aux_sym_param_token2,
  [2922] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(726), 1,
      sym__non_newline_whitespace,
  [2929] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(728), 1,
      anon_sym_EQ,
  [2936] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
  [2943] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(732), 1,
      anon_sym_LF,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
  [2957] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(736), 1,
      anon_sym_LF,
  [2964] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
  [2971] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(740), 1,
      anon_sym_LF,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
  [2985] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(744), 1,
      anon_sym_LF,
  [2992] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
  [2999] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(748), 1,
      anon_sym_LF,
  [3006] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
  [3013] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(752), 1,
      anon_sym_LF,
  [3020] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
  [3027] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(756), 1,
      sym__non_newline_whitespace,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
  [3041] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(760), 1,
      sym__non_newline_whitespace,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
  [3055] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(764), 1,
      aux_sym_expansion_token1,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(766), 1,
      anon_sym_EQ,
  [3069] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(768), 1,
      aux_sym_expansion_token1,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(770), 1,
      anon_sym_EQ,
  [3083] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(772), 1,
      aux_sym_expansion_token1,
  [3090] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(774), 1,
      aux_sym_expansion_token1,
  [3097] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(776), 1,
      aux_sym_expansion_token1,
  [3104] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(778), 1,
      aux_sym_expansion_token1,
  [3111] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(780), 1,
      aux_sym_expansion_token1,
  [3118] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(782), 1,
      aux_sym_expansion_token1,
  [3125] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(784), 1,
      aux_sym_expansion_token1,
  [3132] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(786), 1,
      aux_sym_expansion_token1,
  [3139] = 2,
    ACTIONS(129), 1,
      sym_line_continuation,
    ACTIONS(788), 1,
      aux_sym_expansion_token1,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(790), 1,
      aux_sym_param_token1,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(792), 1,
      aux_sym_param_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 269,
  [SMALL_STATE(6)] = 296,
  [SMALL_STATE(7)] = 320,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 364,
  [SMALL_STATE(10)] = 386,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 430,
  [SMALL_STATE(13)] = 452,
  [SMALL_STATE(14)] = 476,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 523,
  [SMALL_STATE(17)] = 544,
  [SMALL_STATE(18)] = 565,
  [SMALL_STATE(19)] = 586,
  [SMALL_STATE(20)] = 607,
  [SMALL_STATE(21)] = 628,
  [SMALL_STATE(22)] = 649,
  [SMALL_STATE(23)] = 670,
  [SMALL_STATE(24)] = 691,
  [SMALL_STATE(25)] = 711,
  [SMALL_STATE(26)] = 731,
  [SMALL_STATE(27)] = 749,
  [SMALL_STATE(28)] = 767,
  [SMALL_STATE(29)] = 781,
  [SMALL_STATE(30)] = 799,
  [SMALL_STATE(31)] = 819,
  [SMALL_STATE(32)] = 839,
  [SMALL_STATE(33)] = 857,
  [SMALL_STATE(34)] = 877,
  [SMALL_STATE(35)] = 899,
  [SMALL_STATE(36)] = 921,
  [SMALL_STATE(37)] = 943,
  [SMALL_STATE(38)] = 963,
  [SMALL_STATE(39)] = 981,
  [SMALL_STATE(40)] = 1001,
  [SMALL_STATE(41)] = 1021,
  [SMALL_STATE(42)] = 1039,
  [SMALL_STATE(43)] = 1059,
  [SMALL_STATE(44)] = 1081,
  [SMALL_STATE(45)] = 1101,
  [SMALL_STATE(46)] = 1121,
  [SMALL_STATE(47)] = 1141,
  [SMALL_STATE(48)] = 1163,
  [SMALL_STATE(49)] = 1177,
  [SMALL_STATE(50)] = 1190,
  [SMALL_STATE(51)] = 1203,
  [SMALL_STATE(52)] = 1220,
  [SMALL_STATE(53)] = 1235,
  [SMALL_STATE(54)] = 1248,
  [SMALL_STATE(55)] = 1265,
  [SMALL_STATE(56)] = 1278,
  [SMALL_STATE(57)] = 1295,
  [SMALL_STATE(58)] = 1312,
  [SMALL_STATE(59)] = 1325,
  [SMALL_STATE(60)] = 1342,
  [SMALL_STATE(61)] = 1355,
  [SMALL_STATE(62)] = 1368,
  [SMALL_STATE(63)] = 1381,
  [SMALL_STATE(64)] = 1396,
  [SMALL_STATE(65)] = 1413,
  [SMALL_STATE(66)] = 1432,
  [SMALL_STATE(67)] = 1449,
  [SMALL_STATE(68)] = 1466,
  [SMALL_STATE(69)] = 1483,
  [SMALL_STATE(70)] = 1500,
  [SMALL_STATE(71)] = 1517,
  [SMALL_STATE(72)] = 1534,
  [SMALL_STATE(73)] = 1551,
  [SMALL_STATE(74)] = 1568,
  [SMALL_STATE(75)] = 1585,
  [SMALL_STATE(76)] = 1602,
  [SMALL_STATE(77)] = 1616,
  [SMALL_STATE(78)] = 1632,
  [SMALL_STATE(79)] = 1648,
  [SMALL_STATE(80)] = 1660,
  [SMALL_STATE(81)] = 1676,
  [SMALL_STATE(82)] = 1692,
  [SMALL_STATE(83)] = 1706,
  [SMALL_STATE(84)] = 1722,
  [SMALL_STATE(85)] = 1738,
  [SMALL_STATE(86)] = 1748,
  [SMALL_STATE(87)] = 1758,
  [SMALL_STATE(88)] = 1772,
  [SMALL_STATE(89)] = 1786,
  [SMALL_STATE(90)] = 1800,
  [SMALL_STATE(91)] = 1814,
  [SMALL_STATE(92)] = 1826,
  [SMALL_STATE(93)] = 1838,
  [SMALL_STATE(94)] = 1854,
  [SMALL_STATE(95)] = 1866,
  [SMALL_STATE(96)] = 1880,
  [SMALL_STATE(97)] = 1894,
  [SMALL_STATE(98)] = 1910,
  [SMALL_STATE(99)] = 1926,
  [SMALL_STATE(100)] = 1938,
  [SMALL_STATE(101)] = 1954,
  [SMALL_STATE(102)] = 1970,
  [SMALL_STATE(103)] = 1981,
  [SMALL_STATE(104)] = 1992,
  [SMALL_STATE(105)] = 2005,
  [SMALL_STATE(106)] = 2018,
  [SMALL_STATE(107)] = 2027,
  [SMALL_STATE(108)] = 2040,
  [SMALL_STATE(109)] = 2051,
  [SMALL_STATE(110)] = 2062,
  [SMALL_STATE(111)] = 2073,
  [SMALL_STATE(112)] = 2086,
  [SMALL_STATE(113)] = 2099,
  [SMALL_STATE(114)] = 2112,
  [SMALL_STATE(115)] = 2125,
  [SMALL_STATE(116)] = 2136,
  [SMALL_STATE(117)] = 2147,
  [SMALL_STATE(118)] = 2158,
  [SMALL_STATE(119)] = 2169,
  [SMALL_STATE(120)] = 2180,
  [SMALL_STATE(121)] = 2190,
  [SMALL_STATE(122)] = 2200,
  [SMALL_STATE(123)] = 2210,
  [SMALL_STATE(124)] = 2220,
  [SMALL_STATE(125)] = 2230,
  [SMALL_STATE(126)] = 2240,
  [SMALL_STATE(127)] = 2248,
  [SMALL_STATE(128)] = 2258,
  [SMALL_STATE(129)] = 2268,
  [SMALL_STATE(130)] = 2278,
  [SMALL_STATE(131)] = 2288,
  [SMALL_STATE(132)] = 2298,
  [SMALL_STATE(133)] = 2306,
  [SMALL_STATE(134)] = 2316,
  [SMALL_STATE(135)] = 2326,
  [SMALL_STATE(136)] = 2336,
  [SMALL_STATE(137)] = 2346,
  [SMALL_STATE(138)] = 2356,
  [SMALL_STATE(139)] = 2366,
  [SMALL_STATE(140)] = 2376,
  [SMALL_STATE(141)] = 2386,
  [SMALL_STATE(142)] = 2396,
  [SMALL_STATE(143)] = 2406,
  [SMALL_STATE(144)] = 2416,
  [SMALL_STATE(145)] = 2426,
  [SMALL_STATE(146)] = 2436,
  [SMALL_STATE(147)] = 2444,
  [SMALL_STATE(148)] = 2454,
  [SMALL_STATE(149)] = 2464,
  [SMALL_STATE(150)] = 2474,
  [SMALL_STATE(151)] = 2484,
  [SMALL_STATE(152)] = 2494,
  [SMALL_STATE(153)] = 2504,
  [SMALL_STATE(154)] = 2512,
  [SMALL_STATE(155)] = 2520,
  [SMALL_STATE(156)] = 2530,
  [SMALL_STATE(157)] = 2537,
  [SMALL_STATE(158)] = 2544,
  [SMALL_STATE(159)] = 2551,
  [SMALL_STATE(160)] = 2558,
  [SMALL_STATE(161)] = 2565,
  [SMALL_STATE(162)] = 2572,
  [SMALL_STATE(163)] = 2579,
  [SMALL_STATE(164)] = 2586,
  [SMALL_STATE(165)] = 2593,
  [SMALL_STATE(166)] = 2600,
  [SMALL_STATE(167)] = 2607,
  [SMALL_STATE(168)] = 2614,
  [SMALL_STATE(169)] = 2621,
  [SMALL_STATE(170)] = 2628,
  [SMALL_STATE(171)] = 2635,
  [SMALL_STATE(172)] = 2642,
  [SMALL_STATE(173)] = 2649,
  [SMALL_STATE(174)] = 2656,
  [SMALL_STATE(175)] = 2663,
  [SMALL_STATE(176)] = 2670,
  [SMALL_STATE(177)] = 2677,
  [SMALL_STATE(178)] = 2684,
  [SMALL_STATE(179)] = 2691,
  [SMALL_STATE(180)] = 2698,
  [SMALL_STATE(181)] = 2705,
  [SMALL_STATE(182)] = 2712,
  [SMALL_STATE(183)] = 2719,
  [SMALL_STATE(184)] = 2726,
  [SMALL_STATE(185)] = 2733,
  [SMALL_STATE(186)] = 2740,
  [SMALL_STATE(187)] = 2747,
  [SMALL_STATE(188)] = 2754,
  [SMALL_STATE(189)] = 2761,
  [SMALL_STATE(190)] = 2768,
  [SMALL_STATE(191)] = 2775,
  [SMALL_STATE(192)] = 2782,
  [SMALL_STATE(193)] = 2789,
  [SMALL_STATE(194)] = 2796,
  [SMALL_STATE(195)] = 2803,
  [SMALL_STATE(196)] = 2810,
  [SMALL_STATE(197)] = 2817,
  [SMALL_STATE(198)] = 2824,
  [SMALL_STATE(199)] = 2831,
  [SMALL_STATE(200)] = 2838,
  [SMALL_STATE(201)] = 2845,
  [SMALL_STATE(202)] = 2852,
  [SMALL_STATE(203)] = 2859,
  [SMALL_STATE(204)] = 2866,
  [SMALL_STATE(205)] = 2873,
  [SMALL_STATE(206)] = 2880,
  [SMALL_STATE(207)] = 2887,
  [SMALL_STATE(208)] = 2894,
  [SMALL_STATE(209)] = 2901,
  [SMALL_STATE(210)] = 2908,
  [SMALL_STATE(211)] = 2915,
  [SMALL_STATE(212)] = 2922,
  [SMALL_STATE(213)] = 2929,
  [SMALL_STATE(214)] = 2936,
  [SMALL_STATE(215)] = 2943,
  [SMALL_STATE(216)] = 2950,
  [SMALL_STATE(217)] = 2957,
  [SMALL_STATE(218)] = 2964,
  [SMALL_STATE(219)] = 2971,
  [SMALL_STATE(220)] = 2978,
  [SMALL_STATE(221)] = 2985,
  [SMALL_STATE(222)] = 2992,
  [SMALL_STATE(223)] = 2999,
  [SMALL_STATE(224)] = 3006,
  [SMALL_STATE(225)] = 3013,
  [SMALL_STATE(226)] = 3020,
  [SMALL_STATE(227)] = 3027,
  [SMALL_STATE(228)] = 3034,
  [SMALL_STATE(229)] = 3041,
  [SMALL_STATE(230)] = 3048,
  [SMALL_STATE(231)] = 3055,
  [SMALL_STATE(232)] = 3062,
  [SMALL_STATE(233)] = 3069,
  [SMALL_STATE(234)] = 3076,
  [SMALL_STATE(235)] = 3083,
  [SMALL_STATE(236)] = 3090,
  [SMALL_STATE(237)] = 3097,
  [SMALL_STATE(238)] = 3104,
  [SMALL_STATE(239)] = 3111,
  [SMALL_STATE(240)] = 3118,
  [SMALL_STATE(241)] = 3125,
  [SMALL_STATE(242)] = 3132,
  [SMALL_STATE(243)] = 3139,
  [SMALL_STATE(244)] = 3146,
  [SMALL_STATE(245)] = 3153,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(133),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(9),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(122),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(17),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(151),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(18),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(143),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(23),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(124),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(24),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(185),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(129),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(30),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(30),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(38),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(149),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(144),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(52),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(79),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(144),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(54),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(152),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(57),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(155),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(64),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(147),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 11),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(128),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(70),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(198),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_group, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(245),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(89),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(192),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(120),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(100),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 4),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(13),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3, .production_id = 2),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 12),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [640] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 7),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 14),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
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
