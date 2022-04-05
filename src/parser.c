#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 304
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
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
  aux_sym__immediate_user_name_or_group_fragment_token1 = 16,
  aux_sym_workdir_instruction_token1 = 17,
  aux_sym_arg_instruction_token1 = 18,
  aux_sym_arg_instruction_token2 = 19,
  anon_sym_EQ = 20,
  aux_sym_onbuild_instruction_token1 = 21,
  aux_sym_stopsignal_instruction_token1 = 22,
  aux_sym__stopsignal_value_token1 = 23,
  aux_sym__stopsignal_value_token2 = 24,
  aux_sym_healthcheck_instruction_token1 = 25,
  anon_sym_NONE = 26,
  aux_sym_shell_instruction_token1 = 27,
  aux_sym_maintainer_instruction_token1 = 28,
  aux_sym_maintainer_instruction_token2 = 29,
  aux_sym_cross_build_instruction_token1 = 30,
  aux_sym_path_token1 = 31,
  aux_sym_path_token2 = 32,
  anon_sym_DOLLAR = 33,
  anon_sym_DOLLAR2 = 34,
  anon_sym_LBRACE = 35,
  aux_sym__expansion_body_token1 = 36,
  anon_sym_RBRACE = 37,
  sym_variable = 38,
  aux_sym__spaced_env_pair_token1 = 39,
  aux_sym__env_key_token1 = 40,
  aux_sym_expose_port_token1 = 41,
  anon_sym_SLASHtcp = 42,
  anon_sym_SLASHudp = 43,
  aux_sym_label_pair_token1 = 44,
  aux_sym_image_name_token1 = 45,
  aux_sym_image_name_token2 = 46,
  aux_sym_image_tag_token1 = 47,
  anon_sym_AT = 48,
  aux_sym_image_digest_token1 = 49,
  anon_sym_DASH_DASH = 50,
  aux_sym_param_token1 = 51,
  aux_sym_param_token2 = 52,
  aux_sym_image_alias_token1 = 53,
  aux_sym_image_alias_token2 = 54,
  anon_sym_LBRACK = 55,
  anon_sym_COMMA = 56,
  anon_sym_RBRACK = 57,
  aux_sym_shell_fragment_token1 = 58,
  aux_sym_shell_fragment_token2 = 59,
  anon_sym_BSLASH_LF = 60,
  anon_sym_POUND = 61,
  anon_sym_DQUOTE = 62,
  aux_sym_double_quoted_string_token1 = 63,
  aux_sym_unquoted_string_token1 = 64,
  anon_sym_BSLASH = 65,
  sym_escape_sequence = 66,
  sym__non_newline_whitespace = 67,
  sym_comment = 68,
  sym_source_file = 69,
  sym__instruction = 70,
  sym_from_instruction = 71,
  sym_run_instruction = 72,
  sym_cmd_instruction = 73,
  sym_label_instruction = 74,
  sym_expose_instruction = 75,
  sym_env_instruction = 76,
  sym_add_instruction = 77,
  sym_copy_instruction = 78,
  sym_entrypoint_instruction = 79,
  sym_volume_instruction = 80,
  sym_user_instruction = 81,
  sym__user_name_or_group = 82,
  aux_sym__immediate_user_name_or_group = 83,
  sym__immediate_user_name_or_group_fragment = 84,
  sym_workdir_instruction = 85,
  sym_arg_instruction = 86,
  sym_onbuild_instruction = 87,
  sym_stopsignal_instruction = 88,
  sym__stopsignal_value = 89,
  sym_healthcheck_instruction = 90,
  sym_shell_instruction = 91,
  sym_maintainer_instruction = 92,
  sym_cross_build_instruction = 93,
  sym_path = 94,
  sym_expansion = 95,
  sym__immediate_expansion = 96,
  sym__imm_expansion = 97,
  sym__expansion_body = 98,
  sym_env_pair = 99,
  sym__spaced_env_pair = 100,
  sym__env_key = 101,
  sym_expose_port = 102,
  sym_label_pair = 103,
  sym_image_spec = 104,
  sym_image_name = 105,
  sym_image_tag = 106,
  sym_image_digest = 107,
  sym_param = 108,
  sym_image_alias = 109,
  sym_string_array = 110,
  sym_shell_command = 111,
  sym_shell_fragment = 112,
  sym_line_continuation = 113,
  sym_required_line_continuation = 114,
  sym__comment_line = 115,
  sym__anon_comment = 116,
  sym_double_quoted_string = 117,
  sym_unquoted_string = 118,
  aux_sym_source_file_repeat1 = 119,
  aux_sym_label_instruction_repeat1 = 120,
  aux_sym_expose_instruction_repeat1 = 121,
  aux_sym_env_instruction_repeat1 = 122,
  aux_sym_add_instruction_repeat1 = 123,
  aux_sym_volume_instruction_repeat1 = 124,
  aux_sym__user_name_or_group_repeat1 = 125,
  aux_sym__stopsignal_value_repeat1 = 126,
  aux_sym_healthcheck_instruction_repeat1 = 127,
  aux_sym_path_repeat1 = 128,
  aux_sym_image_name_repeat1 = 129,
  aux_sym_image_tag_repeat1 = 130,
  aux_sym_image_digest_repeat1 = 131,
  aux_sym_image_alias_repeat1 = 132,
  aux_sym_string_array_repeat1 = 133,
  aux_sym_shell_command_repeat1 = 134,
  aux_sym_shell_command_repeat2 = 135,
  aux_sym_shell_fragment_repeat1 = 136,
  aux_sym_double_quoted_string_repeat1 = 137,
  aux_sym_unquoted_string_repeat1 = 138,
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
  [aux_sym__immediate_user_name_or_group_fragment_token1] = "_immediate_user_name_or_group_fragment_token1",
  [aux_sym_workdir_instruction_token1] = "WORKDIR",
  [aux_sym_arg_instruction_token1] = "ARG",
  [aux_sym_arg_instruction_token2] = "unquoted_string",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "ONBUILD",
  [aux_sym_stopsignal_instruction_token1] = "STOPSIGNAL",
  [aux_sym__stopsignal_value_token1] = "_stopsignal_value_token1",
  [aux_sym__stopsignal_value_token2] = "_stopsignal_value_token2",
  [aux_sym_healthcheck_instruction_token1] = "HEALTHCHECK",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "SHELL",
  [aux_sym_maintainer_instruction_token1] = "MAINTAINER",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
  [aux_sym_cross_build_instruction_token1] = "CROSS_BUILD",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym__expansion_body_token1] = "variable",
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
  [aux_sym_image_alias_token2] = "image_alias_token2",
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
  [sym__user_name_or_group] = "unquoted_string",
  [aux_sym__immediate_user_name_or_group] = "_immediate_user_name_or_group",
  [sym__immediate_user_name_or_group_fragment] = "_immediate_user_name_or_group_fragment",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [sym__stopsignal_value] = "_stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
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
  [aux_sym__user_name_or_group_repeat1] = "_user_name_or_group_repeat1",
  [aux_sym__stopsignal_value_repeat1] = "_stopsignal_value_repeat1",
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
  [aux_sym__immediate_user_name_or_group_fragment_token1] = aux_sym__immediate_user_name_or_group_fragment_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = sym_unquoted_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym__stopsignal_value_token1] = aux_sym__stopsignal_value_token1,
  [aux_sym__stopsignal_value_token2] = aux_sym__stopsignal_value_token2,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__expansion_body_token1] = sym_variable,
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
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
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
  [sym__user_name_or_group] = sym_unquoted_string,
  [aux_sym__immediate_user_name_or_group] = aux_sym__immediate_user_name_or_group,
  [sym__immediate_user_name_or_group_fragment] = sym__immediate_user_name_or_group_fragment,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [sym__stopsignal_value] = sym__stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym_expansion,
  [sym__expansion_body] = sym__expansion_body,
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
  [aux_sym__user_name_or_group_repeat1] = aux_sym__user_name_or_group_repeat1,
  [aux_sym__stopsignal_value_repeat1] = aux_sym__stopsignal_value_repeat1,
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
  [aux_sym__immediate_user_name_or_group_fragment_token1] = {
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
  [aux_sym__stopsignal_value_token2] = {
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
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expansion_body_token1] = {
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
  [aux_sym_image_alias_token2] = {
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
  [sym__user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__immediate_user_name_or_group] = {
    .visible = false,
    .named = false,
  },
  [sym__immediate_user_name_or_group_fragment] = {
    .visible = false,
    .named = true,
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
  [sym__stopsignal_value] = {
    .visible = false,
    .named = true,
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
  [sym__immediate_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym__imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__expansion_body] = {
    .visible = false,
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
  [aux_sym__user_name_or_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stopsignal_value_repeat1] = {
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
  [11] = {
    [3] = sym_unquoted_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__immediate_user_name_or_group, 2,
    aux_sym__immediate_user_name_or_group,
    sym_unquoted_string,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ',') ADVANCE(234);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '[') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == ']') ADVANCE(235);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead == 'U') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(246);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(236);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '[') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '[') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(191);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 45:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
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
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
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
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(214);
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
          lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
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
          lookahead == 'g') ADVANCE(182);
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
          lookahead == 'k') ADVANCE(190);
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
          lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
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
          lookahead == 'n') ADVANCE(164);
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
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
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
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(168);
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
          lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
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
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == ',') ADVANCE(234);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '[') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == ']') ADVANCE(235);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(156)
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 157:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == ',') ADVANCE(234);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == '[') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(235);
      if (lookahead == '}') ADVANCE(208);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == ',') ADVANCE(234);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == '[') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(235);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
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
          lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(238);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(238);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
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
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 157},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 31},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 157},
  [73] = {.lex_state = 47},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 32},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 32},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 157},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 32},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 157},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 38},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 35},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 22},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 19},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 32},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 36},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 44},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 44},
  [139] = {.lex_state = 44},
  [140] = {.lex_state = 44},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 44},
  [144] = {.lex_state = 44},
  [145] = {.lex_state = 44},
  [146] = {.lex_state = 44},
  [147] = {.lex_state = 157},
  [148] = {.lex_state = 44},
  [149] = {.lex_state = 44},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 44},
  [155] = {.lex_state = 44},
  [156] = {.lex_state = 48},
  [157] = {.lex_state = 44},
  [158] = {.lex_state = 44},
  [159] = {.lex_state = 44},
  [160] = {.lex_state = 23},
  [161] = {.lex_state = 23},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 27},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 157},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 157},
  [171] = {.lex_state = 27},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 157},
  [177] = {.lex_state = 27},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 44},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 15},
  [185] = {.lex_state = 44},
  [186] = {.lex_state = 31},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 31},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 15},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 31},
  [197] = {.lex_state = 23},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 31},
  [200] = {.lex_state = 31},
  [201] = {.lex_state = 31},
  [202] = {.lex_state = 40},
  [203] = {.lex_state = 157},
  [204] = {.lex_state = 157},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 40},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 157},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 23},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 32},
  [214] = {.lex_state = 157},
  [215] = {.lex_state = 157},
  [216] = {.lex_state = 19},
  [217] = {.lex_state = 32},
  [218] = {.lex_state = 19},
  [219] = {.lex_state = 19},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 19},
  [222] = {.lex_state = 23},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 33},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 157},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 157},
  [232] = {.lex_state = 15},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 157},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 195},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 157},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 36},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 157},
  [256] = {.lex_state = 50},
  [257] = {.lex_state = 31},
  [258] = {.lex_state = 157},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 157},
  [261] = {.lex_state = 157},
  [262] = {.lex_state = 50},
  [263] = {.lex_state = 51},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 157},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 195},
  [269] = {.lex_state = 157},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 157},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 157},
  [276] = {.lex_state = 195},
  [277] = {.lex_state = 157},
  [278] = {.lex_state = 157},
  [279] = {.lex_state = 50},
  [280] = {.lex_state = 157},
  [281] = {.lex_state = 36},
  [282] = {.lex_state = 157},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 157},
  [285] = {.lex_state = 49},
  [286] = {.lex_state = 157},
  [287] = {.lex_state = 157},
  [288] = {.lex_state = 51},
  [289] = {.lex_state = 157},
  [290] = {.lex_state = 51},
  [291] = {.lex_state = 157},
  [292] = {.lex_state = 51},
  [293] = {.lex_state = 51},
  [294] = {.lex_state = 51},
  [295] = {.lex_state = 51},
  [296] = {.lex_state = 51},
  [297] = {.lex_state = 51},
  [298] = {.lex_state = 51},
  [299] = {.lex_state = 51},
  [300] = {.lex_state = 51},
  [301] = {.lex_state = 51},
  [302] = {.lex_state = 36},
  [303] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__stopsignal_value_token2] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(267),
    [sym__instruction] = STATE(271),
    [sym_from_instruction] = STATE(259),
    [sym_run_instruction] = STATE(259),
    [sym_cmd_instruction] = STATE(259),
    [sym_label_instruction] = STATE(259),
    [sym_expose_instruction] = STATE(259),
    [sym_env_instruction] = STATE(259),
    [sym_add_instruction] = STATE(259),
    [sym_copy_instruction] = STATE(259),
    [sym_entrypoint_instruction] = STATE(259),
    [sym_volume_instruction] = STATE(259),
    [sym_user_instruction] = STATE(259),
    [sym_workdir_instruction] = STATE(259),
    [sym_arg_instruction] = STATE(259),
    [sym_onbuild_instruction] = STATE(259),
    [sym_stopsignal_instruction] = STATE(259),
    [sym_healthcheck_instruction] = STATE(259),
    [sym_shell_instruction] = STATE(259),
    [sym_maintainer_instruction] = STATE(259),
    [sym_cross_build_instruction] = STATE(259),
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

