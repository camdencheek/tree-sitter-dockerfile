#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 230
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  aux_sym__user_name_or_group_token1 = 15,
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
  aux_sym__user_name_or_group = 76,
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
  [aux_sym__user_name_or_group_token1] = "_user_name_or_group_token1",
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
  [aux_sym__user_name_or_group] = "_user_name_or_group",
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
  [aux_sym__user_name_or_group_token1] = aux_sym__user_name_or_group_token1,
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
  [aux_sym__user_name_or_group] = aux_sym__user_name_or_group,
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
  [aux_sym__user_name_or_group_token1] = {
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
  [aux_sym__user_name_or_group] = {
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
    {field_name, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [3] =
    {field_user, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_name, 0},
    {field_tag, 1},
  [7] =
    {field_digest, 1},
    {field_name, 0},
  [9] =
    {field_as, 3},
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
    {field_group, 3},
    {field_user, 1},
  [19] =
    {field_default, 3},
    {field_name, 1},
  [21] =
    {field_name, 1},
    {field_value, 3},
  [23] =
    {field_as, 4},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = sym_unquoted_string,
  },
  [11] = {
    [1] = sym_unquoted_string,
    [3] = sym_unquoted_string,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__user_name_or_group, 2,
    aux_sym__user_name_or_group,
    sym_unquoted_string,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(230);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == 'U') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(238);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(238);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(228);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(192);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(215);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38)
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 45:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 46:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 83:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
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
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(184);
      END_STATE();
    case 96:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 122:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(136);
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
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 142:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 146:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 147:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
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
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '}') ADVANCE(201);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(131);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(115);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 157:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '}') ADVANCE(201);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(69);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(131);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(115);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
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
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(230);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(200);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
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
      if (lookahead == '\n') ADVANCE(161);
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
  [1] = {.lex_state = 156},
  [2] = {.lex_state = 156},
  [3] = {.lex_state = 156},
  [4] = {.lex_state = 156},
  [5] = {.lex_state = 156},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 156},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 156},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 156},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 38},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 38},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 25},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 156},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 25},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 156},
  [104] = {.lex_state = 156},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 46},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 25},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 38},
  [113] = {.lex_state = 38},
  [114] = {.lex_state = 156},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 156},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 25},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 44},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 22},
  [124] = {.lex_state = 44},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 44},
  [127] = {.lex_state = 44},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 44},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 44},
  [132] = {.lex_state = 44},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 44},
  [137] = {.lex_state = 44},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 156},
  [140] = {.lex_state = 44},
  [141] = {.lex_state = 156},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 44},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 19},
  [147] = {.lex_state = 156},
  [148] = {.lex_state = 156},
  [149] = {.lex_state = 40},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 156},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 29},
  [154] = {.lex_state = 22},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 156},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 189},
  [163] = {.lex_state = 38},
  [164] = {.lex_state = 50},
  [165] = {.lex_state = 38},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 156},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 38},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 156},
  [181] = {.lex_state = 156},
  [182] = {.lex_state = 48},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 189},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 189},
  [189] = {.lex_state = 156},
  [190] = {.lex_state = 50},
  [191] = {.lex_state = 189},
  [192] = {.lex_state = 51},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 50},
  [196] = {.lex_state = 49},
  [197] = {.lex_state = 51},
  [198] = {.lex_state = 156},
  [199] = {.lex_state = 156},
  [200] = {.lex_state = 156},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 156},
  [203] = {.lex_state = 38},
  [204] = {.lex_state = 156},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 156},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 156},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 156},
  [213] = {.lex_state = 156},
  [214] = {.lex_state = 156},
  [215] = {.lex_state = 51},
  [216] = {.lex_state = 156},
  [217] = {.lex_state = 51},
  [218] = {.lex_state = 156},
  [219] = {.lex_state = 51},
  [220] = {.lex_state = 51},
  [221] = {.lex_state = 51},
  [222] = {.lex_state = 51},
  [223] = {.lex_state = 51},
  [224] = {.lex_state = 51},
  [225] = {.lex_state = 51},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 51},
  [228] = {.lex_state = 48},
  [229] = {.lex_state = 48},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_source_file] = STATE(185),
    [sym__instruction] = STATE(184),
    [sym_from_instruction] = STATE(184),
    [sym_run_instruction] = STATE(184),
    [sym_cmd_instruction] = STATE(184),
    [sym_label_instruction] = STATE(184),
    [sym_expose_instruction] = STATE(184),
    [sym_env_instruction] = STATE(184),
    [sym_add_instruction] = STATE(184),
    [sym_copy_instruction] = STATE(184),
    [sym_entrypoint_instruction] = STATE(184),
    [sym_volume_instruction] = STATE(184),
    [sym_user_instruction] = STATE(184),
    [sym_workdir_instruction] = STATE(184),
    [sym_arg_instruction] = STATE(184),
    [sym_onbuild_instruction] = STATE(184),
    [sym_stopsignal_instruction] = STATE(184),
    [sym_healthcheck_instruction] = STATE(184),
    [sym_shell_instruction] = STATE(184),
    [sym_maintainer_instruction] = STATE(184),
    [sym_cross_build_instruction] = STATE(184),
    [sym_comment] = STATE(184),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    ACTIONS(103), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(106), 1,
      anon_sym_POUND,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(184), 21,
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
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(184), 21,
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
    STATE(158), 20,
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
    ACTIONS(47), 21,
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
  [296] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      aux_sym_image_name_token1,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    STATE(28), 1,
      sym_image_name,
    STATE(29), 1,
      sym_param,
    STATE(144), 1,
      sym_image_spec,
    STATE(9), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [322] = 6,
    ACTIONS(119), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(121), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      aux_sym_image_name_token1,
    ACTIONS(127), 1,
      sym_line_continuation,
    STATE(7), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(117), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [344] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(201), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [366] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(137), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      aux_sym_image_name_token1,
    STATE(7), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(135), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [388] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(79), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(160), 1,
      sym_shell_fragment,
    STATE(178), 1,
      sym__anon_comment,
    ACTIONS(143), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(14), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [412] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(123), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [434] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(125), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [456] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(211), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [478] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(79), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(175), 1,
      sym_shell_fragment,
    STATE(178), 1,
      sym__anon_comment,
    ACTIONS(143), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(42), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [502] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(160), 1,
      aux_sym_image_tag_token1,
    ACTIONS(153), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(15), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [523] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(145), 1,
      sym_shell_fragment,
    ACTIONS(143), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(161), 2,
      sym_string_array,
      sym_shell_command,
  [544] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(167), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      aux_sym__env_key_token1,
    ACTIONS(172), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(17), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [565] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 1,
      anon_sym_DOLLAR,
    ACTIONS(179), 1,
      aux_sym__env_key_token1,
    ACTIONS(181), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(17), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [586] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      aux_sym_label_pair_token1,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    ACTIONS(186), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [607] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(145), 1,
      sym_shell_fragment,
    ACTIONS(143), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(177), 2,
      sym_string_array,
      sym_shell_command,
  [628] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(145), 1,
      sym_shell_fragment,
    ACTIONS(143), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(179), 2,
      sym_string_array,
      sym_shell_command,
  [649] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(191), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      aux_sym_image_tag_token1,
    ACTIONS(189), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(15), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [670] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(179), 1,
      aux_sym_label_pair_token1,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [691] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      aux_sym_path_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    STATE(60), 1,
      sym_expansion,
    STATE(99), 1,
      sym_param,
    STATE(165), 1,
      sym_path,
  [713] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(213), 1,
      sym_escape_sequence,
    STATE(41), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [733] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(217), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
    ACTIONS(215), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [753] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      aux_sym_path_token1,
    ACTIONS(225), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(115), 1,
      sym_path,
    STATE(193), 1,
      sym_string_array,
  [775] = 7,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(229), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(233), 1,
      anon_sym_AT,
    STATE(85), 1,
      sym_image_tag,
    STATE(135), 1,
      sym_image_digest,
  [797] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      aux_sym_image_name_token1,
    STATE(28), 1,
      sym_image_name,
    STATE(133), 1,
      sym_image_spec,
    STATE(9), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [817] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      aux_sym_path_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    STATE(60), 1,
      sym_expansion,
    STATE(92), 1,
      sym_param,
    STATE(163), 1,
      sym_path,
  [839] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(239), 1,
      sym_escape_sequence,
    STATE(35), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [859] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(245), 1,
      sym_escape_sequence,
    STATE(25), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [879] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(247), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(249), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [893] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(251), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(253), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [907] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(213), 1,
      sym_escape_sequence,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    STATE(41), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [927] = 7,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
  [949] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      aux_sym_expose_port_token1,
    STATE(37), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [967] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(275), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      aux_sym_image_digest_token1,
    STATE(40), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [987] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(283), 1,
      aux_sym_expose_port_token1,
    STATE(37), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1005] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(287), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    ACTIONS(292), 1,
      aux_sym_image_digest_token1,
    STATE(40), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [1025] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(303), 1,
      sym_escape_sequence,
    STATE(41), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1045] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(308), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym__anon_comment,
    ACTIONS(306), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(42), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [1063] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(315), 1,
      sym_escape_sequence,
    STATE(46), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1083] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      aux_sym_path_token2,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(45), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1101] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      aux_sym_path_token2,
    ACTIONS(323), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(47), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1119] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(213), 1,
      sym_escape_sequence,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    STATE(41), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1139] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      aux_sym_path_token2,
    ACTIONS(334), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(47), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1157] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(337), 1,
      anon_sym_NONE,
    ACTIONS(339), 1,
      anon_sym_DASH_DASH,
    STATE(159), 1,
      sym_cmd_instruction,
    STATE(58), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1177] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(247), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(249), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1190] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      aux_sym_path_token2,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(345), 1,
      sym__non_newline_whitespace,
    STATE(72), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1207] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      aux_sym_image_alias_token1,
    STATE(67), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1224] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      aux_sym__env_key_token1,
    STATE(149), 1,
      sym__env_key,
    STATE(170), 1,
      sym__spaced_env_pair,
    STATE(61), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1241] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_DOLLAR,
    ACTIONS(357), 1,
      aux_sym_expose_port_token1,
    STATE(39), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1256] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(361), 1,
      aux_sym_path_token2,
    ACTIONS(363), 1,
      anon_sym_DOLLAR,
    STATE(59), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1273] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(251), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(253), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1286] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    STATE(57), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1303] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(373), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(376), 1,
      anon_sym_DOLLAR,
    STATE(57), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1320] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(339), 1,
      anon_sym_DASH_DASH,
    STATE(176), 1,
      sym_cmd_instruction,
    STATE(90), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1337] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(363), 1,
      anon_sym_DOLLAR,
    ACTIONS(379), 1,
      aux_sym_path_token2,
    STATE(62), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1354] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      sym__non_newline_whitespace,
    ACTIONS(381), 1,
      aux_sym_path_token2,
    STATE(50), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1371] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 1,
      aux_sym__env_key_token1,
    STATE(213), 1,
      sym__env_key,
    STATE(66), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1388] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(389), 1,
      aux_sym_path_token2,
    ACTIONS(392), 1,
      anon_sym_DOLLAR,
    STATE(62), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1405] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_DOLLAR,
    ACTIONS(397), 1,
      aux_sym_image_alias_token1,
    STATE(208), 1,
      sym_image_alias,
    STATE(51), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1422] = 4,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(401), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(403), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1437] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(247), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1450] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      aux_sym__env_key_token1,
    STATE(213), 1,
      sym__env_key,
    STATE(66), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1467] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(412), 1,
      anon_sym_DOLLAR,
    ACTIONS(415), 1,
      aux_sym_image_alias_token1,
    STATE(67), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1484] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_DOLLAR,
    ACTIONS(397), 1,
      aux_sym_image_alias_token1,
    STATE(183), 1,
      sym_image_alias,
    STATE(51), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1501] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(253), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(251), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1514] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(249), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(247), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1527] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(253), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(251), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1540] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      sym__non_newline_whitespace,
    ACTIONS(418), 1,
      aux_sym_path_token2,
    ACTIONS(421), 1,
      anon_sym_DOLLAR,
    STATE(72), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1557] = 6,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(261), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(424), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
  [1576] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(251), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(253), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1589] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(247), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(249), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1602] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(249), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1612] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym_expansion,
    STATE(207), 1,
      sym_path,
  [1628] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym_expansion,
    STATE(168), 1,
      sym_path,
  [1644] = 4,
    ACTIONS(430), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(432), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [1658] = 4,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(441), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(438), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [1672] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(247), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(249), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [1684] = 4,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(445), 1,
      aux_sym_label_pair_token1,
    STATE(82), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1698] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(253), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1710] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(249), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1722] = 5,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      anon_sym_AT,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(450), 1,
      aux_sym_from_instruction_token2,
    STATE(146), 1,
      sym_image_digest,
  [1738] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(454), 1,
      aux_sym_image_digest_token1,
    STATE(38), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [1752] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(458), 1,
      aux_sym_image_tag_token1,
    STATE(22), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [1766] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(251), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(253), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [1778] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym_expansion,
    STATE(169), 1,
      sym_path,
  [1794] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(460), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(462), 1,
      anon_sym_DASH_DASH,
    STATE(90), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1808] = 4,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      aux_sym_label_pair_token1,
    STATE(82), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1822] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      aux_sym_path_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_expansion,
    STATE(173), 1,
      sym_path,
  [1838] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(253), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1848] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(223), 1,
      aux_sym_path_token1,
    ACTIONS(225), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(130), 1,
      sym_path,
  [1864] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(469), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(471), 1,
      anon_sym_DOLLAR,
    STATE(56), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1878] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_DOLLAR,
    ACTIONS(473), 1,
      aux_sym__user_name_or_group_token1,
    STATE(73), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
  [1894] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym_expansion,
    STATE(226), 1,
      sym_path,
  [1910] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_DOLLAR,
    ACTIONS(473), 1,
      aux_sym__user_name_or_group_token1,
    STATE(36), 1,
      aux_sym__user_name_or_group,
    STATE(100), 1,
      sym_expansion,
  [1926] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      aux_sym_path_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_expansion,
    STATE(203), 1,
      sym_path,
  [1942] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(475), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(477), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [1954] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(54), 1,
      sym_expansion,
    STATE(209), 1,
      sym_path,
  [1970] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [1981] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_string_array_repeat1,
  [1994] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_double_quoted_string,
  [2007] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2018] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(487), 1,
      aux_sym_label_pair_token1,
    STATE(91), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [2029] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2040] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2051] = 4,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 1,
      sym__non_newline_whitespace,
    STATE(119), 1,
      aux_sym_volume_instruction_repeat1,
  [2064] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2075] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2086] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      sym__non_newline_whitespace,
    ACTIONS(249), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2097] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      sym__non_newline_whitespace,
    ACTIONS(253), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2108] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym_string_array_repeat1,
  [2121] = 4,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(491), 1,
      sym__non_newline_whitespace,
    ACTIONS(495), 1,
      anon_sym_LF,
    STATE(109), 1,
      aux_sym_volume_instruction_repeat1,
  [2134] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(497), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2143] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym_string_array_repeat1,
  [2156] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(504), 1,
      anon_sym_LF,
    ACTIONS(506), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2167] = 4,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(508), 1,
      anon_sym_LF,
    ACTIONS(510), 1,
      sym__non_newline_whitespace,
    STATE(119), 1,
      aux_sym_volume_instruction_repeat1,
  [2180] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 1,
      aux_sym__env_key_token1,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 1,
      sym_variable,
  [2200] = 3,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      sym_line_continuation,
    STATE(122), 1,
      aux_sym_shell_command_repeat2,
  [2210] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 1,
      aux_sym_label_pair_token1,
  [2220] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      sym_variable,
  [2230] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(536), 1,
      aux_sym__env_key_token1,
  [2240] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
    ACTIONS(540), 1,
      sym_variable,
  [2250] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
    ACTIONS(544), 1,
      sym_variable,
  [2260] = 3,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 1,
      sym_line_continuation,
    STATE(122), 1,
      aux_sym_shell_command_repeat2,
  [2270] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      sym_variable,
  [2280] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(508), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2288] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    ACTIONS(556), 1,
      sym_variable,
  [2298] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 1,
      sym_variable,
  [2308] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(564), 1,
      aux_sym_from_instruction_token2,
  [2318] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      aux_sym_image_name_token1,
  [2328] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_LF,
    ACTIONS(572), 1,
      aux_sym_from_instruction_token2,
  [2338] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      sym_variable,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      sym_variable,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(167), 1,
      sym_string_array,
  [2368] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(582), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      sym_variable,
  [2386] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2394] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    ACTIONS(590), 1,
      sym_variable,
  [2404] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym_variable,
  [2414] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 1,
      aux_sym_from_instruction_token2,
  [2424] = 3,
    ACTIONS(548), 1,
      sym_line_continuation,
    ACTIONS(600), 1,
      anon_sym_LF,
    STATE(128), 1,
      aux_sym_shell_command_repeat2,
  [2434] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(602), 1,
      anon_sym_LF,
    ACTIONS(604), 1,
      aux_sym_from_instruction_token2,
  [2444] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2452] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_double_quoted_string,
  [2462] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(606), 1,
      anon_sym_EQ,
    ACTIONS(608), 1,
      aux_sym__spaced_env_pair_token1,
  [2472] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      aux_sym__env_key_token1,
  [2482] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(566), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [2490] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      aux_sym_label_pair_token1,
  [2500] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      aux_sym_path_token1,
  [2510] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 1,
      aux_sym_label_pair_token1,
  [2520] = 3,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      anon_sym_EQ,
  [2530] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      anon_sym_LF,
  [2537] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
  [2544] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_LF,
  [2551] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_LF,
  [2558] = 2,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(624), 1,
      sym_line_continuation,
  [2565] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(626), 1,
      anon_sym_LF,
  [2572] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(628), 1,
      aux_sym_maintainer_instruction_token2,
  [2579] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      sym__non_newline_whitespace,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(632), 1,
      aux_sym_param_token2,
  [2593] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(634), 1,
      sym__non_newline_whitespace,
  [2600] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      anon_sym_LF,
  [2607] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(638), 1,
      anon_sym_LF,
  [2614] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      anon_sym_LF,
  [2621] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(642), 1,
      anon_sym_LF,
  [2628] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(644), 1,
      anon_sym_LF,
  [2635] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(646), 1,
      anon_sym_EQ,
  [2642] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_LF,
  [2649] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(650), 1,
      sym__non_newline_whitespace,
  [2656] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      anon_sym_LF,
  [2663] = 2,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      sym_line_continuation,
  [2670] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_LF,
  [2677] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      anon_sym_LF,
  [2684] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(662), 1,
      anon_sym_LF,
  [2691] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(664), 1,
      anon_sym_LF,
  [2698] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
  [2705] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
  [2712] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(670), 1,
      aux_sym_param_token1,
  [2719] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      anon_sym_LF,
  [2726] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      anon_sym_LF,
  [2733] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
  [2740] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(678), 1,
      aux_sym_maintainer_instruction_token2,
  [2747] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      anon_sym_LF,
  [2754] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(682), 1,
      aux_sym_maintainer_instruction_token2,
  [2761] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
  [2768] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(686), 1,
      aux_sym_param_token2,
  [2775] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      aux_sym_maintainer_instruction_token2,
  [2782] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(690), 1,
      aux_sym_expansion_token1,
  [2789] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      anon_sym_LF,
  [2796] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(694), 1,
      anon_sym_LF,
  [2803] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(696), 1,
      aux_sym_param_token2,
  [2810] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(698), 1,
      aux_sym_arg_instruction_token2,
  [2817] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      aux_sym_expansion_token1,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
  [2831] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      anon_sym_EQ,
  [2838] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
  [2845] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      anon_sym_LF,
  [2852] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
  [2859] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(712), 1,
      sym__non_newline_whitespace,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
  [2873] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(716), 1,
      anon_sym_LF,
  [2880] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
  [2887] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(720), 1,
      anon_sym_LF,
  [2894] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(722), 1,
      anon_sym_LF,
  [2901] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(724), 1,
      anon_sym_LF,
  [2908] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
  [2915] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(728), 1,
      anon_sym_LF,
  [2922] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
  [2929] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(606), 1,
      anon_sym_EQ,
  [2936] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
  [2943] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(734), 1,
      aux_sym_expansion_token1,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(736), 1,
      anon_sym_EQ,
  [2957] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(738), 1,
      aux_sym_expansion_token1,
  [2964] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(740), 1,
      anon_sym_EQ,
  [2971] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(742), 1,
      aux_sym_expansion_token1,
  [2978] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(744), 1,
      aux_sym_expansion_token1,
  [2985] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(746), 1,
      aux_sym_expansion_token1,
  [2992] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(748), 1,
      aux_sym_expansion_token1,
  [2999] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(750), 1,
      aux_sym_expansion_token1,
  [3006] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(752), 1,
      aux_sym_expansion_token1,
  [3013] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(754), 1,
      aux_sym_expansion_token1,
  [3020] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(756), 1,
      anon_sym_LF,
  [3027] = 2,
    ACTIONS(127), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      aux_sym_expansion_token1,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(760), 1,
      aux_sym_param_token1,
  [3041] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(762), 1,
      aux_sym_param_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 269,
  [SMALL_STATE(6)] = 296,
  [SMALL_STATE(7)] = 322,
  [SMALL_STATE(8)] = 344,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 388,
  [SMALL_STATE(11)] = 412,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 478,
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
  [SMALL_STATE(25)] = 713,
  [SMALL_STATE(26)] = 733,
  [SMALL_STATE(27)] = 753,
  [SMALL_STATE(28)] = 775,
  [SMALL_STATE(29)] = 797,
  [SMALL_STATE(30)] = 817,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 859,
  [SMALL_STATE(33)] = 879,
  [SMALL_STATE(34)] = 893,
  [SMALL_STATE(35)] = 907,
  [SMALL_STATE(36)] = 927,
  [SMALL_STATE(37)] = 949,
  [SMALL_STATE(38)] = 967,
  [SMALL_STATE(39)] = 987,
  [SMALL_STATE(40)] = 1005,
  [SMALL_STATE(41)] = 1025,
  [SMALL_STATE(42)] = 1045,
  [SMALL_STATE(43)] = 1063,
  [SMALL_STATE(44)] = 1083,
  [SMALL_STATE(45)] = 1101,
  [SMALL_STATE(46)] = 1119,
  [SMALL_STATE(47)] = 1139,
  [SMALL_STATE(48)] = 1157,
  [SMALL_STATE(49)] = 1177,
  [SMALL_STATE(50)] = 1190,
  [SMALL_STATE(51)] = 1207,
  [SMALL_STATE(52)] = 1224,
  [SMALL_STATE(53)] = 1241,
  [SMALL_STATE(54)] = 1256,
  [SMALL_STATE(55)] = 1273,
  [SMALL_STATE(56)] = 1286,
  [SMALL_STATE(57)] = 1303,
  [SMALL_STATE(58)] = 1320,
  [SMALL_STATE(59)] = 1337,
  [SMALL_STATE(60)] = 1354,
  [SMALL_STATE(61)] = 1371,
  [SMALL_STATE(62)] = 1388,
  [SMALL_STATE(63)] = 1405,
  [SMALL_STATE(64)] = 1422,
  [SMALL_STATE(65)] = 1437,
  [SMALL_STATE(66)] = 1450,
  [SMALL_STATE(67)] = 1467,
  [SMALL_STATE(68)] = 1484,
  [SMALL_STATE(69)] = 1501,
  [SMALL_STATE(70)] = 1514,
  [SMALL_STATE(71)] = 1527,
  [SMALL_STATE(72)] = 1540,
  [SMALL_STATE(73)] = 1557,
  [SMALL_STATE(74)] = 1576,
  [SMALL_STATE(75)] = 1589,
  [SMALL_STATE(76)] = 1602,
  [SMALL_STATE(77)] = 1612,
  [SMALL_STATE(78)] = 1628,
  [SMALL_STATE(79)] = 1644,
  [SMALL_STATE(80)] = 1658,
  [SMALL_STATE(81)] = 1672,
  [SMALL_STATE(82)] = 1684,
  [SMALL_STATE(83)] = 1698,
  [SMALL_STATE(84)] = 1710,
  [SMALL_STATE(85)] = 1722,
  [SMALL_STATE(86)] = 1738,
  [SMALL_STATE(87)] = 1752,
  [SMALL_STATE(88)] = 1766,
  [SMALL_STATE(89)] = 1778,
  [SMALL_STATE(90)] = 1794,
  [SMALL_STATE(91)] = 1808,
  [SMALL_STATE(92)] = 1822,
  [SMALL_STATE(93)] = 1838,
  [SMALL_STATE(94)] = 1848,
  [SMALL_STATE(95)] = 1864,
  [SMALL_STATE(96)] = 1878,
  [SMALL_STATE(97)] = 1894,
  [SMALL_STATE(98)] = 1910,
  [SMALL_STATE(99)] = 1926,
  [SMALL_STATE(100)] = 1942,
  [SMALL_STATE(101)] = 1954,
  [SMALL_STATE(102)] = 1970,
  [SMALL_STATE(103)] = 1981,
  [SMALL_STATE(104)] = 1994,
  [SMALL_STATE(105)] = 2007,
  [SMALL_STATE(106)] = 2018,
  [SMALL_STATE(107)] = 2029,
  [SMALL_STATE(108)] = 2040,
  [SMALL_STATE(109)] = 2051,
  [SMALL_STATE(110)] = 2064,
  [SMALL_STATE(111)] = 2075,
  [SMALL_STATE(112)] = 2086,
  [SMALL_STATE(113)] = 2097,
  [SMALL_STATE(114)] = 2108,
  [SMALL_STATE(115)] = 2121,
  [SMALL_STATE(116)] = 2134,
  [SMALL_STATE(117)] = 2143,
  [SMALL_STATE(118)] = 2156,
  [SMALL_STATE(119)] = 2167,
  [SMALL_STATE(120)] = 2180,
  [SMALL_STATE(121)] = 2190,
  [SMALL_STATE(122)] = 2200,
  [SMALL_STATE(123)] = 2210,
  [SMALL_STATE(124)] = 2220,
  [SMALL_STATE(125)] = 2230,
  [SMALL_STATE(126)] = 2240,
  [SMALL_STATE(127)] = 2250,
  [SMALL_STATE(128)] = 2260,
  [SMALL_STATE(129)] = 2270,
  [SMALL_STATE(130)] = 2280,
  [SMALL_STATE(131)] = 2288,
  [SMALL_STATE(132)] = 2298,
  [SMALL_STATE(133)] = 2308,
  [SMALL_STATE(134)] = 2318,
  [SMALL_STATE(135)] = 2328,
  [SMALL_STATE(136)] = 2338,
  [SMALL_STATE(137)] = 2348,
  [SMALL_STATE(138)] = 2358,
  [SMALL_STATE(139)] = 2368,
  [SMALL_STATE(140)] = 2376,
  [SMALL_STATE(141)] = 2386,
  [SMALL_STATE(142)] = 2394,
  [SMALL_STATE(143)] = 2404,
  [SMALL_STATE(144)] = 2414,
  [SMALL_STATE(145)] = 2424,
  [SMALL_STATE(146)] = 2434,
  [SMALL_STATE(147)] = 2444,
  [SMALL_STATE(148)] = 2452,
  [SMALL_STATE(149)] = 2462,
  [SMALL_STATE(150)] = 2472,
  [SMALL_STATE(151)] = 2482,
  [SMALL_STATE(152)] = 2490,
  [SMALL_STATE(153)] = 2500,
  [SMALL_STATE(154)] = 2510,
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
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(143),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(7),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(131),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(15),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(124),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(17),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(126),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(100),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(142),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(142),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(64),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(129),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(40),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(127),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(41),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(41),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(162),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(47),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(137),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(57),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(132),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(62),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(136),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(213),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(121),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(67),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(72),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(140),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(80),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(171),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(229),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(148),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(94),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(10),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [676] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
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
