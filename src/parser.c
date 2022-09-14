#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 305
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

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
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 2},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 1},
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
    [2] = sym_unquoted_string,
  },
  [12] = {
    [3] = sym_unquoted_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__immediate_user_name_or_group, 2,
    aux_sym__immediate_user_name_or_group,
    sym_unquoted_string,
  sym_shell_command, 2,
    sym_shell_command,
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
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 28,
  [38] = 38,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 28,
  [43] = 43,
  [44] = 35,
  [45] = 38,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 41,
  [51] = 51,
  [52] = 38,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 40,
  [68] = 40,
  [69] = 41,
  [70] = 63,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 53,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 55,
  [81] = 53,
  [82] = 55,
  [83] = 63,
  [84] = 59,
  [85] = 63,
  [86] = 59,
  [87] = 53,
  [88] = 55,
  [89] = 59,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 91,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 53,
  [103] = 63,
  [104] = 104,
  [105] = 59,
  [106] = 106,
  [107] = 107,
  [108] = 55,
  [109] = 56,
  [110] = 59,
  [111] = 63,
  [112] = 53,
  [113] = 113,
  [114] = 55,
  [115] = 56,
  [116] = 53,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 59,
  [122] = 63,
  [123] = 59,
  [124] = 63,
  [125] = 125,
  [126] = 55,
  [127] = 127,
  [128] = 128,
  [129] = 55,
  [130] = 53,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 138,
  [141] = 137,
  [142] = 137,
  [143] = 138,
  [144] = 144,
  [145] = 63,
  [146] = 146,
  [147] = 59,
  [148] = 137,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 53,
  [153] = 153,
  [154] = 138,
  [155] = 137,
  [156] = 53,
  [157] = 138,
  [158] = 113,
  [159] = 56,
  [160] = 160,
  [161] = 137,
  [162] = 55,
  [163] = 163,
  [164] = 53,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 56,
  [170] = 55,
  [171] = 171,
  [172] = 53,
  [173] = 63,
  [174] = 59,
  [175] = 56,
  [176] = 55,
  [177] = 177,
  [178] = 178,
  [179] = 63,
  [180] = 59,
  [181] = 137,
  [182] = 182,
  [183] = 183,
  [184] = 55,
  [185] = 56,
  [186] = 138,
  [187] = 59,
  [188] = 188,
  [189] = 138,
  [190] = 63,
  [191] = 191,
  [192] = 137,
  [193] = 138,
  [194] = 138,
  [195] = 53,
  [196] = 55,
  [197] = 56,
  [198] = 138,
  [199] = 113,
  [200] = 138,
  [201] = 138,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 204,
  [210] = 205,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 206,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 206,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 205,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 204,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 234,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 259,
  [261] = 216,
  [262] = 234,
  [263] = 257,
  [264] = 264,
  [265] = 265,
  [266] = 257,
  [267] = 234,
  [268] = 268,
  [269] = 269,
  [270] = 234,
  [271] = 271,
  [272] = 272,
  [273] = 234,
  [274] = 274,
  [275] = 275,
  [276] = 234,
  [277] = 277,
  [278] = 278,
  [279] = 234,
  [280] = 280,
  [281] = 234,
  [282] = 282,
  [283] = 234,
  [284] = 284,
  [285] = 234,
  [286] = 286,
  [287] = 234,
  [288] = 234,
  [289] = 282,
  [290] = 286,
  [291] = 282,
  [292] = 286,
  [293] = 282,
  [294] = 282,
  [295] = 282,
  [296] = 282,
  [297] = 282,
  [298] = 282,
  [299] = 282,
  [300] = 282,
  [301] = 282,
  [302] = 282,
  [303] = 259,
  [304] = 304,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ',') ADVANCE(238);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(242);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(253);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(240);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(240);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '[') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(201);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(231);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
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
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
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
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(193);
      END_STATE();
    case 99:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(238);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 160:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(238);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(238);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(242);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(240);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(242);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(211);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(240);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 160},
  [3] = {.lex_state = 160},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 160},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 30},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 160},
  [73] = {.lex_state = 50},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 35},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 160},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 160},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 24},
  [104] = {.lex_state = 38},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 40},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 35},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 35},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 40},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 47},
  [138] = {.lex_state = 47},
  [139] = {.lex_state = 51},
  [140] = {.lex_state = 47},
  [141] = {.lex_state = 47},
  [142] = {.lex_state = 47},
  [143] = {.lex_state = 47},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 160},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 47},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 34},
  [153] = {.lex_state = 24},
  [154] = {.lex_state = 47},
  [155] = {.lex_state = 47},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 47},
  [158] = {.lex_state = 34},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 24},
  [161] = {.lex_state = 47},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 30},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 160},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 160},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 47},
  [182] = {.lex_state = 30},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 16},
  [185] = {.lex_state = 16},
  [186] = {.lex_state = 47},
  [187] = {.lex_state = 34},
  [188] = {.lex_state = 30},
  [189] = {.lex_state = 47},
  [190] = {.lex_state = 34},
  [191] = {.lex_state = 160},
  [192] = {.lex_state = 47},
  [193] = {.lex_state = 47},
  [194] = {.lex_state = 47},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 34},
  [197] = {.lex_state = 34},
  [198] = {.lex_state = 47},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 47},
  [201] = {.lex_state = 47},
  [202] = {.lex_state = 21},
  [203] = {.lex_state = 24},
  [204] = {.lex_state = 35},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 21},
  [207] = {.lex_state = 16},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 160},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 35},
  [212] = {.lex_state = 24},
  [213] = {.lex_state = 24},
  [214] = {.lex_state = 21},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 43},
  [217] = {.lex_state = 43},
  [218] = {.lex_state = 16},
  [219] = {.lex_state = 160},
  [220] = {.lex_state = 16},
  [221] = {.lex_state = 160},
  [222] = {.lex_state = 160},
  [223] = {.lex_state = 160},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 160},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 24},
  [229] = {.lex_state = 24},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 160},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 160},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 160},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 52},
  [248] = {.lex_state = 198},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 160},
  [257] = {.lex_state = 53},
  [258] = {.lex_state = 34},
  [259] = {.lex_state = 38},
  [260] = {.lex_state = 38},
  [261] = {.lex_state = 160},
  [262] = {.lex_state = 160},
  [263] = {.lex_state = 53},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 53},
  [267] = {.lex_state = 160},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 160},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 160},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 198},
  [276] = {.lex_state = 160},
  [277] = {.lex_state = 160},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 160},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 160},
  [282] = {.lex_state = 54},
  [283] = {.lex_state = 160},
  [284] = {.lex_state = 198},
  [285] = {.lex_state = 160},
  [286] = {.lex_state = 160},
  [287] = {.lex_state = 160},
  [288] = {.lex_state = 160},
  [289] = {.lex_state = 54},
  [290] = {.lex_state = 160},
  [291] = {.lex_state = 54},
  [292] = {.lex_state = 160},
  [293] = {.lex_state = 54},
  [294] = {.lex_state = 54},
  [295] = {.lex_state = 54},
  [296] = {.lex_state = 54},
  [297] = {.lex_state = 54},
  [298] = {.lex_state = 54},
  [299] = {.lex_state = 54},
  [300] = {.lex_state = 54},
  [301] = {.lex_state = 54},
  [302] = {.lex_state = 54},
  [303] = {.lex_state = 38},
  [304] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(269),
    [sym__instruction] = STATE(274),
    [sym_from_instruction] = STATE(265),
    [sym_run_instruction] = STATE(265),
    [sym_cmd_instruction] = STATE(265),
    [sym_label_instruction] = STATE(265),
    [sym_expose_instruction] = STATE(265),
    [sym_env_instruction] = STATE(265),
    [sym_add_instruction] = STATE(265),
    [sym_copy_instruction] = STATE(265),
    [sym_entrypoint_instruction] = STATE(265),
    [sym_volume_instruction] = STATE(265),
    [sym_user_instruction] = STATE(265),
    [sym_workdir_instruction] = STATE(265),
    [sym_arg_instruction] = STATE(265),
    [sym_onbuild_instruction] = STATE(265),
    [sym_stopsignal_instruction] = STATE(265),
    [sym_healthcheck_instruction] = STATE(265),
    [sym_shell_instruction] = STATE(265),
    [sym_maintainer_instruction] = STATE(265),
    [sym_cross_build_instruction] = STATE(265),
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
    STATE(274), 1,
      sym__instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(265), 19,
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
    STATE(274), 1,
      sym__instruction,
    STATE(265), 19,
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
    STATE(243), 1,
      sym__instruction,
    STATE(265), 19,
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
  [310] = 18,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_DOLLAR2,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    STATE(6), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    STATE(120), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(165), 1,
      sym__comment_line,
    STATE(166), 1,
      sym_shell_fragment,
    STATE(237), 1,
      sym__anon_comment,
    STATE(241), 1,
      sym_shell_command,
    ACTIONS(113), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(239), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [367] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(120), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(165), 1,
      sym__comment_line,
    STATE(166), 1,
      sym_shell_fragment,
    STATE(237), 1,
      sym__anon_comment,
    ACTIONS(125), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(253), 2,
      sym_string_array,
      sym_shell_command,
  [403] = 11,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(133), 1,
      aux_sym__env_key_token1,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(84), 1,
      sym__imm_expansion,
    STATE(91), 1,
      sym__immediate_expansion,
    ACTIONS(139), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(202), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [439] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(120), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(165), 1,
      sym__comment_line,
    STATE(166), 1,
      sym_shell_fragment,
    STATE(237), 1,
      sym__anon_comment,
    ACTIONS(125), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(235), 2,
      sym_string_array,
      sym_shell_command,
  [475] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(120), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(165), 1,
      sym__comment_line,
    STATE(166), 1,
      sym_shell_fragment,
    STATE(237), 1,
      sym__anon_comment,
    ACTIONS(125), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(238), 2,
      sym_string_array,
      sym_shell_command,
  [511] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(141), 1,
      anon_sym_DOLLAR2,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    ACTIONS(121), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(236), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [541] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(149), 1,
      anon_sym_DOLLAR2,
    ACTIONS(151), 1,
      aux_sym_image_name_token2,
    STATE(12), 1,
      sym_line_continuation,
    STATE(14), 1,
      aux_sym_image_name_repeat1,
    STATE(58), 1,
      sym__immediate_expansion,
    STATE(59), 1,
      sym__imm_expansion,
    ACTIONS(145), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [571] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(155), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(157), 1,
      anon_sym_DOLLAR2,
    ACTIONS(160), 1,
      aux_sym_image_name_token2,
    STATE(58), 1,
      sym__immediate_expansion,
    STATE(59), 1,
      sym__imm_expansion,
    STATE(13), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(153), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [599] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(149), 1,
      anon_sym_DOLLAR2,
    ACTIONS(151), 1,
      aux_sym_image_name_token2,
    ACTIONS(165), 1,
      aux_sym_from_instruction_token2,
    STATE(13), 1,
      aux_sym_image_name_repeat1,
    STATE(14), 1,
      sym_line_continuation,
    STATE(58), 1,
      sym__immediate_expansion,
    STATE(59), 1,
      sym__imm_expansion,
    ACTIONS(163), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [629] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(141), 1,
      anon_sym_DOLLAR2,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    ACTIONS(121), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(227), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [659] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(169), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(171), 1,
      anon_sym_DOLLAR2,
    STATE(16), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(128), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(167), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [688] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_shell_command_repeat1,
    STATE(120), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(165), 1,
      sym__comment_line,
    STATE(178), 1,
      sym_shell_fragment,
    STATE(237), 1,
      sym__anon_comment,
    ACTIONS(125), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [717] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(175), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(177), 1,
      anon_sym_DOLLAR2,
    ACTIONS(179), 1,
      aux_sym_image_tag_token1,
    STATE(18), 1,
      sym_line_continuation,
    STATE(26), 1,
      aux_sym_image_tag_repeat1,
    STATE(89), 1,
      sym__imm_expansion,
    STATE(95), 1,
      sym__immediate_expansion,
    ACTIONS(173), 2,
      anon_sym_LF,
      anon_sym_AT,
  [746] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    ACTIONS(186), 1,
      aux_sym__env_key_token1,
    STATE(84), 1,
      sym__imm_expansion,
    STATE(91), 1,
      sym__immediate_expansion,
    ACTIONS(188), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [773] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_shell_command_repeat1,
    STATE(120), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(165), 1,
      sym__comment_line,
    STATE(237), 1,
      sym__anon_comment,
    STATE(255), 1,
      sym_shell_fragment,
    ACTIONS(125), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [802] = 9,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
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
    ACTIONS(139), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [831] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(141), 1,
      anon_sym_DOLLAR2,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      aux_sym_label_pair_token1,
    STATE(22), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    ACTIONS(121), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [860] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(169), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(171), 1,
      anon_sym_DOLLAR2,
    STATE(23), 1,
      sym_line_continuation,
    STATE(25), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(128), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(195), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [889] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(20), 1,
      aux_sym_shell_command_repeat1,
    STATE(24), 1,
      sym_line_continuation,
    STATE(120), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(165), 1,
      sym__comment_line,
    STATE(237), 1,
      sym__anon_comment,
    STATE(250), 1,
      sym_shell_fragment,
    ACTIONS(125), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [918] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(199), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(202), 1,
      anon_sym_DOLLAR2,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(128), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(197), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(25), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [945] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(207), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(209), 1,
      anon_sym_DOLLAR2,
    ACTIONS(212), 1,
      aux_sym_image_tag_token1,
    STATE(89), 1,
      sym__imm_expansion,
    STATE(95), 1,
      sym__immediate_expansion,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(26), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [972] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(186), 1,
      aux_sym_label_pair_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR2,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(93), 1,
      sym__immediate_expansion,
    ACTIONS(218), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [999] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR2,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(227), 1,
      sym_escape_sequence,
    STATE(28), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(123), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [1027] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      anon_sym_DOLLAR2,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(237), 1,
      sym_escape_sequence,
    STATE(123), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
    STATE(29), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1053] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_DASH_DASH,
    STATE(30), 1,
      sym_line_continuation,
    STATE(52), 1,
      sym_expansion,
    STATE(78), 1,
      sym_param,
    STATE(79), 1,
      aux_sym_add_instruction_repeat1,
    STATE(258), 1,
      sym_path,
  [1081] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(253), 1,
      aux_sym_image_digest_token1,
    STATE(121), 1,
      sym__imm_expansion,
    STATE(135), 1,
      sym__immediate_expansion,
    STATE(31), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1107] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(261), 1,
      anon_sym_DOLLAR2,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(163), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(32), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [1133] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_DASH_DASH,
    STATE(33), 1,
      sym_line_continuation,
    STATE(52), 1,
      sym_expansion,
    STATE(76), 1,
      sym_param,
    STATE(77), 1,
      aux_sym_add_instruction_repeat1,
    STATE(258), 1,
      sym_path,
  [1161] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_DOLLAR,
    ACTIONS(266), 1,
      aux_sym_image_name_token1,
    ACTIONS(268), 1,
      anon_sym_DASH_DASH,
    STATE(12), 1,
      sym_expansion,
    STATE(34), 1,
      sym_line_continuation,
    STATE(57), 1,
      sym_image_name,
    STATE(92), 1,
      sym_param,
    STATE(220), 1,
      sym_image_spec,
  [1189] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR2,
    ACTIONS(225), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(35), 1,
      sym_line_continuation,
    STATE(123), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [1217] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(169), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(171), 1,
      anon_sym_DOLLAR2,
    ACTIONS(272), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(36), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(163), 1,
      sym__immediate_user_name_or_group_fragment,
  [1245] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR2,
    ACTIONS(225), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(37), 1,
      sym_line_continuation,
    STATE(123), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [1273] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(278), 1,
      aux_sym_path_token2,
    ACTIONS(280), 1,
      anon_sym_DOLLAR2,
    STATE(38), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym_path_repeat1,
    STATE(105), 1,
      sym__imm_expansion,
    STATE(113), 1,
      sym__immediate_expansion,
    ACTIONS(276), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1299] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR2,
    ACTIONS(225), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(123), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [1327] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(278), 1,
      aux_sym_path_token2,
    ACTIONS(280), 1,
      anon_sym_DOLLAR2,
    STATE(40), 1,
      sym_line_continuation,
    STATE(41), 1,
      aux_sym_path_repeat1,
    STATE(105), 1,
      sym__imm_expansion,
    STATE(113), 1,
      sym__immediate_expansion,
    ACTIONS(284), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1353] = 7,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(288), 1,
      aux_sym_path_token2,
    ACTIONS(291), 1,
      anon_sym_DOLLAR2,
    STATE(105), 1,
      sym__imm_expansion,
    STATE(113), 1,
      sym__immediate_expansion,
    ACTIONS(286), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(41), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1377] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR2,
    ACTIONS(225), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(42), 1,
      sym_line_continuation,
    STATE(123), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [1405] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(300), 1,
      anon_sym_DOLLAR2,
    ACTIONS(302), 1,
      aux_sym_image_digest_token1,
    STATE(31), 1,
      aux_sym_image_digest_repeat1,
    STATE(43), 1,
      sym_line_continuation,
    STATE(121), 1,
      sym__imm_expansion,
    STATE(135), 1,
      sym__immediate_expansion,
  [1433] = 9,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      anon_sym_DOLLAR2,
    ACTIONS(225), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(123), 1,
      sym__imm_expansion,
    STATE(132), 1,
      sym__immediate_expansion,
  [1461] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(308), 1,
      aux_sym_path_token2,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    STATE(45), 1,
      sym_line_continuation,
    STATE(68), 1,
      aux_sym_path_repeat1,
    STATE(180), 1,
      sym__imm_expansion,
    STATE(199), 1,
      sym__immediate_expansion,
  [1486] = 7,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 1,
      anon_sym_DOLLAR,
    ACTIONS(316), 1,
      aux_sym_expose_port_token1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(49), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(136), 2,
      sym_expansion,
      sym_expose_port,
  [1509] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 1,
      anon_sym_DOLLAR2,
    ACTIONS(322), 1,
      aux_sym_image_alias_token2,
    STATE(47), 1,
      sym_line_continuation,
    STATE(54), 1,
      aux_sym_image_alias_repeat1,
    STATE(147), 1,
      sym__imm_expansion,
    STATE(168), 1,
      sym__immediate_expansion,
  [1534] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      aux_sym_path_token1,
    ACTIONS(326), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(48), 1,
      sym_line_continuation,
    STATE(144), 1,
      sym_path,
    STATE(251), 1,
      sym_string_array,
  [1559] = 6,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 1,
      anon_sym_DOLLAR,
    ACTIONS(333), 1,
      aux_sym_expose_port_token1,
    STATE(49), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(136), 2,
      sym_expansion,
      sym_expose_port,
  [1580] = 7,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(336), 1,
      aux_sym_path_token2,
    ACTIONS(339), 1,
      anon_sym_DOLLAR2,
    ACTIONS(342), 1,
      sym__non_newline_whitespace,
    STATE(158), 1,
      sym__immediate_expansion,
    STATE(187), 1,
      sym__imm_expansion,
    STATE(50), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1603] = 7,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(349), 1,
      anon_sym_DOLLAR2,
    STATE(151), 1,
      sym__immediate_expansion,
    STATE(174), 1,
      sym__imm_expansion,
    STATE(51), 2,
      sym_line_continuation,
      aux_sym__stopsignal_value_repeat1,
  [1626] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(306), 1,
      sym__non_newline_whitespace,
    ACTIONS(352), 1,
      aux_sym_path_token2,
    ACTIONS(354), 1,
      anon_sym_DOLLAR2,
    STATE(52), 1,
      sym_line_continuation,
    STATE(67), 1,
      aux_sym_path_repeat1,
    STATE(158), 1,
      sym__immediate_expansion,
    STATE(187), 1,
      sym__imm_expansion,
  [1651] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(53), 1,
      sym_line_continuation,
    ACTIONS(358), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(356), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1668] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(320), 1,
      anon_sym_DOLLAR2,
    ACTIONS(322), 1,
      aux_sym_image_alias_token2,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(54), 1,
      sym_line_continuation,
    STATE(60), 1,
      aux_sym_image_alias_repeat1,
    STATE(147), 1,
      sym__imm_expansion,
    STATE(168), 1,
      sym__immediate_expansion,
  [1693] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(364), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(362), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1710] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(368), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(366), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1727] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(372), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(376), 1,
      anon_sym_AT,
    STATE(57), 1,
      sym_line_continuation,
    STATE(107), 1,
      sym_image_tag,
    STATE(207), 1,
      sym_image_digest,
  [1752] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(58), 1,
      sym_line_continuation,
    ACTIONS(380), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(378), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1769] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(59), 1,
      sym_line_continuation,
    ACTIONS(384), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(382), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1786] = 7,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_DOLLAR2,
    ACTIONS(391), 1,
      aux_sym_image_alias_token2,
    STATE(147), 1,
      sym__imm_expansion,
    STATE(168), 1,
      sym__immediate_expansion,
    STATE(60), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1809] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(394), 1,
      anon_sym_NONE,
    ACTIONS(396), 1,
      anon_sym_DASH_DASH,
    STATE(61), 1,
      sym_line_continuation,
    STATE(90), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(231), 1,
      sym_param,
    STATE(240), 1,
      sym_cmd_instruction,
  [1834] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(169), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(171), 1,
      anon_sym_DOLLAR2,
    STATE(36), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(62), 1,
      sym_line_continuation,
    STATE(110), 1,
      sym__imm_expansion,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(163), 1,
      sym__immediate_user_name_or_group_fragment,
  [1859] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(63), 1,
      sym_line_continuation,
    ACTIONS(400), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(398), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1876] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(404), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(406), 1,
      anon_sym_DOLLAR2,
    STATE(51), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(64), 1,
      sym_line_continuation,
    STATE(151), 1,
      sym__immediate_expansion,
    STATE(174), 1,
      sym__imm_expansion,
  [1901] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(410), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym__comment_line,
    STATE(237), 1,
      sym__anon_comment,
    ACTIONS(408), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(65), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
  [1922] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(404), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(406), 1,
      anon_sym_DOLLAR2,
    ACTIONS(413), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(66), 1,
      sym_line_continuation,
    STATE(151), 1,
      sym__immediate_expansion,
    STATE(174), 1,
      sym__imm_expansion,
  [1947] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(352), 1,
      aux_sym_path_token2,
    ACTIONS(354), 1,
      anon_sym_DOLLAR2,
    ACTIONS(415), 1,
      sym__non_newline_whitespace,
    STATE(50), 1,
      aux_sym_path_repeat1,
    STATE(67), 1,
      sym_line_continuation,
    STATE(158), 1,
      sym__immediate_expansion,
    STATE(187), 1,
      sym__imm_expansion,
  [1972] = 8,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(308), 1,
      aux_sym_path_token2,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    ACTIONS(415), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym_line_continuation,
    STATE(69), 1,
      aux_sym_path_repeat1,
    STATE(180), 1,
      sym__imm_expansion,
    STATE(199), 1,
      sym__immediate_expansion,
  [1997] = 7,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(417), 1,
      aux_sym_path_token2,
    ACTIONS(420), 1,
      anon_sym_DOLLAR2,
    STATE(180), 1,
      sym__imm_expansion,
    STATE(199), 1,
      sym__immediate_expansion,
    STATE(69), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2020] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(70), 1,
      sym_line_continuation,
    ACTIONS(400), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(398), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2036] = 5,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym_line_continuation,
    ACTIONS(425), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(427), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2054] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(429), 1,
      anon_sym_DOLLAR,
    ACTIONS(431), 1,
      aux_sym_expose_port_token1,
    STATE(46), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(72), 1,
      sym_line_continuation,
    STATE(136), 2,
      sym_expansion,
      sym_expose_port,
  [2074] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      aux_sym__env_key_token1,
    STATE(73), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_env_instruction_repeat1,
    STATE(214), 1,
      sym_env_pair,
    STATE(217), 1,
      sym__env_key,
    STATE(252), 1,
      sym__spaced_env_pair,
  [2096] = 7,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(437), 1,
      aux_sym__env_key_token1,
    STATE(74), 1,
      sym_line_continuation,
    STATE(100), 1,
      aux_sym_env_instruction_repeat1,
    STATE(214), 1,
      sym_env_pair,
    STATE(277), 1,
      sym__env_key,
  [2118] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(358), 1,
      aux_sym__env_key_token1,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(356), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2134] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(76), 1,
      sym_line_continuation,
    STATE(94), 1,
      aux_sym_add_instruction_repeat1,
    STATE(258), 1,
      sym_path,
  [2156] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(324), 1,
      aux_sym_path_token1,
    ACTIONS(326), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(77), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_add_instruction_repeat1,
    STATE(212), 1,
      sym_path,
  [2178] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      aux_sym_path_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(78), 1,
      sym_line_continuation,
    STATE(97), 1,
      aux_sym_add_instruction_repeat1,
    STATE(258), 1,
      sym_path,
  [2200] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(324), 1,
      aux_sym_path_token1,
    ACTIONS(326), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(79), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_add_instruction_repeat1,
    STATE(213), 1,
      sym_path,
  [2222] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      aux_sym__env_key_token1,
    STATE(80), 1,
      sym_line_continuation,
    ACTIONS(362), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2238] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(358), 1,
      aux_sym_label_pair_token1,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(356), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2254] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      aux_sym_label_pair_token1,
    STATE(82), 1,
      sym_line_continuation,
    ACTIONS(362), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2270] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      aux_sym__env_key_token1,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(398), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2286] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(384), 1,
      aux_sym__env_key_token1,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(382), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2302] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      aux_sym_label_pair_token1,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(398), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2318] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(384), 1,
      aux_sym_label_pair_token1,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(382), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2334] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(358), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(356), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2350] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(88), 1,
      sym_line_continuation,
    ACTIONS(364), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(362), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2366] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(89), 1,
      sym_line_continuation,
    ACTIONS(384), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(382), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2382] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(396), 1,
      anon_sym_DASH_DASH,
    STATE(90), 1,
      sym_line_continuation,
    STATE(101), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(231), 1,
      sym_param,
    STATE(271), 1,
      sym_cmd_instruction,
  [2404] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      aux_sym__env_key_token1,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(439), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2420] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(264), 1,
      anon_sym_DOLLAR,
    ACTIONS(266), 1,
      aux_sym_image_name_token1,
    STATE(12), 1,
      sym_expansion,
    STATE(57), 1,
      sym_image_name,
    STATE(92), 1,
      sym_line_continuation,
    STATE(208), 1,
      sym_image_spec,
  [2442] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      aux_sym_label_pair_token1,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(439), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2458] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(324), 1,
      aux_sym_path_token1,
    ACTIONS(326), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(94), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_add_instruction_repeat1,
    STATE(229), 1,
      sym_path,
  [2480] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(445), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(443), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2496] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      aux_sym_path_token1,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    STATE(52), 1,
      sym_expansion,
    STATE(258), 1,
      sym_path,
    STATE(96), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [2516] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(324), 1,
      aux_sym_path_token1,
    ACTIONS(326), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(96), 1,
      aux_sym_add_instruction_repeat1,
    STATE(97), 1,
      sym_line_continuation,
    STATE(228), 1,
      sym_path,
  [2538] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(177), 1,
      anon_sym_DOLLAR2,
    ACTIONS(179), 1,
      aux_sym_image_tag_token1,
    STATE(18), 1,
      aux_sym_image_tag_repeat1,
    STATE(89), 1,
      sym__imm_expansion,
    STATE(95), 1,
      sym__immediate_expansion,
    STATE(98), 1,
      sym_line_continuation,
  [2560] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(300), 1,
      anon_sym_DOLLAR2,
    ACTIONS(302), 1,
      aux_sym_image_digest_token1,
    STATE(43), 1,
      aux_sym_image_digest_repeat1,
    STATE(99), 1,
      sym_line_continuation,
    STATE(121), 1,
      sym__imm_expansion,
    STATE(135), 1,
      sym__immediate_expansion,
  [2582] = 6,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(455), 1,
      aux_sym__env_key_token1,
    STATE(214), 1,
      sym_env_pair,
    STATE(277), 1,
      sym__env_key,
    STATE(100), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2602] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(458), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(460), 1,
      anon_sym_DASH_DASH,
    STATE(231), 1,
      sym_param,
    STATE(101), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [2619] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(358), 1,
      aux_sym_from_instruction_token2,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(356), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2634] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(398), 1,
      anon_sym_DOLLAR2,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(400), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2649] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(463), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(465), 1,
      anon_sym_DOLLAR,
    STATE(66), 1,
      sym_expansion,
    STATE(104), 1,
      sym_line_continuation,
    STATE(242), 1,
      sym__stopsignal_value,
  [2668] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(382), 1,
      anon_sym_DOLLAR2,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(384), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2683] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      aux_sym_image_alias_token1,
    STATE(47), 1,
      sym_expansion,
    STATE(106), 1,
      sym_line_continuation,
    STATE(264), 1,
      sym_image_alias,
  [2702] = 6,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      aux_sym_from_instruction_token2,
    STATE(107), 1,
      sym_line_continuation,
    STATE(218), 1,
      sym_image_digest,
  [2721] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(362), 1,
      anon_sym_DOLLAR2,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(364), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2736] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(366), 1,
      anon_sym_DOLLAR2,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(368), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2751] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(382), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2764] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(398), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2777] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      anon_sym_DOLLAR2,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(358), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2792] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(477), 1,
      anon_sym_DOLLAR2,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(475), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2807] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(362), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2820] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(366), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2833] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(356), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2846] = 4,
    ACTIONS(479), 1,
      anon_sym_LF,
    ACTIONS(484), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(481), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(117), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
  [2861] = 5,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      aux_sym_label_pair_token1,
    STATE(224), 1,
      sym_label_pair,
    STATE(118), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2878] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(491), 1,
      aux_sym_path_token1,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_expansion,
    STATE(119), 1,
      sym_line_continuation,
    STATE(246), 1,
      sym_path,
  [2897] = 5,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_BSLASH_LF,
    STATE(117), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(497), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2914] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(384), 1,
      aux_sym_from_instruction_token2,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(382), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2929] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      aux_sym_from_instruction_token2,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(398), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2944] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(123), 1,
      sym_line_continuation,
    ACTIONS(382), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(384), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2959] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(398), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(400), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2974] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(324), 1,
      aux_sym_path_token1,
    ACTIONS(326), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(125), 1,
      sym_line_continuation,
    STATE(203), 1,
      sym_path,
  [2993] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      aux_sym_from_instruction_token2,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(362), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3008] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(501), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3021] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(503), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3034] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(362), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(364), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3049] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(356), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(358), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3064] = 6,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      aux_sym_label_pair_token1,
    STATE(118), 1,
      aux_sym_label_instruction_repeat1,
    STATE(131), 1,
      sym_line_continuation,
    STATE(224), 1,
      sym_label_pair,
  [3083] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(509), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(511), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3098] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(469), 1,
      aux_sym_image_alias_token1,
    STATE(47), 1,
      sym_expansion,
    STATE(133), 1,
      sym_line_continuation,
    STATE(249), 1,
      sym_image_alias,
  [3117] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(513), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(515), 1,
      anon_sym_DOLLAR,
    STATE(16), 1,
      sym_expansion,
    STATE(134), 1,
      sym_line_continuation,
    STATE(226), 1,
      sym__user_name_or_group,
  [3136] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(519), 1,
      aux_sym_from_instruction_token2,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(517), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3151] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(521), 1,
      anon_sym_LF,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(523), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3165] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      sym_variable,
    STATE(137), 1,
      sym_line_continuation,
    STATE(197), 1,
      sym__expansion_body,
  [3181] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    ACTIONS(531), 1,
      sym_variable,
    STATE(103), 1,
      sym__expansion_body,
    STATE(138), 1,
      sym_line_continuation,
  [3197] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(533), 1,
      aux_sym_label_pair_token1,
    STATE(131), 1,
      aux_sym_label_instruction_repeat1,
    STATE(139), 1,
      sym_line_continuation,
    STATE(224), 1,
      sym_label_pair,
  [3213] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      sym_variable,
    STATE(111), 1,
      sym__expansion_body,
    STATE(140), 1,
      sym_line_continuation,
  [3229] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
    ACTIONS(541), 1,
      sym_variable,
    STATE(141), 1,
      sym_line_continuation,
    STATE(185), 1,
      sym__expansion_body,
  [3245] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    ACTIONS(531), 1,
      sym_variable,
    STATE(109), 1,
      sym__expansion_body,
    STATE(142), 1,
      sym_line_continuation,
  [3261] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 1,
      sym_variable,
    STATE(143), 1,
      sym_line_continuation,
    STATE(179), 1,
      sym__expansion_body,
  [3277] = 5,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      sym__non_newline_whitespace,
    STATE(144), 1,
      sym_line_continuation,
    STATE(153), 1,
      aux_sym_volume_instruction_repeat1,
  [3293] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(398), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3305] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      sym_line_continuation,
    STATE(177), 1,
      aux_sym_string_array_repeat1,
  [3321] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(382), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3333] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      sym_variable,
    STATE(115), 1,
      sym__expansion_body,
    STATE(148), 1,
      sym_line_continuation,
  [3349] = 4,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      anon_sym_BSLASH_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(149), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [3363] = 5,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(562), 1,
      anon_sym_BSLASH_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(149), 1,
      aux_sym_shell_command_repeat2,
    STATE(150), 1,
      sym_line_continuation,
  [3379] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(564), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3391] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(358), 1,
      aux_sym_path_token2,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(356), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3405] = 5,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(549), 1,
      sym__non_newline_whitespace,
    ACTIONS(566), 1,
      anon_sym_LF,
    STATE(153), 1,
      sym_line_continuation,
    STATE(160), 1,
      aux_sym_volume_instruction_repeat1,
  [3421] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_variable,
    STATE(154), 1,
      sym_line_continuation,
    STATE(173), 1,
      sym__expansion_body,
  [3437] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 1,
      sym_variable,
    STATE(155), 1,
      sym_line_continuation,
    STATE(175), 1,
      sym__expansion_body,
  [3453] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(356), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3465] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
    ACTIONS(574), 1,
      sym_variable,
    STATE(70), 1,
      sym__expansion_body,
    STATE(157), 1,
      sym_line_continuation,
  [3481] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(475), 1,
      aux_sym_path_token2,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(477), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3495] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(366), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3507] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 1,
      sym__non_newline_whitespace,
    STATE(160), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [3521] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(570), 1,
      sym_variable,
    STATE(161), 1,
      sym_line_continuation,
    STATE(169), 1,
      sym__expansion_body,
  [3537] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(362), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3549] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(581), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3561] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(356), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3573] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(583), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3585] = 5,
    ACTIONS(562), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(585), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(166), 1,
      sym_line_continuation,
    STATE(183), 1,
      aux_sym_shell_command_repeat2,
  [3601] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(587), 1,
      anon_sym_LF,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(589), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3615] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(591), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3627] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(366), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3639] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(170), 1,
      sym_line_continuation,
    ACTIONS(362), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3651] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(593), 1,
      anon_sym_RBRACK,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      sym_line_continuation,
    STATE(191), 1,
      sym_double_quoted_string,
  [3667] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(358), 1,
      aux_sym_path_token2,
    STATE(172), 1,
      sym_line_continuation,
    ACTIONS(356), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3681] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(398), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3693] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(174), 1,
      sym_line_continuation,
    ACTIONS(382), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3705] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(368), 1,
      aux_sym_path_token2,
    STATE(175), 1,
      sym_line_continuation,
    ACTIONS(366), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3719] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      aux_sym_path_token2,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(362), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3733] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    STATE(177), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3747] = 5,
    ACTIONS(562), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(602), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(150), 1,
      aux_sym_shell_command_repeat2,
    STATE(178), 1,
      sym_line_continuation,
  [3763] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      aux_sym_path_token2,
    STATE(179), 1,
      sym_line_continuation,
    ACTIONS(398), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3777] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(384), 1,
      aux_sym_path_token2,
    STATE(180), 1,
      sym_line_continuation,
    ACTIONS(382), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3791] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(606), 1,
      sym_variable,
    STATE(56), 1,
      sym__expansion_body,
    STATE(181), 1,
      sym_line_continuation,
  [3807] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(608), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3819] = 5,
    ACTIONS(562), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(602), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_required_line_continuation,
    STATE(149), 1,
      aux_sym_shell_command_repeat2,
    STATE(183), 1,
      sym_line_continuation,
  [3835] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(362), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(364), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3849] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(366), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(368), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3863] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      sym_variable,
    STATE(186), 1,
      sym_line_continuation,
    STATE(190), 1,
      sym__expansion_body,
  [3879] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(384), 1,
      aux_sym_path_token2,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(382), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3893] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(610), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3905] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(614), 1,
      sym_variable,
    STATE(122), 1,
      sym__expansion_body,
    STATE(189), 1,
      sym_line_continuation,
  [3921] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      aux_sym_path_token2,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(398), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3935] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_string_array_repeat1,
    STATE(191), 1,
      sym_line_continuation,
  [3951] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(620), 1,
      sym_variable,
    STATE(159), 1,
      sym__expansion_body,
    STATE(192), 1,
      sym_line_continuation,
  [3967] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(624), 1,
      sym_variable,
    STATE(124), 1,
      sym__expansion_body,
    STATE(193), 1,
      sym_line_continuation,
  [3983] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
    ACTIONS(628), 1,
      sym_variable,
    STATE(85), 1,
      sym__expansion_body,
    STATE(194), 1,
      sym_line_continuation,
  [3999] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(358), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4013] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(364), 1,
      aux_sym_path_token2,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(362), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4027] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(368), 1,
      aux_sym_path_token2,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(366), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4041] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
    ACTIONS(632), 1,
      sym_variable,
    STATE(83), 1,
      sym__expansion_body,
    STATE(198), 1,
      sym_line_continuation,
  [4057] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(475), 1,
      aux_sym_path_token2,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(477), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4071] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(606), 1,
      sym_variable,
    STATE(63), 1,
      sym__expansion_body,
    STATE(200), 1,
      sym_line_continuation,
  [4087] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    ACTIONS(620), 1,
      sym_variable,
    STATE(145), 1,
      sym__expansion_body,
    STATE(201), 1,
      sym_line_continuation,
  [4103] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(636), 1,
      aux_sym__env_key_token1,
    STATE(202), 1,
      sym_line_continuation,
  [4116] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(576), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [4127] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(638), 1,
      aux_sym_path_token1,
    ACTIONS(640), 1,
      anon_sym_DOLLAR,
    STATE(204), 1,
      sym_line_continuation,
  [4140] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      aux_sym_label_pair_token1,
    STATE(205), 1,
      sym_line_continuation,
  [4153] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(648), 1,
      aux_sym__env_key_token1,
    STATE(206), 1,
      sym_line_continuation,
  [4166] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      anon_sym_LF,
    ACTIONS(652), 1,
      aux_sym_from_instruction_token2,
    STATE(207), 1,
      sym_line_continuation,
  [4179] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      aux_sym_from_instruction_token2,
    STATE(208), 1,
      sym_line_continuation,
  [4192] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(640), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4203] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_LF,
    ACTIONS(644), 1,
      aux_sym__env_key_token1,
    STATE(210), 1,
      sym_line_continuation,
  [4216] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(658), 1,
      aux_sym_path_token1,
    ACTIONS(660), 1,
      anon_sym_DOLLAR,
    STATE(211), 1,
      sym_line_continuation,
  [4229] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(662), 1,
      anon_sym_LF,
    ACTIONS(664), 1,
      sym__non_newline_whitespace,
    STATE(212), 1,
      sym_line_continuation,
  [4242] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      sym__non_newline_whitespace,
    ACTIONS(666), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_line_continuation,
  [4255] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      aux_sym__env_key_token1,
    STATE(214), 1,
      sym_line_continuation,
  [4268] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(648), 1,
      aux_sym_label_pair_token1,
    STATE(215), 1,
      sym_line_continuation,
  [4281] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(672), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [4292] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(674), 1,
      anon_sym_EQ,
    ACTIONS(676), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(217), 1,
      sym_line_continuation,
  [4305] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(680), 1,
      aux_sym_from_instruction_token2,
    STATE(218), 1,
      sym_line_continuation,
  [4318] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(219), 1,
      sym_line_continuation,
    ACTIONS(646), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4329] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 1,
      aux_sym_from_instruction_token2,
    STATE(220), 1,
      sym_line_continuation,
  [4342] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(595), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      sym_line_continuation,
    STATE(223), 1,
      sym_double_quoted_string,
  [4355] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    STATE(222), 1,
      sym_line_continuation,
    STATE(268), 1,
      sym_string_array,
  [4368] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(223), 1,
      sym_line_continuation,
    ACTIONS(600), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4379] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(686), 1,
      anon_sym_LF,
    ACTIONS(688), 1,
      aux_sym_label_pair_token1,
    STATE(224), 1,
      sym_line_continuation,
  [4392] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(225), 1,
      sym_line_continuation,
    ACTIONS(642), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4403] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(692), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym_line_continuation,
  [4416] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(696), 1,
      aux_sym_label_pair_token1,
    STATE(227), 1,
      sym_line_continuation,
  [4429] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      sym__non_newline_whitespace,
    ACTIONS(698), 1,
      anon_sym_LF,
    STATE(228), 1,
      sym_line_continuation,
  [4442] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      sym__non_newline_whitespace,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(229), 1,
      sym_line_continuation,
  [4455] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(638), 1,
      aux_sym_image_name_token1,
    ACTIONS(640), 1,
      anon_sym_DOLLAR,
    STATE(230), 1,
      sym_line_continuation,
  [4468] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(231), 1,
      sym_line_continuation,
    ACTIONS(702), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4479] = 4,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 1,
      anon_sym_EQ,
    STATE(232), 1,
      sym_line_continuation,
  [4492] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(708), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [4502] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_line_continuation,
  [4512] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(712), 1,
      anon_sym_LF,
    STATE(235), 1,
      sym_line_continuation,
  [4522] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      anon_sym_LF,
    STATE(236), 1,
      sym_line_continuation,
  [4532] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_line_continuation,
  [4542] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      anon_sym_LF,
    STATE(238), 1,
      sym_line_continuation,
  [4552] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      anon_sym_LF,
    STATE(239), 1,
      sym_line_continuation,
  [4562] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_LF,
    STATE(240), 1,
      sym_line_continuation,
  [4572] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(724), 1,
      anon_sym_LF,
    STATE(241), 1,
      sym_line_continuation,
  [4582] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      anon_sym_LF,
    STATE(242), 1,
      sym_line_continuation,
  [4592] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(728), 1,
      anon_sym_LF,
    STATE(243), 1,
      sym_line_continuation,
  [4602] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      anon_sym_LF,
    STATE(244), 1,
      sym_line_continuation,
  [4612] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_EQ,
    STATE(245), 1,
      sym_line_continuation,
  [4622] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      anon_sym_LF,
    STATE(246), 1,
      sym_line_continuation,
  [4632] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      aux_sym_arg_instruction_token2,
    STATE(247), 1,
      sym_line_continuation,
  [4642] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(248), 1,
      sym_line_continuation,
  [4652] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      anon_sym_LF,
    STATE(249), 1,
      sym_line_continuation,
  [4662] = 3,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(742), 1,
      anon_sym_BSLASH_LF,
    STATE(250), 1,
      sym_line_continuation,
  [4672] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_LF,
    STATE(251), 1,
      sym_line_continuation,
  [4682] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      anon_sym_LF,
    STATE(252), 1,
      sym_line_continuation,
  [4692] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(748), 1,
      anon_sym_LF,
    STATE(253), 1,
      sym_line_continuation,
  [4702] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LF,
    STATE(254), 1,
      sym_line_continuation,
  [4712] = 3,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      anon_sym_BSLASH_LF,
    STATE(255), 1,
      sym_line_continuation,
  [4722] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      sym_line_continuation,
  [4732] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      aux_sym_param_token2,
    STATE(257), 1,
      sym_line_continuation,
  [4742] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      sym__non_newline_whitespace,
    STATE(258), 1,
      sym_line_continuation,
  [4752] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      aux_sym_param_token1,
    STATE(259), 1,
      sym_line_continuation,
  [4762] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      aux_sym_param_token1,
    STATE(260), 1,
      sym_line_continuation,
  [4772] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(672), 1,
      anon_sym_EQ,
    STATE(261), 1,
      sym_line_continuation,
  [4782] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      sym_line_continuation,
  [4792] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      aux_sym_param_token2,
    STATE(263), 1,
      sym_line_continuation,
  [4802] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      anon_sym_LF,
    STATE(264), 1,
      sym_line_continuation,
  [4812] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_LF,
    STATE(265), 1,
      sym_line_continuation,
  [4822] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      aux_sym_param_token2,
    STATE(266), 1,
      sym_line_continuation,
  [4832] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      sym_line_continuation,
  [4842] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      anon_sym_LF,
    STATE(268), 1,
      sym_line_continuation,
  [4852] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      sym_line_continuation,
  [4862] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    STATE(270), 1,
      sym_line_continuation,
  [4872] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_line_continuation,
  [4882] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      anon_sym_LF,
    STATE(272), 1,
      sym_line_continuation,
  [4892] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      sym_line_continuation,
  [4902] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_LF,
    STATE(274), 1,
      sym_line_continuation,
  [4912] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(275), 1,
      sym_line_continuation,
  [4922] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_line_continuation,
  [4932] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(674), 1,
      anon_sym_EQ,
    STATE(277), 1,
      sym_line_continuation,
  [4942] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LF,
    STATE(278), 1,
      sym_line_continuation,
  [4952] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      sym_line_continuation,
  [4962] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      anon_sym_LF,
    STATE(280), 1,
      sym_line_continuation,
  [4972] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_line_continuation,
  [4982] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(804), 1,
      aux_sym__expansion_body_token1,
    STATE(282), 1,
      sym_line_continuation,
  [4992] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(283), 1,
      sym_line_continuation,
  [5002] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(808), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(284), 1,
      sym_line_continuation,
  [5012] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_line_continuation,
  [5022] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(812), 1,
      anon_sym_EQ,
    STATE(286), 1,
      sym_line_continuation,
  [5032] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_line_continuation,
  [5042] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(288), 1,
      sym_line_continuation,
  [5052] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(818), 1,
      aux_sym__expansion_body_token1,
    STATE(289), 1,
      sym_line_continuation,
  [5062] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(820), 1,
      anon_sym_EQ,
    STATE(290), 1,
      sym_line_continuation,
  [5072] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      aux_sym__expansion_body_token1,
    STATE(291), 1,
      sym_line_continuation,
  [5082] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_EQ,
    STATE(292), 1,
      sym_line_continuation,
  [5092] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      aux_sym__expansion_body_token1,
    STATE(293), 1,
      sym_line_continuation,
  [5102] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      aux_sym__expansion_body_token1,
    STATE(294), 1,
      sym_line_continuation,
  [5112] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      aux_sym__expansion_body_token1,
    STATE(295), 1,
      sym_line_continuation,
  [5122] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      aux_sym__expansion_body_token1,
    STATE(296), 1,
      sym_line_continuation,
  [5132] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(834), 1,
      aux_sym__expansion_body_token1,
    STATE(297), 1,
      sym_line_continuation,
  [5142] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      aux_sym__expansion_body_token1,
    STATE(298), 1,
      sym_line_continuation,
  [5152] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(838), 1,
      aux_sym__expansion_body_token1,
    STATE(299), 1,
      sym_line_continuation,
  [5162] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      aux_sym__expansion_body_token1,
    STATE(300), 1,
      sym_line_continuation,
  [5172] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(842), 1,
      aux_sym__expansion_body_token1,
    STATE(301), 1,
      sym_line_continuation,
  [5182] = 3,
    ACTIONS(135), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      aux_sym__expansion_body_token1,
    STATE(302), 1,
      sym_line_continuation,
  [5192] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      aux_sym_param_token1,
    STATE(303), 1,
      sym_line_continuation,
  [5202] = 1,
    ACTIONS(848), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 280,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 367,
  [SMALL_STATE(8)] = 403,
  [SMALL_STATE(9)] = 439,
  [SMALL_STATE(10)] = 475,
  [SMALL_STATE(11)] = 511,
  [SMALL_STATE(12)] = 541,
  [SMALL_STATE(13)] = 571,
  [SMALL_STATE(14)] = 599,
  [SMALL_STATE(15)] = 629,
  [SMALL_STATE(16)] = 659,
  [SMALL_STATE(17)] = 688,
  [SMALL_STATE(18)] = 717,
  [SMALL_STATE(19)] = 746,
  [SMALL_STATE(20)] = 773,
  [SMALL_STATE(21)] = 802,
  [SMALL_STATE(22)] = 831,
  [SMALL_STATE(23)] = 860,
  [SMALL_STATE(24)] = 889,
  [SMALL_STATE(25)] = 918,
  [SMALL_STATE(26)] = 945,
  [SMALL_STATE(27)] = 972,
  [SMALL_STATE(28)] = 999,
  [SMALL_STATE(29)] = 1027,
  [SMALL_STATE(30)] = 1053,
  [SMALL_STATE(31)] = 1081,
  [SMALL_STATE(32)] = 1107,
  [SMALL_STATE(33)] = 1133,
  [SMALL_STATE(34)] = 1161,
  [SMALL_STATE(35)] = 1189,
  [SMALL_STATE(36)] = 1217,
  [SMALL_STATE(37)] = 1245,
  [SMALL_STATE(38)] = 1273,
  [SMALL_STATE(39)] = 1299,
  [SMALL_STATE(40)] = 1327,
  [SMALL_STATE(41)] = 1353,
  [SMALL_STATE(42)] = 1377,
  [SMALL_STATE(43)] = 1405,
  [SMALL_STATE(44)] = 1433,
  [SMALL_STATE(45)] = 1461,
  [SMALL_STATE(46)] = 1486,
  [SMALL_STATE(47)] = 1509,
  [SMALL_STATE(48)] = 1534,
  [SMALL_STATE(49)] = 1559,
  [SMALL_STATE(50)] = 1580,
  [SMALL_STATE(51)] = 1603,
  [SMALL_STATE(52)] = 1626,
  [SMALL_STATE(53)] = 1651,
  [SMALL_STATE(54)] = 1668,
  [SMALL_STATE(55)] = 1693,
  [SMALL_STATE(56)] = 1710,
  [SMALL_STATE(57)] = 1727,
  [SMALL_STATE(58)] = 1752,
  [SMALL_STATE(59)] = 1769,
  [SMALL_STATE(60)] = 1786,
  [SMALL_STATE(61)] = 1809,
  [SMALL_STATE(62)] = 1834,
  [SMALL_STATE(63)] = 1859,
  [SMALL_STATE(64)] = 1876,
  [SMALL_STATE(65)] = 1901,
  [SMALL_STATE(66)] = 1922,
  [SMALL_STATE(67)] = 1947,
  [SMALL_STATE(68)] = 1972,
  [SMALL_STATE(69)] = 1997,
  [SMALL_STATE(70)] = 2020,
  [SMALL_STATE(71)] = 2036,
  [SMALL_STATE(72)] = 2054,
  [SMALL_STATE(73)] = 2074,
  [SMALL_STATE(74)] = 2096,
  [SMALL_STATE(75)] = 2118,
  [SMALL_STATE(76)] = 2134,
  [SMALL_STATE(77)] = 2156,
  [SMALL_STATE(78)] = 2178,
  [SMALL_STATE(79)] = 2200,
  [SMALL_STATE(80)] = 2222,
  [SMALL_STATE(81)] = 2238,
  [SMALL_STATE(82)] = 2254,
  [SMALL_STATE(83)] = 2270,
  [SMALL_STATE(84)] = 2286,
  [SMALL_STATE(85)] = 2302,
  [SMALL_STATE(86)] = 2318,
  [SMALL_STATE(87)] = 2334,
  [SMALL_STATE(88)] = 2350,
  [SMALL_STATE(89)] = 2366,
  [SMALL_STATE(90)] = 2382,
  [SMALL_STATE(91)] = 2404,
  [SMALL_STATE(92)] = 2420,
  [SMALL_STATE(93)] = 2442,
  [SMALL_STATE(94)] = 2458,
  [SMALL_STATE(95)] = 2480,
  [SMALL_STATE(96)] = 2496,
  [SMALL_STATE(97)] = 2516,
  [SMALL_STATE(98)] = 2538,
  [SMALL_STATE(99)] = 2560,
  [SMALL_STATE(100)] = 2582,
  [SMALL_STATE(101)] = 2602,
  [SMALL_STATE(102)] = 2619,
  [SMALL_STATE(103)] = 2634,
  [SMALL_STATE(104)] = 2649,
  [SMALL_STATE(105)] = 2668,
  [SMALL_STATE(106)] = 2683,
  [SMALL_STATE(107)] = 2702,
  [SMALL_STATE(108)] = 2721,
  [SMALL_STATE(109)] = 2736,
  [SMALL_STATE(110)] = 2751,
  [SMALL_STATE(111)] = 2764,
  [SMALL_STATE(112)] = 2777,
  [SMALL_STATE(113)] = 2792,
  [SMALL_STATE(114)] = 2807,
  [SMALL_STATE(115)] = 2820,
  [SMALL_STATE(116)] = 2833,
  [SMALL_STATE(117)] = 2846,
  [SMALL_STATE(118)] = 2861,
  [SMALL_STATE(119)] = 2878,
  [SMALL_STATE(120)] = 2897,
  [SMALL_STATE(121)] = 2914,
  [SMALL_STATE(122)] = 2929,
  [SMALL_STATE(123)] = 2944,
  [SMALL_STATE(124)] = 2959,
  [SMALL_STATE(125)] = 2974,
  [SMALL_STATE(126)] = 2993,
  [SMALL_STATE(127)] = 3008,
  [SMALL_STATE(128)] = 3021,
  [SMALL_STATE(129)] = 3034,
  [SMALL_STATE(130)] = 3049,
  [SMALL_STATE(131)] = 3064,
  [SMALL_STATE(132)] = 3083,
  [SMALL_STATE(133)] = 3098,
  [SMALL_STATE(134)] = 3117,
  [SMALL_STATE(135)] = 3136,
  [SMALL_STATE(136)] = 3151,
  [SMALL_STATE(137)] = 3165,
  [SMALL_STATE(138)] = 3181,
  [SMALL_STATE(139)] = 3197,
  [SMALL_STATE(140)] = 3213,
  [SMALL_STATE(141)] = 3229,
  [SMALL_STATE(142)] = 3245,
  [SMALL_STATE(143)] = 3261,
  [SMALL_STATE(144)] = 3277,
  [SMALL_STATE(145)] = 3293,
  [SMALL_STATE(146)] = 3305,
  [SMALL_STATE(147)] = 3321,
  [SMALL_STATE(148)] = 3333,
  [SMALL_STATE(149)] = 3349,
  [SMALL_STATE(150)] = 3363,
  [SMALL_STATE(151)] = 3379,
  [SMALL_STATE(152)] = 3391,
  [SMALL_STATE(153)] = 3405,
  [SMALL_STATE(154)] = 3421,
  [SMALL_STATE(155)] = 3437,
  [SMALL_STATE(156)] = 3453,
  [SMALL_STATE(157)] = 3465,
  [SMALL_STATE(158)] = 3481,
  [SMALL_STATE(159)] = 3495,
  [SMALL_STATE(160)] = 3507,
  [SMALL_STATE(161)] = 3521,
  [SMALL_STATE(162)] = 3537,
  [SMALL_STATE(163)] = 3549,
  [SMALL_STATE(164)] = 3561,
  [SMALL_STATE(165)] = 3573,
  [SMALL_STATE(166)] = 3585,
  [SMALL_STATE(167)] = 3601,
  [SMALL_STATE(168)] = 3615,
  [SMALL_STATE(169)] = 3627,
  [SMALL_STATE(170)] = 3639,
  [SMALL_STATE(171)] = 3651,
  [SMALL_STATE(172)] = 3667,
  [SMALL_STATE(173)] = 3681,
  [SMALL_STATE(174)] = 3693,
  [SMALL_STATE(175)] = 3705,
  [SMALL_STATE(176)] = 3719,
  [SMALL_STATE(177)] = 3733,
  [SMALL_STATE(178)] = 3747,
  [SMALL_STATE(179)] = 3763,
  [SMALL_STATE(180)] = 3777,
  [SMALL_STATE(181)] = 3791,
  [SMALL_STATE(182)] = 3807,
  [SMALL_STATE(183)] = 3819,
  [SMALL_STATE(184)] = 3835,
  [SMALL_STATE(185)] = 3849,
  [SMALL_STATE(186)] = 3863,
  [SMALL_STATE(187)] = 3879,
  [SMALL_STATE(188)] = 3893,
  [SMALL_STATE(189)] = 3905,
  [SMALL_STATE(190)] = 3921,
  [SMALL_STATE(191)] = 3935,
  [SMALL_STATE(192)] = 3951,
  [SMALL_STATE(193)] = 3967,
  [SMALL_STATE(194)] = 3983,
  [SMALL_STATE(195)] = 3999,
  [SMALL_STATE(196)] = 4013,
  [SMALL_STATE(197)] = 4027,
  [SMALL_STATE(198)] = 4041,
  [SMALL_STATE(199)] = 4057,
  [SMALL_STATE(200)] = 4071,
  [SMALL_STATE(201)] = 4087,
  [SMALL_STATE(202)] = 4103,
  [SMALL_STATE(203)] = 4116,
  [SMALL_STATE(204)] = 4127,
  [SMALL_STATE(205)] = 4140,
  [SMALL_STATE(206)] = 4153,
  [SMALL_STATE(207)] = 4166,
  [SMALL_STATE(208)] = 4179,
  [SMALL_STATE(209)] = 4192,
  [SMALL_STATE(210)] = 4203,
  [SMALL_STATE(211)] = 4216,
  [SMALL_STATE(212)] = 4229,
  [SMALL_STATE(213)] = 4242,
  [SMALL_STATE(214)] = 4255,
  [SMALL_STATE(215)] = 4268,
  [SMALL_STATE(216)] = 4281,
  [SMALL_STATE(217)] = 4292,
  [SMALL_STATE(218)] = 4305,
  [SMALL_STATE(219)] = 4318,
  [SMALL_STATE(220)] = 4329,
  [SMALL_STATE(221)] = 4342,
  [SMALL_STATE(222)] = 4355,
  [SMALL_STATE(223)] = 4368,
  [SMALL_STATE(224)] = 4379,
  [SMALL_STATE(225)] = 4392,
  [SMALL_STATE(226)] = 4403,
  [SMALL_STATE(227)] = 4416,
  [SMALL_STATE(228)] = 4429,
  [SMALL_STATE(229)] = 4442,
  [SMALL_STATE(230)] = 4455,
  [SMALL_STATE(231)] = 4468,
  [SMALL_STATE(232)] = 4479,
  [SMALL_STATE(233)] = 4492,
  [SMALL_STATE(234)] = 4502,
  [SMALL_STATE(235)] = 4512,
  [SMALL_STATE(236)] = 4522,
  [SMALL_STATE(237)] = 4532,
  [SMALL_STATE(238)] = 4542,
  [SMALL_STATE(239)] = 4552,
  [SMALL_STATE(240)] = 4562,
  [SMALL_STATE(241)] = 4572,
  [SMALL_STATE(242)] = 4582,
  [SMALL_STATE(243)] = 4592,
  [SMALL_STATE(244)] = 4602,
  [SMALL_STATE(245)] = 4612,
  [SMALL_STATE(246)] = 4622,
  [SMALL_STATE(247)] = 4632,
  [SMALL_STATE(248)] = 4642,
  [SMALL_STATE(249)] = 4652,
  [SMALL_STATE(250)] = 4662,
  [SMALL_STATE(251)] = 4672,
  [SMALL_STATE(252)] = 4682,
  [SMALL_STATE(253)] = 4692,
  [SMALL_STATE(254)] = 4702,
  [SMALL_STATE(255)] = 4712,
  [SMALL_STATE(256)] = 4722,
  [SMALL_STATE(257)] = 4732,
  [SMALL_STATE(258)] = 4742,
  [SMALL_STATE(259)] = 4752,
  [SMALL_STATE(260)] = 4762,
  [SMALL_STATE(261)] = 4772,
  [SMALL_STATE(262)] = 4782,
  [SMALL_STATE(263)] = 4792,
  [SMALL_STATE(264)] = 4802,
  [SMALL_STATE(265)] = 4812,
  [SMALL_STATE(266)] = 4822,
  [SMALL_STATE(267)] = 4832,
  [SMALL_STATE(268)] = 4842,
  [SMALL_STATE(269)] = 4852,
  [SMALL_STATE(270)] = 4862,
  [SMALL_STATE(271)] = 4872,
  [SMALL_STATE(272)] = 4882,
  [SMALL_STATE(273)] = 4892,
  [SMALL_STATE(274)] = 4902,
  [SMALL_STATE(275)] = 4912,
  [SMALL_STATE(276)] = 4922,
  [SMALL_STATE(277)] = 4932,
  [SMALL_STATE(278)] = 4942,
  [SMALL_STATE(279)] = 4952,
  [SMALL_STATE(280)] = 4962,
  [SMALL_STATE(281)] = 4972,
  [SMALL_STATE(282)] = 4982,
  [SMALL_STATE(283)] = 4992,
  [SMALL_STATE(284)] = 5002,
  [SMALL_STATE(285)] = 5012,
  [SMALL_STATE(286)] = 5022,
  [SMALL_STATE(287)] = 5032,
  [SMALL_STATE(288)] = 5042,
  [SMALL_STATE(289)] = 5052,
  [SMALL_STATE(290)] = 5062,
  [SMALL_STATE(291)] = 5072,
  [SMALL_STATE(292)] = 5082,
  [SMALL_STATE(293)] = 5092,
  [SMALL_STATE(294)] = 5102,
  [SMALL_STATE(295)] = 5112,
  [SMALL_STATE(296)] = 5122,
  [SMALL_STATE(297)] = 5132,
  [SMALL_STATE(298)] = 5142,
  [SMALL_STATE(299)] = 5152,
  [SMALL_STATE(300)] = 5162,
  [SMALL_STATE(301)] = 5172,
  [SMALL_STATE(302)] = 5182,
  [SMALL_STATE(303)] = 5192,
  [SMALL_STATE(304)] = 5202,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(200),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(58),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(198),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(91),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(127),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(140),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(157),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(95),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(194),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(93),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(193),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(132),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(132),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(189),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(135),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(127),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(140),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 12),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(113),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(138),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(141),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(71),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(158),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(186),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(151),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(154),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(201),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(168),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(248),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(199),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(143),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(52),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(137),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(261),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(260),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(117),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(245),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(188),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(125),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(221),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 14),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 14),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 13),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 11),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 15),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [780] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
