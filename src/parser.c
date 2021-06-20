#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 228
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
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
  sym_comment = 63,
  sym_source_file = 64,
  sym__instruction = 65,
  sym_from_instruction = 66,
  sym_run_instruction = 67,
  sym_cmd_instruction = 68,
  sym_label_instruction = 69,
  sym_expose_instruction = 70,
  sym_env_instruction = 71,
  sym_add_instruction = 72,
  sym_copy_instruction = 73,
  sym_entrypoint_instruction = 74,
  sym_volume_instruction = 75,
  sym_user_instruction = 76,
  aux_sym__user_name_or_group = 77,
  sym_workdir_instruction = 78,
  sym_arg_instruction = 79,
  sym_onbuild_instruction = 80,
  sym_stopsignal_instruction = 81,
  aux_sym__stopsignal_value = 82,
  sym_healthcheck_instruction = 83,
  sym_shell_instruction = 84,
  sym_maintainer_instruction = 85,
  sym_cross_build_instruction = 86,
  sym_path = 87,
  sym_expansion = 88,
  sym_env_pair = 89,
  sym__spaced_env_pair = 90,
  sym__env_key = 91,
  sym_expose_port = 92,
  sym_label_pair = 93,
  sym_image_spec = 94,
  sym_image_name = 95,
  sym_image_tag = 96,
  sym_image_digest = 97,
  sym_param = 98,
  sym_image_alias = 99,
  sym_string_array = 100,
  sym_shell_command = 101,
  sym_shell_fragment = 102,
  sym__comment_line = 103,
  sym__anon_comment = 104,
  sym_double_quoted_string = 105,
  sym_unquoted_string = 106,
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
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
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
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(176);
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
          lookahead == ' ') SKIP(157)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
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
      if (lookahead == '\n') SKIP(27)
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
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(239);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(239);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(229);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(193);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
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
          lookahead == ' ') SKIP(35)
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
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(201);
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
          lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
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
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
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
          lookahead == 'l') ADVANCE(168);
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
          lookahead == 'n') ADVANCE(166);
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
          lookahead == 'r') ADVANCE(175);
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
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(170);
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
          lookahead == 'y') ADVANCE(172);
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
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 158:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(246);
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
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 159:
      if (eof) ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(246);
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
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
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
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
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
          lookahead == 's') ADVANCE(165);
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
    case 246:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 158},
  [5] = {.lex_state = 158},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 158},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 46},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 158},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 158},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 25},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 30},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 30},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 34},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 158},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 158},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 39},
  [108] = {.lex_state = 158},
  [109] = {.lex_state = 47},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 158},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 158},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 22},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 158},
  [121] = {.lex_state = 45},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 45},
  [126] = {.lex_state = 37},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 45},
  [129] = {.lex_state = 45},
  [130] = {.lex_state = 45},
  [131] = {.lex_state = 158},
  [132] = {.lex_state = 45},
  [133] = {.lex_state = 24},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 45},
  [137] = {.lex_state = 45},
  [138] = {.lex_state = 45},
  [139] = {.lex_state = 24},
  [140] = {.lex_state = 45},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 158},
  [143] = {.lex_state = 30},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 158},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 45},
  [152] = {.lex_state = 158},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 45},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 190},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 48},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 51},
  [174] = {.lex_state = 158},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 39},
  [177] = {.lex_state = 39},
  [178] = {.lex_state = 158},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 158},
  [181] = {.lex_state = 52},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 158},
  [188] = {.lex_state = 51},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 39},
  [192] = {.lex_state = 158},
  [193] = {.lex_state = 51},
  [194] = {.lex_state = 39},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 158},
  [197] = {.lex_state = 158},
  [198] = {.lex_state = 158},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 158},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 158},
  [203] = {.lex_state = 50},
  [204] = {.lex_state = 158},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 158},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 158},
  [209] = {.lex_state = 190},
  [210] = {.lex_state = 158},
  [211] = {.lex_state = 190},
  [212] = {.lex_state = 158},
  [213] = {.lex_state = 52},
  [214] = {.lex_state = 158},
  [215] = {.lex_state = 52},
  [216] = {.lex_state = 158},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 52},
  [219] = {.lex_state = 52},
  [220] = {.lex_state = 52},
  [221] = {.lex_state = 52},
  [222] = {.lex_state = 52},
  [223] = {.lex_state = 52},
  [224] = {.lex_state = 52},
  [225] = {.lex_state = 52},
  [226] = {.lex_state = 50},
  [227] = {.lex_state = 50},
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
    [sym_source_file] = STATE(205),
    [sym__instruction] = STATE(207),
    [sym_from_instruction] = STATE(207),
    [sym_run_instruction] = STATE(207),
    [sym_cmd_instruction] = STATE(207),
    [sym_label_instruction] = STATE(207),
    [sym_expose_instruction] = STATE(207),
    [sym_env_instruction] = STATE(207),
    [sym_add_instruction] = STATE(207),
    [sym_copy_instruction] = STATE(207),
    [sym_entrypoint_instruction] = STATE(207),
    [sym_volume_instruction] = STATE(207),
    [sym_user_instruction] = STATE(207),
    [sym_workdir_instruction] = STATE(207),
    [sym_arg_instruction] = STATE(207),
    [sym_onbuild_instruction] = STATE(207),
    [sym_stopsignal_instruction] = STATE(207),
    [sym_healthcheck_instruction] = STATE(207),
    [sym_shell_instruction] = STATE(207),
    [sym_maintainer_instruction] = STATE(207),
    [sym_cross_build_instruction] = STATE(207),
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
    [sym_comment] = ACTIONS(45),
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
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(207), 20,
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
  [92] = 24,
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
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(207), 20,
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
  [184] = 21,
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
    STATE(185), 20,
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
  [267] = 2,
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
      sym_comment,
  [294] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(133), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [316] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(157), 1,
      sym_shell_fragment,
    STATE(159), 1,
      sym__anon_comment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(24), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [340] = 6,
    ACTIONS(123), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(125), 1,
      anon_sym_DOLLAR,
    ACTIONS(128), 1,
      aux_sym_image_name_token1,
    ACTIONS(131), 1,
      sym_line_continuation,
    STATE(8), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(121), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [362] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      aux_sym_image_name_token1,
    ACTIONS(137), 1,
      anon_sym_DASH_DASH,
    STATE(27), 1,
      sym_image_name,
    STATE(28), 1,
      sym_param,
    STATE(145), 1,
      sym_image_spec,
    STATE(14), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [388] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(159), 1,
      sym__anon_comment,
    STATE(169), 1,
      sym_shell_fragment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(7), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [412] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(16), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(122), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [434] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(158), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [456] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(164), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [478] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(147), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(151), 1,
      aux_sym_image_name_token1,
    STATE(8), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(145), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [500] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(127), 1,
      sym_shell_fragment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(201), 2,
      sym_string_array,
      sym_shell_command,
  [521] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(159), 1,
      aux_sym__env_key_token1,
    ACTIONS(161), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(20), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [542] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(127), 1,
      sym_shell_fragment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(199), 2,
      sym_string_array,
      sym_shell_command,
  [563] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(127), 1,
      sym_shell_fragment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(190), 2,
      sym_string_array,
      sym_shell_command,
  [584] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      anon_sym_DOLLAR,
    ACTIONS(168), 1,
      aux_sym_label_pair_token1,
    ACTIONS(170), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [605] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      aux_sym__env_key_token1,
    ACTIONS(173), 1,
      anon_sym_DOLLAR,
    ACTIONS(176), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(20), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [626] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(181), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    ACTIONS(185), 1,
      aux_sym_image_tag_token1,
    ACTIONS(179), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(22), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [647] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(189), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(191), 1,
      anon_sym_DOLLAR,
    ACTIONS(194), 1,
      aux_sym_image_tag_token1,
    ACTIONS(187), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(22), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [668] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      aux_sym_label_pair_token1,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_expansion,
      aux_sym_unquoted_string_repeat1,
  [689] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(203), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym__anon_comment,
    ACTIONS(201), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(24), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [707] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(208), 1,
      aux_sym_path_token2,
    ACTIONS(210), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(40), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [725] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(216), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      aux_sym_image_digest_token1,
    STATE(31), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [745] = 7,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(226), 1,
      anon_sym_AT,
    STATE(79), 1,
      sym_image_tag,
    STATE(148), 1,
      sym_image_digest,
  [767] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(133), 1,
      anon_sym_DOLLAR,
    ACTIONS(135), 1,
      aux_sym_image_name_token1,
    STATE(27), 1,
      sym_image_name,
    STATE(146), 1,
      sym_image_spec,
    STATE(14), 2,
      sym_expansion,
      aux_sym_image_name_repeat1,
  [787] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(230), 1,
      aux_sym_path_token2,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(29), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [805] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(236), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(238), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [819] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(244), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      aux_sym_image_digest_token1,
    STATE(31), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [839] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(252), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(255), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      aux_sym__user_name_or_group,
    STATE(91), 1,
      sym_expansion,
    ACTIONS(250), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [859] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(258), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(266), 1,
      sym_escape_sequence,
    STATE(33), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [879] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(269), 1,
      anon_sym_NONE,
    ACTIONS(271), 1,
      anon_sym_DASH_DASH,
    STATE(156), 1,
      sym_cmd_instruction,
    STATE(62), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [899] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(275), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      aux_sym_expose_port_token1,
    STATE(35), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [917] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(287), 1,
      sym_escape_sequence,
    STATE(47), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [937] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(293), 1,
      sym_escape_sequence,
    STATE(33), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [957] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      aux_sym_expose_port_token1,
    STATE(35), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [975] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(291), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(293), 1,
      sym_escape_sequence,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(33), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [995] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(210), 1,
      anon_sym_DOLLAR,
    ACTIONS(305), 1,
      aux_sym_path_token2,
    ACTIONS(303), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(29), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1013] = 7,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(311), 1,
      aux_sym__user_name_or_group_token1,
    STATE(32), 1,
      aux_sym__user_name_or_group,
    STATE(91), 1,
      sym_expansion,
  [1035] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      aux_sym_path_token1,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      sym_expansion,
    STATE(104), 1,
      sym_path,
    STATE(189), 1,
      sym_string_array,
  [1057] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(321), 1,
      sym_escape_sequence,
    STATE(39), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1077] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(323), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(325), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1091] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(331), 1,
      sym_escape_sequence,
    STATE(37), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1111] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(333), 1,
      aux_sym_path_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    ACTIONS(337), 1,
      anon_sym_DASH_DASH,
    STATE(52), 1,
      sym_expansion,
    STATE(96), 1,
      sym_param,
    STATE(191), 1,
      sym_path,
  [1133] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(291), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(293), 1,
      sym_escape_sequence,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    STATE(33), 2,
      sym_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1153] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(333), 1,
      aux_sym_path_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    ACTIONS(337), 1,
      anon_sym_DASH_DASH,
    STATE(52), 1,
      sym_expansion,
    STATE(101), 1,
      sym_param,
    STATE(194), 1,
      sym_path,
  [1175] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      aux_sym_path_token2,
    ACTIONS(344), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      sym__non_newline_whitespace,
    STATE(49), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1192] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(349), 1,
      aux_sym__env_key_token1,
    STATE(123), 1,
      sym__env_key,
    STATE(195), 1,
      sym__spaced_env_pair,
    STATE(51), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1209] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      aux_sym__env_key_token1,
    STATE(178), 1,
      sym__env_key,
    STATE(69), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1226] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      aux_sym_path_token2,
    ACTIONS(357), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      sym__non_newline_whitespace,
    STATE(67), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1243] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
    ACTIONS(363), 1,
      aux_sym_image_alias_token1,
    STATE(162), 1,
      sym_image_alias,
    STATE(74), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1260] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    STATE(54), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1277] = 6,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_DOLLAR,
    ACTIONS(311), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(373), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym__user_name_or_group,
    STATE(91), 1,
      sym_expansion,
  [1296] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    ACTIONS(380), 1,
      aux_sym_image_alias_token1,
    STATE(56), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1313] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(323), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(325), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1326] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      aux_sym_path_token2,
    ACTIONS(386), 1,
      anon_sym_DOLLAR,
    STATE(58), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1343] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(389), 1,
      anon_sym_LF,
    ACTIONS(391), 1,
      aux_sym_path_token2,
    ACTIONS(393), 1,
      anon_sym_DOLLAR,
    STATE(58), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1360] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(238), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(236), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1373] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(399), 1,
      anon_sym_DOLLAR,
    STATE(54), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1390] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(271), 1,
      anon_sym_DASH_DASH,
    STATE(175), 1,
      sym_cmd_instruction,
    STATE(99), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1407] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(325), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(323), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1420] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(238), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(236), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1433] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(325), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(323), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1446] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(238), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1459] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(357), 1,
      anon_sym_DOLLAR,
    ACTIONS(389), 1,
      sym__non_newline_whitespace,
    ACTIONS(401), 1,
      aux_sym_path_token2,
    STATE(49), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1476] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
    ACTIONS(363), 1,
      aux_sym_image_alias_token1,
    STATE(172), 1,
      sym_image_alias,
    STATE(74), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1493] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      aux_sym__env_key_token1,
    STATE(178), 1,
      sym__env_key,
    STATE(69), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [1510] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(323), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(325), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1523] = 4,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(412), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1538] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(393), 1,
      anon_sym_DOLLAR,
    ACTIONS(414), 1,
      aux_sym_path_token2,
    STATE(59), 2,
      sym_expansion,
      aux_sym_path_repeat1,
  [1555] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    ACTIONS(418), 1,
      aux_sym_expose_port_token1,
    STATE(38), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1570] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(422), 1,
      anon_sym_DOLLAR,
    ACTIONS(424), 1,
      aux_sym_image_alias_token1,
    STATE(56), 2,
      sym_expansion,
      aux_sym_image_alias_repeat1,
  [1587] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(238), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1600] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(238), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [1612] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    ACTIONS(426), 1,
      aux_sym__user_name_or_group_token1,
    STATE(41), 1,
      aux_sym__user_name_or_group,
    STATE(91), 1,
      sym_expansion,
  [1628] = 4,
    ACTIONS(428), 1,
      anon_sym_LF,
    ACTIONS(433), 1,
      sym_line_continuation,
    STATE(78), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(430), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [1642] = 5,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(226), 1,
      anon_sym_AT,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(437), 1,
      aux_sym_from_instruction_token2,
    STATE(155), 1,
      sym_image_digest,
  [1658] = 4,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(441), 1,
      aux_sym_label_pair_token1,
    STATE(80), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1672] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      aux_sym_path_token1,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    STATE(186), 1,
      sym_path,
  [1688] = 4,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(450), 1,
      aux_sym_label_pair_token1,
    STATE(80), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [1702] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(454), 1,
      aux_sym_image_digest_token1,
    STATE(26), 2,
      sym_expansion,
      aux_sym_image_digest_repeat1,
  [1716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    STATE(61), 2,
      aux_sym__stopsignal_value,
      sym_expansion,
  [1730] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(323), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(325), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [1742] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(460), 1,
      anon_sym_DOLLAR,
    ACTIONS(462), 1,
      aux_sym_image_tag_token1,
    STATE(21), 2,
      sym_expansion,
      aux_sym_image_tag_repeat1,
  [1756] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(325), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1768] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      aux_sym_path_token1,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    STATE(163), 1,
      sym_path,
  [1784] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(236), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(238), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1796] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      aux_sym_path_token1,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    STATE(167), 1,
      sym_path,
  [1812] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(464), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(466), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [1824] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(313), 1,
      aux_sym_path_token1,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      sym_expansion,
    STATE(124), 1,
      sym_path,
  [1840] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(325), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1850] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    ACTIONS(426), 1,
      aux_sym__user_name_or_group_token1,
    STATE(55), 1,
      aux_sym__user_name_or_group,
    STATE(91), 1,
      sym_expansion,
  [1866] = 4,
    ACTIONS(468), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      sym_line_continuation,
    STATE(78), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(470), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [1880] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(333), 1,
      aux_sym_path_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(176), 1,
      sym_path,
  [1896] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(238), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1906] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      aux_sym_path_token1,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    STATE(161), 1,
      sym_path,
  [1922] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(474), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(476), 1,
      anon_sym_DASH_DASH,
    STATE(99), 2,
      sym_param,
      aux_sym_healthcheck_instruction_repeat1,
  [1936] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      aux_sym_path_token1,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    STATE(160), 1,
      sym_path,
  [1952] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(333), 1,
      aux_sym_path_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(177), 1,
      sym_path,
  [1968] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [1979] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [1990] = 4,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(481), 1,
      sym__non_newline_whitespace,
    STATE(113), 1,
      aux_sym_volume_instruction_repeat1,
  [2003] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_double_quoted_string,
  [2016] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(236), 1,
      sym__non_newline_whitespace,
    ACTIONS(238), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2027] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      sym__non_newline_whitespace,
    ACTIONS(325), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2038] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_string_array_repeat1,
  [2051] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(491), 1,
      aux_sym_label_pair_token1,
    STATE(82), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
  [2062] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(495), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2073] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2084] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_string_array_repeat1,
  [2097] = 4,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(481), 1,
      sym__non_newline_whitespace,
    ACTIONS(499), 1,
      anon_sym_LF,
    STATE(117), 1,
      aux_sym_volume_instruction_repeat1,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(501), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2119] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_string_array_repeat1,
  [2132] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2143] = 4,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(508), 1,
      anon_sym_LF,
    ACTIONS(510), 1,
      sym__non_newline_whitespace,
    STATE(117), 1,
      aux_sym_volume_instruction_repeat1,
  [2156] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2167] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2178] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2186] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      sym_variable,
  [2196] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_LF,
    ACTIONS(521), 1,
      aux_sym__env_key_token1,
  [2206] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(523), 1,
      anon_sym_EQ,
    ACTIONS(525), 1,
      aux_sym__spaced_env_pair_token1,
  [2216] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(508), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2224] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      sym_variable,
  [2234] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_DOLLAR,
    ACTIONS(533), 1,
      aux_sym_image_name_token1,
  [2244] = 3,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 1,
      sym_line_continuation,
    STATE(141), 1,
      aux_sym_shell_command_repeat2,
  [2254] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
    ACTIONS(541), 1,
      sym_variable,
  [2264] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 1,
      sym_variable,
  [2274] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      sym_variable,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2292] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      sym_variable,
  [2302] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      aux_sym_label_pair_token1,
  [2312] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_string_array,
  [2322] = 3,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 1,
      sym_line_continuation,
    STATE(135), 1,
      aux_sym_shell_command_repeat2,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym_variable,
  [2342] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_variable,
  [2352] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
    ACTIONS(574), 1,
      sym_variable,
  [2362] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 1,
      aux_sym_label_pair_token1,
  [2372] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
    ACTIONS(582), 1,
      sym_variable,
  [2382] = 3,
    ACTIONS(537), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_shell_command_repeat2,
  [2392] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      sym_double_quoted_string,
  [2402] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      anon_sym_DOLLAR,
    ACTIONS(533), 1,
      aux_sym_path_token1,
  [2412] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      aux_sym_label_pair_token1,
  [2422] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 1,
      aux_sym_from_instruction_token2,
  [2432] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      aux_sym_from_instruction_token2,
  [2442] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2450] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(596), 1,
      anon_sym_LF,
    ACTIONS(598), 1,
      aux_sym_from_instruction_token2,
  [2460] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 1,
      aux_sym__env_key_token1,
  [2470] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      anon_sym_EQ,
  [2480] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(606), 1,
      sym_variable,
  [2490] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(531), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [2498] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(586), 1,
      aux_sym__env_key_token1,
  [2508] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    ACTIONS(610), 1,
      sym_variable,
  [2518] = 3,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      aux_sym_from_instruction_token2,
  [2528] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      anon_sym_LF,
  [2535] = 2,
    ACTIONS(618), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_continuation,
  [2542] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_LF,
  [2549] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      anon_sym_LF,
  [2556] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(626), 1,
      anon_sym_LF,
  [2563] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(628), 1,
      anon_sym_LF,
  [2570] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      anon_sym_LF,
  [2577] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(632), 1,
      anon_sym_LF,
  [2584] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(634), 1,
      anon_sym_LF,
  [2591] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      aux_sym_maintainer_instruction_token2,
  [2598] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(638), 1,
      anon_sym_LF,
  [2605] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      anon_sym_LF,
  [2612] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(642), 1,
      anon_sym_LF,
  [2619] = 2,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      sym_line_continuation,
  [2626] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(646), 1,
      aux_sym_arg_instruction_token2,
  [2633] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_LF,
  [2640] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(650), 1,
      anon_sym_LF,
  [2647] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      aux_sym_param_token2,
  [2654] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
  [2661] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(656), 1,
      anon_sym_LF,
  [2668] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      sym__non_newline_whitespace,
  [2675] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      sym__non_newline_whitespace,
  [2682] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(523), 1,
      anon_sym_EQ,
  [2689] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(662), 1,
      anon_sym_LF,
  [2696] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(664), 1,
      anon_sym_EQ,
  [2703] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      aux_sym_expansion_token1,
  [2710] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      anon_sym_LF,
  [2717] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(670), 1,
      anon_sym_LF,
  [2724] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      anon_sym_LF,
  [2731] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      anon_sym_LF,
  [2738] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      anon_sym_LF,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [2752] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      aux_sym_param_token2,
  [2759] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(682), 1,
      anon_sym_LF,
  [2766] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      anon_sym_LF,
  [2773] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(686), 1,
      sym__non_newline_whitespace,
  [2780] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
  [2787] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(690), 1,
      aux_sym_param_token2,
  [2794] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      sym__non_newline_whitespace,
  [2801] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(694), 1,
      anon_sym_LF,
  [2808] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
  [2815] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(698), 1,
      anon_sym_EQ,
  [2822] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
  [2829] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(702), 1,
      anon_sym_LF,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [2843] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(706), 1,
      anon_sym_LF,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(710), 1,
      aux_sym_param_token1,
  [2864] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
  [2871] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(714), 1,
      ts_builtin_sym_end,
  [2878] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
  [2885] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(718), 1,
      anon_sym_LF,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
  [2899] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(722), 1,
      aux_sym_maintainer_instruction_token2,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
  [2913] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(726), 1,
      aux_sym_maintainer_instruction_token2,
  [2920] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
  [2927] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(730), 1,
      aux_sym_expansion_token1,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(732), 1,
      anon_sym_EQ,
  [2941] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(734), 1,
      aux_sym_expansion_token1,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(736), 1,
      anon_sym_EQ,
  [2955] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(738), 1,
      aux_sym_expansion_token1,
  [2962] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(740), 1,
      aux_sym_expansion_token1,
  [2969] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(742), 1,
      aux_sym_expansion_token1,
  [2976] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(744), 1,
      aux_sym_expansion_token1,
  [2983] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(746), 1,
      aux_sym_expansion_token1,
  [2990] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(748), 1,
      aux_sym_expansion_token1,
  [2997] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(750), 1,
      aux_sym_expansion_token1,
  [3004] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(752), 1,
      aux_sym_expansion_token1,
  [3011] = 2,
    ACTIONS(131), 1,
      sym_line_continuation,
    ACTIONS(754), 1,
      aux_sym_expansion_token1,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(756), 1,
      aux_sym_param_token1,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(758), 1,
      aux_sym_param_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 267,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 316,
  [SMALL_STATE(8)] = 340,
  [SMALL_STATE(9)] = 362,
  [SMALL_STATE(10)] = 388,
  [SMALL_STATE(11)] = 412,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 478,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 563,
  [SMALL_STATE(19)] = 584,
  [SMALL_STATE(20)] = 605,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 647,
  [SMALL_STATE(23)] = 668,
  [SMALL_STATE(24)] = 689,
  [SMALL_STATE(25)] = 707,
  [SMALL_STATE(26)] = 725,
  [SMALL_STATE(27)] = 745,
  [SMALL_STATE(28)] = 767,
  [SMALL_STATE(29)] = 787,
  [SMALL_STATE(30)] = 805,
  [SMALL_STATE(31)] = 819,
  [SMALL_STATE(32)] = 839,
  [SMALL_STATE(33)] = 859,
  [SMALL_STATE(34)] = 879,
  [SMALL_STATE(35)] = 899,
  [SMALL_STATE(36)] = 917,
  [SMALL_STATE(37)] = 937,
  [SMALL_STATE(38)] = 957,
  [SMALL_STATE(39)] = 975,
  [SMALL_STATE(40)] = 995,
  [SMALL_STATE(41)] = 1013,
  [SMALL_STATE(42)] = 1035,
  [SMALL_STATE(43)] = 1057,
  [SMALL_STATE(44)] = 1077,
  [SMALL_STATE(45)] = 1091,
  [SMALL_STATE(46)] = 1111,
  [SMALL_STATE(47)] = 1133,
  [SMALL_STATE(48)] = 1153,
  [SMALL_STATE(49)] = 1175,
  [SMALL_STATE(50)] = 1192,
  [SMALL_STATE(51)] = 1209,
  [SMALL_STATE(52)] = 1226,
  [SMALL_STATE(53)] = 1243,
  [SMALL_STATE(54)] = 1260,
  [SMALL_STATE(55)] = 1277,
  [SMALL_STATE(56)] = 1296,
  [SMALL_STATE(57)] = 1313,
  [SMALL_STATE(58)] = 1326,
  [SMALL_STATE(59)] = 1343,
  [SMALL_STATE(60)] = 1360,
  [SMALL_STATE(61)] = 1373,
  [SMALL_STATE(62)] = 1390,
  [SMALL_STATE(63)] = 1407,
  [SMALL_STATE(64)] = 1420,
  [SMALL_STATE(65)] = 1433,
  [SMALL_STATE(66)] = 1446,
  [SMALL_STATE(67)] = 1459,
  [SMALL_STATE(68)] = 1476,
  [SMALL_STATE(69)] = 1493,
  [SMALL_STATE(70)] = 1510,
  [SMALL_STATE(71)] = 1523,
  [SMALL_STATE(72)] = 1538,
  [SMALL_STATE(73)] = 1555,
  [SMALL_STATE(74)] = 1570,
  [SMALL_STATE(75)] = 1587,
  [SMALL_STATE(76)] = 1600,
  [SMALL_STATE(77)] = 1612,
  [SMALL_STATE(78)] = 1628,
  [SMALL_STATE(79)] = 1642,
  [SMALL_STATE(80)] = 1658,
  [SMALL_STATE(81)] = 1672,
  [SMALL_STATE(82)] = 1688,
  [SMALL_STATE(83)] = 1702,
  [SMALL_STATE(84)] = 1716,
  [SMALL_STATE(85)] = 1730,
  [SMALL_STATE(86)] = 1742,
  [SMALL_STATE(87)] = 1756,
  [SMALL_STATE(88)] = 1768,
  [SMALL_STATE(89)] = 1784,
  [SMALL_STATE(90)] = 1796,
  [SMALL_STATE(91)] = 1812,
  [SMALL_STATE(92)] = 1824,
  [SMALL_STATE(93)] = 1840,
  [SMALL_STATE(94)] = 1850,
  [SMALL_STATE(95)] = 1866,
  [SMALL_STATE(96)] = 1880,
  [SMALL_STATE(97)] = 1896,
  [SMALL_STATE(98)] = 1906,
  [SMALL_STATE(99)] = 1922,
  [SMALL_STATE(100)] = 1936,
  [SMALL_STATE(101)] = 1952,
  [SMALL_STATE(102)] = 1968,
  [SMALL_STATE(103)] = 1979,
  [SMALL_STATE(104)] = 1990,
  [SMALL_STATE(105)] = 2003,
  [SMALL_STATE(106)] = 2016,
  [SMALL_STATE(107)] = 2027,
  [SMALL_STATE(108)] = 2038,
  [SMALL_STATE(109)] = 2051,
  [SMALL_STATE(110)] = 2062,
  [SMALL_STATE(111)] = 2073,
  [SMALL_STATE(112)] = 2084,
  [SMALL_STATE(113)] = 2097,
  [SMALL_STATE(114)] = 2110,
  [SMALL_STATE(115)] = 2119,
  [SMALL_STATE(116)] = 2132,
  [SMALL_STATE(117)] = 2143,
  [SMALL_STATE(118)] = 2156,
  [SMALL_STATE(119)] = 2167,
  [SMALL_STATE(120)] = 2178,
  [SMALL_STATE(121)] = 2186,
  [SMALL_STATE(122)] = 2196,
  [SMALL_STATE(123)] = 2206,
  [SMALL_STATE(124)] = 2216,
  [SMALL_STATE(125)] = 2224,
  [SMALL_STATE(126)] = 2234,
  [SMALL_STATE(127)] = 2244,
  [SMALL_STATE(128)] = 2254,
  [SMALL_STATE(129)] = 2264,
  [SMALL_STATE(130)] = 2274,
  [SMALL_STATE(131)] = 2284,
  [SMALL_STATE(132)] = 2292,
  [SMALL_STATE(133)] = 2302,
  [SMALL_STATE(134)] = 2312,
  [SMALL_STATE(135)] = 2322,
  [SMALL_STATE(136)] = 2332,
  [SMALL_STATE(137)] = 2342,
  [SMALL_STATE(138)] = 2352,
  [SMALL_STATE(139)] = 2362,
  [SMALL_STATE(140)] = 2372,
  [SMALL_STATE(141)] = 2382,
  [SMALL_STATE(142)] = 2392,
  [SMALL_STATE(143)] = 2402,
  [SMALL_STATE(144)] = 2412,
  [SMALL_STATE(145)] = 2422,
  [SMALL_STATE(146)] = 2432,
  [SMALL_STATE(147)] = 2442,
  [SMALL_STATE(148)] = 2450,
  [SMALL_STATE(149)] = 2460,
  [SMALL_STATE(150)] = 2470,
  [SMALL_STATE(151)] = 2480,
  [SMALL_STATE(152)] = 2490,
  [SMALL_STATE(153)] = 2498,
  [SMALL_STATE(154)] = 2508,
  [SMALL_STATE(155)] = 2518,
  [SMALL_STATE(156)] = 2528,
  [SMALL_STATE(157)] = 2535,
  [SMALL_STATE(158)] = 2542,
  [SMALL_STATE(159)] = 2549,
  [SMALL_STATE(160)] = 2556,
  [SMALL_STATE(161)] = 2563,
  [SMALL_STATE(162)] = 2570,
  [SMALL_STATE(163)] = 2577,
  [SMALL_STATE(164)] = 2584,
  [SMALL_STATE(165)] = 2591,
  [SMALL_STATE(166)] = 2598,
  [SMALL_STATE(167)] = 2605,
  [SMALL_STATE(168)] = 2612,
  [SMALL_STATE(169)] = 2619,
  [SMALL_STATE(170)] = 2626,
  [SMALL_STATE(171)] = 2633,
  [SMALL_STATE(172)] = 2640,
  [SMALL_STATE(173)] = 2647,
  [SMALL_STATE(174)] = 2654,
  [SMALL_STATE(175)] = 2661,
  [SMALL_STATE(176)] = 2668,
  [SMALL_STATE(177)] = 2675,
  [SMALL_STATE(178)] = 2682,
  [SMALL_STATE(179)] = 2689,
  [SMALL_STATE(180)] = 2696,
  [SMALL_STATE(181)] = 2703,
  [SMALL_STATE(182)] = 2710,
  [SMALL_STATE(183)] = 2717,
  [SMALL_STATE(184)] = 2724,
  [SMALL_STATE(185)] = 2731,
  [SMALL_STATE(186)] = 2738,
  [SMALL_STATE(187)] = 2745,
  [SMALL_STATE(188)] = 2752,
  [SMALL_STATE(189)] = 2759,
  [SMALL_STATE(190)] = 2766,
  [SMALL_STATE(191)] = 2773,
  [SMALL_STATE(192)] = 2780,
  [SMALL_STATE(193)] = 2787,
  [SMALL_STATE(194)] = 2794,
  [SMALL_STATE(195)] = 2801,
  [SMALL_STATE(196)] = 2808,
  [SMALL_STATE(197)] = 2815,
  [SMALL_STATE(198)] = 2822,
  [SMALL_STATE(199)] = 2829,
  [SMALL_STATE(200)] = 2836,
  [SMALL_STATE(201)] = 2843,
  [SMALL_STATE(202)] = 2850,
  [SMALL_STATE(203)] = 2857,
  [SMALL_STATE(204)] = 2864,
  [SMALL_STATE(205)] = 2871,
  [SMALL_STATE(206)] = 2878,
  [SMALL_STATE(207)] = 2885,
  [SMALL_STATE(208)] = 2892,
  [SMALL_STATE(209)] = 2899,
  [SMALL_STATE(210)] = 2906,
  [SMALL_STATE(211)] = 2913,
  [SMALL_STATE(212)] = 2920,
  [SMALL_STATE(213)] = 2927,
  [SMALL_STATE(214)] = 2934,
  [SMALL_STATE(215)] = 2941,
  [SMALL_STATE(216)] = 2948,
  [SMALL_STATE(217)] = 2955,
  [SMALL_STATE(218)] = 2962,
  [SMALL_STATE(219)] = 2969,
  [SMALL_STATE(220)] = 2976,
  [SMALL_STATE(221)] = 2983,
  [SMALL_STATE(222)] = 2990,
  [SMALL_STATE(223)] = 2997,
  [SMALL_STATE(224)] = 3004,
  [SMALL_STATE(225)] = 3011,
  [SMALL_STATE(226)] = 3018,
  [SMALL_STATE(227)] = 3025,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(137),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(8),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(130),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(136),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(125),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(22),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(165),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(29),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(138),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(128),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(31),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(91),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(154),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(129),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(33),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(33),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(154),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(71),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(49),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(151),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(54),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(132),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(140),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(56),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(58),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(121),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(178),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(78),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(197),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(227),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(142),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(92),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(10),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [714] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
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
