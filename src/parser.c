#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
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
  aux_sym_add_instruction_repeat1 = 114,
  aux_sym_volume_instruction_repeat1 = 115,
  aux_sym_healthcheck_instruction_repeat1 = 116,
  aux_sym_path_repeat1 = 117,
  aux_sym_image_name_repeat1 = 118,
  aux_sym_image_tag_repeat1 = 119,
  aux_sym_image_digest_repeat1 = 120,
  aux_sym_image_alias_repeat1 = 121,
  aux_sym_string_array_repeat1 = 122,
  aux_sym_shell_command_repeat1 = 123,
  aux_sym_shell_command_repeat2 = 124,
  aux_sym_shell_fragment_repeat1 = 125,
  aux_sym_double_quoted_string_repeat1 = 126,
  aux_sym_unquoted_string_repeat1 = 127,
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
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
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
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
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
  [aux_sym_add_instruction_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 29,
  [43] = 43,
  [44] = 31,
  [45] = 31,
  [46] = 46,
  [47] = 47,
  [48] = 29,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 39,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 43,
  [58] = 58,
  [59] = 37,
  [60] = 43,
  [61] = 61,
  [62] = 38,
  [63] = 63,
  [64] = 37,
  [65] = 65,
  [66] = 37,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 36,
  [73] = 43,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 52,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 39,
  [84] = 84,
  [85] = 38,
  [86] = 36,
  [87] = 43,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 43,
  [96] = 37,
  [97] = 43,
  [98] = 37,
  [99] = 43,
  [100] = 37,
  [101] = 37,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 37,
  [113] = 113,
  [114] = 102,
  [115] = 115,
  [116] = 116,
  [117] = 43,
  [118] = 37,
  [119] = 43,
  [120] = 120,
  [121] = 37,
  [122] = 43,
  [123] = 123,
  [124] = 37,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 43,
  [130] = 102,
  [131] = 37,
  [132] = 132,
  [133] = 43,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 145,
  [147] = 147,
  [148] = 148,
  [149] = 145,
  [150] = 150,
  [151] = 145,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 145,
  [158] = 158,
  [159] = 145,
  [160] = 160,
  [161] = 145,
  [162] = 145,
  [163] = 163,
  [164] = 145,
  [165] = 165,
  [166] = 145,
  [167] = 145,
  [168] = 168,
  [169] = 169,
  [170] = 145,
  [171] = 145,
  [172] = 172,
  [173] = 173,
  [174] = 144,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 144,
  [179] = 158,
  [180] = 163,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 158,
  [186] = 163,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 188,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 189,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 188,
  [214] = 193,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 188,
  [219] = 193,
  [220] = 220,
  [221] = 156,
  [222] = 222,
  [223] = 223,
  [224] = 188,
  [225] = 225,
  [226] = 188,
  [227] = 227,
  [228] = 188,
  [229] = 229,
  [230] = 188,
  [231] = 231,
  [232] = 188,
  [233] = 233,
  [234] = 188,
  [235] = 235,
  [236] = 188,
  [237] = 237,
  [238] = 188,
  [239] = 239,
  [240] = 188,
  [241] = 217,
  [242] = 215,
  [243] = 217,
  [244] = 215,
  [245] = 217,
  [246] = 217,
  [247] = 217,
  [248] = 217,
  [249] = 217,
  [250] = 217,
  [251] = 217,
  [252] = 217,
  [253] = 217,
  [254] = 217,
  [255] = 189,
  [256] = 256,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(218);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
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
      if (lookahead == 'U') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '@') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(239);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(214);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(229);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(210);
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
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
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
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(217);
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
      if (lookahead == '-') ADVANCE(221);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0) ADVANCE(224);
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
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
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
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(208);
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
          lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
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
          lookahead == 'g') ADVANCE(179);
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
          lookahead == 'k') ADVANCE(185);
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
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
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
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
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
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 157:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '}') ADVANCE(202);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(197);
      if (lookahead == ',') ADVANCE(227);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '}') ADVANCE(202);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
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
          lookahead == ' ') ADVANCE(244);
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
          lookahead != '@') ADVANCE(214);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
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
      if (lookahead == '_') ADVANCE(52);
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
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(231);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(214);
      END_STATE();
    case 213:
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
          lookahead != '@') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
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
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
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
      if (lookahead == '\n') ADVANCE(161);
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

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 157},
  [2] = {.lex_state = 157},
  [3] = {.lex_state = 157},
  [4] = {.lex_state = 157},
  [5] = {.lex_state = 157},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 157},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 32},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 157},
  [71] = {.lex_state = 29},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 30},
  [80] = {.lex_state = 29},
  [81] = {.lex_state = 32},
  [82] = {.lex_state = 46},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 157},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 34},
  [92] = {.lex_state = 38},
  [93] = {.lex_state = 37},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 24},
  [96] = {.lex_state = 24},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 157},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 39},
  [115] = {.lex_state = 47},
  [116] = {.lex_state = 157},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 28},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 39},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 39},
  [132] = {.lex_state = 157},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 25},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 157},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 157},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 45},
  [146] = {.lex_state = 45},
  [147] = {.lex_state = 41},
  [148] = {.lex_state = 22},
  [149] = {.lex_state = 45},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 45},
  [152] = {.lex_state = 21},
  [153] = {.lex_state = 25},
  [154] = {.lex_state = 25},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 41},
  [157] = {.lex_state = 45},
  [158] = {.lex_state = 30},
  [159] = {.lex_state = 45},
  [160] = {.lex_state = 22},
  [161] = {.lex_state = 45},
  [162] = {.lex_state = 45},
  [163] = {.lex_state = 157},
  [164] = {.lex_state = 45},
  [165] = {.lex_state = 157},
  [166] = {.lex_state = 45},
  [167] = {.lex_state = 45},
  [168] = {.lex_state = 29},
  [169] = {.lex_state = 25},
  [170] = {.lex_state = 45},
  [171] = {.lex_state = 45},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 157},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 157},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 25},
  [178] = {.lex_state = 157},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 22},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 157},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 157},
  [186] = {.lex_state = 21},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 157},
  [189] = {.lex_state = 34},
  [190] = {.lex_state = 157},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 50},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 157},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 39},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 34},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 190},
  [207] = {.lex_state = 190},
  [208] = {.lex_state = 190},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 49},
  [213] = {.lex_state = 157},
  [214] = {.lex_state = 50},
  [215] = {.lex_state = 157},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 51},
  [218] = {.lex_state = 157},
  [219] = {.lex_state = 50},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 157},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 157},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 157},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 157},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 157},
  [231] = {.lex_state = 157},
  [232] = {.lex_state = 157},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 157},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 157},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 157},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 157},
  [241] = {.lex_state = 51},
  [242] = {.lex_state = 157},
  [243] = {.lex_state = 51},
  [244] = {.lex_state = 157},
  [245] = {.lex_state = 51},
  [246] = {.lex_state = 51},
  [247] = {.lex_state = 51},
  [248] = {.lex_state = 51},
  [249] = {.lex_state = 51},
  [250] = {.lex_state = 51},
  [251] = {.lex_state = 51},
  [252] = {.lex_state = 51},
  [253] = {.lex_state = 51},
  [254] = {.lex_state = 51},
  [255] = {.lex_state = 34},
  [256] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(187),
    [sym__instruction] = STATE(202),
    [sym_from_instruction] = STATE(192),
    [sym_run_instruction] = STATE(192),
    [sym_cmd_instruction] = STATE(192),
    [sym_label_instruction] = STATE(192),
    [sym_expose_instruction] = STATE(192),
    [sym_env_instruction] = STATE(192),
    [sym_add_instruction] = STATE(192),
    [sym_copy_instruction] = STATE(192),
    [sym_entrypoint_instruction] = STATE(192),
    [sym_volume_instruction] = STATE(192),
    [sym_user_instruction] = STATE(192),
    [sym_workdir_instruction] = STATE(192),
    [sym_arg_instruction] = STATE(192),
    [sym_onbuild_instruction] = STATE(192),
    [sym_stopsignal_instruction] = STATE(192),
    [sym_healthcheck_instruction] = STATE(192),
    [sym_shell_instruction] = STATE(192),
    [sym_maintainer_instruction] = STATE(192),
    [sym_cross_build_instruction] = STATE(192),
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
    STATE(202), 1,
      sym__instruction,
    STATE(192), 19,
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
    STATE(202), 1,
      sym__instruction,
    STATE(3), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(192), 19,
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
    STATE(194), 1,
      sym__instruction,
    STATE(192), 19,
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
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(135), 1,
      sym_shell_fragment,
    STATE(136), 1,
      sym__comment_line,
    STATE(220), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(209), 2,
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
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(135), 1,
      sym_shell_fragment,
    STATE(136), 1,
      sym__comment_line,
    STATE(220), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(227), 2,
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
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(135), 1,
      sym_shell_fragment,
    STATE(136), 1,
      sym__comment_line,
    STATE(220), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(210), 2,
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
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(150), 2,
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
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(148), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [478] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      aux_sym_image_name_token2,
    STATE(11), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_image_name_repeat1,
    STATE(35), 1,
      sym_expansion,
    ACTIONS(135), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [505] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(235), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [532] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(237), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [559] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(150), 1,
      aux_sym_image_name_token2,
    STATE(35), 1,
      sym_expansion,
    STATE(14), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(143), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [584] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_line_continuation,
    STATE(30), 1,
      aux_sym_shell_command_repeat1,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(136), 1,
      sym__comment_line,
    STATE(220), 1,
      sym__anon_comment,
    STATE(223), 1,
      sym_shell_fragment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [613] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(15), 1,
      aux_sym_shell_command_repeat1,
    STATE(16), 1,
      sym_line_continuation,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(136), 1,
      sym__comment_line,
    STATE(201), 1,
      sym_shell_fragment,
    STATE(220), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [642] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_line_continuation,
    STATE(30), 1,
      aux_sym_shell_command_repeat1,
    STATE(103), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(136), 1,
      sym__comment_line,
    STATE(137), 1,
      sym_shell_fragment,
    STATE(220), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [671] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      aux_sym_image_name_token2,
    ACTIONS(155), 1,
      aux_sym_from_instruction_token2,
    STATE(11), 1,
      aux_sym_image_name_repeat1,
    STATE(18), 1,
      sym_line_continuation,
    STATE(35), 1,
      sym_expansion,
    ACTIONS(153), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [698] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      aux_sym_path_token1,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    STATE(19), 1,
      sym_line_continuation,
    STATE(53), 1,
      sym_expansion,
    STATE(54), 1,
      sym_param,
    STATE(55), 1,
      aux_sym_add_instruction_repeat1,
    STATE(198), 1,
      sym_path,
  [726] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      aux_sym_path_token1,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    STATE(20), 1,
      sym_line_continuation,
    STATE(51), 1,
      aux_sym_add_instruction_repeat1,
    STATE(53), 1,
      sym_expansion,
    STATE(56), 1,
      sym_param,
    STATE(198), 1,
      sym_path,
  [754] = 8,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      aux_sym__env_key_token1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(24), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(78), 1,
      sym_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [780] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(169), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      aux_sym_image_tag_token1,
    STATE(22), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_image_tag_repeat1,
    STATE(61), 1,
      sym_expansion,
    ACTIONS(167), 2,
      anon_sym_LF,
      anon_sym_AT,
  [806] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      aux_sym_label_pair_token1,
    ACTIONS(175), 1,
      anon_sym_DOLLAR,
    STATE(23), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [832] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      aux_sym__env_key_token1,
    STATE(78), 1,
      sym_expansion,
    ACTIONS(184), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(24), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [856] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(177), 1,
      anon_sym_LF,
    ACTIONS(182), 1,
      aux_sym_label_pair_token1,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    ACTIONS(190), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(25), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [880] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      aux_sym_image_name_token1,
    ACTIONS(197), 1,
      anon_sym_DASH_DASH,
    STATE(18), 1,
      sym_expansion,
    STATE(26), 1,
      sym_line_continuation,
    STATE(34), 1,
      sym_image_name,
    STATE(79), 1,
      sym_param,
    STATE(182), 1,
      sym_image_spec,
  [908] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(201), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      aux_sym_image_tag_token1,
    STATE(61), 1,
      sym_expansion,
    ACTIONS(199), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [932] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(209), 1,
      anon_sym_LF,
    ACTIONS(211), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym_line_continuation,
    STATE(47), 1,
      aux_sym__user_name_or_group,
    STATE(107), 1,
      sym_expansion,
  [957] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(223), 1,
      sym_escape_sequence,
    STATE(29), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(88), 1,
      sym_expansion,
  [982] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym__comment_line,
    STATE(220), 1,
      sym__anon_comment,
    ACTIONS(225), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(30), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [1003] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(223), 1,
      sym_escape_sequence,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(88), 1,
      sym_expansion,
  [1028] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      aux_sym_expose_port_token1,
    STATE(32), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(140), 2,
      sym_expansion,
      sym_expose_port,
  [1049] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_line_continuation,
    STATE(39), 1,
      sym_expansion,
    STATE(134), 1,
      sym_path,
    STATE(199), 1,
      sym_string_array,
  [1074] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym_line_continuation,
    STATE(94), 1,
      sym_image_tag,
    STATE(172), 1,
      sym_image_digest,
  [1099] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(35), 1,
      sym_line_continuation,
    ACTIONS(252), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(254), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token2,
  [1116] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(258), 1,
      aux_sym_path_token2,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    STATE(102), 1,
      sym_expansion,
    ACTIONS(256), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(36), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1137] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(37), 1,
      sym_line_continuation,
    ACTIONS(264), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(266), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token2,
  [1154] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(270), 1,
      aux_sym_path_token2,
    ACTIONS(272), 1,
      anon_sym_DOLLAR,
    STATE(36), 1,
      aux_sym_path_repeat1,
    STATE(38), 1,
      sym_line_continuation,
    STATE(102), 1,
      sym_expansion,
    ACTIONS(268), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1177] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(270), 1,
      aux_sym_path_token2,
    ACTIONS(272), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      aux_sym_path_repeat1,
    STATE(39), 1,
      sym_line_continuation,
    STATE(102), 1,
      sym_expansion,
    ACTIONS(274), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1200] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(284), 1,
      sym_escape_sequence,
    STATE(88), 1,
      sym_expansion,
    STATE(40), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1223] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(289), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(291), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      aux_sym_image_digest_token1,
    STATE(109), 1,
      sym_expansion,
    STATE(41), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1246] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(223), 1,
      sym_escape_sequence,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(42), 1,
      sym_line_continuation,
    STATE(88), 1,
      sym_expansion,
  [1271] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(43), 1,
      sym_line_continuation,
    ACTIONS(299), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(301), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token2,
  [1288] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(223), 1,
      sym_escape_sequence,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(88), 1,
      sym_expansion,
  [1313] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(223), 1,
      sym_escape_sequence,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(45), 1,
      sym_line_continuation,
    STATE(88), 1,
      sym_expansion,
  [1338] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(309), 1,
      anon_sym_DOLLAR,
    ACTIONS(311), 1,
      aux_sym_expose_port_token1,
    STATE(32), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(140), 2,
      sym_expansion,
      sym_expose_port,
  [1361] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(318), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      sym_expansion,
    ACTIONS(313), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(47), 2,
      aux_sym__user_name_or_group,
      sym_line_continuation,
  [1382] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(221), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(223), 1,
      sym_escape_sequence,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(48), 1,
      sym_line_continuation,
    STATE(88), 1,
      sym_expansion,
  [1407] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(323), 1,
      anon_sym_NONE,
    ACTIONS(325), 1,
      anon_sym_DASH_DASH,
    STATE(49), 1,
      sym_line_continuation,
    STATE(70), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(183), 1,
      sym_param,
    STATE(197), 1,
      sym_cmd_instruction,
  [1432] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(327), 1,
      anon_sym_LF,
    ACTIONS(329), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    ACTIONS(333), 1,
      aux_sym_image_digest_token1,
    STATE(41), 1,
      aux_sym_image_digest_repeat1,
    STATE(50), 1,
      sym_line_continuation,
    STATE(109), 1,
      sym_expansion,
  [1457] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_expansion,
    STATE(51), 1,
      sym_line_continuation,
    STATE(71), 1,
      aux_sym_add_instruction_repeat1,
    STATE(177), 1,
      sym_path,
  [1479] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(52), 1,
      sym_line_continuation,
    ACTIONS(337), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(335), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1495] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(339), 1,
      aux_sym_path_token2,
    ACTIONS(341), 1,
      anon_sym_DOLLAR,
    ACTIONS(343), 1,
      sym__non_newline_whitespace,
    STATE(53), 1,
      sym_line_continuation,
    STATE(62), 1,
      aux_sym_path_repeat1,
    STATE(114), 1,
      sym_expansion,
  [1517] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      aux_sym_path_token1,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(54), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_add_instruction_repeat1,
    STATE(198), 1,
      sym_path,
  [1539] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_expansion,
    STATE(55), 1,
      sym_line_continuation,
    STATE(71), 1,
      aux_sym_add_instruction_repeat1,
    STATE(169), 1,
      sym_path,
  [1561] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      aux_sym_path_token1,
    ACTIONS(159), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(56), 1,
      sym_line_continuation,
    STATE(69), 1,
      aux_sym_add_instruction_repeat1,
    STATE(198), 1,
      sym_path,
  [1583] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(57), 1,
      sym_line_continuation,
    ACTIONS(299), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(301), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1599] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      aux_sym_image_alias_token1,
    STATE(58), 1,
      sym_line_continuation,
    STATE(63), 1,
      aux_sym_image_alias_repeat1,
    STATE(128), 1,
      sym_expansion,
    STATE(229), 1,
      sym_image_alias,
  [1621] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(59), 1,
      sym_line_continuation,
    ACTIONS(264), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(266), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1637] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(60), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(299), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1653] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(61), 1,
      sym_line_continuation,
    ACTIONS(349), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(351), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1669] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(339), 1,
      aux_sym_path_token2,
    ACTIONS(341), 1,
      anon_sym_DOLLAR,
    ACTIONS(353), 1,
      sym__non_newline_whitespace,
    STATE(62), 1,
      sym_line_continuation,
    STATE(72), 1,
      aux_sym_path_repeat1,
    STATE(114), 1,
      sym_expansion,
  [1691] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(357), 1,
      anon_sym_DOLLAR,
    ACTIONS(359), 1,
      aux_sym_image_alias_token1,
    STATE(63), 1,
      sym_line_continuation,
    STATE(77), 1,
      aux_sym_image_alias_repeat1,
    STATE(128), 1,
      sym_expansion,
  [1713] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
    ACTIONS(264), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1729] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(366), 1,
      anon_sym_DOLLAR,
    STATE(123), 1,
      sym_expansion,
    STATE(65), 2,
      aux_sym__stopsignal_value,
      sym_line_continuation,
  [1749] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(66), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(264), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1765] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(373), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      aux_sym__stopsignal_value,
    STATE(67), 1,
      sym_line_continuation,
    STATE(123), 1,
      sym_expansion,
  [1787] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(377), 1,
      aux_sym__env_key_token1,
    STATE(68), 1,
      sym_line_continuation,
    STATE(76), 1,
      aux_sym_env_instruction_repeat1,
    STATE(152), 1,
      sym_env_pair,
    STATE(190), 1,
      sym__env_key,
  [1809] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_expansion,
    STATE(69), 1,
      sym_line_continuation,
    STATE(71), 1,
      aux_sym_add_instruction_repeat1,
    STATE(154), 1,
      sym_path,
  [1831] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(325), 1,
      anon_sym_DASH_DASH,
    STATE(70), 1,
      sym_line_continuation,
    STATE(111), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(183), 1,
      sym_param,
    STATE(196), 1,
      sym_cmd_instruction,
  [1853] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(379), 1,
      aux_sym_path_token1,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(198), 1,
      sym_path,
    STATE(71), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [1873] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(385), 1,
      aux_sym_path_token2,
    ACTIONS(388), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      sym__non_newline_whitespace,
    STATE(114), 1,
      sym_expansion,
    STATE(72), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1893] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(73), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(299), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [1909] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR,
    ACTIONS(393), 1,
      anon_sym_LF,
    STATE(47), 1,
      aux_sym__user_name_or_group,
    STATE(74), 1,
      sym_line_continuation,
    STATE(107), 1,
      sym_expansion,
  [1931] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      anon_sym_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(397), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(399), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1949] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(401), 1,
      anon_sym_LF,
    ACTIONS(403), 1,
      aux_sym__env_key_token1,
    STATE(152), 1,
      sym_env_pair,
    STATE(190), 1,
      sym__env_key,
    STATE(76), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [1969] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      anon_sym_DOLLAR,
    ACTIONS(411), 1,
      aux_sym_image_alias_token1,
    STATE(128), 1,
      sym_expansion,
    STATE(77), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1989] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(337), 2,
      anon_sym_DOLLAR,
      aux_sym__env_key_token1,
    ACTIONS(335), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2005] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      aux_sym_image_name_token1,
    STATE(18), 1,
      sym_expansion,
    STATE(34), 1,
      sym_image_name,
    STATE(79), 1,
      sym_line_continuation,
    STATE(176), 1,
      sym_image_spec,
  [2027] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_expansion,
    STATE(71), 1,
      aux_sym_add_instruction_repeat1,
    STATE(80), 1,
      sym_line_continuation,
    STATE(153), 1,
      sym_path,
  [2049] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      aux_sym_image_alias_token1,
    STATE(63), 1,
      aux_sym_image_alias_repeat1,
    STATE(81), 1,
      sym_line_continuation,
    STATE(128), 1,
      sym_expansion,
    STATE(191), 1,
      sym_image_alias,
  [2071] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(414), 1,
      aux_sym__env_key_token1,
    STATE(68), 1,
      aux_sym_env_instruction_repeat1,
    STATE(82), 1,
      sym_line_continuation,
    STATE(147), 1,
      sym__env_key,
    STATE(152), 1,
      sym_env_pair,
    STATE(239), 1,
      sym__spaced_env_pair,
  [2093] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(343), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      aux_sym_path_token2,
    ACTIONS(418), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_line_continuation,
    STATE(85), 1,
      aux_sym_path_repeat1,
    STATE(130), 1,
      sym_expansion,
  [2115] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(420), 1,
      anon_sym_DOLLAR,
    ACTIONS(422), 1,
      aux_sym_expose_port_token1,
    STATE(46), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(84), 1,
      sym_line_continuation,
    STATE(140), 2,
      sym_expansion,
      sym_expose_port,
  [2135] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(353), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      aux_sym_path_token2,
    ACTIONS(418), 1,
      anon_sym_DOLLAR,
    STATE(85), 1,
      sym_line_continuation,
    STATE(86), 1,
      aux_sym_path_repeat1,
    STATE(130), 1,
      sym_expansion,
  [2157] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(424), 1,
      aux_sym_path_token2,
    ACTIONS(427), 1,
      anon_sym_DOLLAR,
    STATE(130), 1,
      sym_expansion,
    STATE(86), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2177] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(301), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2190] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(432), 1,
      aux_sym_double_quoted_string_token1,
    STATE(88), 1,
      sym_line_continuation,
    ACTIONS(430), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2205] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(434), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__user_name_or_group,
    STATE(89), 1,
      sym_line_continuation,
    STATE(107), 1,
      sym_expansion,
  [2224] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(438), 1,
      aux_sym_path_token1,
    ACTIONS(440), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_expansion,
    STATE(90), 1,
      sym_line_continuation,
    STATE(222), 1,
      sym_path,
  [2243] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(442), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(444), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      aux_sym__stopsignal_value,
    STATE(91), 1,
      sym_line_continuation,
    STATE(123), 1,
      sym_expansion,
  [2262] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(173), 1,
      aux_sym_image_tag_token1,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    STATE(22), 1,
      aux_sym_image_tag_repeat1,
    STATE(61), 1,
      sym_expansion,
    STATE(92), 1,
      sym_line_continuation,
  [2281] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(333), 1,
      aux_sym_image_digest_token1,
    ACTIONS(448), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      aux_sym_image_digest_repeat1,
    STATE(93), 1,
      sym_line_continuation,
    STATE(109), 1,
      sym_expansion,
  [2300] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      anon_sym_AT,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(452), 1,
      aux_sym_from_instruction_token2,
    STATE(94), 1,
      sym_line_continuation,
    STATE(181), 1,
      sym_image_digest,
  [2319] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      aux_sym_double_quoted_string_token1,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(301), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2334] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      aux_sym_double_quoted_string_token1,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(266), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2349] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(299), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(301), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2364] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(264), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(266), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2379] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(299), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(301), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [2394] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(264), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(266), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [2409] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(101), 1,
      sym_line_continuation,
    ACTIONS(266), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2422] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(454), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2435] = 5,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(460), 1,
      anon_sym_BSLASH_LF,
    STATE(103), 1,
      sym_line_continuation,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(458), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2452] = 4,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(464), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(104), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2467] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(471), 1,
      aux_sym_label_pair_token1,
    STATE(160), 1,
      sym_label_pair,
    STATE(105), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2484] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(474), 1,
      anon_sym_LF,
    ACTIONS(476), 1,
      aux_sym_label_pair_token1,
    STATE(105), 1,
      aux_sym_label_instruction_repeat1,
    STATE(106), 1,
      sym_line_continuation,
    STATE(160), 1,
      sym_label_pair,
  [2503] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(478), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(480), 2,
      aux_sym__user_name_or_group_token1,
      anon_sym_DOLLAR,
  [2518] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_expansion,
    STATE(108), 1,
      sym_line_continuation,
    STATE(155), 1,
      sym_path,
  [2537] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(482), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(484), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2552] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(434), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(436), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      aux_sym__user_name_or_group,
    STATE(107), 1,
      sym_expansion,
    STATE(110), 1,
      sym_line_continuation,
  [2571] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(488), 1,
      anon_sym_DASH_DASH,
    STATE(183), 1,
      sym_param,
    STATE(111), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2588] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2602] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 1,
      sym__non_newline_whitespace,
    STATE(113), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [2616] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(496), 1,
      sym__non_newline_whitespace,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(454), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2630] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(498), 1,
      aux_sym_label_pair_token1,
    STATE(106), 1,
      aux_sym_label_instruction_repeat1,
    STATE(115), 1,
      sym_line_continuation,
    STATE(160), 1,
      sym_label_pair,
  [2646] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym_line_continuation,
    STATE(139), 1,
      aux_sym_string_array_repeat1,
  [2662] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      anon_sym_LF,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2676] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2690] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      anon_sym_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2704] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(504), 1,
      anon_sym_LF,
    ACTIONS(506), 1,
      sym__non_newline_whitespace,
    STATE(113), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(120), 1,
      sym_line_continuation,
  [2720] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2734] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2748] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(508), 1,
      anon_sym_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(510), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2762] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2776] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(512), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2788] = 5,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      anon_sym_BSLASH_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(126), 1,
      sym_line_continuation,
    STATE(142), 1,
      aux_sym_shell_command_repeat2,
  [2804] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(518), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2816] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(522), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2830] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      sym__non_newline_whitespace,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2844] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(496), 1,
      anon_sym_LF,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(454), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2858] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      sym__non_newline_whitespace,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2872] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    ACTIONS(526), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_double_quoted_string,
    STATE(132), 1,
      sym_line_continuation,
  [2888] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      anon_sym_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(301), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2902] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      sym__non_newline_whitespace,
    ACTIONS(528), 1,
      anon_sym_LF,
    STATE(120), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(134), 1,
      sym_line_continuation,
  [2918] = 5,
    ACTIONS(516), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(530), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(126), 1,
      aux_sym_shell_command_repeat2,
    STATE(135), 1,
      sym_line_continuation,
  [2934] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(532), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2946] = 5,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      anon_sym_BSLASH_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(137), 1,
      sym_line_continuation,
    STATE(143), 1,
      aux_sym_shell_command_repeat2,
  [2962] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(534), 1,
      anon_sym_LF,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(536), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2976] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      sym_line_continuation,
    STATE(141), 1,
      aux_sym_string_array_repeat1,
  [2992] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(540), 1,
      anon_sym_LF,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(542), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3006] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    STATE(141), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3020] = 4,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      anon_sym_BSLASH_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(142), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [3034] = 5,
    ACTIONS(516), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(554), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(142), 1,
      aux_sym_shell_command_repeat2,
    STATE(143), 1,
      sym_line_continuation,
  [3050] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 1,
      aux_sym__env_key_token1,
    STATE(144), 1,
      sym_line_continuation,
  [3063] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      sym_variable,
    STATE(145), 1,
      sym_line_continuation,
  [3076] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym_variable,
    STATE(146), 1,
      sym_line_continuation,
  [3089] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_EQ,
    ACTIONS(570), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(147), 1,
      sym_line_continuation,
  [3102] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      aux_sym_label_pair_token1,
    STATE(148), 1,
      sym_line_continuation,
  [3115] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(578), 1,
      sym_variable,
    STATE(149), 1,
      sym_line_continuation,
  [3128] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 1,
      aux_sym__env_key_token1,
    STATE(150), 1,
      sym_line_continuation,
  [3141] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      sym_variable,
    STATE(151), 1,
      sym_line_continuation,
  [3154] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(588), 1,
      anon_sym_LF,
    ACTIONS(590), 1,
      aux_sym__env_key_token1,
    STATE(152), 1,
      sym_line_continuation,
  [3167] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      anon_sym_LF,
    ACTIONS(594), 1,
      sym__non_newline_whitespace,
    STATE(153), 1,
      sym_line_continuation,
  [3180] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(594), 1,
      sym__non_newline_whitespace,
    ACTIONS(596), 1,
      anon_sym_LF,
    STATE(154), 1,
      sym_line_continuation,
  [3193] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(491), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3204] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(598), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [3215] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(602), 1,
      sym_variable,
    STATE(157), 1,
      sym_line_continuation,
  [3228] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      aux_sym_image_name_token1,
    STATE(158), 1,
      sym_line_continuation,
  [3241] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
    ACTIONS(610), 1,
      sym_variable,
    STATE(159), 1,
      sym_line_continuation,
  [3254] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      aux_sym_label_pair_token1,
    STATE(160), 1,
      sym_line_continuation,
  [3267] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    ACTIONS(618), 1,
      sym_variable,
    STATE(161), 1,
      sym_line_continuation,
  [3280] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      sym_variable,
    STATE(162), 1,
      sym_line_continuation,
  [3293] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(624), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3304] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
    ACTIONS(628), 1,
      sym_variable,
    STATE(164), 1,
      sym_line_continuation,
  [3317] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(547), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3328] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    ACTIONS(632), 1,
      sym_variable,
    STATE(166), 1,
      sym_line_continuation,
  [3341] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(636), 1,
      sym_variable,
    STATE(167), 1,
      sym_line_continuation,
  [3354] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(638), 1,
      aux_sym_path_token1,
    ACTIONS(640), 1,
      anon_sym_DOLLAR,
    STATE(168), 1,
      sym_line_continuation,
  [3367] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(594), 1,
      sym__non_newline_whitespace,
    ACTIONS(642), 1,
      anon_sym_LF,
    STATE(169), 1,
      sym_line_continuation,
  [3380] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    ACTIONS(646), 1,
      sym_variable,
    STATE(170), 1,
      sym_line_continuation,
  [3393] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      sym_variable,
    STATE(171), 1,
      sym_line_continuation,
  [3406] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(652), 1,
      anon_sym_LF,
    ACTIONS(654), 1,
      aux_sym_from_instruction_token2,
    STATE(172), 1,
      sym_line_continuation,
  [3419] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(526), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_double_quoted_string,
    STATE(173), 1,
      sym_line_continuation,
  [3432] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(556), 1,
      anon_sym_LF,
    ACTIONS(558), 1,
      aux_sym_label_pair_token1,
    STATE(174), 1,
      sym_line_continuation,
  [3445] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(175), 1,
      sym_line_continuation,
    STATE(200), 1,
      sym_string_array,
  [3458] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(656), 1,
      anon_sym_LF,
    ACTIONS(658), 1,
      aux_sym_from_instruction_token2,
    STATE(176), 1,
      sym_line_continuation,
  [3471] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(594), 1,
      sym__non_newline_whitespace,
    ACTIONS(660), 1,
      anon_sym_LF,
    STATE(177), 1,
      sym_line_continuation,
  [3484] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3495] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(604), 1,
      anon_sym_DOLLAR,
    ACTIONS(606), 1,
      aux_sym_path_token1,
    STATE(179), 1,
      sym_line_continuation,
  [3508] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(662), 1,
      aux_sym_label_pair_token1,
    STATE(180), 1,
      sym_line_continuation,
  [3521] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      aux_sym_from_instruction_token2,
    STATE(181), 1,
      sym_line_continuation,
  [3534] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      aux_sym_from_instruction_token2,
    STATE(182), 1,
      sym_line_continuation,
  [3547] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(672), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3558] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(676), 1,
      anon_sym_EQ,
    STATE(184), 1,
      sym_line_continuation,
  [3571] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(604), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3582] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(662), 1,
      aux_sym__env_key_token1,
    STATE(186), 1,
      sym_line_continuation,
  [3595] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(678), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_line_continuation,
  [3605] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_line_continuation,
  [3615] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(682), 1,
      aux_sym_param_token1,
    STATE(189), 1,
      sym_line_continuation,
  [3625] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_EQ,
    STATE(190), 1,
      sym_line_continuation,
  [3635] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_line_continuation,
  [3645] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(686), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_line_continuation,
  [3655] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(688), 1,
      aux_sym_param_token2,
    STATE(193), 1,
      sym_line_continuation,
  [3665] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_line_continuation,
  [3675] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_line_continuation,
  [3685] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(694), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_line_continuation,
  [3695] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(696), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_line_continuation,
  [3705] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      sym__non_newline_whitespace,
    STATE(198), 1,
      sym_line_continuation,
  [3715] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_line_continuation,
  [3725] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(702), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_line_continuation,
  [3735] = 3,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      anon_sym_BSLASH_LF,
    STATE(201), 1,
      sym_line_continuation,
  [3745] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_line_continuation,
  [3755] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(708), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_line_continuation,
  [3765] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      aux_sym_param_token1,
    STATE(204), 1,
      sym_line_continuation,
  [3775] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(712), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_line_continuation,
  [3785] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(206), 1,
      sym_line_continuation,
  [3795] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(207), 1,
      sym_line_continuation,
  [3805] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(208), 1,
      sym_line_continuation,
  [3815] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_line_continuation,
  [3825] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_line_continuation,
  [3835] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_line_continuation,
  [3845] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      aux_sym_arg_instruction_token2,
    STATE(212), 1,
      sym_line_continuation,
  [3855] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_line_continuation,
  [3865] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      aux_sym_param_token2,
    STATE(214), 1,
      sym_line_continuation,
  [3875] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(215), 1,
      sym_line_continuation,
  [3885] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_line_continuation,
  [3895] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      aux_sym_expansion_token1,
    STATE(217), 1,
      sym_line_continuation,
  [3905] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_line_continuation,
  [3915] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      aux_sym_param_token2,
    STATE(219), 1,
      sym_line_continuation,
  [3925] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(220), 1,
      sym_line_continuation,
  [3935] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(598), 1,
      anon_sym_EQ,
    STATE(221), 1,
      sym_line_continuation,
  [3945] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_LF,
    STATE(222), 1,
      sym_line_continuation,
  [3955] = 3,
    ACTIONS(746), 1,
      anon_sym_LF,
    ACTIONS(748), 1,
      anon_sym_BSLASH_LF,
    STATE(223), 1,
      sym_line_continuation,
  [3965] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_line_continuation,
  [3975] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym_line_continuation,
  [3985] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_line_continuation,
  [3995] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      anon_sym_LF,
    STATE(227), 1,
      sym_line_continuation,
  [4005] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_line_continuation,
  [4015] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_LF,
    STATE(229), 1,
      sym_line_continuation,
  [4025] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_line_continuation,
  [4035] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_EQ,
    STATE(231), 1,
      sym_line_continuation,
  [4045] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_line_continuation,
  [4055] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [4065] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_line_continuation,
  [4075] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_LF,
    STATE(235), 1,
      sym_line_continuation,
  [4085] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_line_continuation,
  [4095] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_line_continuation,
  [4105] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_line_continuation,
  [4115] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      anon_sym_LF,
    STATE(239), 1,
      sym_line_continuation,
  [4125] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym_line_continuation,
  [4135] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      aux_sym_expansion_token1,
    STATE(241), 1,
      sym_line_continuation,
  [4145] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      anon_sym_EQ,
    STATE(242), 1,
      sym_line_continuation,
  [4155] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      aux_sym_expansion_token1,
    STATE(243), 1,
      sym_line_continuation,
  [4165] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_EQ,
    STATE(244), 1,
      sym_line_continuation,
  [4175] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      aux_sym_expansion_token1,
    STATE(245), 1,
      sym_line_continuation,
  [4185] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      aux_sym_expansion_token1,
    STATE(246), 1,
      sym_line_continuation,
  [4195] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      aux_sym_expansion_token1,
    STATE(247), 1,
      sym_line_continuation,
  [4205] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      aux_sym_expansion_token1,
    STATE(248), 1,
      sym_line_continuation,
  [4215] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      aux_sym_expansion_token1,
    STATE(249), 1,
      sym_line_continuation,
  [4225] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      aux_sym_expansion_token1,
    STATE(250), 1,
      sym_line_continuation,
  [4235] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(804), 1,
      aux_sym_expansion_token1,
    STATE(251), 1,
      sym_line_continuation,
  [4245] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      aux_sym_expansion_token1,
    STATE(252), 1,
      sym_line_continuation,
  [4255] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(808), 1,
      aux_sym_expansion_token1,
    STATE(253), 1,
      sym_line_continuation,
  [4265] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      aux_sym_expansion_token1,
    STATE(254), 1,
      sym_line_continuation,
  [4275] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(812), 1,
      aux_sym_param_token1,
    STATE(255), 1,
      sym_line_continuation,
  [4285] = 1,
    ACTIONS(814), 1,
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
  [SMALL_STATE(13)] = 532,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 584,
  [SMALL_STATE(16)] = 613,
  [SMALL_STATE(17)] = 642,
  [SMALL_STATE(18)] = 671,
  [SMALL_STATE(19)] = 698,
  [SMALL_STATE(20)] = 726,
  [SMALL_STATE(21)] = 754,
  [SMALL_STATE(22)] = 780,
  [SMALL_STATE(23)] = 806,
  [SMALL_STATE(24)] = 832,
  [SMALL_STATE(25)] = 856,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 908,
  [SMALL_STATE(28)] = 932,
  [SMALL_STATE(29)] = 957,
  [SMALL_STATE(30)] = 982,
  [SMALL_STATE(31)] = 1003,
  [SMALL_STATE(32)] = 1028,
  [SMALL_STATE(33)] = 1049,
  [SMALL_STATE(34)] = 1074,
  [SMALL_STATE(35)] = 1099,
  [SMALL_STATE(36)] = 1116,
  [SMALL_STATE(37)] = 1137,
  [SMALL_STATE(38)] = 1154,
  [SMALL_STATE(39)] = 1177,
  [SMALL_STATE(40)] = 1200,
  [SMALL_STATE(41)] = 1223,
  [SMALL_STATE(42)] = 1246,
  [SMALL_STATE(43)] = 1271,
  [SMALL_STATE(44)] = 1288,
  [SMALL_STATE(45)] = 1313,
  [SMALL_STATE(46)] = 1338,
  [SMALL_STATE(47)] = 1361,
  [SMALL_STATE(48)] = 1382,
  [SMALL_STATE(49)] = 1407,
  [SMALL_STATE(50)] = 1432,
  [SMALL_STATE(51)] = 1457,
  [SMALL_STATE(52)] = 1479,
  [SMALL_STATE(53)] = 1495,
  [SMALL_STATE(54)] = 1517,
  [SMALL_STATE(55)] = 1539,
  [SMALL_STATE(56)] = 1561,
  [SMALL_STATE(57)] = 1583,
  [SMALL_STATE(58)] = 1599,
  [SMALL_STATE(59)] = 1621,
  [SMALL_STATE(60)] = 1637,
  [SMALL_STATE(61)] = 1653,
  [SMALL_STATE(62)] = 1669,
  [SMALL_STATE(63)] = 1691,
  [SMALL_STATE(64)] = 1713,
  [SMALL_STATE(65)] = 1729,
  [SMALL_STATE(66)] = 1749,
  [SMALL_STATE(67)] = 1765,
  [SMALL_STATE(68)] = 1787,
  [SMALL_STATE(69)] = 1809,
  [SMALL_STATE(70)] = 1831,
  [SMALL_STATE(71)] = 1853,
  [SMALL_STATE(72)] = 1873,
  [SMALL_STATE(73)] = 1893,
  [SMALL_STATE(74)] = 1909,
  [SMALL_STATE(75)] = 1931,
  [SMALL_STATE(76)] = 1949,
  [SMALL_STATE(77)] = 1969,
  [SMALL_STATE(78)] = 1989,
  [SMALL_STATE(79)] = 2005,
  [SMALL_STATE(80)] = 2027,
  [SMALL_STATE(81)] = 2049,
  [SMALL_STATE(82)] = 2071,
  [SMALL_STATE(83)] = 2093,
  [SMALL_STATE(84)] = 2115,
  [SMALL_STATE(85)] = 2135,
  [SMALL_STATE(86)] = 2157,
  [SMALL_STATE(87)] = 2177,
  [SMALL_STATE(88)] = 2190,
  [SMALL_STATE(89)] = 2205,
  [SMALL_STATE(90)] = 2224,
  [SMALL_STATE(91)] = 2243,
  [SMALL_STATE(92)] = 2262,
  [SMALL_STATE(93)] = 2281,
  [SMALL_STATE(94)] = 2300,
  [SMALL_STATE(95)] = 2319,
  [SMALL_STATE(96)] = 2334,
  [SMALL_STATE(97)] = 2349,
  [SMALL_STATE(98)] = 2364,
  [SMALL_STATE(99)] = 2379,
  [SMALL_STATE(100)] = 2394,
  [SMALL_STATE(101)] = 2409,
  [SMALL_STATE(102)] = 2422,
  [SMALL_STATE(103)] = 2435,
  [SMALL_STATE(104)] = 2452,
  [SMALL_STATE(105)] = 2467,
  [SMALL_STATE(106)] = 2484,
  [SMALL_STATE(107)] = 2503,
  [SMALL_STATE(108)] = 2518,
  [SMALL_STATE(109)] = 2537,
  [SMALL_STATE(110)] = 2552,
  [SMALL_STATE(111)] = 2571,
  [SMALL_STATE(112)] = 2588,
  [SMALL_STATE(113)] = 2602,
  [SMALL_STATE(114)] = 2616,
  [SMALL_STATE(115)] = 2630,
  [SMALL_STATE(116)] = 2646,
  [SMALL_STATE(117)] = 2662,
  [SMALL_STATE(118)] = 2676,
  [SMALL_STATE(119)] = 2690,
  [SMALL_STATE(120)] = 2704,
  [SMALL_STATE(121)] = 2720,
  [SMALL_STATE(122)] = 2734,
  [SMALL_STATE(123)] = 2748,
  [SMALL_STATE(124)] = 2762,
  [SMALL_STATE(125)] = 2776,
  [SMALL_STATE(126)] = 2788,
  [SMALL_STATE(127)] = 2804,
  [SMALL_STATE(128)] = 2816,
  [SMALL_STATE(129)] = 2830,
  [SMALL_STATE(130)] = 2844,
  [SMALL_STATE(131)] = 2858,
  [SMALL_STATE(132)] = 2872,
  [SMALL_STATE(133)] = 2888,
  [SMALL_STATE(134)] = 2902,
  [SMALL_STATE(135)] = 2918,
  [SMALL_STATE(136)] = 2934,
  [SMALL_STATE(137)] = 2946,
  [SMALL_STATE(138)] = 2962,
  [SMALL_STATE(139)] = 2976,
  [SMALL_STATE(140)] = 2992,
  [SMALL_STATE(141)] = 3006,
  [SMALL_STATE(142)] = 3020,
  [SMALL_STATE(143)] = 3034,
  [SMALL_STATE(144)] = 3050,
  [SMALL_STATE(145)] = 3063,
  [SMALL_STATE(146)] = 3076,
  [SMALL_STATE(147)] = 3089,
  [SMALL_STATE(148)] = 3102,
  [SMALL_STATE(149)] = 3115,
  [SMALL_STATE(150)] = 3128,
  [SMALL_STATE(151)] = 3141,
  [SMALL_STATE(152)] = 3154,
  [SMALL_STATE(153)] = 3167,
  [SMALL_STATE(154)] = 3180,
  [SMALL_STATE(155)] = 3193,
  [SMALL_STATE(156)] = 3204,
  [SMALL_STATE(157)] = 3215,
  [SMALL_STATE(158)] = 3228,
  [SMALL_STATE(159)] = 3241,
  [SMALL_STATE(160)] = 3254,
  [SMALL_STATE(161)] = 3267,
  [SMALL_STATE(162)] = 3280,
  [SMALL_STATE(163)] = 3293,
  [SMALL_STATE(164)] = 3304,
  [SMALL_STATE(165)] = 3317,
  [SMALL_STATE(166)] = 3328,
  [SMALL_STATE(167)] = 3341,
  [SMALL_STATE(168)] = 3354,
  [SMALL_STATE(169)] = 3367,
  [SMALL_STATE(170)] = 3380,
  [SMALL_STATE(171)] = 3393,
  [SMALL_STATE(172)] = 3406,
  [SMALL_STATE(173)] = 3419,
  [SMALL_STATE(174)] = 3432,
  [SMALL_STATE(175)] = 3445,
  [SMALL_STATE(176)] = 3458,
  [SMALL_STATE(177)] = 3471,
  [SMALL_STATE(178)] = 3484,
  [SMALL_STATE(179)] = 3495,
  [SMALL_STATE(180)] = 3508,
  [SMALL_STATE(181)] = 3521,
  [SMALL_STATE(182)] = 3534,
  [SMALL_STATE(183)] = 3547,
  [SMALL_STATE(184)] = 3558,
  [SMALL_STATE(185)] = 3571,
  [SMALL_STATE(186)] = 3582,
  [SMALL_STATE(187)] = 3595,
  [SMALL_STATE(188)] = 3605,
  [SMALL_STATE(189)] = 3615,
  [SMALL_STATE(190)] = 3625,
  [SMALL_STATE(191)] = 3635,
  [SMALL_STATE(192)] = 3645,
  [SMALL_STATE(193)] = 3655,
  [SMALL_STATE(194)] = 3665,
  [SMALL_STATE(195)] = 3675,
  [SMALL_STATE(196)] = 3685,
  [SMALL_STATE(197)] = 3695,
  [SMALL_STATE(198)] = 3705,
  [SMALL_STATE(199)] = 3715,
  [SMALL_STATE(200)] = 3725,
  [SMALL_STATE(201)] = 3735,
  [SMALL_STATE(202)] = 3745,
  [SMALL_STATE(203)] = 3755,
  [SMALL_STATE(204)] = 3765,
  [SMALL_STATE(205)] = 3775,
  [SMALL_STATE(206)] = 3785,
  [SMALL_STATE(207)] = 3795,
  [SMALL_STATE(208)] = 3805,
  [SMALL_STATE(209)] = 3815,
  [SMALL_STATE(210)] = 3825,
  [SMALL_STATE(211)] = 3835,
  [SMALL_STATE(212)] = 3845,
  [SMALL_STATE(213)] = 3855,
  [SMALL_STATE(214)] = 3865,
  [SMALL_STATE(215)] = 3875,
  [SMALL_STATE(216)] = 3885,
  [SMALL_STATE(217)] = 3895,
  [SMALL_STATE(218)] = 3905,
  [SMALL_STATE(219)] = 3915,
  [SMALL_STATE(220)] = 3925,
  [SMALL_STATE(221)] = 3935,
  [SMALL_STATE(222)] = 3945,
  [SMALL_STATE(223)] = 3955,
  [SMALL_STATE(224)] = 3965,
  [SMALL_STATE(225)] = 3975,
  [SMALL_STATE(226)] = 3985,
  [SMALL_STATE(227)] = 3995,
  [SMALL_STATE(228)] = 4005,
  [SMALL_STATE(229)] = 4015,
  [SMALL_STATE(230)] = 4025,
  [SMALL_STATE(231)] = 4035,
  [SMALL_STATE(232)] = 4045,
  [SMALL_STATE(233)] = 4055,
  [SMALL_STATE(234)] = 4065,
  [SMALL_STATE(235)] = 4075,
  [SMALL_STATE(236)] = 4085,
  [SMALL_STATE(237)] = 4095,
  [SMALL_STATE(238)] = 4105,
  [SMALL_STATE(239)] = 4115,
  [SMALL_STATE(240)] = 4125,
  [SMALL_STATE(241)] = 4135,
  [SMALL_STATE(242)] = 4145,
  [SMALL_STATE(243)] = 4155,
  [SMALL_STATE(244)] = 4165,
  [SMALL_STATE(245)] = 4175,
  [SMALL_STATE(246)] = 4185,
  [SMALL_STATE(247)] = 4195,
  [SMALL_STATE(248)] = 4205,
  [SMALL_STATE(249)] = 4215,
  [SMALL_STATE(250)] = 4225,
  [SMALL_STATE(251)] = 4235,
  [SMALL_STATE(252)] = 4245,
  [SMALL_STATE(253)] = 4255,
  [SMALL_STATE(254)] = 4265,
  [SMALL_STATE(255)] = 4275,
  [SMALL_STATE(256)] = 4285,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(145),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(146),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(78),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(149),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(52),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(159),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(61),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(206),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(171),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(75),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(102),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(167),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(151),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(88),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(88),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(157),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(109),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(107),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 2), SHIFT_REPEAT(166),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(123),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(162),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(53),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(170),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(114),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(170),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(221),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(161),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(128),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(130),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(164),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(104),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(231),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_or_group, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(204),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(108),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(173),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(125),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [678] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