static const uint16_t ts_small_parse_table[] = {
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
    STATE(271), 1,
      sym__instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(259), 19,
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
    STATE(271), 1,
      sym__instruction,
    STATE(259), 19,
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
    STATE(244), 1,
      sym__instruction,
    STATE(259), 19,
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
  [310] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_shell_command_repeat1,
    STATE(102), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym__comment_line,
    STATE(165), 1,
      sym_shell_fragment,
    STATE(254), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(252), 2,
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
    STATE(22), 1,
      aux_sym_shell_command_repeat1,
    STATE(102), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym__comment_line,
    STATE(165), 1,
      sym_shell_fragment,
    STATE(254), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(264), 2,
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
    STATE(22), 1,
      aux_sym_shell_command_repeat1,
    STATE(102), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym__comment_line,
    STATE(165), 1,
      sym_shell_fragment,
    STATE(254), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(248), 2,
      sym_string_array,
      sym_shell_command,
  [418] = 11,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      anon_sym_DOLLAR2,
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
    STATE(84), 1,
      sym__imm_expansion,
    STATE(91), 1,
      sym__immediate_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(220), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [454] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DOLLAR2,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(251), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [484] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(139), 1,
      anon_sym_DOLLAR2,
    ACTIONS(141), 1,
      aux_sym_image_name_token2,
    STATE(11), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_image_name_repeat1,
    STATE(58), 1,
      sym__immediate_expansion,
    STATE(59), 1,
      sym__imm_expansion,
    ACTIONS(135), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [514] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DOLLAR2,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(265), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [544] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(147), 1,
      anon_sym_DOLLAR2,
    ACTIONS(150), 1,
      aux_sym_image_name_token2,
    STATE(58), 1,
      sym__immediate_expansion,
    STATE(59), 1,
      sym__imm_expansion,
    STATE(13), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(143), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [572] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(139), 1,
      anon_sym_DOLLAR2,
    ACTIONS(141), 1,
      aux_sym_image_name_token2,
    ACTIONS(155), 1,
      aux_sym_from_instruction_token2,
    STATE(13), 1,
      aux_sym_image_name_repeat1,
    STATE(14), 1,
      sym_line_continuation,
    STATE(58), 1,
      sym__immediate_expansion,
    STATE(59), 1,
      sym__imm_expansion,
    ACTIONS(153), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [602] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DOLLAR2,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(219), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [632] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(159), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(162), 1,
      anon_sym_DOLLAR2,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(128), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(157), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(16), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [659] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    STATE(17), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(128), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(165), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [688] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(173), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(175), 1,
      anon_sym_DOLLAR2,
    ACTIONS(177), 1,
      aux_sym_image_tag_token1,
    STATE(18), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_image_tag_repeat1,
    STATE(89), 1,
      sym__imm_expansion,
    STATE(95), 1,
      sym__immediate_expansion,
    ACTIONS(171), 2,
      anon_sym_LF,
      anon_sym_AT,
  [717] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      anon_sym_DOLLAR2,
    ACTIONS(184), 1,
      aux_sym__env_key_token1,
    STATE(84), 1,
      sym__imm_expansion,
    STATE(91), 1,
      sym__immediate_expansion,
    ACTIONS(186), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [744] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    STATE(16), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(20), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(128), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(189), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [773] = 9,
    ACTIONS(119), 1,
      anon_sym_DOLLAR2,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      aux_sym__env_key_token1,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(84), 1,
      sym__imm_expansion,
    STATE(91), 1,
      sym__immediate_expansion,
    ACTIONS(127), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [802] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_shell_command_repeat1,
    STATE(102), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym__comment_line,
    STATE(191), 1,
      sym_shell_fragment,
    STATE(254), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [831] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(197), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(199), 1,
      anon_sym_DOLLAR2,
    ACTIONS(202), 1,
      aux_sym_image_tag_token1,
    STATE(89), 1,
      sym__imm_expansion,
    STATE(95), 1,
      sym__immediate_expansion,
    ACTIONS(195), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(23), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [858] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_line_continuation,
    STATE(26), 1,
      aux_sym_shell_command_repeat1,
    STATE(102), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym__comment_line,
    STATE(254), 1,
      sym__anon_comment,
    STATE(273), 1,
      sym_shell_fragment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [887] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DOLLAR2,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      aux_sym_label_pair_token1,
    STATE(25), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [916] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_shell_command_repeat1,
    STATE(102), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym__comment_line,
    STATE(235), 1,
      sym_shell_fragment,
    STATE(254), 1,
      sym__anon_comment,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [945] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      aux_sym_label_pair_token1,
    ACTIONS(205), 1,
      anon_sym_DOLLAR2,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    ACTIONS(208), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [972] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(211), 1,
      anon_sym_DOLLAR2,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(217), 1,
      sym_escape_sequence,
    STATE(28), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1000] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(219), 1,
      anon_sym_DOLLAR2,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(227), 1,
      sym_escape_sequence,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
    STATE(29), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1026] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(235), 1,
      anon_sym_DOLLAR2,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(162), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(30), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [1052] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(242), 1,
      anon_sym_DOLLAR2,
    ACTIONS(245), 1,
      aux_sym_image_digest_token1,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
    STATE(31), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1078] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(211), 1,
      anon_sym_DOLLAR2,
    ACTIONS(215), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(217), 1,
      sym_escape_sequence,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(32), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1106] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      aux_sym_path_token2,
    ACTIONS(254), 1,
      anon_sym_DOLLAR2,
    STATE(33), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(130), 1,
      sym__imm_expansion,
    STATE(131), 1,
      sym__immediate_expansion,
    ACTIONS(250), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1132] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      aux_sym_image_name_token1,
    ACTIONS(260), 1,
      anon_sym_DASH_DASH,
    STATE(11), 1,
      sym_expansion,
    STATE(34), 1,
      sym_line_continuation,
    STATE(57), 1,
      sym_image_name,
    STATE(92), 1,
      sym_param,
    STATE(228), 1,
      sym_image_spec,
  [1160] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      aux_sym_path_token2,
    ACTIONS(254), 1,
      anon_sym_DOLLAR2,
    STATE(35), 1,
      sym_line_continuation,
    STATE(37), 1,
      aux_sym_path_repeat1,
    STATE(130), 1,
      sym__imm_expansion,
    STATE(131), 1,
      sym__immediate_expansion,
    ACTIONS(262), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1186] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(36), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(162), 1,
      sym__immediate_user_name_or_group_fragment,
  [1214] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(268), 1,
      aux_sym_path_token2,
    ACTIONS(271), 1,
      anon_sym_DOLLAR2,
    STATE(130), 1,
      sym__imm_expansion,
    STATE(131), 1,
      sym__immediate_expansion,
    ACTIONS(266), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1238] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(274), 1,
      aux_sym_path_token1,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      anon_sym_DASH_DASH,
    STATE(38), 1,
      sym_line_continuation,
    STATE(52), 1,
      sym_expansion,
    STATE(78), 1,
      sym_param,
    STATE(79), 1,
      aux_sym_add_instruction_repeat1,
    STATE(257), 1,
      sym_path,
  [1266] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(211), 1,
      anon_sym_DOLLAR2,
    ACTIONS(215), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(217), 1,
      sym_escape_sequence,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1294] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(274), 1,
      aux_sym_path_token1,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      anon_sym_DASH_DASH,
    STATE(40), 1,
      sym_line_continuation,
    STATE(52), 1,
      sym_expansion,
    STATE(76), 1,
      sym_param,
    STATE(77), 1,
      aux_sym_add_instruction_repeat1,
    STATE(257), 1,
      sym_path,
  [1322] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(211), 1,
      anon_sym_DOLLAR2,
    ACTIONS(215), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(217), 1,
      sym_escape_sequence,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_line_continuation,
    STATE(44), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1350] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(211), 1,
      anon_sym_DOLLAR2,
    ACTIONS(215), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(217), 1,
      sym_escape_sequence,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(42), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1378] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(290), 1,
      anon_sym_DOLLAR2,
    ACTIONS(292), 1,
      aux_sym_image_digest_token1,
    STATE(31), 1,
      aux_sym_image_digest_repeat1,
    STATE(43), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [1406] = 9,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(211), 1,
      anon_sym_DOLLAR2,
    ACTIONS(215), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(217), 1,
      sym_escape_sequence,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(133), 1,
      sym__immediate_expansion,
  [1434] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 1,
      aux_sym_path_token2,
    ACTIONS(300), 1,
      anon_sym_DOLLAR2,
    STATE(45), 1,
      sym_line_continuation,
    STATE(68), 1,
      aux_sym_path_repeat1,
    STATE(137), 1,
      sym__immediate_expansion,
    STATE(193), 1,
      sym__imm_expansion,
  [1459] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(304), 1,
      anon_sym_DOLLAR,
    ACTIONS(306), 1,
      aux_sym_expose_port_token1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(49), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(141), 2,
      sym_expansion,
      sym_expose_port,
  [1482] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    ACTIONS(312), 1,
      aux_sym_image_alias_token2,
    STATE(47), 1,
      sym_line_continuation,
    STATE(54), 1,
      aux_sym_image_alias_repeat1,
    STATE(166), 1,
      sym__imm_expansion,
    STATE(167), 1,
      sym__immediate_expansion,
  [1507] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(314), 1,
      aux_sym_path_token1,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(48), 1,
      sym_line_continuation,
    STATE(161), 1,
      sym_path,
    STATE(250), 1,
      sym_string_array,
  [1532] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 1,
      anon_sym_DOLLAR,
    ACTIONS(323), 1,
      aux_sym_expose_port_token1,
    STATE(49), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(141), 2,
      sym_expansion,
      sym_expose_port,
  [1553] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(326), 1,
      aux_sym_path_token2,
    ACTIONS(329), 1,
      anon_sym_DOLLAR2,
    ACTIONS(332), 1,
      sym__non_newline_whitespace,
    STATE(186), 1,
      sym__imm_expansion,
    STATE(196), 1,
      sym__immediate_expansion,
    STATE(50), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1576] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(339), 1,
      anon_sym_DOLLAR2,
    STATE(187), 1,
      sym__imm_expansion,
    STATE(198), 1,
      sym__immediate_expansion,
    STATE(51), 2,
      sym_line_continuation,
      aux_sym__stopsignal_value_repeat1,
  [1599] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(296), 1,
      sym__non_newline_whitespace,
    ACTIONS(342), 1,
      aux_sym_path_token2,
    ACTIONS(344), 1,
      anon_sym_DOLLAR2,
    STATE(52), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_path_repeat1,
    STATE(186), 1,
      sym__imm_expansion,
    STATE(196), 1,
      sym__immediate_expansion,
  [1624] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(53), 1,
      sym_line_continuation,
    ACTIONS(348), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(346), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1641] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    ACTIONS(312), 1,
      aux_sym_image_alias_token2,
    ACTIONS(350), 1,
      anon_sym_LF,
    STATE(54), 1,
      sym_line_continuation,
    STATE(60), 1,
      aux_sym_image_alias_repeat1,
    STATE(166), 1,
      sym__imm_expansion,
    STATE(167), 1,
      sym__immediate_expansion,
  [1666] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(354), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(352), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1683] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(358), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(356), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1700] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(362), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_AT,
    STATE(57), 1,
      sym_line_continuation,
    STATE(107), 1,
      sym_image_tag,
    STATE(232), 1,
      sym_image_digest,
  [1725] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(58), 1,
      sym_line_continuation,
    ACTIONS(370), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(368), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1742] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(59), 1,
      sym_line_continuation,
    ACTIONS(374), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(372), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1759] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(378), 1,
      anon_sym_DOLLAR2,
    ACTIONS(381), 1,
      aux_sym_image_alias_token2,
    STATE(166), 1,
      sym__imm_expansion,
    STATE(167), 1,
      sym__immediate_expansion,
    STATE(60), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1782] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(384), 1,
      anon_sym_NONE,
    ACTIONS(386), 1,
      anon_sym_DASH_DASH,
    STATE(61), 1,
      sym_line_continuation,
    STATE(90), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(229), 1,
      sym_param,
    STATE(241), 1,
      sym_cmd_instruction,
  [1807] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(167), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(169), 1,
      anon_sym_DOLLAR2,
    STATE(36), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(62), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(162), 1,
      sym__immediate_user_name_or_group_fragment,
  [1832] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(63), 1,
      sym_line_continuation,
    ACTIONS(390), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(388), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1849] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(396), 1,
      anon_sym_DOLLAR2,
    STATE(51), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(64), 1,
      sym_line_continuation,
    STATE(187), 1,
      sym__imm_expansion,
    STATE(198), 1,
      sym__immediate_expansion,
  [1874] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym__comment_line,
    STATE(254), 1,
      sym__anon_comment,
    ACTIONS(398), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(65), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [1895] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(394), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(396), 1,
      anon_sym_DOLLAR2,
    ACTIONS(403), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(66), 1,
      sym_line_continuation,
    STATE(187), 1,
      sym__imm_expansion,
    STATE(198), 1,
      sym__immediate_expansion,
  [1920] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      aux_sym_path_token2,
    ACTIONS(344), 1,
      anon_sym_DOLLAR2,
    ACTIONS(405), 1,
      sym__non_newline_whitespace,
    STATE(50), 1,
      aux_sym_path_repeat1,
    STATE(67), 1,
      sym_line_continuation,
    STATE(186), 1,
      sym__imm_expansion,
    STATE(196), 1,
      sym__immediate_expansion,
  [1945] = 8,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(298), 1,
      aux_sym_path_token2,
    ACTIONS(300), 1,
      anon_sym_DOLLAR2,
    ACTIONS(405), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym_line_continuation,
    STATE(69), 1,
      aux_sym_path_repeat1,
    STATE(137), 1,
      sym__immediate_expansion,
    STATE(193), 1,
      sym__imm_expansion,
  [1970] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      aux_sym_path_token2,
    ACTIONS(410), 1,
      anon_sym_DOLLAR2,
    STATE(137), 1,
      sym__immediate_expansion,
    STATE(193), 1,
      sym__imm_expansion,
    STATE(69), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1993] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(70), 1,
      sym_line_continuation,
    ACTIONS(390), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(388), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2009] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym_line_continuation,
    ACTIONS(415), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(417), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2027] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      anon_sym_DOLLAR,
    ACTIONS(421), 1,
      aux_sym_expose_port_token1,
    STATE(46), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(72), 1,
      sym_line_continuation,
    STATE(141), 2,
      sym_expansion,
      sym_expose_port,
  [2047] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      aux_sym__env_key_token1,
    STATE(73), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_env_instruction_repeat1,
    STATE(202), 1,
      sym__env_key,
    STATE(205), 1,
      sym_env_pair,
    STATE(237), 1,
      sym__spaced_env_pair,
  [2069] = 7,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      aux_sym__env_key_token1,
    STATE(74), 1,
      sym_line_continuation,
    STATE(100), 1,
      aux_sym_env_instruction_repeat1,
    STATE(205), 1,
      sym_env_pair,
    STATE(277), 1,
      sym__env_key,
  [2091] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      aux_sym__env_key_token1,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(346), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2107] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(274), 1,
      aux_sym_path_token1,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(76), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_add_instruction_repeat1,
    STATE(257), 1,
      sym_path,
  [2129] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      aux_sym_path_token1,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(77), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_add_instruction_repeat1,
    STATE(212), 1,
      sym_path,
  [2151] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(274), 1,
      aux_sym_path_token1,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(78), 1,
      sym_line_continuation,
    STATE(97), 1,
      aux_sym_add_instruction_repeat1,
    STATE(257), 1,
      sym_path,
  [2173] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      aux_sym_path_token1,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(79), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_add_instruction_repeat1,
    STATE(211), 1,
      sym_path,
  [2195] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      aux_sym__env_key_token1,
    STATE(80), 1,
      sym_line_continuation,
    ACTIONS(352), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2211] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      aux_sym_label_pair_token1,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(346), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2227] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      aux_sym_label_pair_token1,
    STATE(82), 1,
      sym_line_continuation,
    ACTIONS(352), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2243] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      aux_sym__env_key_token1,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(388), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2259] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(374), 1,
      aux_sym__env_key_token1,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(372), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2275] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      aux_sym_label_pair_token1,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(388), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2291] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(374), 1,
      aux_sym_label_pair_token1,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(372), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2307] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(348), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(346), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2323] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(88), 1,
      sym_line_continuation,
    ACTIONS(354), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(352), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2339] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(89), 1,
      sym_line_continuation,
    ACTIONS(374), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(372), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2355] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(386), 1,
      anon_sym_DASH_DASH,
    STATE(90), 1,
      sym_line_continuation,
    STATE(101), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(229), 1,
      sym_param,
    STATE(247), 1,
      sym_cmd_instruction,
  [2377] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(431), 1,
      aux_sym__env_key_token1,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(429), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2393] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      aux_sym_image_name_token1,
    STATE(11), 1,
      sym_expansion,
    STATE(57), 1,
      sym_image_name,
    STATE(92), 1,
      sym_line_continuation,
    STATE(230), 1,
      sym_image_spec,
  [2415] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(431), 1,
      aux_sym_label_pair_token1,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(429), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2431] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      aux_sym_path_token1,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(94), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_add_instruction_repeat1,
    STATE(222), 1,
      sym_path,
  [2453] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(435), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(433), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2469] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      aux_sym_path_token1,
    ACTIONS(440), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(257), 1,
      sym_path,
    STATE(96), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [2489] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      aux_sym_path_token1,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(96), 1,
      aux_sym_add_instruction_repeat1,
    STATE(97), 1,
      sym_line_continuation,
    STATE(223), 1,
      sym_path,
  [2511] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(175), 1,
      anon_sym_DOLLAR2,
    ACTIONS(177), 1,
      aux_sym_image_tag_token1,
    STATE(18), 1,
      aux_sym_image_tag_repeat1,
    STATE(89), 1,
      sym__imm_expansion,
    STATE(95), 1,
      sym__immediate_expansion,
    STATE(98), 1,
      sym_line_continuation,
  [2533] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(290), 1,
      anon_sym_DOLLAR2,
    ACTIONS(292), 1,
      aux_sym_image_digest_token1,
    STATE(43), 1,
      aux_sym_image_digest_repeat1,
    STATE(99), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [2555] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(445), 1,
      aux_sym__env_key_token1,
    STATE(205), 1,
      sym_env_pair,
    STATE(277), 1,
      sym__env_key,
    STATE(100), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2575] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(450), 1,
      anon_sym_DASH_DASH,
    STATE(229), 1,
      sym_param,
    STATE(101), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2592] = 5,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    STATE(117), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(455), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2609] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(459), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(461), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      sym_expansion,
    STATE(103), 1,
      sym_line_continuation,
    STATE(226), 1,
      sym__user_name_or_group,
  [2628] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(346), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(348), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2643] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(352), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(354), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2658] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      aux_sym_image_alias_token1,
    STATE(47), 1,
      sym_expansion,
    STATE(106), 1,
      sym_line_continuation,
    STATE(283), 1,
      sym_image_alias,
  [2677] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(366), 1,
      anon_sym_AT,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 1,
      aux_sym_from_instruction_token2,
    STATE(107), 1,
      sym_line_continuation,
    STATE(208), 1,
      sym_image_digest,
  [2696] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      aux_sym_from_instruction_token2,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(346), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2711] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      aux_sym_from_instruction_token2,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(352), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2726] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(388), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(390), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2741] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(372), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(374), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2756] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      aux_sym_from_instruction_token2,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(388), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2771] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(374), 1,
      aux_sym_from_instruction_token2,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(372), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2786] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(471), 1,
      aux_sym_path_token1,
    ACTIONS(473), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_expansion,
    STATE(114), 1,
      sym_line_continuation,
    STATE(245), 1,
      sym_path,
  [2805] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(346), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2818] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(356), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2831] = 4,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(480), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(477), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(117), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2846] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(482), 1,
      anon_sym_LF,
    ACTIONS(484), 1,
      aux_sym_label_pair_token1,
    STATE(218), 1,
      sym_label_pair,
    STATE(118), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2863] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(352), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2876] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      anon_sym_DOLLAR2,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(348), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2891] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(388), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2904] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(372), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2917] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      anon_sym_DOLLAR2,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(358), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2932] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(352), 1,
      anon_sym_DOLLAR2,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(354), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2947] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      aux_sym_path_token1,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      sym_expansion,
    STATE(125), 1,
      sym_line_continuation,
    STATE(224), 1,
      sym_path,
  [2966] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      anon_sym_DOLLAR2,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(390), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2981] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(487), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2994] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(489), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3007] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(491), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_expansion,
    STATE(129), 1,
      sym_line_continuation,
    STATE(243), 1,
      sym__stopsignal_value,
  [3026] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      anon_sym_DOLLAR2,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(374), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3041] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(497), 1,
      anon_sym_DOLLAR2,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(495), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3056] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(501), 1,
      aux_sym_from_instruction_token2,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(499), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3071] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(503), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(505), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3086] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(509), 1,
      aux_sym_label_pair_token1,
    STATE(118), 1,
      aux_sym_label_instruction_repeat1,
    STATE(134), 1,
      sym_line_continuation,
    STATE(218), 1,
      sym_label_pair,
  [3105] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(463), 1,
      anon_sym_DOLLAR,
    ACTIONS(465), 1,
      aux_sym_image_alias_token1,
    STATE(47), 1,
      sym_expansion,
    STATE(135), 1,
      sym_line_continuation,
    STATE(238), 1,
      sym_image_alias,
  [3124] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    ACTIONS(513), 1,
      sym_variable,
    STATE(136), 1,
      sym_line_continuation,
    STATE(184), 1,
      sym__expansion_body,
  [3140] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(495), 1,
      aux_sym_path_token2,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(497), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3154] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      sym_variable,
    STATE(138), 1,
      sym_line_continuation,
    STATE(163), 1,
      sym__expansion_body,
  [3170] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      sym_variable,
    STATE(83), 1,
      sym__expansion_body,
    STATE(139), 1,
      sym_line_continuation,
  [3186] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      sym_variable,
    STATE(85), 1,
      sym__expansion_body,
    STATE(140), 1,
      sym_line_continuation,
  [3202] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(527), 1,
      anon_sym_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(529), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3216] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    ACTIONS(533), 1,
      sym_variable,
    STATE(110), 1,
      sym__expansion_body,
    STATE(142), 1,
      sym_line_continuation,
  [3232] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      sym_variable,
    STATE(143), 1,
      sym_line_continuation,
    STATE(173), 1,
      sym__expansion_body,
  [3248] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      sym_variable,
    STATE(112), 1,
      sym__expansion_body,
    STATE(144), 1,
      sym_line_continuation,
  [3264] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
    ACTIONS(541), 1,
      sym_variable,
    STATE(145), 1,
      sym_line_continuation,
    STATE(178), 1,
      sym__expansion_body,
  [3280] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 1,
      sym_variable,
    STATE(70), 1,
      sym__expansion_body,
    STATE(146), 1,
      sym_line_continuation,
  [3296] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      sym_line_continuation,
    STATE(176), 1,
      aux_sym_string_array_repeat1,
  [3312] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      sym_variable,
    STATE(148), 1,
      sym_line_continuation,
    STATE(188), 1,
      sym__expansion_body,
  [3328] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
    ACTIONS(541), 1,
      sym_variable,
    STATE(149), 1,
      sym_line_continuation,
    STATE(182), 1,
      sym__expansion_body,
  [3344] = 4,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      anon_sym_BSLASH_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(150), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [3358] = 5,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(562), 1,
      anon_sym_BSLASH_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(150), 1,
      aux_sym_shell_command_repeat2,
    STATE(151), 1,
      sym_line_continuation,
  [3374] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym_variable,
    STATE(116), 1,
      sym__expansion_body,
    STATE(152), 1,
      sym_line_continuation,
  [3390] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      sym_variable,
    STATE(153), 1,
      sym_line_continuation,
    STATE(192), 1,
      sym__expansion_body,
  [3406] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_variable,
    STATE(123), 1,
      sym__expansion_body,
    STATE(154), 1,
      sym_line_continuation,
  [3422] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      sym_variable,
    STATE(121), 1,
      sym__expansion_body,
    STATE(155), 1,
      sym_line_continuation,
  [3438] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      aux_sym_label_pair_token1,
    STATE(134), 1,
      aux_sym_label_instruction_repeat1,
    STATE(156), 1,
      sym_line_continuation,
    STATE(218), 1,
      sym_label_pair,
  [3454] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      sym_variable,
    STATE(157), 1,
      sym_line_continuation,
    STATE(200), 1,
      sym__expansion_body,
  [3470] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_variable,
    STATE(126), 1,
      sym__expansion_body,
    STATE(158), 1,
      sym_line_continuation,
  [3486] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      sym_variable,
    STATE(63), 1,
      sym__expansion_body,
    STATE(159), 1,
      sym_line_continuation,
  [3502] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 1,
      sym__non_newline_whitespace,
    STATE(160), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [3516] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(589), 1,
      sym__non_newline_whitespace,
    STATE(161), 1,
      sym_line_continuation,
    STATE(197), 1,
      aux_sym_volume_instruction_repeat1,
  [3532] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(591), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3544] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(388), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3556] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(593), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3568] = 5,
    ACTIONS(562), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(595), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(165), 1,
      sym_line_continuation,
    STATE(172), 1,
      aux_sym_shell_command_repeat2,
  [3584] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(372), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3596] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(597), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3608] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_string_array_repeat1,
    STATE(168), 1,
      sym_line_continuation,
  [3624] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(346), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3636] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(601), 1,
      anon_sym_RBRACK,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_double_quoted_string,
    STATE(170), 1,
      sym_line_continuation,
  [3652] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(171), 1,
      sym_line_continuation,
    ACTIONS(605), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3664] = 5,
    ACTIONS(562), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(150), 1,
      aux_sym_shell_command_repeat2,
    STATE(172), 1,
      sym_line_continuation,
  [3680] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(356), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3692] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(174), 1,
      sym_line_continuation,
    ACTIONS(352), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3704] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(346), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3716] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(176), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3730] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(177), 1,
      sym_line_continuation,
    ACTIONS(614), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3742] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(178), 1,
      sym_line_continuation,
    ACTIONS(356), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3754] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(352), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3766] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      sym_variable,
    STATE(56), 1,
      sym__expansion_body,
    STATE(180), 1,
      sym_line_continuation,
  [3782] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      aux_sym_path_token2,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(346), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3796] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(388), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3808] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(352), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(354), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3822] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(358), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3836] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    ACTIONS(576), 1,
      sym_variable,
    STATE(185), 1,
      sym_line_continuation,
    STATE(189), 1,
      sym__expansion_body,
  [3852] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(374), 1,
      aux_sym_path_token2,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(372), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3866] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(372), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3878] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(358), 1,
      aux_sym_path_token2,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(356), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3892] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      aux_sym_path_token2,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(388), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3906] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      aux_sym_path_token2,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(352), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3920] = 5,
    ACTIONS(562), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(151), 1,
      aux_sym_shell_command_repeat2,
    STATE(191), 1,
      sym_line_continuation,
  [3936] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      aux_sym_path_token2,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(388), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3950] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(374), 1,
      aux_sym_path_token2,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(372), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3964] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(348), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3978] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(616), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(618), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3992] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(495), 1,
      aux_sym_path_token2,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(497), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4006] = 5,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      sym__non_newline_whitespace,
    ACTIONS(620), 1,
      anon_sym_LF,
    STATE(160), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(197), 1,
      sym_line_continuation,
  [4022] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(622), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4034] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      aux_sym_path_token2,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(352), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4048] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(358), 1,
      aux_sym_path_token2,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(356), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4062] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      aux_sym_path_token2,
    STATE(201), 1,
      sym_line_continuation,
    ACTIONS(346), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4076] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(624), 1,
      anon_sym_EQ,
    ACTIONS(626), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(202), 1,
      sym_line_continuation,
  [4089] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(628), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4100] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(204), 1,
      sym_line_continuation,
    STATE(233), 1,
      sym_string_array,
  [4113] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(632), 1,
      aux_sym__env_key_token1,
    STATE(205), 1,
      sym_line_continuation,
  [4126] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(206), 1,
      sym_line_continuation,
    ACTIONS(634), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [4137] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(638), 1,
      aux_sym__env_key_token1,
    STATE(207), 1,
      sym_line_continuation,
  [4150] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(640), 1,
      anon_sym_LF,
    ACTIONS(642), 1,
      aux_sym_from_instruction_token2,
    STATE(208), 1,
      sym_line_continuation,
  [4163] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(644), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4174] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(646), 1,
      aux_sym__env_key_token1,
    STATE(210), 1,
      sym_line_continuation,
  [4187] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 1,
      sym__non_newline_whitespace,
    STATE(211), 1,
      sym_line_continuation,
  [4200] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      sym__non_newline_whitespace,
    ACTIONS(652), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_line_continuation,
  [4213] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(654), 1,
      aux_sym_path_token1,
    ACTIONS(656), 1,
      anon_sym_DOLLAR,
    STATE(213), 1,
      sym_line_continuation,
  [4226] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(214), 1,
      sym_line_continuation,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4237] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      sym_line_continuation,
    STATE(231), 1,
      sym_double_quoted_string,
  [4250] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(646), 1,
      aux_sym_label_pair_token1,
    STATE(216), 1,
      sym_line_continuation,
  [4263] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_DOLLAR,
    ACTIONS(658), 1,
      aux_sym_path_token1,
    STATE(217), 1,
      sym_line_continuation,
  [4276] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(662), 1,
      aux_sym_label_pair_token1,
    STATE(218), 1,
      sym_line_continuation,
  [4289] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      aux_sym_label_pair_token1,
    STATE(219), 1,
      sym_line_continuation,
  [4302] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      aux_sym__env_key_token1,
    STATE(220), 1,
      sym_line_continuation,
  [4315] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(638), 1,
      aux_sym_label_pair_token1,
    STATE(221), 1,
      sym_line_continuation,
  [4328] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      sym__non_newline_whitespace,
    ACTIONS(672), 1,
      anon_sym_LF,
    STATE(222), 1,
      sym_line_continuation,
  [4341] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      sym__non_newline_whitespace,
    ACTIONS(674), 1,
      anon_sym_LF,
    STATE(223), 1,
      sym_line_continuation,
  [4354] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    STATE(224), 1,
      sym_line_continuation,
    ACTIONS(582), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [4365] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_DOLLAR,
    ACTIONS(658), 1,
      aux_sym_image_name_token1,
    STATE(225), 1,
      sym_line_continuation,
  [4378] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(676), 1,
      anon_sym_LF,
    ACTIONS(678), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym_line_continuation,
  [4391] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(680), 1,
      anon_sym_LF,
    ACTIONS(682), 1,
      anon_sym_EQ,
    STATE(227), 1,
      sym_line_continuation,
  [4404] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      anon_sym_LF,
    ACTIONS(686), 1,
      aux_sym_from_instruction_token2,
    STATE(228), 1,
      sym_line_continuation,
  [4417] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(229), 1,
      sym_line_continuation,
    ACTIONS(688), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4428] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(692), 1,
      aux_sym_from_instruction_token2,
    STATE(230), 1,
      sym_line_continuation,
  [4441] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(231), 1,
      sym_line_continuation,
    ACTIONS(612), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4452] = 4,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(696), 1,
      aux_sym_from_instruction_token2,
    STATE(232), 1,
      sym_line_continuation,
  [4465] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [4475] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(700), 1,
      anon_sym_EQ,
    STATE(234), 1,
      sym_line_continuation,
  [4485] = 3,
    ACTIONS(702), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      anon_sym_BSLASH_LF,
    STATE(235), 1,
      sym_line_continuation,
  [4495] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LF,
    STATE(236), 1,
      sym_line_continuation,
  [4505] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(708), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_line_continuation,
  [4515] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LF,
    STATE(238), 1,
      sym_line_continuation,
  [4525] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(712), 1,
      anon_sym_LF,
    STATE(239), 1,
      sym_line_continuation,
  [4535] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(240), 1,
      sym_line_continuation,
  [4545] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      anon_sym_LF,
    STATE(241), 1,
      sym_line_continuation,
  [4555] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_line_continuation,
  [4565] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      anon_sym_LF,
    STATE(243), 1,
      sym_line_continuation,
  [4575] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(244), 1,
      sym_line_continuation,
  [4585] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      anon_sym_LF,
    STATE(245), 1,
      sym_line_continuation,
  [4595] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      anon_sym_EQ,
    STATE(246), 1,
      sym_line_continuation,
  [4605] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(247), 1,
      sym_line_continuation,
  [4615] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      anon_sym_LF,
    STATE(248), 1,
      sym_line_continuation,
  [4625] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      aux_sym_param_token1,
    STATE(249), 1,
      sym_line_continuation,
  [4635] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(250), 1,
      sym_line_continuation,
  [4645] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      anon_sym_LF,
    STATE(251), 1,
      sym_line_continuation,
  [4655] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      anon_sym_LF,
    STATE(252), 1,
      sym_line_continuation,
  [4665] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      anon_sym_LF,
    STATE(253), 1,
      sym_line_continuation,
  [4675] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(254), 1,
      sym_line_continuation,
  [4685] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      sym_line_continuation,
  [4695] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      aux_sym_param_token2,
    STATE(256), 1,
      sym_line_continuation,
  [4705] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      sym__non_newline_whitespace,
    STATE(257), 1,
      sym_line_continuation,
  [4715] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      anon_sym_EQ,
    STATE(258), 1,
      sym_line_continuation,
  [4725] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LF,
    STATE(259), 1,
      sym_line_continuation,
  [4735] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      sym_line_continuation,
  [4745] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      sym_line_continuation,
  [4755] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      aux_sym_param_token2,
    STATE(262), 1,
      sym_line_continuation,
  [4765] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      aux_sym__expansion_body_token1,
    STATE(263), 1,
      sym_line_continuation,
  [4775] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_LF,
    STATE(264), 1,
      sym_line_continuation,
  [4785] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      anon_sym_LF,
    STATE(265), 1,
      sym_line_continuation,
  [4795] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      sym_line_continuation,
  [4805] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      ts_builtin_sym_end,
    STATE(267), 1,
      sym_line_continuation,
  [4815] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(268), 1,
      sym_line_continuation,
  [4825] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      sym_line_continuation,
  [4835] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_LF,
    STATE(270), 1,
      sym_line_continuation,
  [4845] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_line_continuation,
  [4855] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      sym_line_continuation,
  [4865] = 3,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(778), 1,
      anon_sym_BSLASH_LF,
    STATE(273), 1,
      sym_line_continuation,
  [4875] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      anon_sym_LF,
    STATE(274), 1,
      sym_line_continuation,
  [4885] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      sym_line_continuation,
  [4895] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(276), 1,
      sym_line_continuation,
  [4905] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(624), 1,
      anon_sym_EQ,
    STATE(277), 1,
      sym_line_continuation,
  [4915] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      sym_line_continuation,
  [4925] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      aux_sym_param_token2,
    STATE(279), 1,
      sym_line_continuation,
  [4935] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(280), 1,
      sym_line_continuation,
  [4945] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      aux_sym_param_token1,
    STATE(281), 1,
      sym_line_continuation,
  [4955] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      sym_line_continuation,
  [4965] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LF,
    STATE(283), 1,
      sym_line_continuation,
  [4975] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_line_continuation,
  [4985] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      aux_sym_arg_instruction_token2,
    STATE(285), 1,
      sym_line_continuation,
  [4995] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_line_continuation,
  [5005] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_line_continuation,
  [5015] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      aux_sym__expansion_body_token1,
    STATE(288), 1,
      sym_line_continuation,
  [5025] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(808), 1,
      anon_sym_EQ,
    STATE(289), 1,
      sym_line_continuation,
  [5035] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      aux_sym__expansion_body_token1,
    STATE(290), 1,
      sym_line_continuation,
  [5045] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(812), 1,
      anon_sym_EQ,
    STATE(291), 1,
      sym_line_continuation,
  [5055] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      aux_sym__expansion_body_token1,
    STATE(292), 1,
      sym_line_continuation,
  [5065] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(816), 1,
      aux_sym__expansion_body_token1,
    STATE(293), 1,
      sym_line_continuation,
  [5075] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(818), 1,
      aux_sym__expansion_body_token1,
    STATE(294), 1,
      sym_line_continuation,
  [5085] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(820), 1,
      aux_sym__expansion_body_token1,
    STATE(295), 1,
      sym_line_continuation,
  [5095] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      aux_sym__expansion_body_token1,
    STATE(296), 1,
      sym_line_continuation,
  [5105] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      aux_sym__expansion_body_token1,
    STATE(297), 1,
      sym_line_continuation,
  [5115] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      aux_sym__expansion_body_token1,
    STATE(298), 1,
      sym_line_continuation,
  [5125] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      aux_sym__expansion_body_token1,
    STATE(299), 1,
      sym_line_continuation,
  [5135] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      aux_sym__expansion_body_token1,
    STATE(300), 1,
      sym_line_continuation,
  [5145] = 3,
    ACTIONS(123), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      aux_sym__expansion_body_token1,
    STATE(301), 1,
      sym_line_continuation,
  [5155] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(834), 1,
      aux_sym_param_token1,
    STATE(302), 1,
      sym_line_continuation,
  [5165] = 1,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 280,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 346,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 418,
  [SMALL_STATE(10)] = 454,
  [SMALL_STATE(11)] = 484,
  [SMALL_STATE(12)] = 514,
  [SMALL_STATE(13)] = 544,
  [SMALL_STATE(14)] = 572,
  [SMALL_STATE(15)] = 602,
  [SMALL_STATE(16)] = 632,
  [SMALL_STATE(17)] = 659,
  [SMALL_STATE(18)] = 688,
  [SMALL_STATE(19)] = 717,
  [SMALL_STATE(20)] = 744,
  [SMALL_STATE(21)] = 773,
  [SMALL_STATE(22)] = 802,
  [SMALL_STATE(23)] = 831,
  [SMALL_STATE(24)] = 858,
  [SMALL_STATE(25)] = 887,
  [SMALL_STATE(26)] = 916,
  [SMALL_STATE(27)] = 945,
  [SMALL_STATE(28)] = 972,
  [SMALL_STATE(29)] = 1000,
  [SMALL_STATE(30)] = 1026,
  [SMALL_STATE(31)] = 1052,
  [SMALL_STATE(32)] = 1078,
  [SMALL_STATE(33)] = 1106,
  [SMALL_STATE(34)] = 1132,
  [SMALL_STATE(35)] = 1160,
  [SMALL_STATE(36)] = 1186,
  [SMALL_STATE(37)] = 1214,
  [SMALL_STATE(38)] = 1238,
  [SMALL_STATE(39)] = 1266,
  [SMALL_STATE(40)] = 1294,
  [SMALL_STATE(41)] = 1322,
  [SMALL_STATE(42)] = 1350,
  [SMALL_STATE(43)] = 1378,
  [SMALL_STATE(44)] = 1406,
  [SMALL_STATE(45)] = 1434,
  [SMALL_STATE(46)] = 1459,
  [SMALL_STATE(47)] = 1482,
  [SMALL_STATE(48)] = 1507,
  [SMALL_STATE(49)] = 1532,
  [SMALL_STATE(50)] = 1553,
  [SMALL_STATE(51)] = 1576,
  [SMALL_STATE(52)] = 1599,
  [SMALL_STATE(53)] = 1624,
  [SMALL_STATE(54)] = 1641,
  [SMALL_STATE(55)] = 1666,
  [SMALL_STATE(56)] = 1683,
  [SMALL_STATE(57)] = 1700,
  [SMALL_STATE(58)] = 1725,
  [SMALL_STATE(59)] = 1742,
  [SMALL_STATE(60)] = 1759,
  [SMALL_STATE(61)] = 1782,
  [SMALL_STATE(62)] = 1807,
  [SMALL_STATE(63)] = 1832,
  [SMALL_STATE(64)] = 1849,
  [SMALL_STATE(65)] = 1874,
  [SMALL_STATE(66)] = 1895,
  [SMALL_STATE(67)] = 1920,
  [SMALL_STATE(68)] = 1945,
  [SMALL_STATE(69)] = 1970,
  [SMALL_STATE(70)] = 1993,
  [SMALL_STATE(71)] = 2009,
  [SMALL_STATE(72)] = 2027,
  [SMALL_STATE(73)] = 2047,
  [SMALL_STATE(74)] = 2069,
  [SMALL_STATE(75)] = 2091,
  [SMALL_STATE(76)] = 2107,
  [SMALL_STATE(77)] = 2129,
  [SMALL_STATE(78)] = 2151,
  [SMALL_STATE(79)] = 2173,
  [SMALL_STATE(80)] = 2195,
  [SMALL_STATE(81)] = 2211,
  [SMALL_STATE(82)] = 2227,
  [SMALL_STATE(83)] = 2243,
  [SMALL_STATE(84)] = 2259,
  [SMALL_STATE(85)] = 2275,
  [SMALL_STATE(86)] = 2291,
  [SMALL_STATE(87)] = 2307,
  [SMALL_STATE(88)] = 2323,
  [SMALL_STATE(89)] = 2339,
  [SMALL_STATE(90)] = 2355,
  [SMALL_STATE(91)] = 2377,
  [SMALL_STATE(92)] = 2393,
  [SMALL_STATE(93)] = 2415,
  [SMALL_STATE(94)] = 2431,
  [SMALL_STATE(95)] = 2453,
  [SMALL_STATE(96)] = 2469,
  [SMALL_STATE(97)] = 2489,
  [SMALL_STATE(98)] = 2511,
  [SMALL_STATE(99)] = 2533,
  [SMALL_STATE(100)] = 2555,
  [SMALL_STATE(101)] = 2575,
  [SMALL_STATE(102)] = 2592,
  [SMALL_STATE(103)] = 2609,
  [SMALL_STATE(104)] = 2628,
  [SMALL_STATE(105)] = 2643,
  [SMALL_STATE(106)] = 2658,
  [SMALL_STATE(107)] = 2677,
  [SMALL_STATE(108)] = 2696,
  [SMALL_STATE(109)] = 2711,
  [SMALL_STATE(110)] = 2726,
  [SMALL_STATE(111)] = 2741,
  [SMALL_STATE(112)] = 2756,
  [SMALL_STATE(113)] = 2771,
  [SMALL_STATE(114)] = 2786,
  [SMALL_STATE(115)] = 2805,
  [SMALL_STATE(116)] = 2818,
  [SMALL_STATE(117)] = 2831,
  [SMALL_STATE(118)] = 2846,
  [SMALL_STATE(119)] = 2863,
  [SMALL_STATE(120)] = 2876,
  [SMALL_STATE(121)] = 2891,
  [SMALL_STATE(122)] = 2904,
  [SMALL_STATE(123)] = 2917,
  [SMALL_STATE(124)] = 2932,
  [SMALL_STATE(125)] = 2947,
  [SMALL_STATE(126)] = 2966,
  [SMALL_STATE(127)] = 2981,
  [SMALL_STATE(128)] = 2994,
  [SMALL_STATE(129)] = 3007,
  [SMALL_STATE(130)] = 3026,
  [SMALL_STATE(131)] = 3041,
  [SMALL_STATE(132)] = 3056,
  [SMALL_STATE(133)] = 3071,
  [SMALL_STATE(134)] = 3086,
  [SMALL_STATE(135)] = 3105,
  [SMALL_STATE(136)] = 3124,
  [SMALL_STATE(137)] = 3140,
  [SMALL_STATE(138)] = 3154,
  [SMALL_STATE(139)] = 3170,
  [SMALL_STATE(140)] = 3186,
  [SMALL_STATE(141)] = 3202,
  [SMALL_STATE(142)] = 3216,
  [SMALL_STATE(143)] = 3232,
  [SMALL_STATE(144)] = 3248,
  [SMALL_STATE(145)] = 3264,
  [SMALL_STATE(146)] = 3280,
  [SMALL_STATE(147)] = 3296,
  [SMALL_STATE(148)] = 3312,
  [SMALL_STATE(149)] = 3328,
  [SMALL_STATE(150)] = 3344,
  [SMALL_STATE(151)] = 3358,
  [SMALL_STATE(152)] = 3374,
  [SMALL_STATE(153)] = 3390,
  [SMALL_STATE(154)] = 3406,
  [SMALL_STATE(155)] = 3422,
  [SMALL_STATE(156)] = 3438,
  [SMALL_STATE(157)] = 3454,
  [SMALL_STATE(158)] = 3470,
  [SMALL_STATE(159)] = 3486,
  [SMALL_STATE(160)] = 3502,
  [SMALL_STATE(161)] = 3516,
  [SMALL_STATE(162)] = 3532,
  [SMALL_STATE(163)] = 3544,
  [SMALL_STATE(164)] = 3556,
  [SMALL_STATE(165)] = 3568,
  [SMALL_STATE(166)] = 3584,
  [SMALL_STATE(167)] = 3596,
  [SMALL_STATE(168)] = 3608,
  [SMALL_STATE(169)] = 3624,
  [SMALL_STATE(170)] = 3636,
  [SMALL_STATE(171)] = 3652,
  [SMALL_STATE(172)] = 3664,
  [SMALL_STATE(173)] = 3680,
  [SMALL_STATE(174)] = 3692,
  [SMALL_STATE(175)] = 3704,
  [SMALL_STATE(176)] = 3716,
  [SMALL_STATE(177)] = 3730,
  [SMALL_STATE(178)] = 3742,
  [SMALL_STATE(179)] = 3754,
  [SMALL_STATE(180)] = 3766,
  [SMALL_STATE(181)] = 3782,
  [SMALL_STATE(182)] = 3796,
  [SMALL_STATE(183)] = 3808,
  [SMALL_STATE(184)] = 3822,
  [SMALL_STATE(185)] = 3836,
  [SMALL_STATE(186)] = 3852,
  [SMALL_STATE(187)] = 3866,
  [SMALL_STATE(188)] = 3878,
  [SMALL_STATE(189)] = 3892,
  [SMALL_STATE(190)] = 3906,
  [SMALL_STATE(191)] = 3920,
  [SMALL_STATE(192)] = 3936,
  [SMALL_STATE(193)] = 3950,
  [SMALL_STATE(194)] = 3964,
  [SMALL_STATE(195)] = 3978,
  [SMALL_STATE(196)] = 3992,
  [SMALL_STATE(197)] = 4006,
  [SMALL_STATE(198)] = 4022,
  [SMALL_STATE(199)] = 4034,
  [SMALL_STATE(200)] = 4048,
  [SMALL_STATE(201)] = 4062,
  [SMALL_STATE(202)] = 4076,
  [SMALL_STATE(203)] = 4089,
  [SMALL_STATE(204)] = 4100,
  [SMALL_STATE(205)] = 4113,
  [SMALL_STATE(206)] = 4126,
  [SMALL_STATE(207)] = 4137,
  [SMALL_STATE(208)] = 4150,
  [SMALL_STATE(209)] = 4163,
  [SMALL_STATE(210)] = 4174,
  [SMALL_STATE(211)] = 4187,
  [SMALL_STATE(212)] = 4200,
  [SMALL_STATE(213)] = 4213,
  [SMALL_STATE(214)] = 4226,
  [SMALL_STATE(215)] = 4237,
  [SMALL_STATE(216)] = 4250,
  [SMALL_STATE(217)] = 4263,
  [SMALL_STATE(218)] = 4276,
  [SMALL_STATE(219)] = 4289,
  [SMALL_STATE(220)] = 4302,
  [SMALL_STATE(221)] = 4315,
  [SMALL_STATE(222)] = 4328,
  [SMALL_STATE(223)] = 4341,
  [SMALL_STATE(224)] = 4354,
  [SMALL_STATE(225)] = 4365,
  [SMALL_STATE(226)] = 4378,
  [SMALL_STATE(227)] = 4391,
  [SMALL_STATE(228)] = 4404,
  [SMALL_STATE(229)] = 4417,
  [SMALL_STATE(230)] = 4428,
  [SMALL_STATE(231)] = 4441,
  [SMALL_STATE(232)] = 4452,
  [SMALL_STATE(233)] = 4465,
  [SMALL_STATE(234)] = 4475,
  [SMALL_STATE(235)] = 4485,
  [SMALL_STATE(236)] = 4495,
  [SMALL_STATE(237)] = 4505,
  [SMALL_STATE(238)] = 4515,
  [SMALL_STATE(239)] = 4525,
  [SMALL_STATE(240)] = 4535,
  [SMALL_STATE(241)] = 4545,
  [SMALL_STATE(242)] = 4555,
  [SMALL_STATE(243)] = 4565,
  [SMALL_STATE(244)] = 4575,
  [SMALL_STATE(245)] = 4585,
  [SMALL_STATE(246)] = 4595,
  [SMALL_STATE(247)] = 4605,
  [SMALL_STATE(248)] = 4615,
  [SMALL_STATE(249)] = 4625,
  [SMALL_STATE(250)] = 4635,
  [SMALL_STATE(251)] = 4645,
  [SMALL_STATE(252)] = 4655,
  [SMALL_STATE(253)] = 4665,
  [SMALL_STATE(254)] = 4675,
  [SMALL_STATE(255)] = 4685,
  [SMALL_STATE(256)] = 4695,
  [SMALL_STATE(257)] = 4705,
  [SMALL_STATE(258)] = 4715,
  [SMALL_STATE(259)] = 4725,
  [SMALL_STATE(260)] = 4735,
  [SMALL_STATE(261)] = 4745,
  [SMALL_STATE(262)] = 4755,
  [SMALL_STATE(263)] = 4765,
  [SMALL_STATE(264)] = 4775,
  [SMALL_STATE(265)] = 4785,
  [SMALL_STATE(266)] = 4795,
  [SMALL_STATE(267)] = 4805,
  [SMALL_STATE(268)] = 4815,
  [SMALL_STATE(269)] = 4825,
  [SMALL_STATE(270)] = 4835,
  [SMALL_STATE(271)] = 4845,
  [SMALL_STATE(272)] = 4855,
  [SMALL_STATE(273)] = 4865,
  [SMALL_STATE(274)] = 4875,
  [SMALL_STATE(275)] = 4885,
  [SMALL_STATE(276)] = 4895,
  [SMALL_STATE(277)] = 4905,
  [SMALL_STATE(278)] = 4915,
  [SMALL_STATE(279)] = 4925,
  [SMALL_STATE(280)] = 4935,
  [SMALL_STATE(281)] = 4945,
  [SMALL_STATE(282)] = 4955,
  [SMALL_STATE(283)] = 4965,
  [SMALL_STATE(284)] = 4975,
  [SMALL_STATE(285)] = 4985,
  [SMALL_STATE(286)] = 4995,
  [SMALL_STATE(287)] = 5005,
  [SMALL_STATE(288)] = 5015,
  [SMALL_STATE(289)] = 5025,
  [SMALL_STATE(290)] = 5035,
  [SMALL_STATE(291)] = 5045,
  [SMALL_STATE(292)] = 5055,
  [SMALL_STATE(293)] = 5065,
  [SMALL_STATE(294)] = 5075,
  [SMALL_STATE(295)] = 5085,
  [SMALL_STATE(296)] = 5095,
  [SMALL_STATE(297)] = 5105,
  [SMALL_STATE(298)] = 5115,
  [SMALL_STATE(299)] = 5125,
  [SMALL_STATE(300)] = 5135,
  [SMALL_STATE(301)] = 5145,
  [SMALL_STATE(302)] = 5155,
  [SMALL_STATE(303)] = 5165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(285),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(159),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(58),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(127),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(155),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(139),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(91),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(146),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(95),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(140),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(93),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(142),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(133),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(133),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(127),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(155),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(144),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(132),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(131),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(158),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(136),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(71),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(196),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(185),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(198),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(149),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(138),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(167),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(240),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(137),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(153),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(52),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(157),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(258),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(281),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(117),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(234),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(171),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(125),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(215),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [766] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
