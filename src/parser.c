#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 250
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  aux_sym_image_name_token2 = 43,
  aux_sym_image_tag_token1 = 44,
  anon_sym_AT = 45,
  aux_sym_image_digest_token1 = 46,
  anon_sym_DASH_DASH = 47,
  aux_sym_param_token1 = 48,
  aux_sym_param_token2 = 49,
  aux_sym_image_alias_token1 = 50,
  anon_sym_LBRACK = 51,
  anon_sym_COMMA = 52,
  anon_sym_RBRACK = 53,
  aux_sym_shell_fragment_token1 = 54,
  aux_sym_shell_fragment_token2 = 55,
  anon_sym_BSLASH_LF = 56,
  anon_sym_POUND = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_double_quoted_string_token1 = 59,
  aux_sym_unquoted_string_token1 = 60,
  anon_sym_BSLASH = 61,
  sym_escape_sequence = 62,
  sym__non_newline_whitespace = 63,
  sym_comment = 64,
  sym_source_file = 65,
  sym__instruction = 66,
  sym_from_instruction = 67,
  sym_run_instruction = 68,
  sym_cmd_instruction = 69,
  sym_label_instruction = 70,
  sym_expose_instruction = 71,
  sym_env_instruction = 72,
  sym_add_instruction = 73,
  sym_copy_instruction = 74,
  sym_entrypoint_instruction = 75,
  sym_volume_instruction = 76,
  sym_user_instruction = 77,
  aux_sym__user_name_or_group = 78,
  sym_workdir_instruction = 79,
  sym_arg_instruction = 80,
  sym_onbuild_instruction = 81,
  sym_stopsignal_instruction = 82,
  aux_sym__stopsignal_value = 83,
  sym_healthcheck_instruction = 84,
  sym_shell_instruction = 85,
  sym_maintainer_instruction = 86,
  sym_cross_build_instruction = 87,
  sym_path = 88,
  sym_expansion = 89,
  sym_env_pair = 90,
  sym__spaced_env_pair = 91,
  sym__env_key = 92,
  sym_expose_port = 93,
  sym_label_pair = 94,
  sym_image_spec = 95,
  sym_image_name = 96,
  sym_image_tag = 97,
  sym_image_digest = 98,
  sym_param = 99,
  sym_image_alias = 100,
  sym_string_array = 101,
  sym_shell_command = 102,
  sym_shell_fragment = 103,
  sym_line_continuation = 104,
  sym_required_line_continuation = 105,
  sym__comment_line = 106,
  sym__anon_comment = 107,
  sym_double_quoted_string = 108,
  sym_unquoted_string = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_label_instruction_repeat1 = 111,
  aux_sym_expose_instruction_repeat1 = 112,
  aux_sym_env_instruction_repeat1 = 113,
  aux_sym_volume_instruction_repeat1 = 114,
  aux_sym_healthcheck_instruction_repeat1 = 115,
  aux_sym_path_repeat1 = 116,
  aux_sym_image_name_repeat1 = 117,
  aux_sym_image_tag_repeat1 = 118,
  aux_sym_image_digest_repeat1 = 119,
  aux_sym_image_alias_repeat1 = 120,
  aux_sym_string_array_repeat1 = 121,
  aux_sym_shell_command_repeat1 = 122,
  aux_sym_shell_command_repeat2 = 123,
  aux_sym_shell_fragment_repeat1 = 124,
  aux_sym_double_quoted_string_repeat1 = 125,
  aux_sym_unquoted_string_repeat1 = 126,
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
  [aux_sym_image_name_token2] = "image_name_token2",
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
  [anon_sym_BSLASH_LF] = "\\\n",
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
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "line_continuation",
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
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
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
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
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
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_line_continuation,
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
  [aux_sym_image_name_token2] = {
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
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
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
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_required_line_continuation] = {
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
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
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
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
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
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(228);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(209);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(192);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(196);
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
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(216);
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
      if (lookahead == '-') ADVANCE(220);
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
      if (lookahead == '[') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(201);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 157:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == '[') ADVANCE(225);
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
          lookahead == ' ') SKIP(158)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '$') ADVANCE(196);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == '[') ADVANCE(225);
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
          lookahead == ' ') SKIP(158)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
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
          lookahead != '@') ADVANCE(213);
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
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(230);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
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
      ACCEPT_TOKEN(aux_sym_image_name_token2);
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
      if (lookahead == '\n') ADVANCE(230);
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
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
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
    case 245:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
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
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 157},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 45},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 157},
  [58] = {.lex_state = 38},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 38},
  [65] = {.lex_state = 157},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 31},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 26},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 30},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 30},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 34},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 30},
  [108] = {.lex_state = 30},
  [109] = {.lex_state = 157},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 157},
  [112] = {.lex_state = 46},
  [113] = {.lex_state = 157},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 38},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 21},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 38},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 157},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 38},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 26},
  [133] = {.lex_state = 29},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 157},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 44},
  [140] = {.lex_state = 44},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 44},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 44},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 26},
  [149] = {.lex_state = 44},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 44},
  [152] = {.lex_state = 31},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 44},
  [155] = {.lex_state = 157},
  [156] = {.lex_state = 157},
  [157] = {.lex_state = 157},
  [158] = {.lex_state = 44},
  [159] = {.lex_state = 157},
  [160] = {.lex_state = 44},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 157},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 157},
  [166] = {.lex_state = 22},
  [167] = {.lex_state = 157},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 22},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 23},
  [172] = {.lex_state = 23},
  [173] = {.lex_state = 30},
  [174] = {.lex_state = 40},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 38},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 157},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 189},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 157},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 157},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 157},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 38},
  [196] = {.lex_state = 38},
  [197] = {.lex_state = 48},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 48},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 189},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 189},
  [209] = {.lex_state = 49},
  [210] = {.lex_state = 50},
  [211] = {.lex_state = 51},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 157},
  [214] = {.lex_state = 157},
  [215] = {.lex_state = 50},
  [216] = {.lex_state = 50},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 157},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 157},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 157},
  [223] = {.lex_state = 51},
  [224] = {.lex_state = 157},
  [225] = {.lex_state = 157},
  [226] = {.lex_state = 157},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 157},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 157},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 157},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 157},
  [235] = {.lex_state = 51},
  [236] = {.lex_state = 157},
  [237] = {.lex_state = 51},
  [238] = {.lex_state = 157},
  [239] = {.lex_state = 51},
  [240] = {.lex_state = 51},
  [241] = {.lex_state = 51},
  [242] = {.lex_state = 51},
  [243] = {.lex_state = 51},
  [244] = {.lex_state = 51},
  [245] = {.lex_state = 51},
  [246] = {.lex_state = 38},
  [247] = {.lex_state = 51},
  [248] = {.lex_state = 48},
  [249] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_param_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(204),
    [sym__instruction] = STATE(205),
    [sym_from_instruction] = STATE(203),
    [sym_run_instruction] = STATE(203),
    [sym_cmd_instruction] = STATE(203),
    [sym_label_instruction] = STATE(203),
    [sym_expose_instruction] = STATE(203),
    [sym_env_instruction] = STATE(203),
    [sym_add_instruction] = STATE(203),
    [sym_copy_instruction] = STATE(203),
    [sym_entrypoint_instruction] = STATE(203),
    [sym_volume_instruction] = STATE(203),
    [sym_user_instruction] = STATE(203),
    [sym_workdir_instruction] = STATE(203),
    [sym_arg_instruction] = STATE(203),
    [sym_onbuild_instruction] = STATE(203),
    [sym_stopsignal_instruction] = STATE(203),
    [sym_healthcheck_instruction] = STATE(203),
    [sym_shell_instruction] = STATE(203),
    [sym_maintainer_instruction] = STATE(203),
    [sym_cross_build_instruction] = STATE(203),
    [sym_line_continuation] = STATE(1),
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
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(45),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
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
      sym_comment,
    STATE(205), 1,
      sym__instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(203), 19,
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
  [95] = 26,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
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
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_line_continuation,
    STATE(205), 1,
      sym__instruction,
    STATE(203), 19,
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
  [192] = 23,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
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
    STATE(4), 1,
      sym_line_continuation,
    STATE(192), 1,
      sym__instruction,
    STATE(203), 19,
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
  [280] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(5), 1,
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
      sym_comment,
  [310] = 10,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(115), 1,
      aux_sym__env_key_token1,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(72), 1,
      sym_expansion,
    ACTIONS(121), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(141), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [343] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(125), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_line_continuation,
    STATE(13), 1,
      aux_sym_shell_command_repeat1,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(131), 1,
      sym__comment_line,
    STATE(181), 1,
      sym__anon_comment,
    STATE(182), 1,
      sym_shell_fragment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [372] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym_expansion,
    ACTIONS(131), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(231), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [399] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym_expansion,
    ACTIONS(131), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(221), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [426] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(135), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(139), 1,
      aux_sym_image_name_token2,
    STATE(10), 1,
      sym_line_continuation,
    STATE(11), 1,
      aux_sym_image_name_repeat1,
    STATE(33), 1,
      sym_expansion,
    ACTIONS(133), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [453] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(143), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(145), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      aux_sym_image_name_token2,
    STATE(33), 1,
      sym_expansion,
    STATE(11), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(141), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [478] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      anon_sym_DOLLAR,
    ACTIONS(139), 1,
      aux_sym_image_name_token2,
    ACTIONS(153), 1,
      aux_sym_from_instruction_token2,
    STATE(10), 1,
      aux_sym_image_name_repeat1,
    STATE(12), 1,
      sym_line_continuation,
    STATE(33), 1,
      sym_expansion,
    ACTIONS(151), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [505] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(125), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_line_continuation,
    STATE(44), 1,
      aux_sym_shell_command_repeat1,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(131), 1,
      sym__comment_line,
    STATE(181), 1,
      sym__anon_comment,
    STATE(194), 1,
      sym_shell_fragment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [534] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym_expansion,
    ACTIONS(131), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(150), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [561] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_image_tag_token1,
    STATE(56), 1,
      sym_expansion,
    ACTIONS(155), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(15), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [585] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_line_continuation,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(115), 1,
      sym_shell_fragment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(178), 2,
      sym_string_array,
      sym_shell_command,
  [609] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      aux_sym_label_pair_token1,
    STATE(78), 1,
      sym_expansion,
    ACTIONS(174), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(17), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [633] = 8,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(179), 1,
      aux_sym__env_key_token1,
    STATE(18), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(72), 1,
      sym_expansion,
    ACTIONS(121), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [659] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      aux_sym__env_key_token1,
    ACTIONS(181), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    ACTIONS(184), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [683] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      aux_sym_image_name_token1,
    ACTIONS(191), 1,
      anon_sym_DASH_DASH,
    STATE(12), 1,
      sym_expansion,
    STATE(20), 1,
      sym_line_continuation,
    STATE(30), 1,
      sym_image_name,
    STATE(79), 1,
      sym_param,
    STATE(161), 1,
      sym_image_spec,
  [711] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_line_continuation,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(115), 1,
      sym_shell_fragment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(198), 2,
      sym_string_array,
      sym_shell_command,
  [735] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_line_continuation,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(115), 1,
      sym_shell_fragment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(190), 2,
      sym_string_array,
      sym_shell_command,
  [759] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(179), 1,
      aux_sym_label_pair_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(23), 1,
      sym_line_continuation,
    STATE(78), 1,
      sym_expansion,
    ACTIONS(131), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [785] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(197), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      aux_sym_image_tag_token1,
    STATE(15), 1,
      aux_sym_image_tag_repeat1,
    STATE(24), 1,
      sym_line_continuation,
    STATE(56), 1,
      sym_expansion,
    ACTIONS(195), 2,
      anon_sym_LF,
      anon_sym_AT,
  [811] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    STATE(25), 1,
      sym_line_continuation,
    STATE(41), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(87), 1,
      sym_expansion,
  [836] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(87), 1,
      sym_expansion,
  [861] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_line_continuation,
    STATE(41), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(87), 1,
      sym_expansion,
  [886] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      aux_sym_path_token1,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym_line_continuation,
    STATE(38), 1,
      sym_expansion,
    STATE(132), 1,
      sym_path,
    STATE(184), 1,
      sym_string_array,
  [911] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(29), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym_expansion,
  [936] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_LF,
    ACTIONS(223), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_AT,
    STATE(30), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_image_tag,
    STATE(145), 1,
      sym_image_digest,
  [961] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      aux_sym_path_token1,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      anon_sym_DASH_DASH,
    STATE(31), 1,
      sym_line_continuation,
    STATE(58), 1,
      sym_expansion,
    STATE(107), 1,
      sym_param,
    STATE(177), 1,
      sym_path,
  [986] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      aux_sym_path_token1,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      anon_sym_DASH_DASH,
    STATE(32), 1,
      sym_line_continuation,
    STATE(58), 1,
      sym_expansion,
    STATE(108), 1,
      sym_param,
    STATE(246), 1,
      sym_path,
  [1011] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(33), 1,
      sym_line_continuation,
    ACTIONS(235), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(237), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token2,
  [1028] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(34), 1,
      sym_line_continuation,
    ACTIONS(239), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(241), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token2,
  [1045] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(245), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(247), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
      aux_sym_image_digest_token1,
    STATE(35), 1,
      sym_line_continuation,
    STATE(39), 1,
      aux_sym_image_digest_repeat1,
    STATE(97), 1,
      sym_expansion,
  [1070] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(253), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    STATE(102), 1,
      sym_expansion,
    ACTIONS(251), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(36), 2,
      aux_sym__user_name_or_group,
      sym_line_continuation,
  [1091] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(37), 1,
      sym_line_continuation,
    ACTIONS(259), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(261), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token2,
  [1108] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(265), 1,
      aux_sym_path_token2,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_line_continuation,
    STATE(49), 1,
      aux_sym_path_repeat1,
    STATE(104), 1,
      sym_expansion,
    ACTIONS(263), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1131] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      aux_sym_image_digest_token1,
    STATE(97), 1,
      sym_expansion,
    STATE(39), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1154] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      anon_sym_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      aux_sym_expose_port_token1,
    STATE(40), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(127), 2,
      sym_expansion,
      sym_expose_port,
  [1175] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(295), 1,
      sym_escape_sequence,
    STATE(87), 1,
      sym_expansion,
    STATE(41), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1198] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      aux_sym_expose_port_token1,
    STATE(40), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(42), 1,
      sym_line_continuation,
    STATE(127), 2,
      sym_expansion,
      sym_expose_port,
  [1221] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_line_continuation,
    STATE(47), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(87), 1,
      sym_expansion,
  [1246] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(308), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym__comment_line,
    STATE(181), 1,
      sym__anon_comment,
    ACTIONS(306), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(44), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [1267] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      aux_sym_path_token2,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym_expansion,
    ACTIONS(311), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(45), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1288] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(319), 1,
      anon_sym_NONE,
    ACTIONS(321), 1,
      anon_sym_DASH_DASH,
    STATE(46), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(155), 1,
      sym_param,
    STATE(207), 1,
      sym_cmd_instruction,
  [1313] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(47), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym_expansion,
  [1338] = 8,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 1,
      anon_sym_COLON,
    ACTIONS(329), 1,
      aux_sym__user_name_or_group_token1,
    STATE(36), 1,
      aux_sym__user_name_or_group,
    STATE(48), 1,
      sym_line_continuation,
    STATE(102), 1,
      sym_expansion,
  [1363] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(265), 1,
      aux_sym_path_token2,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(49), 1,
      sym_line_continuation,
    STATE(104), 1,
      sym_expansion,
    ACTIONS(331), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1386] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(333), 1,
      aux_sym_path_token2,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(339), 1,
      sym__non_newline_whitespace,
    STATE(120), 1,
      sym_expansion,
    STATE(50), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1406] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(51), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(239), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1422] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(341), 1,
      anon_sym_LF,
    ACTIONS(343), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(346), 1,
      anon_sym_DOLLAR,
    STATE(110), 1,
      sym_expansion,
    STATE(52), 2,
      aux_sym__stopsignal_value,
      sym_line_continuation,
  [1442] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(349), 1,
      aux_sym__env_key_token1,
    STATE(53), 1,
      sym_line_continuation,
    STATE(59), 1,
      aux_sym_env_instruction_repeat1,
    STATE(138), 1,
      sym_env_pair,
    STATE(174), 1,
      sym__env_key,
    STATE(212), 1,
      sym__spaced_env_pair,
  [1464] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(355), 1,
      aux_sym_image_alias_token1,
    STATE(54), 1,
      sym_line_continuation,
    STATE(66), 1,
      aux_sym_image_alias_repeat1,
    STATE(114), 1,
      sym_expansion,
  [1486] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(239), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(241), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1502] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(357), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(359), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1518] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
    ACTIONS(363), 1,
      aux_sym_expose_port_token1,
    STATE(42), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(57), 1,
      sym_line_continuation,
    STATE(127), 2,
      sym_expansion,
      sym_expose_port,
  [1538] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      aux_sym_path_token2,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(369), 1,
      sym__non_newline_whitespace,
    STATE(58), 1,
      sym_line_continuation,
    STATE(64), 1,
      aux_sym_path_repeat1,
    STATE(120), 1,
      sym_expansion,
  [1560] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(373), 1,
      aux_sym__env_key_token1,
    STATE(59), 1,
      sym_line_continuation,
    STATE(70), 1,
      aux_sym_env_instruction_repeat1,
    STATE(138), 1,
      sym_env_pair,
    STATE(193), 1,
      sym__env_key,
  [1582] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(60), 1,
      sym_line_continuation,
    ACTIONS(259), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(261), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1598] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      aux_sym_path_token2,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_path_repeat1,
    STATE(129), 1,
      sym_expansion,
  [1620] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(383), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      aux_sym__stopsignal_value,
    STATE(62), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym_expansion,
  [1642] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(385), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym_line_continuation,
    ACTIONS(387), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(389), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1660] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      aux_sym_path_token2,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      sym__non_newline_whitespace,
    STATE(50), 1,
      aux_sym_path_repeat1,
    STATE(64), 1,
      sym_line_continuation,
    STATE(120), 1,
      sym_expansion,
  [1682] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(321), 1,
      anon_sym_DASH_DASH,
    STATE(65), 1,
      sym_line_continuation,
    STATE(109), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(155), 1,
      sym_param,
    STATE(180), 1,
      sym_cmd_instruction,
  [1704] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(393), 1,
      anon_sym_LF,
    ACTIONS(395), 1,
      anon_sym_DOLLAR,
    ACTIONS(398), 1,
      aux_sym_image_alias_token1,
    STATE(114), 1,
      sym_expansion,
    STATE(66), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1724] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      aux_sym_path_token2,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym_line_continuation,
    STATE(69), 1,
      aux_sym_path_repeat1,
    STATE(129), 1,
      sym_expansion,
  [1746] = 7,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(401), 1,
      anon_sym_LF,
    STATE(36), 1,
      aux_sym__user_name_or_group,
    STATE(68), 1,
      sym_line_continuation,
    STATE(102), 1,
      sym_expansion,
  [1768] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(403), 1,
      aux_sym_path_token2,
    ACTIONS(406), 1,
      anon_sym_DOLLAR,
    STATE(129), 1,
      sym_expansion,
    STATE(69), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1788] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      aux_sym__env_key_token1,
    STATE(138), 1,
      sym_env_pair,
    STATE(193), 1,
      sym__env_key,
    STATE(70), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [1808] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(71), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(259), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1824] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(72), 1,
      sym_line_continuation,
    ACTIONS(416), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(414), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1840] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(73), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(259), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1856] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(74), 1,
      sym_line_continuation,
    ACTIONS(239), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(241), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1872] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(418), 1,
      anon_sym_DOLLAR,
    ACTIONS(420), 1,
      aux_sym_image_alias_token1,
    STATE(54), 1,
      aux_sym_image_alias_repeat1,
    STATE(75), 1,
      sym_line_continuation,
    STATE(114), 1,
      sym_expansion,
    STATE(175), 1,
      sym_image_alias,
  [1894] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(418), 1,
      anon_sym_DOLLAR,
    ACTIONS(420), 1,
      aux_sym_image_alias_token1,
    STATE(54), 1,
      aux_sym_image_alias_repeat1,
    STATE(76), 1,
      sym_line_continuation,
    STATE(114), 1,
      sym_expansion,
    STATE(199), 1,
      sym_image_alias,
  [1916] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(239), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1932] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(416), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(414), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1948] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      aux_sym_image_name_token1,
    STATE(12), 1,
      sym_expansion,
    STATE(30), 1,
      sym_image_name,
    STATE(79), 1,
      sym_line_continuation,
    STATE(143), 1,
      sym_image_spec,
  [1970] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(80), 1,
      sym_line_continuation,
    ACTIONS(259), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(261), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1986] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(422), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(424), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      aux_sym__stopsignal_value,
    STATE(81), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym_expansion,
  [2005] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(82), 1,
      sym_line_continuation,
    STATE(188), 1,
      sym_path,
  [2024] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(239), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(241), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2039] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(259), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(261), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2054] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      anon_sym_AT,
    ACTIONS(430), 1,
      anon_sym_LF,
    ACTIONS(432), 1,
      aux_sym_from_instruction_token2,
    STATE(85), 1,
      sym_line_continuation,
    STATE(162), 1,
      sym_image_digest,
  [2073] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(259), 1,
      aux_sym_double_quoted_string_token1,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(261), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2088] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(436), 1,
      aux_sym_double_quoted_string_token1,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(434), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2103] = 4,
    ACTIONS(438), 1,
      anon_sym_LF,
    ACTIONS(443), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(440), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(88), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2118] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(201), 1,
      aux_sym_image_tag_token1,
    ACTIONS(445), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      aux_sym_image_tag_repeat1,
    STATE(56), 1,
      sym_expansion,
    STATE(89), 1,
      sym_line_continuation,
  [2137] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      anon_sym_LF,
    ACTIONS(449), 1,
      aux_sym_label_pair_token1,
    STATE(168), 1,
      sym_label_pair,
    STATE(90), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2154] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(91), 1,
      sym_line_continuation,
    STATE(191), 1,
      sym_path,
  [2173] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(92), 1,
      sym_line_continuation,
    ACTIONS(261), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2186] = 5,
    ACTIONS(452), 1,
      anon_sym_LF,
    ACTIONS(456), 1,
      anon_sym_BSLASH_LF,
    STATE(88), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(454), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2203] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(94), 1,
      sym_line_continuation,
    ACTIONS(241), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2216] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      aux_sym_double_quoted_string_token1,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(241), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2231] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(249), 1,
      aux_sym_image_digest_token1,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      aux_sym_image_digest_repeat1,
    STATE(96), 1,
      sym_line_continuation,
    STATE(97), 1,
      sym_expansion,
  [2250] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(460), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(462), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2265] = 6,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(464), 1,
      anon_sym_LF,
    ACTIONS(466), 1,
      aux_sym_label_pair_token1,
    STATE(90), 1,
      aux_sym_label_instruction_repeat1,
    STATE(98), 1,
      sym_line_continuation,
    STATE(168), 1,
      sym_label_pair,
  [2284] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(99), 1,
      sym_line_continuation,
    STATE(176), 1,
      sym_path,
  [2303] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(100), 1,
      sym_line_continuation,
    STATE(185), 1,
      sym_path,
  [2322] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(426), 1,
      aux_sym_path_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(101), 1,
      sym_line_continuation,
    STATE(227), 1,
      sym_path,
  [2341] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(468), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(470), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [2356] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(215), 1,
      aux_sym_path_token1,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(103), 1,
      sym_line_continuation,
    STATE(148), 1,
      sym_path,
  [2375] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(472), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2388] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
    ACTIONS(474), 1,
      aux_sym__user_name_or_group_token1,
    STATE(68), 1,
      aux_sym__user_name_or_group,
    STATE(102), 1,
      sym_expansion,
    STATE(105), 1,
      sym_line_continuation,
  [2407] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
    ACTIONS(474), 1,
      aux_sym__user_name_or_group_token1,
    STATE(48), 1,
      aux_sym__user_name_or_group,
    STATE(102), 1,
      sym_expansion,
    STATE(106), 1,
      sym_line_continuation,
  [2426] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      aux_sym_path_token1,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      sym_expansion,
    STATE(107), 1,
      sym_line_continuation,
    STATE(196), 1,
      sym_path,
  [2445] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      aux_sym_path_token1,
    ACTIONS(231), 1,
      anon_sym_DOLLAR,
    STATE(58), 1,
      sym_expansion,
    STATE(108), 1,
      sym_line_continuation,
    STATE(195), 1,
      sym_path,
  [2464] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(476), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(478), 1,
      anon_sym_DASH_DASH,
    STATE(155), 1,
      sym_param,
    STATE(109), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2481] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(481), 1,
      anon_sym_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(483), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2495] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(111), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [2509] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(490), 1,
      aux_sym_label_pair_token1,
    STATE(98), 1,
      aux_sym_label_instruction_repeat1,
    STATE(112), 1,
      sym_line_continuation,
    STATE(168), 1,
      sym_label_pair,
  [2525] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_line_continuation,
    STATE(135), 1,
      sym_double_quoted_string,
  [2541] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(496), 1,
      anon_sym_LF,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(498), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2555] = 5,
    ACTIONS(500), 1,
      anon_sym_LF,
    ACTIONS(502), 1,
      anon_sym_BSLASH_LF,
    STATE(7), 1,
      sym_required_line_continuation,
    STATE(115), 1,
      sym_line_continuation,
    STATE(125), 1,
      aux_sym_shell_command_repeat2,
  [2571] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2585] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(504), 1,
      anon_sym_LF,
    ACTIONS(506), 1,
      sym__non_newline_whitespace,
    STATE(117), 1,
      sym_line_continuation,
    STATE(137), 1,
      aux_sym_volume_instruction_repeat1,
  [2601] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      anon_sym_LF,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2615] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2629] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(508), 1,
      sym__non_newline_whitespace,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(472), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2643] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      anon_sym_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2657] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2671] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      anon_sym_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2685] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(510), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(512), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2699] = 5,
    ACTIONS(502), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym_required_line_continuation,
    STATE(125), 1,
      sym_line_continuation,
    STATE(134), 1,
      aux_sym_shell_command_repeat2,
  [2715] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(259), 1,
      sym__non_newline_whitespace,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(261), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2729] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(516), 1,
      anon_sym_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(518), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2743] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_string_array_repeat1,
    STATE(128), 1,
      sym_line_continuation,
  [2759] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(508), 1,
      anon_sym_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(472), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2773] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      sym__non_newline_whitespace,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(241), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2787] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(524), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2799] = 5,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      sym__non_newline_whitespace,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(117), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(132), 1,
      sym_line_continuation,
  [2815] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(528), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2827] = 4,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      anon_sym_BSLASH_LF,
    STATE(7), 1,
      sym_required_line_continuation,
    STATE(134), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [2841] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      aux_sym_string_array_repeat1,
    STATE(135), 1,
      sym_line_continuation,
  [2857] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(537), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2869] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      sym__non_newline_whitespace,
    STATE(137), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [2883] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(544), 1,
      anon_sym_LF,
    ACTIONS(546), 1,
      aux_sym__env_key_token1,
    STATE(138), 1,
      sym_line_continuation,
  [2896] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
    ACTIONS(550), 1,
      sym_variable,
    STATE(139), 1,
      sym_line_continuation,
  [2909] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
    ACTIONS(554), 1,
      sym_variable,
    STATE(140), 1,
      sym_line_continuation,
  [2922] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 1,
      aux_sym__env_key_token1,
    STATE(141), 1,
      sym_line_continuation,
  [2935] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      sym_variable,
    STATE(142), 1,
      sym_line_continuation,
  [2948] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 1,
      aux_sym_from_instruction_token2,
    STATE(143), 1,
      sym_line_continuation,
  [2961] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_variable,
    STATE(144), 1,
      sym_line_continuation,
  [2974] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      aux_sym_from_instruction_token2,
    STATE(145), 1,
      sym_line_continuation,
  [2987] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(578), 1,
      sym_variable,
    STATE(146), 1,
      sym_line_continuation,
  [3000] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
    ACTIONS(582), 1,
      sym_variable,
    STATE(147), 1,
      sym_line_continuation,
  [3013] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(539), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3024] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      sym_variable,
    STATE(149), 1,
      sym_line_continuation,
  [3037] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 1,
      aux_sym_label_pair_token1,
    STATE(150), 1,
      sym_line_continuation,
  [3050] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym_variable,
    STATE(151), 1,
      sym_line_continuation,
  [3063] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      aux_sym_image_name_token1,
    STATE(152), 1,
      sym_line_continuation,
  [3076] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(602), 1,
      sym_variable,
    STATE(153), 1,
      sym_line_continuation,
  [3089] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(606), 1,
      sym_variable,
    STATE(154), 1,
      sym_line_continuation,
  [3102] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(608), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3113] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(156), 1,
      sym_line_continuation,
    STATE(229), 1,
      sym_string_array,
  [3126] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(157), 1,
      sym_line_continuation,
    ACTIONS(610), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3137] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(614), 1,
      sym_variable,
    STATE(158), 1,
      sym_line_continuation,
  [3150] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3161] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(618), 1,
      sym_variable,
    STATE(160), 1,
      sym_line_continuation,
  [3174] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(620), 1,
      anon_sym_LF,
    ACTIONS(622), 1,
      aux_sym_from_instruction_token2,
    STATE(161), 1,
      sym_line_continuation,
  [3187] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(626), 1,
      aux_sym_from_instruction_token2,
    STATE(162), 1,
      sym_line_continuation,
  [3200] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(628), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3211] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(632), 1,
      anon_sym_EQ,
    STATE(164), 1,
      sym_line_continuation,
  [3224] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_double_quoted_string,
    STATE(165), 1,
      sym_line_continuation,
  [3237] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(634), 1,
      aux_sym__env_key_token1,
    STATE(166), 1,
      sym_line_continuation,
  [3250] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(596), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3261] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(638), 1,
      aux_sym_label_pair_token1,
    STATE(168), 1,
      sym_line_continuation,
  [3274] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      aux_sym__env_key_token1,
    STATE(169), 1,
      sym_line_continuation,
  [3287] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    STATE(170), 1,
      sym_line_continuation,
    ACTIONS(642), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [3298] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(634), 1,
      aux_sym_label_pair_token1,
    STATE(171), 1,
      sym_line_continuation,
  [3311] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(640), 1,
      aux_sym_label_pair_token1,
    STATE(172), 1,
      sym_line_continuation,
  [3324] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(596), 1,
      anon_sym_DOLLAR,
    ACTIONS(598), 1,
      aux_sym_path_token1,
    STATE(173), 1,
      sym_line_continuation,
  [3337] = 4,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_EQ,
    ACTIONS(646), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(174), 1,
      sym_line_continuation,
  [3350] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(648), 1,
      anon_sym_LF,
    STATE(175), 1,
      sym_line_continuation,
  [3360] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_line_continuation,
  [3370] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(652), 1,
      sym__non_newline_whitespace,
    STATE(177), 1,
      sym_line_continuation,
  [3380] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(654), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_line_continuation,
  [3390] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_line_continuation,
  [3400] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(658), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_line_continuation,
  [3410] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(660), 1,
      anon_sym_LF,
    STATE(181), 1,
      sym_line_continuation,
  [3420] = 3,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(662), 1,
      anon_sym_BSLASH_LF,
    STATE(182), 1,
      sym_line_continuation,
  [3430] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(183), 1,
      sym_line_continuation,
  [3440] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_line_continuation,
  [3450] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_line_continuation,
  [3460] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(670), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_line_continuation,
  [3470] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_EQ,
    STATE(187), 1,
      sym_line_continuation,
  [3480] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(672), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
  [3490] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(674), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_line_continuation,
  [3500] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(676), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_line_continuation,
  [3510] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(678), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_line_continuation,
  [3520] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(680), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_line_continuation,
  [3530] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_EQ,
    STATE(193), 1,
      sym_line_continuation,
  [3540] = 3,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 1,
      sym_line_continuation,
  [3550] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(686), 1,
      sym__non_newline_whitespace,
    STATE(195), 1,
      sym_line_continuation,
  [3560] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(688), 1,
      sym__non_newline_whitespace,
    STATE(196), 1,
      sym_line_continuation,
  [3570] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      aux_sym_param_token1,
    STATE(197), 1,
      sym_line_continuation,
  [3580] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(692), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
  [3590] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(694), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_line_continuation,
  [3600] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(696), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_line_continuation,
  [3610] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      aux_sym_param_token1,
    STATE(201), 1,
      sym_line_continuation,
  [3620] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_line_continuation,
  [3630] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(702), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_line_continuation,
  [3640] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(704), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_line_continuation,
  [3650] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_line_continuation,
  [3660] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(708), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(206), 1,
      sym_line_continuation,
  [3670] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_line_continuation,
  [3680] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(712), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(208), 1,
      sym_line_continuation,
  [3690] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      aux_sym_arg_instruction_token2,
    STATE(209), 1,
      sym_line_continuation,
  [3700] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      aux_sym_param_token2,
    STATE(210), 1,
      sym_line_continuation,
  [3710] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      aux_sym_expansion_token1,
    STATE(211), 1,
      sym_line_continuation,
  [3720] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_line_continuation,
  [3730] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_line_continuation,
  [3740] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      sym_line_continuation,
  [3750] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      aux_sym_param_token2,
    STATE(215), 1,
      sym_line_continuation,
  [3760] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(728), 1,
      aux_sym_param_token2,
    STATE(216), 1,
      sym_line_continuation,
  [3770] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      anon_sym_LF,
    STATE(217), 1,
      sym_line_continuation,
  [3780] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_line_continuation,
  [3790] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(219), 1,
      sym_line_continuation,
  [3800] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_line_continuation,
  [3810] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      anon_sym_LF,
    STATE(221), 1,
      sym_line_continuation,
  [3820] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_line_continuation,
  [3830] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      aux_sym_expansion_token1,
    STATE(223), 1,
      sym_line_continuation,
  [3840] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_line_continuation,
  [3850] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      anon_sym_EQ,
    STATE(225), 1,
      sym_line_continuation,
  [3860] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_line_continuation,
  [3870] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LF,
    STATE(227), 1,
      sym_line_continuation,
  [3880] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_line_continuation,
  [3890] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(229), 1,
      sym_line_continuation,
  [3900] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_line_continuation,
  [3910] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_LF,
    STATE(231), 1,
      sym_line_continuation,
  [3920] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_line_continuation,
  [3930] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [3940] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_line_continuation,
  [3950] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      aux_sym_expansion_token1,
    STATE(235), 1,
      sym_line_continuation,
  [3960] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_EQ,
    STATE(236), 1,
      sym_line_continuation,
  [3970] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      aux_sym_expansion_token1,
    STATE(237), 1,
      sym_line_continuation,
  [3980] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_line_continuation,
  [3990] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      aux_sym_expansion_token1,
    STATE(239), 1,
      sym_line_continuation,
  [4000] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      aux_sym_expansion_token1,
    STATE(240), 1,
      sym_line_continuation,
  [4010] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      aux_sym_expansion_token1,
    STATE(241), 1,
      sym_line_continuation,
  [4020] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      aux_sym_expansion_token1,
    STATE(242), 1,
      sym_line_continuation,
  [4030] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      aux_sym_expansion_token1,
    STATE(243), 1,
      sym_line_continuation,
  [4040] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      aux_sym_expansion_token1,
    STATE(244), 1,
      sym_line_continuation,
  [4050] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      aux_sym_expansion_token1,
    STATE(245), 1,
      sym_line_continuation,
  [4060] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      sym__non_newline_whitespace,
    STATE(246), 1,
      sym_line_continuation,
  [4070] = 3,
    ACTIONS(117), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      aux_sym_expansion_token1,
    STATE(247), 1,
      sym_line_continuation,
  [4080] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      aux_sym_param_token1,
    STATE(248), 1,
      sym_line_continuation,
  [4090] = 1,
    ACTIONS(794), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 280,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 343,
  [SMALL_STATE(8)] = 372,
  [SMALL_STATE(9)] = 399,
  [SMALL_STATE(10)] = 426,
  [SMALL_STATE(11)] = 453,
  [SMALL_STATE(12)] = 478,
  [SMALL_STATE(13)] = 505,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 561,
  [SMALL_STATE(16)] = 585,
  [SMALL_STATE(17)] = 609,
  [SMALL_STATE(18)] = 633,
  [SMALL_STATE(19)] = 659,
  [SMALL_STATE(20)] = 683,
  [SMALL_STATE(21)] = 711,
  [SMALL_STATE(22)] = 735,
  [SMALL_STATE(23)] = 759,
  [SMALL_STATE(24)] = 785,
  [SMALL_STATE(25)] = 811,
  [SMALL_STATE(26)] = 836,
  [SMALL_STATE(27)] = 861,
  [SMALL_STATE(28)] = 886,
  [SMALL_STATE(29)] = 911,
  [SMALL_STATE(30)] = 936,
  [SMALL_STATE(31)] = 961,
  [SMALL_STATE(32)] = 986,
  [SMALL_STATE(33)] = 1011,
  [SMALL_STATE(34)] = 1028,
  [SMALL_STATE(35)] = 1045,
  [SMALL_STATE(36)] = 1070,
  [SMALL_STATE(37)] = 1091,
  [SMALL_STATE(38)] = 1108,
  [SMALL_STATE(39)] = 1131,
  [SMALL_STATE(40)] = 1154,
  [SMALL_STATE(41)] = 1175,
  [SMALL_STATE(42)] = 1198,
  [SMALL_STATE(43)] = 1221,
  [SMALL_STATE(44)] = 1246,
  [SMALL_STATE(45)] = 1267,
  [SMALL_STATE(46)] = 1288,
  [SMALL_STATE(47)] = 1313,
  [SMALL_STATE(48)] = 1338,
  [SMALL_STATE(49)] = 1363,
  [SMALL_STATE(50)] = 1386,
  [SMALL_STATE(51)] = 1406,
  [SMALL_STATE(52)] = 1422,
  [SMALL_STATE(53)] = 1442,
  [SMALL_STATE(54)] = 1464,
  [SMALL_STATE(55)] = 1486,
  [SMALL_STATE(56)] = 1502,
  [SMALL_STATE(57)] = 1518,
  [SMALL_STATE(58)] = 1538,
  [SMALL_STATE(59)] = 1560,
  [SMALL_STATE(60)] = 1582,
  [SMALL_STATE(61)] = 1598,
  [SMALL_STATE(62)] = 1620,
  [SMALL_STATE(63)] = 1642,
  [SMALL_STATE(64)] = 1660,
  [SMALL_STATE(65)] = 1682,
  [SMALL_STATE(66)] = 1704,
  [SMALL_STATE(67)] = 1724,
  [SMALL_STATE(68)] = 1746,
  [SMALL_STATE(69)] = 1768,
  [SMALL_STATE(70)] = 1788,
  [SMALL_STATE(71)] = 1808,
  [SMALL_STATE(72)] = 1824,
  [SMALL_STATE(73)] = 1840,
  [SMALL_STATE(74)] = 1856,
  [SMALL_STATE(75)] = 1872,
  [SMALL_STATE(76)] = 1894,
  [SMALL_STATE(77)] = 1916,
  [SMALL_STATE(78)] = 1932,
  [SMALL_STATE(79)] = 1948,
  [SMALL_STATE(80)] = 1970,
  [SMALL_STATE(81)] = 1986,
  [SMALL_STATE(82)] = 2005,
  [SMALL_STATE(83)] = 2024,
  [SMALL_STATE(84)] = 2039,
  [SMALL_STATE(85)] = 2054,
  [SMALL_STATE(86)] = 2073,
  [SMALL_STATE(87)] = 2088,
  [SMALL_STATE(88)] = 2103,
  [SMALL_STATE(89)] = 2118,
  [SMALL_STATE(90)] = 2137,
  [SMALL_STATE(91)] = 2154,
  [SMALL_STATE(92)] = 2173,
  [SMALL_STATE(93)] = 2186,
  [SMALL_STATE(94)] = 2203,
  [SMALL_STATE(95)] = 2216,
  [SMALL_STATE(96)] = 2231,
  [SMALL_STATE(97)] = 2250,
  [SMALL_STATE(98)] = 2265,
  [SMALL_STATE(99)] = 2284,
  [SMALL_STATE(100)] = 2303,
  [SMALL_STATE(101)] = 2322,
  [SMALL_STATE(102)] = 2341,
  [SMALL_STATE(103)] = 2356,
  [SMALL_STATE(104)] = 2375,
  [SMALL_STATE(105)] = 2388,
  [SMALL_STATE(106)] = 2407,
  [SMALL_STATE(107)] = 2426,
  [SMALL_STATE(108)] = 2445,
  [SMALL_STATE(109)] = 2464,
  [SMALL_STATE(110)] = 2481,
  [SMALL_STATE(111)] = 2495,
  [SMALL_STATE(112)] = 2509,
  [SMALL_STATE(113)] = 2525,
  [SMALL_STATE(114)] = 2541,
  [SMALL_STATE(115)] = 2555,
  [SMALL_STATE(116)] = 2571,
  [SMALL_STATE(117)] = 2585,
  [SMALL_STATE(118)] = 2601,
  [SMALL_STATE(119)] = 2615,
  [SMALL_STATE(120)] = 2629,
  [SMALL_STATE(121)] = 2643,
  [SMALL_STATE(122)] = 2657,
  [SMALL_STATE(123)] = 2671,
  [SMALL_STATE(124)] = 2685,
  [SMALL_STATE(125)] = 2699,
  [SMALL_STATE(126)] = 2715,
  [SMALL_STATE(127)] = 2729,
  [SMALL_STATE(128)] = 2743,
  [SMALL_STATE(129)] = 2759,
  [SMALL_STATE(130)] = 2773,
  [SMALL_STATE(131)] = 2787,
  [SMALL_STATE(132)] = 2799,
  [SMALL_STATE(133)] = 2815,
  [SMALL_STATE(134)] = 2827,
  [SMALL_STATE(135)] = 2841,
  [SMALL_STATE(136)] = 2857,
  [SMALL_STATE(137)] = 2869,
  [SMALL_STATE(138)] = 2883,
  [SMALL_STATE(139)] = 2896,
  [SMALL_STATE(140)] = 2909,
  [SMALL_STATE(141)] = 2922,
  [SMALL_STATE(142)] = 2935,
  [SMALL_STATE(143)] = 2948,
  [SMALL_STATE(144)] = 2961,
  [SMALL_STATE(145)] = 2974,
  [SMALL_STATE(146)] = 2987,
  [SMALL_STATE(147)] = 3000,
  [SMALL_STATE(148)] = 3013,
  [SMALL_STATE(149)] = 3024,
  [SMALL_STATE(150)] = 3037,
  [SMALL_STATE(151)] = 3050,
  [SMALL_STATE(152)] = 3063,
  [SMALL_STATE(153)] = 3076,
  [SMALL_STATE(154)] = 3089,
  [SMALL_STATE(155)] = 3102,
  [SMALL_STATE(156)] = 3113,
  [SMALL_STATE(157)] = 3126,
  [SMALL_STATE(158)] = 3137,
  [SMALL_STATE(159)] = 3150,
  [SMALL_STATE(160)] = 3161,
  [SMALL_STATE(161)] = 3174,
  [SMALL_STATE(162)] = 3187,
  [SMALL_STATE(163)] = 3200,
  [SMALL_STATE(164)] = 3211,
  [SMALL_STATE(165)] = 3224,
  [SMALL_STATE(166)] = 3237,
  [SMALL_STATE(167)] = 3250,
  [SMALL_STATE(168)] = 3261,
  [SMALL_STATE(169)] = 3274,
  [SMALL_STATE(170)] = 3287,
  [SMALL_STATE(171)] = 3298,
  [SMALL_STATE(172)] = 3311,
  [SMALL_STATE(173)] = 3324,
  [SMALL_STATE(174)] = 3337,
  [SMALL_STATE(175)] = 3350,
  [SMALL_STATE(176)] = 3360,
  [SMALL_STATE(177)] = 3370,
  [SMALL_STATE(178)] = 3380,
  [SMALL_STATE(179)] = 3390,
  [SMALL_STATE(180)] = 3400,
  [SMALL_STATE(181)] = 3410,
  [SMALL_STATE(182)] = 3420,
  [SMALL_STATE(183)] = 3430,
  [SMALL_STATE(184)] = 3440,
  [SMALL_STATE(185)] = 3450,
  [SMALL_STATE(186)] = 3460,
  [SMALL_STATE(187)] = 3470,
  [SMALL_STATE(188)] = 3480,
  [SMALL_STATE(189)] = 3490,
  [SMALL_STATE(190)] = 3500,
  [SMALL_STATE(191)] = 3510,
  [SMALL_STATE(192)] = 3520,
  [SMALL_STATE(193)] = 3530,
  [SMALL_STATE(194)] = 3540,
  [SMALL_STATE(195)] = 3550,
  [SMALL_STATE(196)] = 3560,
  [SMALL_STATE(197)] = 3570,
  [SMALL_STATE(198)] = 3580,
  [SMALL_STATE(199)] = 3590,
  [SMALL_STATE(200)] = 3600,
  [SMALL_STATE(201)] = 3610,
  [SMALL_STATE(202)] = 3620,
  [SMALL_STATE(203)] = 3630,
  [SMALL_STATE(204)] = 3640,
  [SMALL_STATE(205)] = 3650,
  [SMALL_STATE(206)] = 3660,
  [SMALL_STATE(207)] = 3670,
  [SMALL_STATE(208)] = 3680,
  [SMALL_STATE(209)] = 3690,
  [SMALL_STATE(210)] = 3700,
  [SMALL_STATE(211)] = 3710,
  [SMALL_STATE(212)] = 3720,
  [SMALL_STATE(213)] = 3730,
  [SMALL_STATE(214)] = 3740,
  [SMALL_STATE(215)] = 3750,
  [SMALL_STATE(216)] = 3760,
  [SMALL_STATE(217)] = 3770,
  [SMALL_STATE(218)] = 3780,
  [SMALL_STATE(219)] = 3790,
  [SMALL_STATE(220)] = 3800,
  [SMALL_STATE(221)] = 3810,
  [SMALL_STATE(222)] = 3820,
  [SMALL_STATE(223)] = 3830,
  [SMALL_STATE(224)] = 3840,
  [SMALL_STATE(225)] = 3850,
  [SMALL_STATE(226)] = 3860,
  [SMALL_STATE(227)] = 3870,
  [SMALL_STATE(228)] = 3880,
  [SMALL_STATE(229)] = 3890,
  [SMALL_STATE(230)] = 3900,
  [SMALL_STATE(231)] = 3910,
  [SMALL_STATE(232)] = 3920,
  [SMALL_STATE(233)] = 3930,
  [SMALL_STATE(234)] = 3940,
  [SMALL_STATE(235)] = 3950,
  [SMALL_STATE(236)] = 3960,
  [SMALL_STATE(237)] = 3970,
  [SMALL_STATE(238)] = 3980,
  [SMALL_STATE(239)] = 3990,
  [SMALL_STATE(240)] = 4000,
  [SMALL_STATE(241)] = 4010,
  [SMALL_STATE(242)] = 4020,
  [SMALL_STATE(243)] = 4030,
  [SMALL_STATE(244)] = 4040,
  [SMALL_STATE(245)] = 4050,
  [SMALL_STATE(246)] = 4060,
  [SMALL_STATE(247)] = 4070,
  [SMALL_STATE(248)] = 4080,
  [SMALL_STATE(249)] = 4090,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(160),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(33),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(147),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(56),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(142),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(78),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(140),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(72),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 2),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(102),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(158),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(146),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(97),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(158),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(63),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(144),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(87),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(87),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(183),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(104),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(153),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(120),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(154),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(110),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(139),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(149),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(114),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(129),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(151),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(187),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(88),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(189),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(197),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(165),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(133),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(103),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [704] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
