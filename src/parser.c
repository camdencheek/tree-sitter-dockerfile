#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 334
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
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
  anon_sym_mount = 53,
  anon_sym_COMMA = 54,
  aux_sym_mount_param_param_token1 = 55,
  aux_sym_image_alias_token1 = 56,
  aux_sym_image_alias_token2 = 57,
  aux_sym_shell_fragment_token1 = 58,
  aux_sym_shell_fragment_token2 = 59,
  aux_sym_shell_fragment_token3 = 60,
  anon_sym_BSLASH_LF = 61,
  anon_sym_POUND = 62,
  anon_sym_LBRACK = 63,
  anon_sym_COMMA2 = 64,
  anon_sym_RBRACK = 65,
  anon_sym_DQUOTE = 66,
  aux_sym_json_string_token1 = 67,
  sym_json_escape_sequence = 68,
  aux_sym_double_quoted_string_token1 = 69,
  anon_sym_BSLASH = 70,
  anon_sym_SQUOTE = 71,
  aux_sym_single_quoted_string_token1 = 72,
  aux_sym_unquoted_string_token1 = 73,
  anon_sym_BSLASH2 = 74,
  sym_double_quoted_escape_sequence = 75,
  sym_single_quoted_escape_sequence = 76,
  sym__non_newline_whitespace = 77,
  sym_comment = 78,
  sym_source_file = 79,
  sym__instruction = 80,
  sym_from_instruction = 81,
  sym_run_instruction = 82,
  sym_cmd_instruction = 83,
  sym_label_instruction = 84,
  sym_expose_instruction = 85,
  sym_env_instruction = 86,
  sym_add_instruction = 87,
  sym_copy_instruction = 88,
  sym_entrypoint_instruction = 89,
  sym_volume_instruction = 90,
  sym_user_instruction = 91,
  sym__user_name_or_group = 92,
  aux_sym__immediate_user_name_or_group = 93,
  sym__immediate_user_name_or_group_fragment = 94,
  sym_workdir_instruction = 95,
  sym_arg_instruction = 96,
  sym_onbuild_instruction = 97,
  sym_stopsignal_instruction = 98,
  sym__stopsignal_value = 99,
  sym_healthcheck_instruction = 100,
  sym_shell_instruction = 101,
  sym_maintainer_instruction = 102,
  sym_cross_build_instruction = 103,
  sym_path = 104,
  sym_expansion = 105,
  sym__immediate_expansion = 106,
  sym__imm_expansion = 107,
  sym__expansion_body = 108,
  sym_env_pair = 109,
  sym__spaced_env_pair = 110,
  sym__env_key = 111,
  sym_expose_port = 112,
  sym_label_pair = 113,
  sym_image_spec = 114,
  sym_image_name = 115,
  sym_image_tag = 116,
  sym_image_digest = 117,
  sym_param = 118,
  sym_mount_param = 119,
  sym_mount_param_param = 120,
  sym_image_alias = 121,
  sym_shell_command = 122,
  sym_shell_fragment = 123,
  sym_line_continuation = 124,
  sym_required_line_continuation = 125,
  sym__comment_line = 126,
  sym__anon_comment = 127,
  sym_json_string_array = 128,
  sym_json_string = 129,
  sym_double_quoted_string = 130,
  sym_single_quoted_string = 131,
  sym_unquoted_string = 132,
  aux_sym_source_file_repeat1 = 133,
  aux_sym_run_instruction_repeat1 = 134,
  aux_sym_label_instruction_repeat1 = 135,
  aux_sym_expose_instruction_repeat1 = 136,
  aux_sym_env_instruction_repeat1 = 137,
  aux_sym_add_instruction_repeat1 = 138,
  aux_sym_volume_instruction_repeat1 = 139,
  aux_sym__user_name_or_group_repeat1 = 140,
  aux_sym__stopsignal_value_repeat1 = 141,
  aux_sym_healthcheck_instruction_repeat1 = 142,
  aux_sym_path_repeat1 = 143,
  aux_sym_image_name_repeat1 = 144,
  aux_sym_image_tag_repeat1 = 145,
  aux_sym_image_digest_repeat1 = 146,
  aux_sym_mount_param_repeat1 = 147,
  aux_sym_image_alias_repeat1 = 148,
  aux_sym_shell_command_repeat1 = 149,
  aux_sym_shell_command_repeat2 = 150,
  aux_sym_shell_fragment_repeat1 = 151,
  aux_sym_json_string_array_repeat1 = 152,
  aux_sym_json_string_repeat1 = 153,
  aux_sym_double_quoted_string_repeat1 = 154,
  aux_sym_single_quoted_string_repeat1 = 155,
  aux_sym_unquoted_string_repeat1 = 156,
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
  [anon_sym_mount] = "mount",
  [anon_sym_COMMA] = ",",
  [aux_sym_mount_param_param_token1] = "mount_param_param_token1",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [aux_sym_image_alias_token2] = "image_alias_token2",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_json_string_token1] = "json_string_token1",
  [sym_json_escape_sequence] = "escape_sequence",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH2] = "\\ ",
  [sym_double_quoted_escape_sequence] = "escape_sequence",
  [sym_single_quoted_escape_sequence] = "escape_sequence",
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
  [sym_mount_param] = "mount_param",
  [sym_mount_param_param] = "mount_param_param",
  [sym_image_alias] = "image_alias",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "line_continuation",
  [sym__comment_line] = "_comment_line",
  [sym__anon_comment] = "comment",
  [sym_json_string_array] = "json_string_array",
  [sym_json_string] = "json_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
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
  [aux_sym_mount_param_repeat1] = "mount_param_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_json_string_array_repeat1] = "json_string_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
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
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mount_param_param_token1] = aux_sym_mount_param_param_token1,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_json_string_token1] = aux_sym_json_string_token1,
  [sym_json_escape_sequence] = sym_json_escape_sequence,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH2] = anon_sym_BSLASH2,
  [sym_double_quoted_escape_sequence] = sym_json_escape_sequence,
  [sym_single_quoted_escape_sequence] = sym_json_escape_sequence,
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
  [sym_mount_param] = sym_mount_param,
  [sym_mount_param_param] = sym_mount_param_param,
  [sym_image_alias] = sym_image_alias,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_line_continuation,
  [sym__comment_line] = sym__comment_line,
  [sym__anon_comment] = sym_comment,
  [sym_json_string_array] = sym_json_string_array,
  [sym_json_string] = sym_json_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
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
  [aux_sym_mount_param_repeat1] = aux_sym_mount_param_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_json_string_array_repeat1] = aux_sym_json_string_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
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
  [anon_sym_mount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mount_param_param_token1] = {
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
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_json_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_escape_sequence] = {
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
  [sym_mount_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
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
  [sym_json_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
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
  [aux_sym_run_instruction_repeat1] = {
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
  [aux_sym_mount_param_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
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
  [aux_sym_json_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
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
  [15] = {.index = 24, .length = 3},
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
  [24] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
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
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '_') ADVANCE(210);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '}') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(246);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(245);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(266);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(244);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '=') ADVANCE(242);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(217);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(199);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 44:
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 55:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 56:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 57:
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 58:
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 59:
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 74:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 91:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 92:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 94:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 103:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 113:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(60);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 153:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 154:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
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
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 160:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '}') ADVANCE(209);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ',') ADVANCE(250);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(138);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(122);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
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
          lookahead == ' ') ADVANCE(270);
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
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(246);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(246);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(246);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(268);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(269);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
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
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 160},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 39},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 38},
  [80] = {.lex_state = 38},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 160},
  [83] = {.lex_state = 25},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 38},
  [95] = {.lex_state = 160},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 38},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 25},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 22},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 38},
  [116] = {.lex_state = 38},
  [117] = {.lex_state = 38},
  [118] = {.lex_state = 54},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 18},
  [122] = {.lex_state = 32},
  [123] = {.lex_state = 38},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 40},
  [128] = {.lex_state = 32},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 38},
  [133] = {.lex_state = 160},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 42},
  [136] = {.lex_state = 43},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 42},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 32},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 50},
  [157] = {.lex_state = 50},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 50},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 50},
  [163] = {.lex_state = 50},
  [164] = {.lex_state = 50},
  [165] = {.lex_state = 50},
  [166] = {.lex_state = 50},
  [167] = {.lex_state = 50},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 50},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 50},
  [173] = {.lex_state = 50},
  [174] = {.lex_state = 50},
  [175] = {.lex_state = 50},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 50},
  [178] = {.lex_state = 50},
  [179] = {.lex_state = 160},
  [180] = {.lex_state = 55},
  [181] = {.lex_state = 50},
  [182] = {.lex_state = 50},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 160},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 160},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 23},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 160},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 36},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 50},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 36},
  [216] = {.lex_state = 36},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 50},
  [219] = {.lex_state = 23},
  [220] = {.lex_state = 15},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 20},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 23},
  [228] = {.lex_state = 23},
  [229] = {.lex_state = 160},
  [230] = {.lex_state = 160},
  [231] = {.lex_state = 57},
  [232] = {.lex_state = 160},
  [233] = {.lex_state = 37},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 160},
  [236] = {.lex_state = 38},
  [237] = {.lex_state = 15},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 15},
  [242] = {.lex_state = 160},
  [243] = {.lex_state = 160},
  [244] = {.lex_state = 40},
  [245] = {.lex_state = 160},
  [246] = {.lex_state = 18},
  [247] = {.lex_state = 18},
  [248] = {.lex_state = 18},
  [249] = {.lex_state = 46},
  [250] = {.lex_state = 57},
  [251] = {.lex_state = 46},
  [252] = {.lex_state = 23},
  [253] = {.lex_state = 38},
  [254] = {.lex_state = 23},
  [255] = {.lex_state = 18},
  [256] = {.lex_state = 20},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 58},
  [259] = {.lex_state = 53},
  [260] = {.lex_state = 57},
  [261] = {.lex_state = 160},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 160},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 196},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 53},
  [280] = {.lex_state = 196},
  [281] = {.lex_state = 160},
  [282] = {.lex_state = 160},
  [283] = {.lex_state = 59},
  [284] = {.lex_state = 196},
  [285] = {.lex_state = 160},
  [286] = {.lex_state = 56},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 59},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 160},
  [291] = {.lex_state = 59},
  [292] = {.lex_state = 59},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 160},
  [295] = {.lex_state = 160},
  [296] = {.lex_state = 160},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 160},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 160},
  [301] = {.lex_state = 160},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 160},
  [304] = {.lex_state = 160},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 160},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 160},
  [312] = {.lex_state = 58},
  [313] = {.lex_state = 160},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 160},
  [316] = {.lex_state = 160},
  [317] = {.lex_state = 58},
  [318] = {.lex_state = 160},
  [319] = {.lex_state = 58},
  [320] = {.lex_state = 160},
  [321] = {.lex_state = 160},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 58},
  [324] = {.lex_state = 58},
  [325] = {.lex_state = 58},
  [326] = {.lex_state = 58},
  [327] = {.lex_state = 58},
  [328] = {.lex_state = 58},
  [329] = {.lex_state = 58},
  [330] = {.lex_state = 58},
  [331] = {.lex_state = 58},
  [332] = {.lex_state = 53},
  [333] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(278),
    [sym__instruction] = STATE(275),
    [sym_from_instruction] = STATE(302),
    [sym_run_instruction] = STATE(302),
    [sym_cmd_instruction] = STATE(302),
    [sym_label_instruction] = STATE(302),
    [sym_expose_instruction] = STATE(302),
    [sym_env_instruction] = STATE(302),
    [sym_add_instruction] = STATE(302),
    [sym_copy_instruction] = STATE(302),
    [sym_entrypoint_instruction] = STATE(302),
    [sym_volume_instruction] = STATE(302),
    [sym_user_instruction] = STATE(302),
    [sym_workdir_instruction] = STATE(302),
    [sym_arg_instruction] = STATE(302),
    [sym_onbuild_instruction] = STATE(302),
    [sym_stopsignal_instruction] = STATE(302),
    [sym_healthcheck_instruction] = STATE(302),
    [sym_shell_instruction] = STATE(302),
    [sym_maintainer_instruction] = STATE(302),
    [sym_cross_build_instruction] = STATE(302),
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
    STATE(275), 1,
      sym__instruction,
    STATE(302), 19,
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
    STATE(275), 1,
      sym__instruction,
    STATE(3), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(302), 19,
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
    STATE(277), 1,
      sym__instruction,
    STATE(302), 19,
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
  [310] = 15,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_DASH_DASH,
    ACTIONS(113), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_line_continuation,
    STATE(7), 1,
      aux_sym_run_instruction_repeat1,
    STATE(20), 1,
      aux_sym_shell_command_repeat1,
    STATE(91), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym__comment_line,
    STATE(186), 1,
      sym_shell_fragment,
    STATE(266), 1,
      sym__anon_comment,
    ACTIONS(115), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(59), 2,
      sym_param,
      sym_mount_param,
    STATE(268), 2,
      sym_shell_command,
      sym_json_string_array,
  [359] = 15,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_DASH_DASH,
    ACTIONS(113), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym_line_continuation,
    STATE(18), 1,
      aux_sym_run_instruction_repeat1,
    STATE(20), 1,
      aux_sym_shell_command_repeat1,
    STATE(91), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym__comment_line,
    STATE(186), 1,
      sym_shell_fragment,
    STATE(266), 1,
      sym__anon_comment,
    ACTIONS(115), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(59), 2,
      sym_param,
      sym_mount_param,
    STATE(269), 2,
      sym_shell_command,
      sym_json_string_array,
  [408] = 12,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      anon_sym_DOLLAR2,
    ACTIONS(125), 1,
      aux_sym__env_key_token1,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_line_continuation,
    STATE(31), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(77), 1,
      sym__immediate_expansion,
    STATE(84), 1,
      sym__imm_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(224), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [448] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_shell_command_repeat1,
    STATE(91), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym__comment_line,
    STATE(186), 1,
      sym_shell_fragment,
    STATE(266), 1,
      sym__anon_comment,
    STATE(265), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [485] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_shell_command_repeat1,
    STATE(91), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym__comment_line,
    STATE(186), 1,
      sym_shell_fragment,
    STATE(266), 1,
      sym__anon_comment,
    STATE(271), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [522] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(135), 1,
      anon_sym_DOLLAR2,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(87), 1,
      sym__imm_expansion,
    STATE(90), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(308), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [556] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(135), 1,
      anon_sym_DOLLAR2,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(87), 1,
      sym__imm_expansion,
    STATE(90), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(221), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [590] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(135), 1,
      anon_sym_DOLLAR2,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(87), 1,
      sym__imm_expansion,
    STATE(90), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(299), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [624] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(147), 1,
      anon_sym_DOLLAR2,
    ACTIONS(149), 1,
      aux_sym_image_name_token2,
    STATE(14), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_image_name_repeat1,
    STATE(63), 1,
      sym__immediate_expansion,
    STATE(64), 1,
      sym__imm_expansion,
    ACTIONS(143), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [654] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      anon_sym_DOLLAR2,
    ACTIONS(149), 1,
      aux_sym_image_name_token2,
    ACTIONS(153), 1,
      aux_sym_from_instruction_token2,
    STATE(14), 1,
      aux_sym_image_name_repeat1,
    STATE(15), 1,
      sym_line_continuation,
    STATE(63), 1,
      sym__immediate_expansion,
    STATE(64), 1,
      sym__imm_expansion,
    ACTIONS(151), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [684] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(91), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym__comment_line,
    STATE(266), 1,
      sym__anon_comment,
    STATE(314), 1,
      sym_shell_fragment,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [714] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(159), 1,
      anon_sym_DOLLAR2,
    ACTIONS(162), 1,
      aux_sym_image_name_token2,
    STATE(63), 1,
      sym__immediate_expansion,
    STATE(64), 1,
      sym__imm_expansion,
    STATE(17), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(155), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [742] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_DASH_DASH,
    ACTIONS(168), 1,
      aux_sym_shell_fragment_token1,
    STATE(18), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(59), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(170), 4,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [766] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym_shell_command_repeat1,
    STATE(91), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym__comment_line,
    STATE(262), 1,
      sym_shell_fragment,
    STATE(266), 1,
      sym__anon_comment,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [796] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym_shell_command_repeat1,
    STATE(91), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(154), 1,
      sym__comment_line,
    STATE(202), 1,
      sym_shell_fragment,
    STATE(266), 1,
      sym__anon_comment,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [826] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(174), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(176), 1,
      anon_sym_DOLLAR2,
    ACTIONS(178), 1,
      aux_sym_image_tag_token1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(32), 1,
      aux_sym_image_tag_repeat1,
    STATE(81), 1,
      sym__immediate_expansion,
    STATE(106), 1,
      sym__imm_expansion,
    ACTIONS(172), 2,
      anon_sym_LF,
      anon_sym_AT,
  [855] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(180), 1,
      anon_sym_DOLLAR2,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_BSLASH,
    STATE(22), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(102), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(184), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [884] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      aux_sym_shell_fragment_token1,
    STATE(23), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(188), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [907] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(180), 1,
      anon_sym_DOLLAR2,
    ACTIONS(186), 1,
      anon_sym_BSLASH,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_line_continuation,
    STATE(36), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(102), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(184), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [936] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(198), 1,
      anon_sym_DOLLAR2,
    ACTIONS(201), 1,
      aux_sym_label_pair_token1,
    STATE(87), 1,
      sym__imm_expansion,
    STATE(90), 1,
      sym__immediate_expansion,
    ACTIONS(203), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(25), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [963] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(206), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_BSLASH,
    STATE(102), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(211), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(26), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [990] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(180), 1,
      anon_sym_DOLLAR2,
    ACTIONS(186), 1,
      anon_sym_BSLASH,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(27), 1,
      sym_line_continuation,
    STATE(102), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(184), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1019] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(223), 1,
      anon_sym_DOLLAR2,
    STATE(28), 1,
      sym_line_continuation,
    STATE(34), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(126), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(143), 1,
      sym__imm_expansion,
    ACTIONS(219), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1048] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      aux_sym_shell_fragment_token1,
    STATE(29), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(225), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1069] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      aux_sym_shell_fragment_token1,
    STATE(23), 1,
      aux_sym_mount_param_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    ACTIONS(232), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1092] = 9,
    ACTIONS(123), 1,
      anon_sym_DOLLAR2,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 1,
      aux_sym__env_key_token1,
    STATE(31), 1,
      sym_line_continuation,
    STATE(33), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(77), 1,
      sym__immediate_expansion,
    STATE(84), 1,
      sym__imm_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1121] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(242), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(244), 1,
      anon_sym_DOLLAR2,
    ACTIONS(247), 1,
      aux_sym_image_tag_token1,
    STATE(81), 1,
      sym__immediate_expansion,
    STATE(106), 1,
      sym__imm_expansion,
    ACTIONS(240), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(32), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1148] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(201), 1,
      aux_sym__env_key_token1,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    STATE(77), 1,
      sym__immediate_expansion,
    STATE(84), 1,
      sym__imm_expansion,
    ACTIONS(253), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(33), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1175] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(258), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(261), 1,
      anon_sym_DOLLAR2,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(126), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(143), 1,
      sym__imm_expansion,
    ACTIONS(256), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(34), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [1202] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(135), 1,
      anon_sym_DOLLAR2,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(238), 1,
      aux_sym_label_pair_token1,
    STATE(25), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(35), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym__imm_expansion,
    STATE(90), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1231] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(180), 1,
      anon_sym_DOLLAR2,
    ACTIONS(186), 1,
      anon_sym_BSLASH,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(36), 1,
      sym_line_continuation,
    STATE(102), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(184), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1260] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(223), 1,
      anon_sym_DOLLAR2,
    STATE(28), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(37), 1,
      sym_line_continuation,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(126), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(143), 1,
      sym__imm_expansion,
    ACTIONS(266), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1289] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(273), 1,
      anon_sym_DOLLAR2,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(143), 1,
      sym__imm_expansion,
    STATE(171), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(38), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [1315] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(223), 1,
      anon_sym_DOLLAR2,
    ACTIONS(276), 1,
      anon_sym_LF,
    STATE(38), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(39), 1,
      sym_line_continuation,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(143), 1,
      sym__imm_expansion,
    STATE(171), 1,
      sym__immediate_user_name_or_group_fragment,
  [1343] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(280), 1,
      anon_sym_POUND,
    STATE(154), 1,
      sym__comment_line,
    STATE(266), 1,
      sym__anon_comment,
    STATE(40), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(278), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1365] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      aux_sym_shell_fragment_token1,
    STATE(41), 1,
      sym_line_continuation,
    ACTIONS(283), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1383] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      aux_sym_image_name_token1,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH,
    STATE(15), 1,
      sym_expansion,
    STATE(42), 1,
      sym_line_continuation,
    STATE(60), 1,
      sym_image_name,
    STATE(85), 1,
      sym_param,
    STATE(241), 1,
      sym_image_spec,
  [1411] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(230), 1,
      aux_sym_shell_fragment_token1,
    STATE(43), 1,
      sym_line_continuation,
    ACTIONS(225), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1429] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(295), 1,
      aux_sym_path_token2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR2,
    STATE(44), 1,
      sym_line_continuation,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(131), 1,
      sym__immediate_expansion,
    STATE(138), 1,
      sym__imm_expansion,
    ACTIONS(293), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1455] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(295), 1,
      aux_sym_path_token2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR2,
    STATE(45), 1,
      sym_line_continuation,
    STATE(47), 1,
      aux_sym_path_repeat1,
    STATE(131), 1,
      sym__immediate_expansion,
    STATE(138), 1,
      sym__imm_expansion,
    ACTIONS(299), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1481] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(301), 1,
      anon_sym_LF,
    ACTIONS(303), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(305), 1,
      anon_sym_DOLLAR2,
    ACTIONS(308), 1,
      aux_sym_image_digest_token1,
    STATE(142), 1,
      sym__immediate_expansion,
    STATE(151), 1,
      sym__imm_expansion,
    STATE(46), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1507] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      aux_sym_path_token2,
    ACTIONS(316), 1,
      anon_sym_DOLLAR2,
    STATE(131), 1,
      sym__immediate_expansion,
    STATE(138), 1,
      sym__imm_expansion,
    ACTIONS(311), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(47), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1531] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(319), 1,
      aux_sym_path_token1,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(323), 1,
      anon_sym_DASH_DASH,
    STATE(48), 1,
      sym_line_continuation,
    STATE(61), 1,
      sym_expansion,
    STATE(94), 1,
      sym_param,
    STATE(98), 1,
      aux_sym_add_instruction_repeat1,
    STATE(263), 1,
      sym_path,
  [1559] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(327), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(329), 1,
      anon_sym_DOLLAR2,
    ACTIONS(331), 1,
      aux_sym_image_digest_token1,
    STATE(46), 1,
      aux_sym_image_digest_repeat1,
    STATE(49), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym__immediate_expansion,
    STATE(151), 1,
      sym__imm_expansion,
  [1587] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(319), 1,
      aux_sym_path_token1,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(323), 1,
      anon_sym_DASH_DASH,
    STATE(50), 1,
      sym_line_continuation,
    STATE(61), 1,
      sym_expansion,
    STATE(79), 1,
      sym_param,
    STATE(80), 1,
      aux_sym_add_instruction_repeat1,
    STATE(263), 1,
      sym_path,
  [1615] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(51), 1,
      sym_line_continuation,
    ACTIONS(335), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(333), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1632] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(339), 1,
      aux_sym_shell_fragment_token1,
    STATE(52), 1,
      sym_line_continuation,
    ACTIONS(337), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1649] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(341), 1,
      anon_sym_NONE,
    ACTIONS(343), 1,
      anon_sym_DASH_DASH,
    STATE(53), 1,
      sym_line_continuation,
    STATE(82), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(232), 1,
      sym_param,
    STATE(293), 1,
      sym_cmd_instruction,
  [1674] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      aux_sym_path_token2,
    ACTIONS(347), 1,
      anon_sym_DOLLAR2,
    ACTIONS(349), 1,
      sym__non_newline_whitespace,
    STATE(54), 1,
      sym_line_continuation,
    STATE(56), 1,
      aux_sym_path_repeat1,
    STATE(196), 1,
      sym__immediate_expansion,
    STATE(213), 1,
      sym__imm_expansion,
  [1699] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(356), 1,
      aux_sym_expose_port_token1,
    STATE(55), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(189), 2,
      sym_expansion,
      sym_expose_port,
  [1720] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      aux_sym_path_token2,
    ACTIONS(362), 1,
      anon_sym_DOLLAR2,
    ACTIONS(365), 1,
      sym__non_newline_whitespace,
    STATE(196), 1,
      sym__immediate_expansion,
    STATE(213), 1,
      sym__imm_expansion,
    STATE(56), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1743] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(369), 1,
      anon_sym_DOLLAR,
    ACTIONS(371), 1,
      aux_sym_expose_port_token1,
    STATE(55), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(57), 1,
      sym_line_continuation,
    STATE(189), 2,
      sym_expansion,
      sym_expose_port,
  [1766] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      anon_sym_DOLLAR2,
    ACTIONS(378), 1,
      aux_sym_image_alias_token2,
    STATE(176), 1,
      sym__immediate_expansion,
    STATE(184), 1,
      sym__imm_expansion,
    STATE(58), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [1789] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(383), 1,
      aux_sym_shell_fragment_token1,
    STATE(59), 1,
      sym_line_continuation,
    ACTIONS(381), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1806] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(387), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(391), 1,
      anon_sym_AT,
    STATE(60), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym_image_tag,
    STATE(237), 1,
      sym_image_digest,
  [1831] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      aux_sym_path_token2,
    ACTIONS(347), 1,
      anon_sym_DOLLAR2,
    ACTIONS(393), 1,
      sym__non_newline_whitespace,
    STATE(54), 1,
      aux_sym_path_repeat1,
    STATE(61), 1,
      sym_line_continuation,
    STATE(196), 1,
      sym__immediate_expansion,
    STATE(213), 1,
      sym__imm_expansion,
  [1856] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(399), 1,
      anon_sym_DOLLAR2,
    STATE(62), 1,
      sym_line_continuation,
    STATE(66), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(161), 1,
      sym__immediate_expansion,
    STATE(199), 1,
      sym__imm_expansion,
  [1881] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(63), 1,
      sym_line_continuation,
    ACTIONS(403), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(401), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1898] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(405), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1915] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(223), 1,
      anon_sym_DOLLAR2,
    STATE(39), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(65), 1,
      sym_line_continuation,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(143), 1,
      sym__imm_expansion,
    STATE(171), 1,
      sym__immediate_user_name_or_group_fragment,
  [1940] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(414), 1,
      anon_sym_DOLLAR2,
    STATE(161), 1,
      sym__immediate_expansion,
    STATE(199), 1,
      sym__imm_expansion,
    STATE(66), 2,
      sym_line_continuation,
      aux_sym__stopsignal_value_repeat1,
  [1963] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(67), 1,
      sym_line_continuation,
    ACTIONS(419), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(417), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1980] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(68), 1,
      sym_line_continuation,
    ACTIONS(423), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(421), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1997] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    ACTIONS(429), 1,
      aux_sym_image_alias_token2,
    STATE(58), 1,
      aux_sym_image_alias_repeat1,
    STATE(69), 1,
      sym_line_continuation,
    STATE(176), 1,
      sym__immediate_expansion,
    STATE(184), 1,
      sym__imm_expansion,
  [2022] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(431), 1,
      aux_sym_path_token2,
    ACTIONS(434), 1,
      anon_sym_DOLLAR2,
    STATE(204), 1,
      sym__imm_expansion,
    STATE(209), 1,
      sym__immediate_expansion,
    STATE(70), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2045] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(397), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(399), 1,
      anon_sym_DOLLAR2,
    ACTIONS(437), 1,
      anon_sym_LF,
    STATE(62), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(71), 1,
      sym_line_continuation,
    STATE(161), 1,
      sym__immediate_expansion,
    STATE(199), 1,
      sym__imm_expansion,
  [2070] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    ACTIONS(429), 1,
      aux_sym_image_alias_token2,
    ACTIONS(439), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym_image_alias_repeat1,
    STATE(72), 1,
      sym_line_continuation,
    STATE(176), 1,
      sym__immediate_expansion,
    STATE(184), 1,
      sym__imm_expansion,
  [2095] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(441), 1,
      aux_sym_path_token2,
    ACTIONS(443), 1,
      anon_sym_DOLLAR2,
    STATE(70), 1,
      aux_sym_path_repeat1,
    STATE(73), 1,
      sym_line_continuation,
    STATE(204), 1,
      sym__imm_expansion,
    STATE(209), 1,
      sym__immediate_expansion,
  [2120] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(445), 1,
      aux_sym_path_token1,
    ACTIONS(447), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(74), 1,
      sym_line_continuation,
    STATE(207), 1,
      sym_path,
    STATE(274), 1,
      sym_json_string_array,
  [2145] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(451), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(449), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2162] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(393), 1,
      anon_sym_LF,
    ACTIONS(441), 1,
      aux_sym_path_token2,
    ACTIONS(443), 1,
      anon_sym_DOLLAR2,
    STATE(73), 1,
      aux_sym_path_repeat1,
    STATE(76), 1,
      sym_line_continuation,
    STATE(204), 1,
      sym__imm_expansion,
    STATE(209), 1,
      sym__immediate_expansion,
  [2187] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(455), 1,
      aux_sym__env_key_token1,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(453), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2203] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(335), 1,
      aux_sym_label_pair_token1,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(333), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2219] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(319), 1,
      aux_sym_path_token1,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(79), 1,
      sym_line_continuation,
    STATE(117), 1,
      aux_sym_add_instruction_repeat1,
    STATE(263), 1,
      sym_path,
  [2241] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(445), 1,
      aux_sym_path_token1,
    ACTIONS(447), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(80), 1,
      sym_line_continuation,
    STATE(116), 1,
      aux_sym_add_instruction_repeat1,
    STATE(252), 1,
      sym_path,
  [2263] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(459), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(457), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2279] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(343), 1,
      anon_sym_DASH_DASH,
    STATE(82), 1,
      sym_line_continuation,
    STATE(133), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(232), 1,
      sym_param,
    STATE(272), 1,
      sym_cmd_instruction,
  [2301] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      sym_line_continuation,
    STATE(99), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(465), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2321] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      aux_sym__env_key_token1,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(405), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2337] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      aux_sym_image_name_token1,
    STATE(15), 1,
      sym_expansion,
    STATE(60), 1,
      sym_image_name,
    STATE(85), 1,
      sym_line_continuation,
    STATE(220), 1,
      sym_image_spec,
  [2359] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(335), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2375] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      aux_sym_label_pair_token1,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(405), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2391] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(176), 1,
      anon_sym_DOLLAR2,
    ACTIONS(178), 1,
      aux_sym_image_tag_token1,
    STATE(21), 1,
      aux_sym_image_tag_repeat1,
    STATE(81), 1,
      sym__immediate_expansion,
    STATE(88), 1,
      sym_line_continuation,
    STATE(106), 1,
      sym__imm_expansion,
  [2413] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(329), 1,
      anon_sym_DOLLAR2,
    ACTIONS(331), 1,
      aux_sym_image_digest_token1,
    STATE(49), 1,
      aux_sym_image_digest_repeat1,
    STATE(89), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym__immediate_expansion,
    STATE(151), 1,
      sym__imm_expansion,
  [2435] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(455), 1,
      aux_sym_label_pair_token1,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(453), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2451] = 5,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(471), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    STATE(104), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(469), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2469] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(473), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(92), 1,
      sym_line_continuation,
    ACTIONS(465), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2489] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(451), 1,
      aux_sym_label_pair_token1,
    STATE(93), 1,
      sym_line_continuation,
    ACTIONS(449), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2505] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(319), 1,
      aux_sym_path_token1,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(94), 1,
      sym_line_continuation,
    STATE(115), 1,
      aux_sym_add_instruction_repeat1,
    STATE(263), 1,
      sym_path,
  [2527] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(475), 1,
      anon_sym_DOLLAR,
    ACTIONS(477), 1,
      aux_sym_expose_port_token1,
    STATE(57), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(95), 1,
      sym_line_continuation,
    STATE(189), 2,
      sym_expansion,
      sym_expose_port,
  [2547] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(451), 1,
      aux_sym__env_key_token1,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(449), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2563] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(419), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(417), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2579] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(445), 1,
      aux_sym_path_token1,
    ACTIONS(447), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(98), 1,
      sym_line_continuation,
    STATE(116), 1,
      aux_sym_add_instruction_repeat1,
    STATE(254), 1,
      sym_path,
  [2601] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(479), 1,
      anon_sym_BSLASH,
    ACTIONS(482), 1,
      anon_sym_SQUOTE,
    ACTIONS(484), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
    STATE(99), 2,
      sym_line_continuation,
      aux_sym_single_quoted_string_repeat1,
  [2619] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      aux_sym_label_pair_token1,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(417), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2635] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(335), 1,
      aux_sym__env_key_token1,
    STATE(101), 1,
      sym_line_continuation,
    ACTIONS(333), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2651] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(405), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2667] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      aux_sym__env_key_token1,
    STATE(103), 1,
      sym_line_continuation,
    STATE(111), 1,
      aux_sym_env_instruction_repeat1,
    STATE(256), 1,
      sym_env_pair,
    STATE(296), 1,
      sym__env_key,
  [2689] = 4,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(496), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(493), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2705] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(451), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(449), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2721] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2737] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(451), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(449), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2753] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      aux_sym__env_key_token1,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(417), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2769] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(335), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(333), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2785] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      sym_line_continuation,
    STATE(114), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(465), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2805] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(500), 1,
      anon_sym_LF,
    ACTIONS(502), 1,
      aux_sym__env_key_token1,
    STATE(256), 1,
      sym_env_pair,
    STATE(296), 1,
      sym__env_key,
    STATE(111), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2825] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(419), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(417), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2841] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(505), 1,
      anon_sym_LF,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(507), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(509), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2859] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      anon_sym_BSLASH,
    ACTIONS(511), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(465), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2879] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(445), 1,
      aux_sym_path_token1,
    ACTIONS(447), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(115), 1,
      sym_line_continuation,
    STATE(116), 1,
      aux_sym_add_instruction_repeat1,
    STATE(227), 1,
      sym_path,
  [2901] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(513), 1,
      aux_sym_path_token1,
    ACTIONS(516), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_expansion,
    STATE(263), 1,
      sym_path,
    STATE(116), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [2921] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(445), 1,
      aux_sym_path_token1,
    ACTIONS(447), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(116), 1,
      aux_sym_add_instruction_repeat1,
    STATE(117), 1,
      sym_line_continuation,
    STATE(219), 1,
      sym_path,
  [2943] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(519), 1,
      aux_sym__env_key_token1,
    STATE(103), 1,
      aux_sym_env_instruction_repeat1,
    STATE(118), 1,
      sym_line_continuation,
    STATE(249), 1,
      sym__env_key,
    STATE(256), 1,
      sym_env_pair,
    STATE(322), 1,
      sym__spaced_env_pair,
  [2965] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(523), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(521), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2981] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      sym_line_continuation,
    STATE(149), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(527), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [2998] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 1,
      aux_sym_label_pair_token1,
    STATE(247), 1,
      sym_label_pair,
    STATE(121), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [3015] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(534), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3028] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(445), 1,
      aux_sym_path_token1,
    ACTIONS(447), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(123), 1,
      sym_line_continuation,
    STATE(228), 1,
      sym_path,
  [3047] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(536), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(538), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3062] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(540), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3075] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(542), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3088] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(544), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(546), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      sym_expansion,
    STATE(127), 1,
      sym_line_continuation,
    STATE(257), 1,
      sym__stopsignal_value,
  [3107] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(548), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3120] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(335), 1,
      aux_sym_from_instruction_token2,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3135] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(550), 1,
      anon_sym_DQUOTE,
    ACTIONS(552), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
    STATE(130), 2,
      sym_line_continuation,
      aux_sym_json_string_repeat1,
  [3150] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(557), 1,
      anon_sym_DOLLAR2,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(555), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3165] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(559), 1,
      aux_sym_path_token1,
    ACTIONS(561), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      sym_expansion,
    STATE(132), 1,
      sym_line_continuation,
    STATE(276), 1,
      sym_path,
  [3184] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(563), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    STATE(232), 1,
      sym_param,
    STATE(133), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [3201] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      anon_sym_AT,
    ACTIONS(568), 1,
      anon_sym_LF,
    ACTIONS(570), 1,
      aux_sym_from_instruction_token2,
    STATE(134), 1,
      sym_line_continuation,
    STATE(234), 1,
      sym_image_digest,
  [3220] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      aux_sym_image_alias_token1,
    STATE(72), 1,
      sym_expansion,
    STATE(135), 1,
      sym_line_continuation,
    STATE(289), 1,
      sym_image_alias,
  [3239] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(576), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(578), 1,
      anon_sym_DOLLAR,
    STATE(37), 1,
      sym_expansion,
    STATE(136), 1,
      sym_line_continuation,
    STATE(240), 1,
      sym__user_name_or_group,
  [3258] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      aux_sym_from_instruction_token2,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(417), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3273] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      anon_sym_DOLLAR2,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(407), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3288] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(449), 1,
      anon_sym_DOLLAR2,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(451), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3303] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(333), 1,
      anon_sym_DOLLAR2,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(335), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3318] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      anon_sym_DOLLAR2,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(423), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3333] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(582), 1,
      aux_sym_from_instruction_token2,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(580), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3348] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(405), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3361] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(449), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3374] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      aux_sym_image_alias_token1,
    STATE(72), 1,
      sym_expansion,
    STATE(145), 1,
      sym_line_continuation,
    STATE(287), 1,
      sym_image_alias,
  [3393] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(417), 1,
      anon_sym_DOLLAR2,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(419), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3408] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(333), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3421] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(421), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3434] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      aux_sym_json_string_repeat1,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(527), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3451] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(417), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3464] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      aux_sym_from_instruction_token2,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3479] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      aux_sym_label_pair_token1,
    STATE(121), 1,
      aux_sym_label_instruction_repeat1,
    STATE(152), 1,
      sym_line_continuation,
    STATE(247), 1,
      sym_label_pair,
  [3498] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(451), 1,
      aux_sym_from_instruction_token2,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(449), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3513] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(590), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3526] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      aux_sym_path_token2,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(421), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3540] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym_variable,
    STATE(139), 1,
      sym__expansion_body,
    STATE(156), 1,
      sym_line_continuation,
  [3556] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      sym_variable,
    STATE(105), 1,
      sym__expansion_body,
    STATE(157), 1,
      sym_line_continuation,
  [3572] = 4,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      anon_sym_BSLASH_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(158), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [3586] = 5,
    ACTIONS(605), 1,
      anon_sym_LF,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(158), 1,
      aux_sym_shell_command_repeat2,
    STATE(159), 1,
      sym_line_continuation,
  [3602] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      sym_variable,
    STATE(160), 1,
      sym_line_continuation,
    STATE(183), 1,
      sym__expansion_body,
  [3618] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(613), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3630] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    ACTIONS(617), 1,
      sym_variable,
    STATE(96), 1,
      sym__expansion_body,
    STATE(162), 1,
      sym_line_continuation,
  [3646] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
    ACTIONS(621), 1,
      sym_variable,
    STATE(93), 1,
      sym__expansion_body,
    STATE(163), 1,
      sym_line_continuation,
  [3662] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      sym_variable,
    STATE(164), 1,
      sym_line_continuation,
    STATE(190), 1,
      sym__expansion_body,
  [3678] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(623), 1,
      anon_sym_LBRACE,
    ACTIONS(625), 1,
      sym_variable,
    STATE(153), 1,
      sym__expansion_body,
    STATE(165), 1,
      sym_line_continuation,
  [3694] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
    ACTIONS(629), 1,
      sym_variable,
    STATE(166), 1,
      sym_line_continuation,
    STATE(194), 1,
      sym__expansion_body,
  [3710] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(631), 1,
      anon_sym_LBRACE,
    ACTIONS(633), 1,
      sym_variable,
    STATE(107), 1,
      sym__expansion_body,
    STATE(167), 1,
      sym_line_continuation,
  [3726] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(635), 1,
      anon_sym_LF,
    ACTIONS(637), 1,
      sym__non_newline_whitespace,
    STATE(168), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [3740] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    ACTIONS(642), 1,
      sym_variable,
    STATE(155), 1,
      sym__expansion_body,
    STATE(169), 1,
      sym_line_continuation,
  [3756] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      sym_line_continuation,
    ACTIONS(646), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3770] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(171), 1,
      sym_line_continuation,
    ACTIONS(648), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3782] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
    ACTIONS(629), 1,
      sym_variable,
    STATE(172), 1,
      sym_line_continuation,
    STATE(198), 1,
      sym__expansion_body,
  [3798] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
    ACTIONS(652), 1,
      sym_variable,
    STATE(148), 1,
      sym__expansion_body,
    STATE(173), 1,
      sym_line_continuation,
  [3814] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(640), 1,
      anon_sym_LBRACE,
    ACTIONS(642), 1,
      sym_variable,
    STATE(174), 1,
      sym_line_continuation,
    STATE(203), 1,
      sym__expansion_body,
  [3830] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym_variable,
    STATE(141), 1,
      sym__expansion_body,
    STATE(175), 1,
      sym_line_continuation,
  [3846] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(654), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3858] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
    ACTIONS(652), 1,
      sym_variable,
    STATE(144), 1,
      sym__expansion_body,
    STATE(177), 1,
      sym_line_continuation,
  [3874] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    ACTIONS(658), 1,
      sym_variable,
    STATE(178), 1,
      sym_line_continuation,
    STATE(214), 1,
      sym__expansion_body,
  [3890] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(660), 1,
      anon_sym_COMMA2,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_line_continuation,
    STATE(187), 1,
      aux_sym_json_string_array_repeat1,
  [3906] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      aux_sym_label_pair_token1,
    STATE(152), 1,
      aux_sym_label_instruction_repeat1,
    STATE(180), 1,
      sym_line_continuation,
    STATE(247), 1,
      sym_label_pair,
  [3922] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    ACTIONS(668), 1,
      sym_variable,
    STATE(181), 1,
      sym_line_continuation,
    STATE(211), 1,
      sym__expansion_body,
  [3938] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      sym_variable,
    STATE(68), 1,
      sym__expansion_body,
    STATE(182), 1,
      sym_line_continuation,
  [3954] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(449), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3966] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(405), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3978] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(674), 1,
      anon_sym_RBRACK,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym_line_continuation,
    STATE(206), 1,
      sym_json_string,
  [3994] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(678), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(186), 1,
      sym_line_continuation,
    STATE(205), 1,
      aux_sym_shell_command_repeat2,
  [4010] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(680), 1,
      anon_sym_COMMA2,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
    STATE(187), 2,
      sym_line_continuation,
      aux_sym_json_string_array_repeat1,
  [4024] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(417), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4036] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(687), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4050] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(421), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4062] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(689), 1,
      anon_sym_LF,
    ACTIONS(691), 1,
      sym__non_newline_whitespace,
    STATE(168), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(191), 1,
      sym_line_continuation,
  [4078] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4090] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(417), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4102] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(421), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4114] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(333), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4126] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(555), 1,
      aux_sym_path_token2,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(557), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4140] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      aux_sym_path_token2,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(417), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4154] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(449), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4166] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(405), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4178] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(695), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4192] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(335), 1,
      aux_sym_path_token2,
    STATE(201), 1,
      sym_line_continuation,
    ACTIONS(333), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4206] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(159), 1,
      aux_sym_shell_command_repeat2,
    STATE(202), 1,
      sym_line_continuation,
  [4222] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(451), 1,
      aux_sym_path_token2,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(449), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4236] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      aux_sym_path_token2,
    STATE(204), 1,
      sym_line_continuation,
    ACTIONS(405), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4250] = 5,
    ACTIONS(607), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(158), 1,
      aux_sym_shell_command_repeat2,
    STATE(205), 1,
      sym_line_continuation,
  [4266] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(660), 1,
      anon_sym_COMMA2,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_json_string_array_repeat1,
    STATE(206), 1,
      sym_line_continuation,
  [4282] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(691), 1,
      sym__non_newline_whitespace,
    ACTIONS(701), 1,
      anon_sym_LF,
    STATE(191), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(207), 1,
      sym_line_continuation,
  [4298] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(419), 1,
      aux_sym_path_token2,
    STATE(208), 1,
      sym_line_continuation,
    ACTIONS(417), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4312] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(555), 1,
      aux_sym_path_token2,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(557), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4326] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(333), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_line_continuation,
    ACTIONS(335), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4340] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_line_continuation,
    ACTIONS(423), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4354] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(656), 1,
      anon_sym_LBRACE,
    ACTIONS(658), 1,
      sym_variable,
    STATE(212), 1,
      sym_line_continuation,
    STATE(216), 1,
      sym__expansion_body,
  [4370] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(407), 1,
      aux_sym_path_token2,
    STATE(213), 1,
      sym_line_continuation,
    ACTIONS(405), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4384] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      aux_sym_path_token2,
    STATE(214), 1,
      sym_line_continuation,
    ACTIONS(421), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4398] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(335), 1,
      aux_sym_path_token2,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(333), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4412] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(451), 1,
      aux_sym_path_token2,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(449), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4426] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(417), 1,
      anon_sym_LF,
    STATE(217), 1,
      sym_line_continuation,
    ACTIONS(419), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4440] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      sym_variable,
    STATE(75), 1,
      sym__expansion_body,
    STATE(218), 1,
      sym_line_continuation,
  [4456] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym__non_newline_whitespace,
    STATE(219), 1,
      sym_line_continuation,
  [4469] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(707), 1,
      anon_sym_LF,
    ACTIONS(709), 1,
      aux_sym_from_instruction_token2,
    STATE(220), 1,
      sym_line_continuation,
  [4482] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(711), 1,
      anon_sym_LF,
    ACTIONS(713), 1,
      aux_sym_label_pair_token1,
    STATE(221), 1,
      sym_line_continuation,
  [4495] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(717), 1,
      aux_sym__env_key_token1,
    STATE(222), 1,
      sym_line_continuation,
  [4508] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      aux_sym__env_key_token1,
    STATE(223), 1,
      sym_line_continuation,
  [4521] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(725), 1,
      aux_sym__env_key_token1,
    STATE(224), 1,
      sym_line_continuation,
  [4534] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(727), 1,
      anon_sym_LF,
    ACTIONS(729), 1,
      aux_sym__env_key_token1,
    STATE(225), 1,
      sym_line_continuation,
  [4547] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(731), 1,
      anon_sym_LF,
    ACTIONS(733), 1,
      aux_sym__env_key_token1,
    STATE(226), 1,
      sym_line_continuation,
  [4560] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(705), 1,
      sym__non_newline_whitespace,
    ACTIONS(735), 1,
      anon_sym_LF,
    STATE(227), 1,
      sym_line_continuation,
  [4573] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(228), 1,
      sym_line_continuation,
    ACTIONS(635), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [4584] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      sym_line_continuation,
    STATE(245), 1,
      sym_json_string,
  [4597] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(230), 1,
      sym_line_continuation,
    ACTIONS(737), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4608] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      aux_sym_mount_param_param_token1,
    STATE(30), 1,
      sym_mount_param_param,
    STATE(231), 1,
      sym_line_continuation,
  [4621] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(232), 1,
      sym_line_continuation,
    ACTIONS(741), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4632] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(337), 1,
      anon_sym_DOLLAR,
    ACTIONS(339), 1,
      aux_sym_image_name_token1,
    STATE(233), 1,
      sym_line_continuation,
  [4645] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(743), 1,
      anon_sym_LF,
    ACTIONS(745), 1,
      aux_sym_from_instruction_token2,
    STATE(234), 1,
      sym_line_continuation,
  [4658] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(235), 1,
      sym_line_continuation,
    STATE(305), 1,
      sym_json_string_array,
  [4671] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(337), 1,
      anon_sym_DOLLAR,
    ACTIONS(339), 1,
      aux_sym_path_token1,
    STATE(236), 1,
      sym_line_continuation,
  [4684] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(747), 1,
      anon_sym_LF,
    ACTIONS(749), 1,
      aux_sym_from_instruction_token2,
    STATE(237), 1,
      sym_line_continuation,
  [4697] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(751), 1,
      anon_sym_LF,
    ACTIONS(753), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_line_continuation,
  [4710] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(715), 1,
      anon_sym_LF,
    ACTIONS(717), 1,
      aux_sym_label_pair_token1,
    STATE(239), 1,
      sym_line_continuation,
  [4723] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(757), 1,
      anon_sym_COLON,
    STATE(240), 1,
      sym_line_continuation,
  [4736] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(761), 1,
      aux_sym_from_instruction_token2,
    STATE(241), 1,
      sym_line_continuation,
  [4749] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(242), 1,
      sym_line_continuation,
    ACTIONS(337), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4760] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(243), 1,
      sym_line_continuation,
    ACTIONS(763), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4771] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      aux_sym_param_token1,
    ACTIONS(767), 1,
      anon_sym_mount,
    STATE(244), 1,
      sym_line_continuation,
  [4784] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(245), 1,
      sym_line_continuation,
    ACTIONS(683), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4795] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(731), 1,
      anon_sym_LF,
    ACTIONS(733), 1,
      aux_sym_label_pair_token1,
    STATE(246), 1,
      sym_line_continuation,
  [4808] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(769), 1,
      anon_sym_LF,
    ACTIONS(771), 1,
      aux_sym_label_pair_token1,
    STATE(247), 1,
      sym_line_continuation,
  [4821] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(727), 1,
      anon_sym_LF,
    ACTIONS(729), 1,
      aux_sym_label_pair_token1,
    STATE(248), 1,
      sym_line_continuation,
  [4834] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(773), 1,
      anon_sym_EQ,
    ACTIONS(775), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(249), 1,
      sym_line_continuation,
  [4847] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      aux_sym_mount_param_param_token1,
    STATE(43), 1,
      sym_mount_param_param,
    STATE(250), 1,
      sym_line_continuation,
  [4860] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(251), 1,
      sym_line_continuation,
    ACTIONS(777), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [4871] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(705), 1,
      sym__non_newline_whitespace,
    ACTIONS(779), 1,
      anon_sym_LF,
    STATE(252), 1,
      sym_line_continuation,
  [4884] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      aux_sym_path_token1,
    ACTIONS(783), 1,
      anon_sym_DOLLAR,
    STATE(253), 1,
      sym_line_continuation,
  [4897] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(705), 1,
      sym__non_newline_whitespace,
    ACTIONS(785), 1,
      anon_sym_LF,
    STATE(254), 1,
      sym_line_continuation,
  [4910] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(719), 1,
      anon_sym_LF,
    ACTIONS(721), 1,
      aux_sym_label_pair_token1,
    STATE(255), 1,
      sym_line_continuation,
  [4923] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(787), 1,
      anon_sym_LF,
    ACTIONS(789), 1,
      aux_sym__env_key_token1,
    STATE(256), 1,
      sym_line_continuation,
  [4936] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(791), 1,
      anon_sym_LF,
    STATE(257), 1,
      sym_line_continuation,
  [4946] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(793), 1,
      aux_sym__expansion_body_token1,
    STATE(258), 1,
      sym_line_continuation,
  [4956] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(795), 1,
      aux_sym_param_token1,
    STATE(259), 1,
      sym_line_continuation,
  [4966] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(797), 1,
      aux_sym_mount_param_param_token1,
    STATE(260), 1,
      sym_line_continuation,
  [4976] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      sym_line_continuation,
  [4986] = 3,
    ACTIONS(801), 1,
      anon_sym_LF,
    ACTIONS(803), 1,
      anon_sym_BSLASH_LF,
    STATE(262), 1,
      sym_line_continuation,
  [4996] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(805), 1,
      sym__non_newline_whitespace,
    STATE(263), 1,
      sym_line_continuation,
  [5006] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(807), 1,
      anon_sym_EQ,
    STATE(264), 1,
      sym_line_continuation,
  [5016] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(809), 1,
      anon_sym_LF,
    STATE(265), 1,
      sym_line_continuation,
  [5026] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      anon_sym_LF,
    STATE(266), 1,
      sym_line_continuation,
  [5036] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(813), 1,
      anon_sym_LF,
    STATE(267), 1,
      sym_line_continuation,
  [5046] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(815), 1,
      anon_sym_LF,
    STATE(268), 1,
      sym_line_continuation,
  [5056] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(817), 1,
      anon_sym_LF,
    STATE(269), 1,
      sym_line_continuation,
  [5066] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(819), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(270), 1,
      sym_line_continuation,
  [5076] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(821), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_line_continuation,
  [5086] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(823), 1,
      anon_sym_LF,
    STATE(272), 1,
      sym_line_continuation,
  [5096] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(825), 1,
      anon_sym_LF,
    STATE(273), 1,
      sym_line_continuation,
  [5106] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(827), 1,
      anon_sym_LF,
    STATE(274), 1,
      sym_line_continuation,
  [5116] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(829), 1,
      anon_sym_LF,
    STATE(275), 1,
      sym_line_continuation,
  [5126] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(831), 1,
      anon_sym_LF,
    STATE(276), 1,
      sym_line_continuation,
  [5136] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(833), 1,
      anon_sym_LF,
    STATE(277), 1,
      sym_line_continuation,
  [5146] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(835), 1,
      ts_builtin_sym_end,
    STATE(278), 1,
      sym_line_continuation,
  [5156] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(837), 1,
      aux_sym_param_token1,
    STATE(279), 1,
      sym_line_continuation,
  [5166] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(839), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(280), 1,
      sym_line_continuation,
  [5176] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(841), 1,
      anon_sym_EQ,
    STATE(281), 1,
      sym_line_continuation,
  [5186] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      sym_line_continuation,
  [5196] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(845), 1,
      aux_sym_param_token2,
    STATE(283), 1,
      sym_line_continuation,
  [5206] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(847), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(284), 1,
      sym_line_continuation,
  [5216] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(777), 1,
      anon_sym_EQ,
    STATE(285), 1,
      sym_line_continuation,
  [5226] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(849), 1,
      aux_sym_arg_instruction_token2,
    STATE(286), 1,
      sym_line_continuation,
  [5236] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(851), 1,
      anon_sym_LF,
    STATE(287), 1,
      sym_line_continuation,
  [5246] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(853), 1,
      aux_sym_param_token2,
    STATE(288), 1,
      sym_line_continuation,
  [5256] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(855), 1,
      anon_sym_LF,
    STATE(289), 1,
      sym_line_continuation,
  [5266] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      sym_line_continuation,
  [5276] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(859), 1,
      aux_sym_param_token2,
    STATE(291), 1,
      sym_line_continuation,
  [5286] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(861), 1,
      aux_sym_param_token2,
    STATE(292), 1,
      sym_line_continuation,
  [5296] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(863), 1,
      anon_sym_LF,
    STATE(293), 1,
      sym_line_continuation,
  [5306] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(865), 1,
      anon_sym_EQ,
    STATE(294), 1,
      sym_line_continuation,
  [5316] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_line_continuation,
  [5326] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(773), 1,
      anon_sym_EQ,
    STATE(296), 1,
      sym_line_continuation,
  [5336] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(869), 1,
      anon_sym_LF,
    STATE(297), 1,
      sym_line_continuation,
  [5346] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_line_continuation,
  [5356] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(873), 1,
      anon_sym_LF,
    STATE(299), 1,
      sym_line_continuation,
  [5366] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(875), 1,
      anon_sym_EQ,
    STATE(300), 1,
      sym_line_continuation,
  [5376] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_line_continuation,
  [5386] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(879), 1,
      anon_sym_LF,
    STATE(302), 1,
      sym_line_continuation,
  [5396] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(881), 1,
      anon_sym_EQ,
    STATE(303), 1,
      sym_line_continuation,
  [5406] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(883), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      sym_line_continuation,
  [5416] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(885), 1,
      anon_sym_LF,
    STATE(305), 1,
      sym_line_continuation,
  [5426] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(887), 1,
      anon_sym_LF,
    STATE(306), 1,
      sym_line_continuation,
  [5436] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(889), 1,
      anon_sym_LF,
    STATE(307), 1,
      sym_line_continuation,
  [5446] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(891), 1,
      anon_sym_LF,
    STATE(308), 1,
      sym_line_continuation,
  [5456] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      sym_line_continuation,
  [5466] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(895), 1,
      anon_sym_LF,
    STATE(310), 1,
      sym_line_continuation,
  [5476] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym_line_continuation,
  [5486] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(899), 1,
      aux_sym__expansion_body_token1,
    STATE(312), 1,
      sym_line_continuation,
  [5496] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(313), 1,
      sym_line_continuation,
  [5506] = 3,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(903), 1,
      anon_sym_BSLASH_LF,
    STATE(314), 1,
      sym_line_continuation,
  [5516] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_line_continuation,
  [5526] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      sym_line_continuation,
  [5536] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(909), 1,
      aux_sym__expansion_body_token1,
    STATE(317), 1,
      sym_line_continuation,
  [5546] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(911), 1,
      anon_sym_EQ,
    STATE(318), 1,
      sym_line_continuation,
  [5556] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(913), 1,
      aux_sym__expansion_body_token1,
    STATE(319), 1,
      sym_line_continuation,
  [5566] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(915), 1,
      anon_sym_EQ,
    STATE(320), 1,
      sym_line_continuation,
  [5576] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      sym_line_continuation,
  [5586] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(919), 1,
      anon_sym_LF,
    STATE(322), 1,
      sym_line_continuation,
  [5596] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(921), 1,
      aux_sym__expansion_body_token1,
    STATE(323), 1,
      sym_line_continuation,
  [5606] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(923), 1,
      aux_sym__expansion_body_token1,
    STATE(324), 1,
      sym_line_continuation,
  [5616] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(925), 1,
      aux_sym__expansion_body_token1,
    STATE(325), 1,
      sym_line_continuation,
  [5626] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(927), 1,
      aux_sym__expansion_body_token1,
    STATE(326), 1,
      sym_line_continuation,
  [5636] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(929), 1,
      aux_sym__expansion_body_token1,
    STATE(327), 1,
      sym_line_continuation,
  [5646] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(931), 1,
      aux_sym__expansion_body_token1,
    STATE(328), 1,
      sym_line_continuation,
  [5656] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(933), 1,
      aux_sym__expansion_body_token1,
    STATE(329), 1,
      sym_line_continuation,
  [5666] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(935), 1,
      aux_sym__expansion_body_token1,
    STATE(330), 1,
      sym_line_continuation,
  [5676] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(937), 1,
      aux_sym__expansion_body_token1,
    STATE(331), 1,
      sym_line_continuation,
  [5686] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(939), 1,
      aux_sym_param_token1,
    STATE(332), 1,
      sym_line_continuation,
  [5696] = 1,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 280,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 359,
  [SMALL_STATE(8)] = 408,
  [SMALL_STATE(9)] = 448,
  [SMALL_STATE(10)] = 485,
  [SMALL_STATE(11)] = 522,
  [SMALL_STATE(12)] = 556,
  [SMALL_STATE(13)] = 590,
  [SMALL_STATE(14)] = 624,
  [SMALL_STATE(15)] = 654,
  [SMALL_STATE(16)] = 684,
  [SMALL_STATE(17)] = 714,
  [SMALL_STATE(18)] = 742,
  [SMALL_STATE(19)] = 766,
  [SMALL_STATE(20)] = 796,
  [SMALL_STATE(21)] = 826,
  [SMALL_STATE(22)] = 855,
  [SMALL_STATE(23)] = 884,
  [SMALL_STATE(24)] = 907,
  [SMALL_STATE(25)] = 936,
  [SMALL_STATE(26)] = 963,
  [SMALL_STATE(27)] = 990,
  [SMALL_STATE(28)] = 1019,
  [SMALL_STATE(29)] = 1048,
  [SMALL_STATE(30)] = 1069,
  [SMALL_STATE(31)] = 1092,
  [SMALL_STATE(32)] = 1121,
  [SMALL_STATE(33)] = 1148,
  [SMALL_STATE(34)] = 1175,
  [SMALL_STATE(35)] = 1202,
  [SMALL_STATE(36)] = 1231,
  [SMALL_STATE(37)] = 1260,
  [SMALL_STATE(38)] = 1289,
  [SMALL_STATE(39)] = 1315,
  [SMALL_STATE(40)] = 1343,
  [SMALL_STATE(41)] = 1365,
  [SMALL_STATE(42)] = 1383,
  [SMALL_STATE(43)] = 1411,
  [SMALL_STATE(44)] = 1429,
  [SMALL_STATE(45)] = 1455,
  [SMALL_STATE(46)] = 1481,
  [SMALL_STATE(47)] = 1507,
  [SMALL_STATE(48)] = 1531,
  [SMALL_STATE(49)] = 1559,
  [SMALL_STATE(50)] = 1587,
  [SMALL_STATE(51)] = 1615,
  [SMALL_STATE(52)] = 1632,
  [SMALL_STATE(53)] = 1649,
  [SMALL_STATE(54)] = 1674,
  [SMALL_STATE(55)] = 1699,
  [SMALL_STATE(56)] = 1720,
  [SMALL_STATE(57)] = 1743,
  [SMALL_STATE(58)] = 1766,
  [SMALL_STATE(59)] = 1789,
  [SMALL_STATE(60)] = 1806,
  [SMALL_STATE(61)] = 1831,
  [SMALL_STATE(62)] = 1856,
  [SMALL_STATE(63)] = 1881,
  [SMALL_STATE(64)] = 1898,
  [SMALL_STATE(65)] = 1915,
  [SMALL_STATE(66)] = 1940,
  [SMALL_STATE(67)] = 1963,
  [SMALL_STATE(68)] = 1980,
  [SMALL_STATE(69)] = 1997,
  [SMALL_STATE(70)] = 2022,
  [SMALL_STATE(71)] = 2045,
  [SMALL_STATE(72)] = 2070,
  [SMALL_STATE(73)] = 2095,
  [SMALL_STATE(74)] = 2120,
  [SMALL_STATE(75)] = 2145,
  [SMALL_STATE(76)] = 2162,
  [SMALL_STATE(77)] = 2187,
  [SMALL_STATE(78)] = 2203,
  [SMALL_STATE(79)] = 2219,
  [SMALL_STATE(80)] = 2241,
  [SMALL_STATE(81)] = 2263,
  [SMALL_STATE(82)] = 2279,
  [SMALL_STATE(83)] = 2301,
  [SMALL_STATE(84)] = 2321,
  [SMALL_STATE(85)] = 2337,
  [SMALL_STATE(86)] = 2359,
  [SMALL_STATE(87)] = 2375,
  [SMALL_STATE(88)] = 2391,
  [SMALL_STATE(89)] = 2413,
  [SMALL_STATE(90)] = 2435,
  [SMALL_STATE(91)] = 2451,
  [SMALL_STATE(92)] = 2469,
  [SMALL_STATE(93)] = 2489,
  [SMALL_STATE(94)] = 2505,
  [SMALL_STATE(95)] = 2527,
  [SMALL_STATE(96)] = 2547,
  [SMALL_STATE(97)] = 2563,
  [SMALL_STATE(98)] = 2579,
  [SMALL_STATE(99)] = 2601,
  [SMALL_STATE(100)] = 2619,
  [SMALL_STATE(101)] = 2635,
  [SMALL_STATE(102)] = 2651,
  [SMALL_STATE(103)] = 2667,
  [SMALL_STATE(104)] = 2689,
  [SMALL_STATE(105)] = 2705,
  [SMALL_STATE(106)] = 2721,
  [SMALL_STATE(107)] = 2737,
  [SMALL_STATE(108)] = 2753,
  [SMALL_STATE(109)] = 2769,
  [SMALL_STATE(110)] = 2785,
  [SMALL_STATE(111)] = 2805,
  [SMALL_STATE(112)] = 2825,
  [SMALL_STATE(113)] = 2841,
  [SMALL_STATE(114)] = 2859,
  [SMALL_STATE(115)] = 2879,
  [SMALL_STATE(116)] = 2901,
  [SMALL_STATE(117)] = 2921,
  [SMALL_STATE(118)] = 2943,
  [SMALL_STATE(119)] = 2965,
  [SMALL_STATE(120)] = 2981,
  [SMALL_STATE(121)] = 2998,
  [SMALL_STATE(122)] = 3015,
  [SMALL_STATE(123)] = 3028,
  [SMALL_STATE(124)] = 3047,
  [SMALL_STATE(125)] = 3062,
  [SMALL_STATE(126)] = 3075,
  [SMALL_STATE(127)] = 3088,
  [SMALL_STATE(128)] = 3107,
  [SMALL_STATE(129)] = 3120,
  [SMALL_STATE(130)] = 3135,
  [SMALL_STATE(131)] = 3150,
  [SMALL_STATE(132)] = 3165,
  [SMALL_STATE(133)] = 3184,
  [SMALL_STATE(134)] = 3201,
  [SMALL_STATE(135)] = 3220,
  [SMALL_STATE(136)] = 3239,
  [SMALL_STATE(137)] = 3258,
  [SMALL_STATE(138)] = 3273,
  [SMALL_STATE(139)] = 3288,
  [SMALL_STATE(140)] = 3303,
  [SMALL_STATE(141)] = 3318,
  [SMALL_STATE(142)] = 3333,
  [SMALL_STATE(143)] = 3348,
  [SMALL_STATE(144)] = 3361,
  [SMALL_STATE(145)] = 3374,
  [SMALL_STATE(146)] = 3393,
  [SMALL_STATE(147)] = 3408,
  [SMALL_STATE(148)] = 3421,
  [SMALL_STATE(149)] = 3434,
  [SMALL_STATE(150)] = 3451,
  [SMALL_STATE(151)] = 3464,
  [SMALL_STATE(152)] = 3479,
  [SMALL_STATE(153)] = 3498,
  [SMALL_STATE(154)] = 3513,
  [SMALL_STATE(155)] = 3526,
  [SMALL_STATE(156)] = 3540,
  [SMALL_STATE(157)] = 3556,
  [SMALL_STATE(158)] = 3572,
  [SMALL_STATE(159)] = 3586,
  [SMALL_STATE(160)] = 3602,
  [SMALL_STATE(161)] = 3618,
  [SMALL_STATE(162)] = 3630,
  [SMALL_STATE(163)] = 3646,
  [SMALL_STATE(164)] = 3662,
  [SMALL_STATE(165)] = 3678,
  [SMALL_STATE(166)] = 3694,
  [SMALL_STATE(167)] = 3710,
  [SMALL_STATE(168)] = 3726,
  [SMALL_STATE(169)] = 3740,
  [SMALL_STATE(170)] = 3756,
  [SMALL_STATE(171)] = 3770,
  [SMALL_STATE(172)] = 3782,
  [SMALL_STATE(173)] = 3798,
  [SMALL_STATE(174)] = 3814,
  [SMALL_STATE(175)] = 3830,
  [SMALL_STATE(176)] = 3846,
  [SMALL_STATE(177)] = 3858,
  [SMALL_STATE(178)] = 3874,
  [SMALL_STATE(179)] = 3890,
  [SMALL_STATE(180)] = 3906,
  [SMALL_STATE(181)] = 3922,
  [SMALL_STATE(182)] = 3938,
  [SMALL_STATE(183)] = 3954,
  [SMALL_STATE(184)] = 3966,
  [SMALL_STATE(185)] = 3978,
  [SMALL_STATE(186)] = 3994,
  [SMALL_STATE(187)] = 4010,
  [SMALL_STATE(188)] = 4024,
  [SMALL_STATE(189)] = 4036,
  [SMALL_STATE(190)] = 4050,
  [SMALL_STATE(191)] = 4062,
  [SMALL_STATE(192)] = 4078,
  [SMALL_STATE(193)] = 4090,
  [SMALL_STATE(194)] = 4102,
  [SMALL_STATE(195)] = 4114,
  [SMALL_STATE(196)] = 4126,
  [SMALL_STATE(197)] = 4140,
  [SMALL_STATE(198)] = 4154,
  [SMALL_STATE(199)] = 4166,
  [SMALL_STATE(200)] = 4178,
  [SMALL_STATE(201)] = 4192,
  [SMALL_STATE(202)] = 4206,
  [SMALL_STATE(203)] = 4222,
  [SMALL_STATE(204)] = 4236,
  [SMALL_STATE(205)] = 4250,
  [SMALL_STATE(206)] = 4266,
  [SMALL_STATE(207)] = 4282,
  [SMALL_STATE(208)] = 4298,
  [SMALL_STATE(209)] = 4312,
  [SMALL_STATE(210)] = 4326,
  [SMALL_STATE(211)] = 4340,
  [SMALL_STATE(212)] = 4354,
  [SMALL_STATE(213)] = 4370,
  [SMALL_STATE(214)] = 4384,
  [SMALL_STATE(215)] = 4398,
  [SMALL_STATE(216)] = 4412,
  [SMALL_STATE(217)] = 4426,
  [SMALL_STATE(218)] = 4440,
  [SMALL_STATE(219)] = 4456,
  [SMALL_STATE(220)] = 4469,
  [SMALL_STATE(221)] = 4482,
  [SMALL_STATE(222)] = 4495,
  [SMALL_STATE(223)] = 4508,
  [SMALL_STATE(224)] = 4521,
  [SMALL_STATE(225)] = 4534,
  [SMALL_STATE(226)] = 4547,
  [SMALL_STATE(227)] = 4560,
  [SMALL_STATE(228)] = 4573,
  [SMALL_STATE(229)] = 4584,
  [SMALL_STATE(230)] = 4597,
  [SMALL_STATE(231)] = 4608,
  [SMALL_STATE(232)] = 4621,
  [SMALL_STATE(233)] = 4632,
  [SMALL_STATE(234)] = 4645,
  [SMALL_STATE(235)] = 4658,
  [SMALL_STATE(236)] = 4671,
  [SMALL_STATE(237)] = 4684,
  [SMALL_STATE(238)] = 4697,
  [SMALL_STATE(239)] = 4710,
  [SMALL_STATE(240)] = 4723,
  [SMALL_STATE(241)] = 4736,
  [SMALL_STATE(242)] = 4749,
  [SMALL_STATE(243)] = 4760,
  [SMALL_STATE(244)] = 4771,
  [SMALL_STATE(245)] = 4784,
  [SMALL_STATE(246)] = 4795,
  [SMALL_STATE(247)] = 4808,
  [SMALL_STATE(248)] = 4821,
  [SMALL_STATE(249)] = 4834,
  [SMALL_STATE(250)] = 4847,
  [SMALL_STATE(251)] = 4860,
  [SMALL_STATE(252)] = 4871,
  [SMALL_STATE(253)] = 4884,
  [SMALL_STATE(254)] = 4897,
  [SMALL_STATE(255)] = 4910,
  [SMALL_STATE(256)] = 4923,
  [SMALL_STATE(257)] = 4936,
  [SMALL_STATE(258)] = 4946,
  [SMALL_STATE(259)] = 4956,
  [SMALL_STATE(260)] = 4966,
  [SMALL_STATE(261)] = 4976,
  [SMALL_STATE(262)] = 4986,
  [SMALL_STATE(263)] = 4996,
  [SMALL_STATE(264)] = 5006,
  [SMALL_STATE(265)] = 5016,
  [SMALL_STATE(266)] = 5026,
  [SMALL_STATE(267)] = 5036,
  [SMALL_STATE(268)] = 5046,
  [SMALL_STATE(269)] = 5056,
  [SMALL_STATE(270)] = 5066,
  [SMALL_STATE(271)] = 5076,
  [SMALL_STATE(272)] = 5086,
  [SMALL_STATE(273)] = 5096,
  [SMALL_STATE(274)] = 5106,
  [SMALL_STATE(275)] = 5116,
  [SMALL_STATE(276)] = 5126,
  [SMALL_STATE(277)] = 5136,
  [SMALL_STATE(278)] = 5146,
  [SMALL_STATE(279)] = 5156,
  [SMALL_STATE(280)] = 5166,
  [SMALL_STATE(281)] = 5176,
  [SMALL_STATE(282)] = 5186,
  [SMALL_STATE(283)] = 5196,
  [SMALL_STATE(284)] = 5206,
  [SMALL_STATE(285)] = 5216,
  [SMALL_STATE(286)] = 5226,
  [SMALL_STATE(287)] = 5236,
  [SMALL_STATE(288)] = 5246,
  [SMALL_STATE(289)] = 5256,
  [SMALL_STATE(290)] = 5266,
  [SMALL_STATE(291)] = 5276,
  [SMALL_STATE(292)] = 5286,
  [SMALL_STATE(293)] = 5296,
  [SMALL_STATE(294)] = 5306,
  [SMALL_STATE(295)] = 5316,
  [SMALL_STATE(296)] = 5326,
  [SMALL_STATE(297)] = 5336,
  [SMALL_STATE(298)] = 5346,
  [SMALL_STATE(299)] = 5356,
  [SMALL_STATE(300)] = 5366,
  [SMALL_STATE(301)] = 5376,
  [SMALL_STATE(302)] = 5386,
  [SMALL_STATE(303)] = 5396,
  [SMALL_STATE(304)] = 5406,
  [SMALL_STATE(305)] = 5416,
  [SMALL_STATE(306)] = 5426,
  [SMALL_STATE(307)] = 5436,
  [SMALL_STATE(308)] = 5446,
  [SMALL_STATE(309)] = 5456,
  [SMALL_STATE(310)] = 5466,
  [SMALL_STATE(311)] = 5476,
  [SMALL_STATE(312)] = 5486,
  [SMALL_STATE(313)] = 5496,
  [SMALL_STATE(314)] = 5506,
  [SMALL_STATE(315)] = 5516,
  [SMALL_STATE(316)] = 5526,
  [SMALL_STATE(317)] = 5536,
  [SMALL_STATE(318)] = 5546,
  [SMALL_STATE(319)] = 5556,
  [SMALL_STATE(320)] = 5566,
  [SMALL_STATE(321)] = 5576,
  [SMALL_STATE(322)] = 5586,
  [SMALL_STATE(323)] = 5596,
  [SMALL_STATE(324)] = 5606,
  [SMALL_STATE(325)] = 5616,
  [SMALL_STATE(326)] = 5626,
  [SMALL_STATE(327)] = 5636,
  [SMALL_STATE(328)] = 5646,
  [SMALL_STATE(329)] = 5656,
  [SMALL_STATE(330)] = 5666,
  [SMALL_STATE(331)] = 5676,
  [SMALL_STATE(332)] = 5686,
  [SMALL_STATE(333)] = 5696,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(218),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(63),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(244),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(163),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(90),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(157),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(119),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(119),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(250),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(167),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(81),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(162),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(77),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(125),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(177),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(125),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(177),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(270),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(165),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(142),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(131),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(156),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(181),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(113),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(196),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(212),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(160),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(176),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(161),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(172),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(209),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(174),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(124),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(124),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(104),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(285),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(61),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(178),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(264),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(170),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(259),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(122),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(123),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(229),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [835] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
