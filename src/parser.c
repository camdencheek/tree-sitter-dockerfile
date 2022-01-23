#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 253
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

static const char * const ts_symbol_names[] = {
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

static const TSSymbol ts_symbol_map[] = {
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

static const char * const ts_field_names[] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = sym_unquoted_string,
  },
  [11] = {
    [1] = sym_unquoted_string,
    [3] = sym_unquoted_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
      if (eof) ADVANCE(158);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == ']') ADVANCE(226);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(229);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead == 'U') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(237);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(227);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(191);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(195);
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
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(215);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37)
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 44:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 46:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(199);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 64:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 83:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 84:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 85:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(183);
      END_STATE();
    case 95:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 121:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 141:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 142:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 143:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 144:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 145:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 146:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (eof) ADVANCE(158);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == ']') ADVANCE(226);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 156:
      if (eof) ADVANCE(158);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(226);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(114);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 157:
      if (eof) ADVANCE(158);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(195);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(226);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(59);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(114);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(242);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 163:
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
    case 164:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(229);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
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
      ACCEPT_TOKEN(aux_sym_image_name_token2);
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
      if (lookahead == '\n') ADVANCE(229);
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
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(199);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 156},
  [2] = {.lex_state = 156},
  [3] = {.lex_state = 156},
  [4] = {.lex_state = 156},
  [5] = {.lex_state = 156},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 156},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 156},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 156},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 30},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 32},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 25},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 34},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 156},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 35},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 37},
  [112] = {.lex_state = 156},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 156},
  [119] = {.lex_state = 28},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 28},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 156},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 45},
  [133] = {.lex_state = 25},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 156},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 21},
  [142] = {.lex_state = 43},
  [143] = {.lex_state = 43},
  [144] = {.lex_state = 39},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 43},
  [147] = {.lex_state = 43},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 156},
  [150] = {.lex_state = 43},
  [151] = {.lex_state = 25},
  [152] = {.lex_state = 156},
  [153] = {.lex_state = 156},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 156},
  [156] = {.lex_state = 30},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 43},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 22},
  [161] = {.lex_state = 156},
  [162] = {.lex_state = 43},
  [163] = {.lex_state = 156},
  [164] = {.lex_state = 21},
  [165] = {.lex_state = 43},
  [166] = {.lex_state = 156},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 43},
  [169] = {.lex_state = 43},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 43},
  [172] = {.lex_state = 43},
  [173] = {.lex_state = 22},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 22},
  [176] = {.lex_state = 39},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 47},
  [181] = {.lex_state = 37},
  [182] = {.lex_state = 37},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 156},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 156},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 188},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 47},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 188},
  [210] = {.lex_state = 49},
  [211] = {.lex_state = 188},
  [212] = {.lex_state = 156},
  [213] = {.lex_state = 50},
  [214] = {.lex_state = 156},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 48},
  [217] = {.lex_state = 156},
  [218] = {.lex_state = 50},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 156},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 156},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 156},
  [226] = {.lex_state = 50},
  [227] = {.lex_state = 156},
  [228] = {.lex_state = 156},
  [229] = {.lex_state = 156},
  [230] = {.lex_state = 156},
  [231] = {.lex_state = 156},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 156},
  [234] = {.lex_state = 37},
  [235] = {.lex_state = 156},
  [236] = {.lex_state = 37},
  [237] = {.lex_state = 156},
  [238] = {.lex_state = 49},
  [239] = {.lex_state = 156},
  [240] = {.lex_state = 49},
  [241] = {.lex_state = 156},
  [242] = {.lex_state = 49},
  [243] = {.lex_state = 49},
  [244] = {.lex_state = 49},
  [245] = {.lex_state = 49},
  [246] = {.lex_state = 49},
  [247] = {.lex_state = 49},
  [248] = {.lex_state = 49},
  [249] = {.lex_state = 49},
  [250] = {.lex_state = 49},
  [251] = {.lex_state = 47},
  [252] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_source_file] = STATE(207),
    [sym__instruction] = STATE(208),
    [sym_from_instruction] = STATE(206),
    [sym_run_instruction] = STATE(206),
    [sym_cmd_instruction] = STATE(206),
    [sym_label_instruction] = STATE(206),
    [sym_expose_instruction] = STATE(206),
    [sym_env_instruction] = STATE(206),
    [sym_add_instruction] = STATE(206),
    [sym_copy_instruction] = STATE(206),
    [sym_entrypoint_instruction] = STATE(206),
    [sym_volume_instruction] = STATE(206),
    [sym_user_instruction] = STATE(206),
    [sym_workdir_instruction] = STATE(206),
    [sym_arg_instruction] = STATE(206),
    [sym_onbuild_instruction] = STATE(206),
    [sym_stopsignal_instruction] = STATE(206),
    [sym_healthcheck_instruction] = STATE(206),
    [sym_shell_instruction] = STATE(206),
    [sym_maintainer_instruction] = STATE(206),
    [sym_cross_build_instruction] = STATE(206),
    [sym_line_continuation] = STATE(1),
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
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [sym_comment] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
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
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_line_continuation,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(208), 1,
      sym__instruction,
    STATE(206), 19,
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
  [97] = 25,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
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
    STATE(208), 1,
      sym__instruction,
    STATE(3), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(206), 19,
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
    STATE(195), 1,
      sym__instruction,
    STATE(206), 19,
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
  [310] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_shell_command_repeat1,
    STATE(97), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(119), 1,
      sym__comment_line,
    STATE(121), 1,
      sym_shell_fragment,
    STATE(189), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(200), 2,
      sym_string_array,
      sym_shell_command,
  [346] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_shell_command_repeat1,
    STATE(97), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(119), 1,
      sym__comment_line,
    STATE(121), 1,
      sym_shell_fragment,
    STATE(189), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(188), 2,
      sym_string_array,
      sym_shell_command,
  [382] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_shell_command_repeat1,
    STATE(97), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(119), 1,
      sym__comment_line,
    STATE(121), 1,
      sym_shell_fragment,
    STATE(189), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(183), 2,
      sym_string_array,
      sym_shell_command,
  [418] = 10,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(121), 1,
      aux_sym__env_key_token1,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(57), 1,
      sym_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(141), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [451] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(73), 1,
      sym_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(160), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [478] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(73), 1,
      sym_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(205), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [505] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_line_continuation,
    STATE(15), 1,
      aux_sym_shell_command_repeat1,
    STATE(97), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(119), 1,
      sym__comment_line,
    STATE(179), 1,
      sym_shell_fragment,
    STATE(189), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [534] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(142), 1,
      aux_sym_image_name_token2,
    STATE(42), 1,
      sym_expansion,
    STATE(13), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(135), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [559] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_shell_command_repeat1,
    STATE(97), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(119), 1,
      sym__comment_line,
    STATE(124), 1,
      sym_shell_fragment,
    STATE(189), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [588] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_shell_command_repeat1,
    STATE(97), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(119), 1,
      sym__comment_line,
    STATE(189), 1,
      sym__anon_comment,
    STATE(191), 1,
      sym_shell_fragment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [617] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(151), 1,
      aux_sym_image_name_token2,
    STATE(16), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_image_name_repeat1,
    STATE(42), 1,
      sym_expansion,
    ACTIONS(145), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [644] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(73), 1,
      sym_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(197), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [671] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(151), 1,
      aux_sym_image_name_token2,
    ACTIONS(155), 1,
      aux_sym_from_instruction_token2,
    STATE(13), 1,
      aux_sym_image_name_repeat1,
    STATE(18), 1,
      sym_line_continuation,
    STATE(42), 1,
      sym_expansion,
    ACTIONS(153), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [698] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      aux_sym_label_pair_token1,
    STATE(19), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(73), 1,
      sym_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [724] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(167), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      aux_sym_image_tag_token1,
    STATE(54), 1,
      sym_expansion,
    ACTIONS(163), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(20), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [748] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(175), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      aux_sym_label_pair_token1,
    STATE(73), 1,
      sym_expansion,
    ACTIONS(180), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(21), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [772] = 8,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(161), 1,
      aux_sym__env_key_token1,
    STATE(22), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(57), 1,
      sym_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [798] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(173), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      aux_sym__env_key_token1,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_expansion,
    ACTIONS(186), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [822] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(191), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      aux_sym_image_tag_token1,
    STATE(20), 1,
      aux_sym_image_tag_repeat1,
    STATE(24), 1,
      sym_line_continuation,
    STATE(54), 1,
      sym_expansion,
    ACTIONS(189), 2,
      anon_sym_LF,
      anon_sym_AT,
  [848] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      aux_sym_image_name_token1,
    ACTIONS(201), 1,
      anon_sym_DASH_DASH,
    STATE(16), 1,
      sym_expansion,
    STATE(25), 1,
      sym_line_continuation,
    STATE(31), 1,
      sym_image_name,
    STATE(71), 1,
      sym_param,
    STATE(145), 1,
      sym_image_spec,
  [876] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    STATE(26), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(85), 1,
      sym_expansion,
  [901] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_POUND,
    STATE(119), 1,
      sym__comment_line,
    STATE(189), 1,
      sym__anon_comment,
    ACTIONS(211), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [922] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(85), 1,
      sym_expansion,
  [947] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(29), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_expansion,
  [972] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_line_continuation,
    STATE(39), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(85), 1,
      sym_expansion,
  [997] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(224), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(228), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym_line_continuation,
    STATE(83), 1,
      sym_image_tag,
    STATE(148), 1,
      sym_image_digest,
  [1022] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      aux_sym_path_token1,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(234), 1,
      anon_sym_DASH_DASH,
    STATE(32), 1,
      sym_line_continuation,
    STATE(52), 1,
      sym_expansion,
    STATE(93), 1,
      sym_param,
    STATE(181), 1,
      sym_path,
  [1047] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(33), 1,
      sym_line_continuation,
    ACTIONS(236), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(238), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token2,
  [1064] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(245), 1,
      aux_sym_expose_port_token1,
    STATE(34), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(113), 2,
      sym_expansion,
      sym_expose_port,
  [1085] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      anon_sym_DOLLAR,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(256), 1,
      sym_escape_sequence,
    STATE(85), 1,
      sym_expansion,
    STATE(35), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1108] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(259), 1,
      anon_sym_NONE,
    ACTIONS(261), 1,
      anon_sym_DASH_DASH,
    STATE(36), 1,
      sym_line_continuation,
    STATE(68), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(153), 1,
      sym_param,
    STATE(196), 1,
      sym_cmd_instruction,
  [1133] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(263), 1,
      anon_sym_LF,
    ACTIONS(265), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      aux_sym_image_digest_token1,
    STATE(89), 1,
      sym_expansion,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1156] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      aux_sym_path_token1,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    ACTIONS(234), 1,
      anon_sym_DASH_DASH,
    STATE(38), 1,
      sym_line_continuation,
    STATE(52), 1,
      sym_expansion,
    STATE(92), 1,
      sym_param,
    STATE(182), 1,
      sym_path,
  [1181] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(39), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_expansion,
  [1206] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(275), 1,
      anon_sym_LF,
    ACTIONS(277), 1,
      anon_sym_COLON,
    ACTIONS(279), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym_line_continuation,
    STATE(43), 1,
      aux_sym__user_name_or_group,
    STATE(91), 1,
      sym_expansion,
  [1231] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(41), 1,
      sym_line_continuation,
    ACTIONS(283), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(285), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token2,
  [1248] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(42), 1,
      sym_line_continuation,
    ACTIONS(287), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(289), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token2,
  [1265] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(296), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym_expansion,
    ACTIONS(291), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(43), 2,
      aux_sym__user_name_or_group,
      sym_line_continuation,
  [1286] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(299), 1,
      anon_sym_LF,
    ACTIONS(301), 1,
      aux_sym_expose_port_token1,
    STATE(34), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(113), 2,
      sym_expansion,
      sym_expose_port,
  [1309] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      aux_sym_path_token2,
    ACTIONS(308), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    ACTIONS(303), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(45), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1330] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(315), 1,
      anon_sym_DOLLAR,
    ACTIONS(317), 1,
      aux_sym_image_digest_token1,
    STATE(37), 1,
      aux_sym_image_digest_repeat1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(89), 1,
      sym_expansion,
  [1355] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(321), 1,
      aux_sym_path_token2,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(47), 1,
      sym_line_continuation,
    STATE(82), 1,
      sym_expansion,
    ACTIONS(319), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1378] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      aux_sym_path_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym_line_continuation,
    STATE(49), 1,
      sym_expansion,
    STATE(114), 1,
      sym_path,
    STATE(190), 1,
      sym_string_array,
  [1403] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(321), 1,
      aux_sym_path_token2,
    ACTIONS(323), 1,
      anon_sym_DOLLAR,
    STATE(47), 1,
      aux_sym_path_repeat1,
    STATE(49), 1,
      sym_line_continuation,
    STATE(82), 1,
      sym_expansion,
    ACTIONS(329), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1426] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(50), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym_expansion,
  [1451] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(51), 1,
      sym_line_continuation,
    ACTIONS(238), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(236), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1467] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(333), 1,
      aux_sym_path_token2,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    ACTIONS(337), 1,
      sym__non_newline_whitespace,
    STATE(52), 1,
      sym_line_continuation,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(116), 1,
      sym_expansion,
  [1489] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(341), 1,
      anon_sym_DOLLAR,
    ACTIONS(343), 1,
      aux_sym_image_alias_token1,
    STATE(53), 1,
      sym_line_continuation,
    STATE(64), 1,
      aux_sym_image_alias_repeat1,
    STATE(122), 1,
      sym_expansion,
  [1511] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(54), 1,
      sym_line_continuation,
    ACTIONS(345), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(347), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1527] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(283), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(285), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1543] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(349), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(351), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(353), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1561] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(57), 1,
      sym_line_continuation,
    ACTIONS(357), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(355), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1577] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(58), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(238), 3,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1593] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(361), 1,
      aux_sym__env_key_token1,
    STATE(59), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_env_instruction_repeat1,
    STATE(177), 1,
      sym_env_pair,
    STATE(230), 1,
      sym__env_key,
  [1615] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(363), 1,
      anon_sym_DOLLAR,
    ACTIONS(365), 1,
      aux_sym_expose_port_token1,
    STATE(44), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(60), 1,
      sym_line_continuation,
    STATE(113), 2,
      sym_expansion,
      sym_expose_port,
  [1635] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      aux_sym_path_token2,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_line_continuation,
    STATE(62), 1,
      aux_sym_path_repeat1,
    STATE(117), 1,
      sym_expansion,
  [1657] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      aux_sym_path_token2,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    ACTIONS(371), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym_line_continuation,
    STATE(63), 1,
      aux_sym_path_repeat1,
    STATE(117), 1,
      sym_expansion,
  [1679] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      aux_sym_path_token2,
    ACTIONS(378), 1,
      anon_sym_DOLLAR,
    STATE(117), 1,
      sym_expansion,
    STATE(63), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1699] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      aux_sym_image_alias_token1,
    STATE(122), 1,
      sym_expansion,
    STATE(64), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1719] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(65), 1,
      sym_line_continuation,
    ACTIONS(283), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(285), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1735] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      anon_sym_LF,
    ACTIONS(391), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(393), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_line_continuation,
    STATE(72), 1,
      aux_sym__stopsignal_value,
    STATE(128), 1,
      sym_expansion,
  [1757] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(395), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym__user_name_or_group,
    STATE(67), 1,
      sym_line_continuation,
    STATE(91), 1,
      sym_expansion,
  [1779] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(261), 1,
      anon_sym_DASH_DASH,
    STATE(68), 1,
      sym_line_continuation,
    STATE(99), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(153), 1,
      sym_param,
    STATE(232), 1,
      sym_cmd_instruction,
  [1801] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      sym__non_newline_whitespace,
    ACTIONS(397), 1,
      aux_sym_path_token2,
    ACTIONS(400), 1,
      anon_sym_DOLLAR,
    STATE(116), 1,
      sym_expansion,
    STATE(69), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1821] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(70), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(238), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1837] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(197), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      aux_sym_image_name_token1,
    STATE(16), 1,
      sym_expansion,
    STATE(31), 1,
      sym_image_name,
    STATE(71), 1,
      sym_line_continuation,
    STATE(154), 1,
      sym_image_spec,
  [1859] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(405), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(408), 1,
      anon_sym_DOLLAR,
    STATE(128), 1,
      sym_expansion,
    STATE(72), 2,
      aux_sym__stopsignal_value,
      sym_line_continuation,
  [1879] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(73), 1,
      sym_line_continuation,
    ACTIONS(357), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(355), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1895] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      anon_sym_LF,
    ACTIONS(413), 1,
      aux_sym__env_key_token1,
    STATE(177), 1,
      sym_env_pair,
    STATE(230), 1,
      sym__env_key,
    STATE(74), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [1915] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(285), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(283), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1931] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(238), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(236), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1947] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(285), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(283), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1963] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    ACTIONS(418), 1,
      aux_sym_image_alias_token1,
    STATE(53), 1,
      aux_sym_image_alias_repeat1,
    STATE(78), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym_expansion,
    STATE(224), 1,
      sym_image_alias,
  [1985] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(333), 1,
      aux_sym_path_token2,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    ACTIONS(371), 1,
      sym__non_newline_whitespace,
    STATE(69), 1,
      aux_sym_path_repeat1,
    STATE(79), 1,
      sym_line_continuation,
    STATE(116), 1,
      sym_expansion,
  [2007] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(416), 1,
      anon_sym_DOLLAR,
    ACTIONS(418), 1,
      aux_sym_image_alias_token1,
    STATE(53), 1,
      aux_sym_image_alias_repeat1,
    STATE(80), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym_expansion,
    STATE(194), 1,
      sym_image_alias,
  [2029] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(420), 1,
      aux_sym__env_key_token1,
    STATE(59), 1,
      aux_sym_env_instruction_repeat1,
    STATE(81), 1,
      sym_line_continuation,
    STATE(176), 1,
      sym__env_key,
    STATE(177), 1,
      sym_env_pair,
    STATE(215), 1,
      sym__spaced_env_pair,
  [2051] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(82), 1,
      sym_line_continuation,
    ACTIONS(422), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2064] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(228), 1,
      anon_sym_AT,
    ACTIONS(424), 1,
      anon_sym_LF,
    ACTIONS(426), 1,
      aux_sym_from_instruction_token2,
    STATE(83), 1,
      sym_line_continuation,
    STATE(157), 1,
      sym_image_digest,
  [2083] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(84), 1,
      sym_line_continuation,
    STATE(185), 1,
      sym_path,
  [2102] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(434), 1,
      aux_sym_double_quoted_string_token1,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(432), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2117] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(86), 1,
      sym_line_continuation,
    STATE(187), 1,
      sym_path,
  [2136] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(195), 1,
      aux_sym_image_tag_token1,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(24), 1,
      aux_sym_image_tag_repeat1,
    STATE(54), 1,
      sym_expansion,
    STATE(87), 1,
      sym_line_continuation,
  [2155] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(317), 1,
      aux_sym_image_digest_token1,
    ACTIONS(438), 1,
      anon_sym_DOLLAR,
    STATE(46), 1,
      aux_sym_image_digest_repeat1,
    STATE(88), 1,
      sym_line_continuation,
    STATE(89), 1,
      sym_expansion,
  [2174] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(89), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(442), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2189] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(363), 1,
      anon_sym_DOLLAR,
    ACTIONS(444), 1,
      aux_sym__user_name_or_group_token1,
    STATE(40), 1,
      aux_sym__user_name_or_group,
    STATE(90), 1,
      sym_line_continuation,
    STATE(91), 1,
      sym_expansion,
  [2208] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(446), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(448), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [2223] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      aux_sym_path_token1,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(92), 1,
      sym_line_continuation,
    STATE(236), 1,
      sym_path,
  [2242] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      aux_sym_path_token1,
    ACTIONS(232), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(93), 1,
      sym_line_continuation,
    STATE(234), 1,
      sym_path,
  [2261] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      aux_sym_path_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_expansion,
    STATE(94), 1,
      sym_line_continuation,
    STATE(151), 1,
      sym_path,
  [2280] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(452), 1,
      aux_sym_label_pair_token1,
    STATE(95), 1,
      sym_line_continuation,
    STATE(98), 1,
      aux_sym_label_instruction_repeat1,
    STATE(170), 1,
      sym_label_pair,
  [2299] = 4,
    ACTIONS(454), 1,
      anon_sym_LF,
    ACTIONS(459), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(456), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(96), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2314] = 5,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(465), 1,
      anon_sym_BSLASH_LF,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(463), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2331] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 1,
      aux_sym_label_pair_token1,
    STATE(170), 1,
      sym_label_pair,
    STATE(98), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2348] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(472), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(474), 1,
      anon_sym_DASH_DASH,
    STATE(153), 1,
      sym_param,
    STATE(99), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2365] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(285), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2378] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(101), 1,
      sym_line_continuation,
    ACTIONS(238), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2391] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(283), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(285), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2406] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(236), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(238), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2421] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(283), 1,
      aux_sym_double_quoted_string_token1,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(285), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2436] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(236), 1,
      aux_sym_double_quoted_string_token1,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(238), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2451] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(477), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      aux_sym__stopsignal_value,
    STATE(106), 1,
      sym_line_continuation,
    STATE(128), 1,
      sym_expansion,
  [2470] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(107), 1,
      sym_line_continuation,
    STATE(178), 1,
      sym_path,
  [2489] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(108), 1,
      sym_line_continuation,
    STATE(193), 1,
      sym_path,
  [2508] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(109), 1,
      sym_line_continuation,
    STATE(199), 1,
      sym_path,
  [2527] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(363), 1,
      anon_sym_DOLLAR,
    ACTIONS(444), 1,
      aux_sym__user_name_or_group_token1,
    STATE(67), 1,
      aux_sym__user_name_or_group,
    STATE(91), 1,
      sym_expansion,
    STATE(110), 1,
      sym_line_continuation,
  [2546] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(236), 1,
      sym__non_newline_whitespace,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(238), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2560] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_line_continuation,
    STATE(130), 1,
      sym_double_quoted_string,
  [2576] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(485), 1,
      anon_sym_LF,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(487), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2590] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 1,
      sym__non_newline_whitespace,
    STATE(114), 1,
      sym_line_continuation,
    STATE(138), 1,
      aux_sym_volume_instruction_repeat1,
  [2606] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(283), 1,
      sym__non_newline_whitespace,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(285), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2620] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(493), 1,
      sym__non_newline_whitespace,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(422), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2634] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(493), 1,
      anon_sym_LF,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(422), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2648] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    STATE(118), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [2662] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(500), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2674] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      anon_sym_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(504), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2688] = 5,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(508), 1,
      anon_sym_BSLASH_LF,
    STATE(12), 1,
      sym_required_line_continuation,
    STATE(121), 1,
      sym_line_continuation,
    STATE(126), 1,
      aux_sym_shell_command_repeat2,
  [2704] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(510), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(512), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2718] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(283), 1,
      anon_sym_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(285), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2732] = 5,
    ACTIONS(508), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_required_line_continuation,
    STATE(124), 1,
      sym_line_continuation,
    STATE(140), 1,
      aux_sym_shell_command_repeat2,
  [2748] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(516), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2760] = 5,
    ACTIONS(508), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_required_line_continuation,
    STATE(126), 1,
      sym_line_continuation,
    STATE(139), 1,
      aux_sym_shell_command_repeat2,
  [2776] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(518), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2788] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(522), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2802] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(236), 1,
      anon_sym_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(238), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2816] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_line_continuation,
    STATE(136), 1,
      aux_sym_string_array_repeat1,
  [2832] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(283), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(285), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2846] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(528), 1,
      aux_sym_label_pair_token1,
    STATE(95), 1,
      aux_sym_label_instruction_repeat1,
    STATE(132), 1,
      sym_line_continuation,
    STATE(170), 1,
      sym_label_pair,
  [2862] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      sym__non_newline_whitespace,
    STATE(133), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [2876] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(236), 1,
      anon_sym_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(238), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2890] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(283), 1,
      anon_sym_LF,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(285), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2904] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_string_array_repeat1,
    STATE(136), 1,
      sym_line_continuation,
  [2920] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(236), 1,
      anon_sym_LF,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(238), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2934] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(491), 1,
      sym__non_newline_whitespace,
    ACTIONS(537), 1,
      anon_sym_LF,
    STATE(133), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(138), 1,
      sym_line_continuation,
  [2950] = 4,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      anon_sym_BSLASH_LF,
    STATE(12), 1,
      sym_required_line_continuation,
    STATE(139), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [2964] = 5,
    ACTIONS(508), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(544), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_required_line_continuation,
    STATE(139), 1,
      aux_sym_shell_command_repeat2,
    STATE(140), 1,
      sym_line_continuation,
  [2980] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 1,
      aux_sym__env_key_token1,
    STATE(141), 1,
      sym_line_continuation,
  [2993] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      sym_variable,
    STATE(142), 1,
      sym_line_continuation,
  [3006] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    ACTIONS(556), 1,
      sym_variable,
    STATE(143), 1,
      sym_line_continuation,
  [3019] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(558), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [3030] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(562), 1,
      aux_sym_from_instruction_token2,
    STATE(145), 1,
      sym_line_continuation,
  [3043] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym_variable,
    STATE(146), 1,
      sym_line_continuation,
  [3056] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_variable,
    STATE(147), 1,
      sym_line_continuation,
  [3069] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      aux_sym_from_instruction_token2,
    STATE(148), 1,
      sym_line_continuation,
  [3082] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      sym_line_continuation,
    STATE(198), 1,
      sym_string_array,
  [3095] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(578), 1,
      sym_variable,
    STATE(150), 1,
      sym_line_continuation,
  [3108] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(530), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3119] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      sym_line_continuation,
    STATE(163), 1,
      sym_double_quoted_string,
  [3132] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(580), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3143] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 1,
      aux_sym_from_instruction_token2,
    STATE(154), 1,
      sym_line_continuation,
  [3156] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3167] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(588), 1,
      anon_sym_DOLLAR,
    ACTIONS(590), 1,
      aux_sym_image_name_token1,
    STATE(156), 1,
      sym_line_continuation,
  [3180] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      aux_sym_from_instruction_token2,
    STATE(157), 1,
      sym_line_continuation,
  [3193] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      sym_variable,
    STATE(158), 1,
      sym_line_continuation,
  [3206] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      anon_sym_EQ,
    STATE(159), 1,
      sym_line_continuation,
  [3219] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(604), 1,
      anon_sym_LF,
    ACTIONS(606), 1,
      aux_sym_label_pair_token1,
    STATE(160), 1,
      sym_line_continuation,
  [3232] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(608), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3243] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      sym_variable,
    STATE(162), 1,
      sym_line_continuation,
  [3256] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3267] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      aux_sym__env_key_token1,
    STATE(164), 1,
      sym_line_continuation,
  [3280] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(618), 1,
      sym_variable,
    STATE(165), 1,
      sym_line_continuation,
  [3293] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(588), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3304] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      aux_sym__env_key_token1,
    STATE(167), 1,
      sym_line_continuation,
  [3317] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      sym_variable,
    STATE(168), 1,
      sym_line_continuation,
  [3330] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
    ACTIONS(628), 1,
      sym_variable,
    STATE(169), 1,
      sym_line_continuation,
  [3343] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(632), 1,
      aux_sym_label_pair_token1,
    STATE(170), 1,
      sym_line_continuation,
  [3356] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(636), 1,
      sym_variable,
    STATE(171), 1,
      sym_line_continuation,
  [3369] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    ACTIONS(640), 1,
      sym_variable,
    STATE(172), 1,
      sym_line_continuation,
  [3382] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      aux_sym_label_pair_token1,
    STATE(173), 1,
      sym_line_continuation,
  [3395] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(588), 1,
      anon_sym_DOLLAR,
    ACTIONS(590), 1,
      aux_sym_path_token1,
    STATE(174), 1,
      sym_line_continuation,
  [3408] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      aux_sym_label_pair_token1,
    STATE(175), 1,
      sym_line_continuation,
  [3421] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_EQ,
    ACTIONS(644), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(176), 1,
      sym_line_continuation,
  [3434] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(648), 1,
      aux_sym__env_key_token1,
    STATE(177), 1,
      sym_line_continuation,
  [3447] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_line_continuation,
  [3457] = 3,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(652), 1,
      anon_sym_BSLASH_LF,
    STATE(179), 1,
      sym_line_continuation,
  [3467] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(654), 1,
      aux_sym_param_token1,
    STATE(180), 1,
      sym_line_continuation,
  [3477] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(656), 1,
      sym__non_newline_whitespace,
    STATE(181), 1,
      sym_line_continuation,
  [3487] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(658), 1,
      sym__non_newline_whitespace,
    STATE(182), 1,
      sym_line_continuation,
  [3497] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(660), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_line_continuation,
  [3507] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(558), 1,
      anon_sym_EQ,
    STATE(184), 1,
      sym_line_continuation,
  [3517] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(662), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_line_continuation,
  [3527] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(186), 1,
      sym_line_continuation,
  [3537] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym_line_continuation,
  [3547] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
  [3557] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(670), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_line_continuation,
  [3567] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(672), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_line_continuation,
  [3577] = 3,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(676), 1,
      anon_sym_BSLASH_LF,
    STATE(191), 1,
      sym_line_continuation,
  [3587] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(678), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_line_continuation,
  [3597] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(680), 1,
      anon_sym_LF,
    STATE(193), 1,
      sym_line_continuation,
  [3607] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(682), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_line_continuation,
  [3617] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
  [3627] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(686), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_line_continuation,
  [3637] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(688), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_line_continuation,
  [3647] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
  [3657] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(692), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_line_continuation,
  [3667] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(694), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_line_continuation,
  [3677] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(696), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(201), 1,
      sym_line_continuation,
  [3687] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_line_continuation,
  [3697] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_line_continuation,
  [3707] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(702), 1,
      aux_sym_param_token1,
    STATE(204), 1,
      sym_line_continuation,
  [3717] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(704), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_line_continuation,
  [3727] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_line_continuation,
  [3737] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    STATE(207), 1,
      sym_line_continuation,
  [3747] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LF,
    STATE(208), 1,
      sym_line_continuation,
  [3757] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(712), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(209), 1,
      sym_line_continuation,
  [3767] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      aux_sym_expansion_token1,
    STATE(210), 1,
      sym_line_continuation,
  [3777] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(211), 1,
      sym_line_continuation,
  [3787] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym_line_continuation,
  [3797] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      aux_sym_param_token2,
    STATE(213), 1,
      sym_line_continuation,
  [3807] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_EQ,
    STATE(214), 1,
      sym_line_continuation,
  [3817] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      anon_sym_LF,
    STATE(215), 1,
      sym_line_continuation,
  [3827] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      aux_sym_arg_instruction_token2,
    STATE(216), 1,
      sym_line_continuation,
  [3837] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_line_continuation,
  [3847] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      aux_sym_param_token2,
    STATE(218), 1,
      sym_line_continuation,
  [3857] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_LF,
    STATE(219), 1,
      sym_line_continuation,
  [3867] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(220), 1,
      sym_line_continuation,
  [3877] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_line_continuation,
  [3887] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      anon_sym_LF,
    STATE(222), 1,
      sym_line_continuation,
  [3897] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_line_continuation,
  [3907] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(224), 1,
      sym_line_continuation,
  [3917] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_line_continuation,
  [3927] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      aux_sym_param_token2,
    STATE(226), 1,
      sym_line_continuation,
  [3937] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_line_continuation,
  [3947] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_line_continuation,
  [3957] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_line_continuation,
  [3967] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_EQ,
    STATE(230), 1,
      sym_line_continuation,
  [3977] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_line_continuation,
  [3987] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      anon_sym_LF,
    STATE(232), 1,
      sym_line_continuation,
  [3997] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_line_continuation,
  [4007] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      sym__non_newline_whitespace,
    STATE(234), 1,
      sym_line_continuation,
  [4017] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_line_continuation,
  [4027] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      sym__non_newline_whitespace,
    STATE(236), 1,
      sym_line_continuation,
  [4037] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_line_continuation,
  [4047] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      aux_sym_expansion_token1,
    STATE(238), 1,
      sym_line_continuation,
  [4057] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      anon_sym_EQ,
    STATE(239), 1,
      sym_line_continuation,
  [4067] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      aux_sym_expansion_token1,
    STATE(240), 1,
      sym_line_continuation,
  [4077] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      anon_sym_EQ,
    STATE(241), 1,
      sym_line_continuation,
  [4087] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      aux_sym_expansion_token1,
    STATE(242), 1,
      sym_line_continuation,
  [4097] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      aux_sym_expansion_token1,
    STATE(243), 1,
      sym_line_continuation,
  [4107] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      aux_sym_expansion_token1,
    STATE(244), 1,
      sym_line_continuation,
  [4117] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      aux_sym_expansion_token1,
    STATE(245), 1,
      sym_line_continuation,
  [4127] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      aux_sym_expansion_token1,
    STATE(246), 1,
      sym_line_continuation,
  [4137] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      aux_sym_expansion_token1,
    STATE(247), 1,
      sym_line_continuation,
  [4147] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      aux_sym_expansion_token1,
    STATE(248), 1,
      sym_line_continuation,
  [4157] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      aux_sym_expansion_token1,
    STATE(249), 1,
      sym_line_continuation,
  [4167] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      aux_sym_expansion_token1,
    STATE(250), 1,
      sym_line_continuation,
  [4177] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      aux_sym_param_token1,
    STATE(251), 1,
      sym_line_continuation,
  [4187] = 1,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 280,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 346,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 418,
  [SMALL_STATE(10)] = 451,
  [SMALL_STATE(11)] = 478,
  [SMALL_STATE(12)] = 505,
  [SMALL_STATE(13)] = 534,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 588,
  [SMALL_STATE(16)] = 617,
  [SMALL_STATE(17)] = 644,
  [SMALL_STATE(18)] = 671,
  [SMALL_STATE(19)] = 698,
  [SMALL_STATE(20)] = 724,
  [SMALL_STATE(21)] = 748,
  [SMALL_STATE(22)] = 772,
  [SMALL_STATE(23)] = 798,
  [SMALL_STATE(24)] = 822,
  [SMALL_STATE(25)] = 848,
  [SMALL_STATE(26)] = 876,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 922,
  [SMALL_STATE(29)] = 947,
  [SMALL_STATE(30)] = 972,
  [SMALL_STATE(31)] = 997,
  [SMALL_STATE(32)] = 1022,
  [SMALL_STATE(33)] = 1047,
  [SMALL_STATE(34)] = 1064,
  [SMALL_STATE(35)] = 1085,
  [SMALL_STATE(36)] = 1108,
  [SMALL_STATE(37)] = 1133,
  [SMALL_STATE(38)] = 1156,
  [SMALL_STATE(39)] = 1181,
  [SMALL_STATE(40)] = 1206,
  [SMALL_STATE(41)] = 1231,
  [SMALL_STATE(42)] = 1248,
  [SMALL_STATE(43)] = 1265,
  [SMALL_STATE(44)] = 1286,
  [SMALL_STATE(45)] = 1309,
  [SMALL_STATE(46)] = 1330,
  [SMALL_STATE(47)] = 1355,
  [SMALL_STATE(48)] = 1378,
  [SMALL_STATE(49)] = 1403,
  [SMALL_STATE(50)] = 1426,
  [SMALL_STATE(51)] = 1451,
  [SMALL_STATE(52)] = 1467,
  [SMALL_STATE(53)] = 1489,
  [SMALL_STATE(54)] = 1511,
  [SMALL_STATE(55)] = 1527,
  [SMALL_STATE(56)] = 1543,
  [SMALL_STATE(57)] = 1561,
  [SMALL_STATE(58)] = 1577,
  [SMALL_STATE(59)] = 1593,
  [SMALL_STATE(60)] = 1615,
  [SMALL_STATE(61)] = 1635,
  [SMALL_STATE(62)] = 1657,
  [SMALL_STATE(63)] = 1679,
  [SMALL_STATE(64)] = 1699,
  [SMALL_STATE(65)] = 1719,
  [SMALL_STATE(66)] = 1735,
  [SMALL_STATE(67)] = 1757,
  [SMALL_STATE(68)] = 1779,
  [SMALL_STATE(69)] = 1801,
  [SMALL_STATE(70)] = 1821,
  [SMALL_STATE(71)] = 1837,
  [SMALL_STATE(72)] = 1859,
  [SMALL_STATE(73)] = 1879,
  [SMALL_STATE(74)] = 1895,
  [SMALL_STATE(75)] = 1915,
  [SMALL_STATE(76)] = 1931,
  [SMALL_STATE(77)] = 1947,
  [SMALL_STATE(78)] = 1963,
  [SMALL_STATE(79)] = 1985,
  [SMALL_STATE(80)] = 2007,
  [SMALL_STATE(81)] = 2029,
  [SMALL_STATE(82)] = 2051,
  [SMALL_STATE(83)] = 2064,
  [SMALL_STATE(84)] = 2083,
  [SMALL_STATE(85)] = 2102,
  [SMALL_STATE(86)] = 2117,
  [SMALL_STATE(87)] = 2136,
  [SMALL_STATE(88)] = 2155,
  [SMALL_STATE(89)] = 2174,
  [SMALL_STATE(90)] = 2189,
  [SMALL_STATE(91)] = 2208,
  [SMALL_STATE(92)] = 2223,
  [SMALL_STATE(93)] = 2242,
  [SMALL_STATE(94)] = 2261,
  [SMALL_STATE(95)] = 2280,
  [SMALL_STATE(96)] = 2299,
  [SMALL_STATE(97)] = 2314,
  [SMALL_STATE(98)] = 2331,
  [SMALL_STATE(99)] = 2348,
  [SMALL_STATE(100)] = 2365,
  [SMALL_STATE(101)] = 2378,
  [SMALL_STATE(102)] = 2391,
  [SMALL_STATE(103)] = 2406,
  [SMALL_STATE(104)] = 2421,
  [SMALL_STATE(105)] = 2436,
  [SMALL_STATE(106)] = 2451,
  [SMALL_STATE(107)] = 2470,
  [SMALL_STATE(108)] = 2489,
  [SMALL_STATE(109)] = 2508,
  [SMALL_STATE(110)] = 2527,
  [SMALL_STATE(111)] = 2546,
  [SMALL_STATE(112)] = 2560,
  [SMALL_STATE(113)] = 2576,
  [SMALL_STATE(114)] = 2590,
  [SMALL_STATE(115)] = 2606,
  [SMALL_STATE(116)] = 2620,
  [SMALL_STATE(117)] = 2634,
  [SMALL_STATE(118)] = 2648,
  [SMALL_STATE(119)] = 2662,
  [SMALL_STATE(120)] = 2674,
  [SMALL_STATE(121)] = 2688,
  [SMALL_STATE(122)] = 2704,
  [SMALL_STATE(123)] = 2718,
  [SMALL_STATE(124)] = 2732,
  [SMALL_STATE(125)] = 2748,
  [SMALL_STATE(126)] = 2760,
  [SMALL_STATE(127)] = 2776,
  [SMALL_STATE(128)] = 2788,
  [SMALL_STATE(129)] = 2802,
  [SMALL_STATE(130)] = 2816,
  [SMALL_STATE(131)] = 2832,
  [SMALL_STATE(132)] = 2846,
  [SMALL_STATE(133)] = 2862,
  [SMALL_STATE(134)] = 2876,
  [SMALL_STATE(135)] = 2890,
  [SMALL_STATE(136)] = 2904,
  [SMALL_STATE(137)] = 2920,
  [SMALL_STATE(138)] = 2934,
  [SMALL_STATE(139)] = 2950,
  [SMALL_STATE(140)] = 2964,
  [SMALL_STATE(141)] = 2980,
  [SMALL_STATE(142)] = 2993,
  [SMALL_STATE(143)] = 3006,
  [SMALL_STATE(144)] = 3019,
  [SMALL_STATE(145)] = 3030,
  [SMALL_STATE(146)] = 3043,
  [SMALL_STATE(147)] = 3056,
  [SMALL_STATE(148)] = 3069,
  [SMALL_STATE(149)] = 3082,
  [SMALL_STATE(150)] = 3095,
  [SMALL_STATE(151)] = 3108,
  [SMALL_STATE(152)] = 3119,
  [SMALL_STATE(153)] = 3132,
  [SMALL_STATE(154)] = 3143,
  [SMALL_STATE(155)] = 3156,
  [SMALL_STATE(156)] = 3167,
  [SMALL_STATE(157)] = 3180,
  [SMALL_STATE(158)] = 3193,
  [SMALL_STATE(159)] = 3206,
  [SMALL_STATE(160)] = 3219,
  [SMALL_STATE(161)] = 3232,
  [SMALL_STATE(162)] = 3243,
  [SMALL_STATE(163)] = 3256,
  [SMALL_STATE(164)] = 3267,
  [SMALL_STATE(165)] = 3280,
  [SMALL_STATE(166)] = 3293,
  [SMALL_STATE(167)] = 3304,
  [SMALL_STATE(168)] = 3317,
  [SMALL_STATE(169)] = 3330,
  [SMALL_STATE(170)] = 3343,
  [SMALL_STATE(171)] = 3356,
  [SMALL_STATE(172)] = 3369,
  [SMALL_STATE(173)] = 3382,
  [SMALL_STATE(174)] = 3395,
  [SMALL_STATE(175)] = 3408,
  [SMALL_STATE(176)] = 3421,
  [SMALL_STATE(177)] = 3434,
  [SMALL_STATE(178)] = 3447,
  [SMALL_STATE(179)] = 3457,
  [SMALL_STATE(180)] = 3467,
  [SMALL_STATE(181)] = 3477,
  [SMALL_STATE(182)] = 3487,
  [SMALL_STATE(183)] = 3497,
  [SMALL_STATE(184)] = 3507,
  [SMALL_STATE(185)] = 3517,
  [SMALL_STATE(186)] = 3527,
  [SMALL_STATE(187)] = 3537,
  [SMALL_STATE(188)] = 3547,
  [SMALL_STATE(189)] = 3557,
  [SMALL_STATE(190)] = 3567,
  [SMALL_STATE(191)] = 3577,
  [SMALL_STATE(192)] = 3587,
  [SMALL_STATE(193)] = 3597,
  [SMALL_STATE(194)] = 3607,
  [SMALL_STATE(195)] = 3617,
  [SMALL_STATE(196)] = 3627,
  [SMALL_STATE(197)] = 3637,
  [SMALL_STATE(198)] = 3647,
  [SMALL_STATE(199)] = 3657,
  [SMALL_STATE(200)] = 3667,
  [SMALL_STATE(201)] = 3677,
  [SMALL_STATE(202)] = 3687,
  [SMALL_STATE(203)] = 3697,
  [SMALL_STATE(204)] = 3707,
  [SMALL_STATE(205)] = 3717,
  [SMALL_STATE(206)] = 3727,
  [SMALL_STATE(207)] = 3737,
  [SMALL_STATE(208)] = 3747,
  [SMALL_STATE(209)] = 3757,
  [SMALL_STATE(210)] = 3767,
  [SMALL_STATE(211)] = 3777,
  [SMALL_STATE(212)] = 3787,
  [SMALL_STATE(213)] = 3797,
  [SMALL_STATE(214)] = 3807,
  [SMALL_STATE(215)] = 3817,
  [SMALL_STATE(216)] = 3827,
  [SMALL_STATE(217)] = 3837,
  [SMALL_STATE(218)] = 3847,
  [SMALL_STATE(219)] = 3857,
  [SMALL_STATE(220)] = 3867,
  [SMALL_STATE(221)] = 3877,
  [SMALL_STATE(222)] = 3887,
  [SMALL_STATE(223)] = 3897,
  [SMALL_STATE(224)] = 3907,
  [SMALL_STATE(225)] = 3917,
  [SMALL_STATE(226)] = 3927,
  [SMALL_STATE(227)] = 3937,
  [SMALL_STATE(228)] = 3947,
  [SMALL_STATE(229)] = 3957,
  [SMALL_STATE(230)] = 3967,
  [SMALL_STATE(231)] = 3977,
  [SMALL_STATE(232)] = 3987,
  [SMALL_STATE(233)] = 3997,
  [SMALL_STATE(234)] = 4007,
  [SMALL_STATE(235)] = 4017,
  [SMALL_STATE(236)] = 4027,
  [SMALL_STATE(237)] = 4037,
  [SMALL_STATE(238)] = 4047,
  [SMALL_STATE(239)] = 4057,
  [SMALL_STATE(240)] = 4067,
  [SMALL_STATE(241)] = 4077,
  [SMALL_STATE(242)] = 4087,
  [SMALL_STATE(243)] = 4097,
  [SMALL_STATE(244)] = 4107,
  [SMALL_STATE(245)] = 4117,
  [SMALL_STATE(246)] = 4127,
  [SMALL_STATE(247)] = 4137,
  [SMALL_STATE(248)] = 4147,
  [SMALL_STATE(249)] = 4157,
  [SMALL_STATE(250)] = 4167,
  [SMALL_STATE(251)] = 4177,
  [SMALL_STATE(252)] = 4187,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(143),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(42),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(168),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(54),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(172),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(73),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(146),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(57),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(201),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(147),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(56),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(171),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(85),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(85),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(169),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(89),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(91),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(147),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(82),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(158),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(117),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(142),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(165),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(122),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(116),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(150),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(128),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(162),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(184),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(96),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(186),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(180),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(152),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(94),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(127),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [708] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
