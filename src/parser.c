#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 342
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
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 9:
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
    case 10:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 14:
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
    case 15:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 16:
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
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
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
      if (lookahead == '\n') SKIP(29)
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
      if (lookahead == '\n') SKIP(45)
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
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == ',') ADVANCE(237);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '=') ADVANCE(242);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(224);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(217);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(199);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 45:
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(228);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 55:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
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
          lookahead == ' ') SKIP(53)
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
          lookahead == ' ') SKIP(53)
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
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == 'N') ADVANCE(50);
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
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(50);
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
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 32},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 32},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 160},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 25},
  [90] = {.lex_state = 160},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 160},
  [93] = {.lex_state = 55},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 38},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 39},
  [114] = {.lex_state = 39},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 39},
  [119] = {.lex_state = 39},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 39},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 39},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 44},
  [130] = {.lex_state = 39},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 43},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 39},
  [140] = {.lex_state = 30},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 160},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 33},
  [157] = {.lex_state = 43},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 30},
  [162] = {.lex_state = 33},
  [163] = {.lex_state = 33},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 30},
  [166] = {.lex_state = 37},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 160},
  [169] = {.lex_state = 51},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 51},
  [173] = {.lex_state = 51},
  [174] = {.lex_state = 51},
  [175] = {.lex_state = 51},
  [176] = {.lex_state = 51},
  [177] = {.lex_state = 51},
  [178] = {.lex_state = 51},
  [179] = {.lex_state = 51},
  [180] = {.lex_state = 51},
  [181] = {.lex_state = 51},
  [182] = {.lex_state = 51},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 51},
  [185] = {.lex_state = 51},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 51},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 51},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 51},
  [192] = {.lex_state = 51},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 37},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 160},
  [199] = {.lex_state = 23},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 13},
  [203] = {.lex_state = 13},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 13},
  [206] = {.lex_state = 160},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 16},
  [211] = {.lex_state = 16},
  [212] = {.lex_state = 51},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 30},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 15},
  [219] = {.lex_state = 160},
  [220] = {.lex_state = 13},
  [221] = {.lex_state = 23},
  [222] = {.lex_state = 37},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 16},
  [225] = {.lex_state = 51},
  [226] = {.lex_state = 37},
  [227] = {.lex_state = 37},
  [228] = {.lex_state = 37},
  [229] = {.lex_state = 16},
  [230] = {.lex_state = 47},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 20},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 23},
  [235] = {.lex_state = 23},
  [236] = {.lex_state = 20},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 23},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 39},
  [241] = {.lex_state = 47},
  [242] = {.lex_state = 160},
  [243] = {.lex_state = 38},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 160},
  [246] = {.lex_state = 160},
  [247] = {.lex_state = 160},
  [248] = {.lex_state = 39},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 16},
  [251] = {.lex_state = 23},
  [252] = {.lex_state = 57},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 160},
  [255] = {.lex_state = 160},
  [256] = {.lex_state = 41},
  [257] = {.lex_state = 160},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 23},
  [260] = {.lex_state = 57},
  [261] = {.lex_state = 160},
  [262] = {.lex_state = 160},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 57},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 160},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 196},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 160},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 160},
  [279] = {.lex_state = 160},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 160},
  [282] = {.lex_state = 56},
  [283] = {.lex_state = 160},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 160},
  [287] = {.lex_state = 58},
  [288] = {.lex_state = 160},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 160},
  [291] = {.lex_state = 59},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 59},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 160},
  [299] = {.lex_state = 59},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 196},
  [303] = {.lex_state = 59},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 196},
  [306] = {.lex_state = 160},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 160},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 160},
  [313] = {.lex_state = 54},
  [314] = {.lex_state = 160},
  [315] = {.lex_state = 160},
  [316] = {.lex_state = 54},
  [317] = {.lex_state = 160},
  [318] = {.lex_state = 160},
  [319] = {.lex_state = 160},
  [320] = {.lex_state = 37},
  [321] = {.lex_state = 160},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 160},
  [324] = {.lex_state = 160},
  [325] = {.lex_state = 58},
  [326] = {.lex_state = 160},
  [327] = {.lex_state = 58},
  [328] = {.lex_state = 160},
  [329] = {.lex_state = 58},
  [330] = {.lex_state = 160},
  [331] = {.lex_state = 58},
  [332] = {.lex_state = 58},
  [333] = {.lex_state = 58},
  [334] = {.lex_state = 58},
  [335] = {.lex_state = 58},
  [336] = {.lex_state = 58},
  [337] = {.lex_state = 58},
  [338] = {.lex_state = 58},
  [339] = {.lex_state = 58},
  [340] = {.lex_state = 54},
  [341] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(285),
    [sym__instruction] = STATE(311),
    [sym_from_instruction] = STATE(273),
    [sym_run_instruction] = STATE(273),
    [sym_cmd_instruction] = STATE(273),
    [sym_label_instruction] = STATE(273),
    [sym_expose_instruction] = STATE(273),
    [sym_env_instruction] = STATE(273),
    [sym_add_instruction] = STATE(273),
    [sym_copy_instruction] = STATE(273),
    [sym_entrypoint_instruction] = STATE(273),
    [sym_volume_instruction] = STATE(273),
    [sym_user_instruction] = STATE(273),
    [sym_workdir_instruction] = STATE(273),
    [sym_arg_instruction] = STATE(273),
    [sym_onbuild_instruction] = STATE(273),
    [sym_stopsignal_instruction] = STATE(273),
    [sym_healthcheck_instruction] = STATE(273),
    [sym_shell_instruction] = STATE(273),
    [sym_maintainer_instruction] = STATE(273),
    [sym_cross_build_instruction] = STATE(273),
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
    STATE(311), 1,
      sym__instruction,
    STATE(2), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(273), 19,
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
    STATE(311), 1,
      sym__instruction,
    STATE(273), 19,
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
    STATE(304), 1,
      sym__instruction,
    STATE(273), 19,
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
    STATE(18), 1,
      aux_sym_shell_command_repeat1,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym__comment_line,
    STATE(204), 1,
      sym_shell_fragment,
    STATE(265), 1,
      sym__anon_comment,
    ACTIONS(115), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(76), 2,
      sym_param,
      sym_mount_param,
    STATE(263), 2,
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
      aux_sym_shell_command_repeat1,
    STATE(19), 1,
      aux_sym_run_instruction_repeat1,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym__comment_line,
    STATE(204), 1,
      sym_shell_fragment,
    STATE(265), 1,
      sym__anon_comment,
    ACTIONS(115), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(76), 2,
      sym_param,
      sym_mount_param,
    STATE(307), 2,
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
    STATE(28), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(99), 1,
      sym__imm_expansion,
    STATE(108), 1,
      sym__immediate_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(233), 3,
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
    STATE(18), 1,
      aux_sym_shell_command_repeat1,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym__comment_line,
    STATE(204), 1,
      sym_shell_fragment,
    STATE(265), 1,
      sym__anon_comment,
    STATE(300), 2,
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
    STATE(18), 1,
      aux_sym_shell_command_repeat1,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym__comment_line,
    STATE(204), 1,
      sym_shell_fragment,
    STATE(265), 1,
      sym__anon_comment,
    STATE(280), 2,
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
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym__imm_expansion,
    STATE(54), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(164), 3,
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
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym__imm_expansion,
    STATE(54), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(310), 3,
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
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym__imm_expansion,
    STATE(54), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(293), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [624] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(135), 1,
      anon_sym_DOLLAR2,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_line_continuation,
    STATE(15), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym__imm_expansion,
    STATE(54), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(145), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [655] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      anon_sym_DOLLAR2,
    STATE(52), 1,
      sym__imm_expansion,
    STATE(54), 1,
      sym__immediate_expansion,
    ACTIONS(154), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(15), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(152), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [684] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_line_continuation,
    STATE(57), 1,
      aux_sym_shell_command_repeat1,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym__comment_line,
    STATE(265), 1,
      sym__anon_comment,
    STATE(270), 1,
      sym_shell_fragment,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [714] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(159), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(161), 1,
      anon_sym_DOLLAR2,
    ACTIONS(163), 1,
      aux_sym_image_name_token2,
    STATE(17), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_image_name_repeat1,
    STATE(85), 1,
      sym__immediate_expansion,
    STATE(86), 1,
      sym__imm_expansion,
    ACTIONS(157), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [744] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_line_continuation,
    STATE(57), 1,
      aux_sym_shell_command_repeat1,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym__comment_line,
    STATE(213), 1,
      sym_shell_fragment,
    STATE(265), 1,
      sym__anon_comment,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [774] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_DASH_DASH,
    ACTIONS(168), 1,
      aux_sym_shell_fragment_token1,
    STATE(19), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(76), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(170), 4,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [798] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(174), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(176), 1,
      anon_sym_DOLLAR2,
    ACTIONS(179), 1,
      aux_sym_image_name_token2,
    STATE(85), 1,
      sym__immediate_expansion,
    STATE(86), 1,
      sym__imm_expansion,
    STATE(20), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(172), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [826] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(16), 1,
      aux_sym_shell_command_repeat1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(112), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(163), 1,
      sym__comment_line,
    STATE(265), 1,
      sym__anon_comment,
    STATE(322), 1,
      sym_shell_fragment,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [856] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(161), 1,
      anon_sym_DOLLAR2,
    ACTIONS(163), 1,
      aux_sym_image_name_token2,
    ACTIONS(184), 1,
      aux_sym_from_instruction_token2,
    STATE(20), 1,
      aux_sym_image_name_repeat1,
    STATE(22), 1,
      sym_line_continuation,
    STATE(85), 1,
      sym__immediate_expansion,
    STATE(86), 1,
      sym__imm_expansion,
    ACTIONS(182), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [886] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(188), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(190), 1,
      anon_sym_DOLLAR2,
    ACTIONS(192), 1,
      aux_sym_image_tag_token1,
    STATE(23), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym_image_tag_repeat1,
    STATE(106), 1,
      sym__imm_expansion,
    STATE(121), 1,
      sym__immediate_expansion,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_AT,
  [915] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      aux_sym__env_key_token1,
    ACTIONS(194), 1,
      anon_sym_DOLLAR2,
    STATE(99), 1,
      sym__imm_expansion,
    STATE(108), 1,
      sym__immediate_expansion,
    ACTIONS(197), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(24), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [942] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR2,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    STATE(25), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(117), 1,
      sym__immediate_expansion,
    ACTIONS(204), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [971] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(210), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(213), 1,
      anon_sym_DOLLAR2,
    STATE(141), 1,
      sym__immediate_expansion,
    STATE(142), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(145), 1,
      sym__imm_expansion,
    ACTIONS(208), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(26), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [998] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(216), 1,
      anon_sym_DOLLAR2,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_BSLASH,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(117), 1,
      sym__immediate_expansion,
    ACTIONS(221), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1025] = 9,
    ACTIONS(123), 1,
      anon_sym_DOLLAR2,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      aux_sym__env_key_token1,
    STATE(24), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(99), 1,
      sym__imm_expansion,
    STATE(108), 1,
      sym__immediate_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1054] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(227), 1,
      anon_sym_LF,
    ACTIONS(229), 1,
      aux_sym_label_pair_token1,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym_line_continuation,
    STATE(35), 1,
      aux_sym_label_instruction_repeat1,
    STATE(128), 1,
      sym_label_pair,
    STATE(261), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1083] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR2,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(117), 1,
      sym__immediate_expansion,
    ACTIONS(204), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1112] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR2,
    STATE(26), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(31), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym__immediate_expansion,
    STATE(142), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(145), 1,
      sym__imm_expansion,
    ACTIONS(237), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1141] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      aux_sym_shell_fragment_token1,
    STATE(32), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(243), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1162] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR2,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_line_continuation,
    STATE(36), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(117), 1,
      sym__immediate_expansion,
    ACTIONS(204), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1191] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      aux_sym_shell_fragment_token1,
    STATE(32), 1,
      aux_sym_mount_param_repeat1,
    STATE(34), 1,
      sym_line_continuation,
    ACTIONS(252), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1214] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 1,
      aux_sym_label_pair_token1,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
    STATE(128), 1,
      sym_label_pair,
    STATE(35), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
    STATE(261), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1241] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR2,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(36), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(117), 1,
      sym__immediate_expansion,
    ACTIONS(204), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1270] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR2,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(37), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(117), 1,
      sym__immediate_expansion,
    ACTIONS(204), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1299] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR2,
    STATE(31), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(38), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym__immediate_expansion,
    STATE(142), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(145), 1,
      sym__imm_expansion,
    ACTIONS(273), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1328] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      aux_sym_shell_fragment_token1,
    STATE(34), 1,
      aux_sym_mount_param_repeat1,
    STATE(39), 1,
      sym_line_continuation,
    ACTIONS(275), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1351] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(283), 1,
      anon_sym_DOLLAR2,
    ACTIONS(286), 1,
      aux_sym_image_tag_token1,
    STATE(106), 1,
      sym__imm_expansion,
    STATE(121), 1,
      sym__immediate_expansion,
    ACTIONS(279), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(40), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1378] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR2,
    ACTIONS(206), 1,
      anon_sym_BSLASH,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(41), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__imm_expansion,
    STATE(117), 1,
      sym__immediate_expansion,
    ACTIONS(204), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1407] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(42), 1,
      sym_line_continuation,
    ACTIONS(293), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(291), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1425] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(297), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(299), 1,
      anon_sym_DOLLAR2,
    ACTIONS(302), 1,
      aux_sym_image_digest_token1,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(138), 1,
      sym__imm_expansion,
    STATE(43), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1451] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(248), 1,
      aux_sym_shell_fragment_token1,
    STATE(44), 1,
      sym_line_continuation,
    ACTIONS(243), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1469] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(307), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    STATE(141), 1,
      sym__immediate_expansion,
    STATE(145), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(45), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [1495] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 1,
      aux_sym_shell_fragment_token1,
    STATE(46), 1,
      sym_line_continuation,
    ACTIONS(313), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1513] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(317), 1,
      anon_sym_DOLLAR,
    ACTIONS(319), 1,
      aux_sym_image_name_token1,
    ACTIONS(321), 1,
      anon_sym_DASH_DASH,
    STATE(17), 1,
      sym_expansion,
    STATE(47), 1,
      sym_line_continuation,
    STATE(78), 1,
      sym_image_name,
    STATE(110), 1,
      sym_param,
    STATE(250), 1,
      sym_image_spec,
  [1541] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      aux_sym_path_token2,
    ACTIONS(327), 1,
      anon_sym_DOLLAR2,
    STATE(48), 1,
      sym_line_continuation,
    STATE(50), 1,
      aux_sym_path_repeat1,
    STATE(151), 1,
      sym__imm_expansion,
    STATE(158), 1,
      sym__immediate_expansion,
    ACTIONS(323), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1567] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR2,
    ACTIONS(329), 1,
      anon_sym_LF,
    STATE(45), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(49), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym__immediate_expansion,
    STATE(145), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_user_name_or_group_fragment,
  [1595] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(325), 1,
      aux_sym_path_token2,
    ACTIONS(327), 1,
      anon_sym_DOLLAR2,
    STATE(50), 1,
      sym_line_continuation,
    STATE(51), 1,
      aux_sym_path_repeat1,
    STATE(151), 1,
      sym__imm_expansion,
    STATE(158), 1,
      sym__immediate_expansion,
    ACTIONS(331), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1621] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(335), 1,
      aux_sym_path_token2,
    ACTIONS(338), 1,
      anon_sym_DOLLAR2,
    STATE(151), 1,
      sym__imm_expansion,
    STATE(158), 1,
      sym__immediate_expansion,
    ACTIONS(333), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(51), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1645] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(52), 1,
      sym_line_continuation,
    ACTIONS(343), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(341), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1663] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(53), 1,
      sym_line_continuation,
    ACTIONS(347), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(345), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1681] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(54), 1,
      sym_line_continuation,
    ACTIONS(351), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(349), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1699] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(355), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(353), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1717] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(359), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(361), 1,
      anon_sym_DOLLAR2,
    ACTIONS(363), 1,
      aux_sym_image_digest_token1,
    STATE(43), 1,
      aux_sym_image_digest_repeat1,
    STATE(56), 1,
      sym_line_continuation,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(138), 1,
      sym__imm_expansion,
  [1745] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym__comment_line,
    STATE(265), 1,
      sym__anon_comment,
    STATE(57), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(365), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1767] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      aux_sym_path_token1,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DASH_DASH,
    STATE(58), 1,
      sym_line_continuation,
    STATE(69), 1,
      sym_expansion,
    STATE(88), 1,
      sym_param,
    STATE(122), 1,
      aux_sym_add_instruction_repeat1,
    STATE(320), 1,
      sym_path,
  [1795] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      aux_sym_path_token1,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_DASH_DASH,
    STATE(59), 1,
      sym_line_continuation,
    STATE(69), 1,
      sym_expansion,
    STATE(118), 1,
      sym_param,
    STATE(119), 1,
      aux_sym_add_instruction_repeat1,
    STATE(320), 1,
      sym_path,
  [1823] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(376), 1,
      aux_sym_label_pair_token1,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_label_instruction_repeat1,
    STATE(60), 1,
      sym_line_continuation,
    STATE(128), 1,
      sym_label_pair,
    STATE(261), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1849] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(384), 1,
      aux_sym_path_token2,
    ACTIONS(386), 1,
      anon_sym_DOLLAR2,
    STATE(61), 1,
      sym_line_continuation,
    STATE(81), 1,
      aux_sym_path_repeat1,
    STATE(216), 1,
      sym__imm_expansion,
    STATE(223), 1,
      sym__immediate_expansion,
  [1874] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(392), 1,
      aux_sym_image_alias_token2,
    STATE(62), 1,
      sym_line_continuation,
    STATE(73), 1,
      aux_sym_image_alias_repeat1,
    STATE(190), 1,
      sym__immediate_expansion,
    STATE(194), 1,
      sym__imm_expansion,
  [1899] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      anon_sym_DOLLAR,
    ACTIONS(398), 1,
      aux_sym_expose_port_token1,
    STATE(63), 1,
      sym_line_continuation,
    STATE(77), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(188), 2,
      sym_expansion,
      sym_expose_port,
  [1922] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(347), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(345), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1939] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(404), 1,
      anon_sym_DOLLAR2,
    STATE(65), 1,
      sym_line_continuation,
    STATE(66), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(205), 1,
      sym__imm_expansion,
    STATE(220), 1,
      sym__immediate_expansion,
  [1964] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(408), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(411), 1,
      anon_sym_DOLLAR2,
    STATE(205), 1,
      sym__imm_expansion,
    STATE(220), 1,
      sym__immediate_expansion,
    STATE(66), 2,
      sym_line_continuation,
      aux_sym__stopsignal_value_repeat1,
  [1987] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(414), 1,
      aux_sym_path_token2,
    ACTIONS(417), 1,
      anon_sym_DOLLAR2,
    ACTIONS(420), 1,
      sym__non_newline_whitespace,
    STATE(196), 1,
      sym__immediate_expansion,
    STATE(226), 1,
      sym__imm_expansion,
    STATE(67), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2010] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(239), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR2,
    STATE(49), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(68), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym__immediate_expansion,
    STATE(145), 1,
      sym__imm_expansion,
    STATE(186), 1,
      sym__immediate_user_name_or_group_fragment,
  [2035] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(422), 1,
      aux_sym_path_token2,
    ACTIONS(424), 1,
      anon_sym_DOLLAR2,
    ACTIONS(426), 1,
      sym__non_newline_whitespace,
    STATE(69), 1,
      sym_line_continuation,
    STATE(75), 1,
      aux_sym_path_repeat1,
    STATE(196), 1,
      sym__immediate_expansion,
    STATE(226), 1,
      sym__imm_expansion,
  [2060] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym_expansion,
    STATE(70), 1,
      sym_line_continuation,
    STATE(221), 1,
      sym_path,
    STATE(292), 1,
      sym_json_string_array,
  [2085] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(402), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(404), 1,
      anon_sym_DOLLAR2,
    ACTIONS(432), 1,
      anon_sym_LF,
    STATE(65), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(71), 1,
      sym_line_continuation,
    STATE(205), 1,
      sym__imm_expansion,
    STATE(220), 1,
      sym__immediate_expansion,
  [2110] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(72), 1,
      sym_line_continuation,
    ACTIONS(293), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(291), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2127] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(392), 1,
      aux_sym_image_alias_token2,
    ACTIONS(434), 1,
      anon_sym_LF,
    STATE(73), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_image_alias_repeat1,
    STATE(190), 1,
      sym__immediate_expansion,
    STATE(194), 1,
      sym__imm_expansion,
  [2152] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(438), 1,
      anon_sym_DOLLAR2,
    ACTIONS(441), 1,
      aux_sym_image_alias_token2,
    STATE(190), 1,
      sym__immediate_expansion,
    STATE(194), 1,
      sym__imm_expansion,
    STATE(74), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2175] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(382), 1,
      sym__non_newline_whitespace,
    ACTIONS(422), 1,
      aux_sym_path_token2,
    ACTIONS(424), 1,
      anon_sym_DOLLAR2,
    STATE(67), 1,
      aux_sym_path_repeat1,
    STATE(75), 1,
      sym_line_continuation,
    STATE(196), 1,
      sym__immediate_expansion,
    STATE(226), 1,
      sym__imm_expansion,
  [2200] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(446), 1,
      aux_sym_shell_fragment_token1,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(444), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2217] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    ACTIONS(453), 1,
      aux_sym_expose_port_token1,
    STATE(77), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(188), 2,
      sym_expansion,
      sym_expose_port,
  [2238] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_AT,
    STATE(78), 1,
      sym_line_continuation,
    STATE(135), 1,
      sym_image_tag,
    STATE(253), 1,
      sym_image_digest,
  [2263] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(466), 1,
      aux_sym_shell_fragment_token1,
    STATE(79), 1,
      sym_line_continuation,
    ACTIONS(464), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2280] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(384), 1,
      aux_sym_path_token2,
    ACTIONS(386), 1,
      anon_sym_DOLLAR2,
    ACTIONS(426), 1,
      anon_sym_LF,
    STATE(61), 1,
      aux_sym_path_repeat1,
    STATE(80), 1,
      sym_line_continuation,
    STATE(216), 1,
      sym__imm_expansion,
    STATE(223), 1,
      sym__immediate_expansion,
  [2305] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(468), 1,
      aux_sym_path_token2,
    ACTIONS(471), 1,
      anon_sym_DOLLAR2,
    STATE(216), 1,
      sym__imm_expansion,
    STATE(223), 1,
      sym__immediate_expansion,
    STATE(81), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2328] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(82), 1,
      sym_line_continuation,
    ACTIONS(355), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(353), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2345] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(476), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(474), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2362] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(478), 1,
      anon_sym_NONE,
    ACTIONS(480), 1,
      anon_sym_DASH_DASH,
    STATE(84), 1,
      sym_line_continuation,
    STATE(92), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(242), 1,
      sym_param,
    STATE(297), 1,
      sym_cmd_instruction,
  [2387] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(484), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(482), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2404] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(343), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(341), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2421] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      anon_sym_BSLASH,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
    STATE(87), 2,
      sym_line_continuation,
      aux_sym_single_quoted_string_repeat1,
  [2439] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      aux_sym_path_token1,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    STATE(69), 1,
      sym_expansion,
    STATE(88), 1,
      sym_line_continuation,
    STATE(114), 1,
      aux_sym_add_instruction_repeat1,
    STATE(320), 1,
      sym_path,
  [2461] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(89), 1,
      sym_line_continuation,
    ACTIONS(498), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2481] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(500), 1,
      anon_sym_DOLLAR,
    ACTIONS(502), 1,
      aux_sym_expose_port_token1,
    STATE(63), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(90), 1,
      sym_line_continuation,
    STATE(188), 2,
      sym_expansion,
      sym_expose_port,
  [2501] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(504), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(498), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2521] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(480), 1,
      anon_sym_DASH_DASH,
    STATE(92), 1,
      sym_line_continuation,
    STATE(148), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(242), 1,
      sym_param,
    STATE(277), 1,
      sym_cmd_instruction,
  [2543] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(506), 1,
      aux_sym__env_key_token1,
    STATE(93), 1,
      sym_line_continuation,
    STATE(124), 1,
      aux_sym_env_instruction_repeat1,
    STATE(230), 1,
      sym__env_key,
    STATE(239), 1,
      sym_env_pair,
    STATE(308), 1,
      sym__spaced_env_pair,
  [2565] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(94), 1,
      sym_line_continuation,
    ACTIONS(498), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2585] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(510), 1,
      anon_sym_SQUOTE,
    STATE(94), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(498), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2605] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      aux_sym__env_key_token1,
    STATE(96), 1,
      sym_line_continuation,
    ACTIONS(291), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2621] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(355), 1,
      aux_sym__env_key_token1,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(353), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2637] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(347), 1,
      aux_sym__env_key_token1,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(345), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2653] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(343), 1,
      aux_sym__env_key_token1,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(341), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2669] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(190), 1,
      anon_sym_DOLLAR2,
    ACTIONS(192), 1,
      aux_sym_image_tag_token1,
    STATE(23), 1,
      aux_sym_image_tag_repeat1,
    STATE(100), 1,
      sym_line_continuation,
    STATE(106), 1,
      sym__imm_expansion,
    STATE(121), 1,
      sym__immediate_expansion,
  [2691] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      anon_sym_DOLLAR2,
    ACTIONS(363), 1,
      aux_sym_image_digest_token1,
    STATE(56), 1,
      aux_sym_image_digest_repeat1,
    STATE(101), 1,
      sym_line_continuation,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(138), 1,
      sym__imm_expansion,
  [2713] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(293), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(291), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2729] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(355), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(353), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2745] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(293), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(291), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2761] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(347), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(345), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2777] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(343), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(341), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2793] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(355), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(353), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2809] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      aux_sym__env_key_token1,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(349), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2825] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(347), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(345), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2841] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(317), 1,
      anon_sym_DOLLAR,
    ACTIONS(319), 1,
      aux_sym_image_name_token1,
    STATE(17), 1,
      sym_expansion,
    STATE(78), 1,
      sym_image_name,
    STATE(110), 1,
      sym_line_continuation,
    STATE(229), 1,
      sym_image_spec,
  [2863] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(343), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(341), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2879] = 5,
    ACTIONS(512), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 1,
      sym_line_continuation,
    STATE(115), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(514), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2897] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(518), 1,
      aux_sym_path_token1,
    ACTIONS(521), 1,
      anon_sym_DOLLAR,
    STATE(69), 1,
      sym_expansion,
    STATE(320), 1,
      sym_path,
    STATE(113), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [2917] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym_expansion,
    STATE(113), 1,
      aux_sym_add_instruction_repeat1,
    STATE(114), 1,
      sym_line_continuation,
    STATE(235), 1,
      sym_path,
  [2939] = 4,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(529), 1,
      anon_sym_BSLASH_LF,
    STATE(115), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(526), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2955] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym_line_continuation,
    STATE(120), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(498), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2975] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(535), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(533), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2991] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      aux_sym_path_token1,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    STATE(69), 1,
      sym_expansion,
    STATE(118), 1,
      sym_line_continuation,
    STATE(126), 1,
      aux_sym_add_instruction_repeat1,
    STATE(320), 1,
      sym_path,
  [3013] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym_expansion,
    STATE(113), 1,
      aux_sym_add_instruction_repeat1,
    STATE(119), 1,
      sym_line_continuation,
    STATE(251), 1,
      sym_path,
  [3035] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(498), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3055] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(541), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(539), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3071] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym_expansion,
    STATE(113), 1,
      aux_sym_add_instruction_repeat1,
    STATE(122), 1,
      sym_line_continuation,
    STATE(259), 1,
      sym_path,
  [3093] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym__env_key_token1,
    STATE(239), 1,
      sym_env_pair,
    STATE(278), 1,
      sym__env_key,
    STATE(123), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [3113] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(550), 1,
      aux_sym__env_key_token1,
    STATE(123), 1,
      aux_sym_env_instruction_repeat1,
    STATE(124), 1,
      sym_line_continuation,
    STATE(239), 1,
      sym_env_pair,
    STATE(278), 1,
      sym__env_key,
  [3135] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(552), 1,
      anon_sym_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(554), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(556), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [3153] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym_expansion,
    STATE(113), 1,
      aux_sym_add_instruction_repeat1,
    STATE(126), 1,
      sym_line_continuation,
    STATE(234), 1,
      sym_path,
  [3175] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(560), 1,
      aux_sym_from_instruction_token2,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(558), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3190] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(562), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(564), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3205] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(566), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(568), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(129), 1,
      sym_line_continuation,
    STATE(249), 1,
      sym__user_name_or_group,
  [3224] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(570), 1,
      aux_sym_path_token1,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    STATE(80), 1,
      sym_expansion,
    STATE(130), 1,
      sym_line_continuation,
    STATE(276), 1,
      sym_path,
  [3243] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(574), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(576), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3258] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(578), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(580), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      sym_expansion,
    STATE(132), 1,
      sym_line_continuation,
    STATE(269), 1,
      sym__stopsignal_value,
  [3277] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      aux_sym_from_instruction_token2,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(291), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3292] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(582), 1,
      anon_sym_DOLLAR,
    ACTIONS(584), 1,
      aux_sym_image_alias_token1,
    STATE(62), 1,
      sym_expansion,
    STATE(134), 1,
      sym_line_continuation,
    STATE(301), 1,
      sym_image_alias,
  [3311] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(462), 1,
      anon_sym_AT,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      aux_sym_from_instruction_token2,
    STATE(135), 1,
      sym_line_continuation,
    STATE(244), 1,
      sym_image_digest,
  [3330] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(355), 1,
      aux_sym_from_instruction_token2,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(353), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3345] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(347), 1,
      aux_sym_from_instruction_token2,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(345), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3360] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(343), 1,
      aux_sym_from_instruction_token2,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(341), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3375] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym_path_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym_expansion,
    STATE(139), 1,
      sym_line_continuation,
    STATE(238), 1,
      sym_path,
  [3394] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(590), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_line_continuation,
    STATE(161), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(592), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3411] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(594), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3424] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(596), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3437] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(291), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3450] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(345), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3463] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(341), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3476] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(474), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3489] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(353), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3502] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(598), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(600), 1,
      anon_sym_DASH_DASH,
    STATE(242), 1,
      sym_param,
    STATE(148), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [3519] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(291), 1,
      anon_sym_DOLLAR2,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(293), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3534] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      anon_sym_DOLLAR2,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(347), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3549] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(341), 1,
      anon_sym_DOLLAR2,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(343), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3564] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(474), 1,
      anon_sym_DOLLAR2,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(476), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3579] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(353), 1,
      anon_sym_DOLLAR2,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(355), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3594] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_LF,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(605), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3609] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      anon_sym_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(609), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3624] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(611), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3637] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(582), 1,
      anon_sym_DOLLAR,
    ACTIONS(584), 1,
      aux_sym_image_alias_token1,
    STATE(62), 1,
      sym_expansion,
    STATE(157), 1,
      sym_line_continuation,
    STATE(284), 1,
      sym_image_alias,
  [3656] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(615), 1,
      anon_sym_DOLLAR2,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(613), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3671] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(617), 1,
      anon_sym_LF,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(619), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3686] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(623), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3701] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym_line_continuation,
    STATE(165), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(592), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3718] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(627), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3731] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(629), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3744] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(631), 1,
      anon_sym_LF,
    STATE(164), 1,
      sym_line_continuation,
    ACTIONS(633), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3759] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
    ACTIONS(637), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
    STATE(165), 2,
      sym_line_continuation,
      aux_sym_json_string_repeat1,
  [3774] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(347), 1,
      aux_sym_path_token2,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(345), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3788] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(476), 1,
      aux_sym_path_token2,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(474), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3802] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(640), 1,
      anon_sym_COMMA2,
    ACTIONS(642), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_line_continuation,
    STATE(198), 1,
      aux_sym_json_string_array_repeat1,
  [3818] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    ACTIONS(646), 1,
      sym_variable,
    STATE(169), 1,
      sym_line_continuation,
    STATE(193), 1,
      sym__expansion_body,
  [3834] = 4,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 1,
      anon_sym_BSLASH_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(170), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [3848] = 5,
    ACTIONS(653), 1,
      anon_sym_LF,
    ACTIONS(655), 1,
      anon_sym_BSLASH_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(170), 1,
      aux_sym_shell_command_repeat2,
    STATE(171), 1,
      sym_line_continuation,
  [3864] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(657), 1,
      anon_sym_LBRACE,
    ACTIONS(659), 1,
      sym_variable,
    STATE(98), 1,
      sym__expansion_body,
    STATE(172), 1,
      sym_line_continuation,
  [3880] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
    ACTIONS(663), 1,
      sym_variable,
    STATE(53), 1,
      sym__expansion_body,
    STATE(173), 1,
      sym_line_continuation,
  [3896] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(665), 1,
      anon_sym_LBRACE,
    ACTIONS(667), 1,
      sym_variable,
    STATE(137), 1,
      sym__expansion_body,
    STATE(174), 1,
      sym_line_continuation,
  [3912] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    ACTIONS(646), 1,
      sym_variable,
    STATE(175), 1,
      sym_line_continuation,
    STATE(201), 1,
      sym__expansion_body,
  [3928] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
    ACTIONS(671), 1,
      sym_variable,
    STATE(105), 1,
      sym__expansion_body,
    STATE(176), 1,
      sym_line_continuation,
  [3944] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      sym_variable,
    STATE(177), 1,
      sym_line_continuation,
    STATE(207), 1,
      sym__expansion_body,
  [3960] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      sym_variable,
    STATE(178), 1,
      sym_line_continuation,
    STATE(203), 1,
      sym__expansion_body,
  [3976] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(677), 1,
      anon_sym_LBRACE,
    ACTIONS(679), 1,
      sym_variable,
    STATE(167), 1,
      sym__expansion_body,
    STATE(179), 1,
      sym_line_continuation,
  [3992] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(677), 1,
      anon_sym_LBRACE,
    ACTIONS(679), 1,
      sym_variable,
    STATE(180), 1,
      sym_line_continuation,
    STATE(214), 1,
      sym__expansion_body,
  [4008] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(681), 1,
      anon_sym_LBRACE,
    ACTIONS(683), 1,
      sym_variable,
    STATE(146), 1,
      sym__expansion_body,
    STATE(181), 1,
      sym_line_continuation,
  [4024] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(681), 1,
      anon_sym_LBRACE,
    ACTIONS(683), 1,
      sym_variable,
    STATE(144), 1,
      sym__expansion_body,
    STATE(182), 1,
      sym_line_continuation,
  [4040] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_LF,
    ACTIONS(687), 1,
      sym__non_newline_whitespace,
    STATE(183), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [4054] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
    ACTIONS(692), 1,
      sym_variable,
    STATE(152), 1,
      sym__expansion_body,
    STATE(184), 1,
      sym_line_continuation,
  [4070] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
    ACTIONS(692), 1,
      sym_variable,
    STATE(150), 1,
      sym__expansion_body,
    STATE(185), 1,
      sym_line_continuation,
  [4086] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(694), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4098] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(696), 1,
      anon_sym_LBRACE,
    ACTIONS(698), 1,
      sym_variable,
    STATE(187), 1,
      sym_line_continuation,
    STATE(227), 1,
      sym__expansion_body,
  [4114] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(700), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(702), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4128] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(696), 1,
      anon_sym_LBRACE,
    ACTIONS(698), 1,
      sym_variable,
    STATE(166), 1,
      sym__expansion_body,
    STATE(189), 1,
      sym_line_continuation,
  [4144] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(704), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4156] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    ACTIONS(708), 1,
      sym_variable,
    STATE(191), 1,
      sym_line_continuation,
    STATE(211), 1,
      sym__expansion_body,
  [4172] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      sym_variable,
    STATE(64), 1,
      sym__expansion_body,
    STATE(192), 1,
      sym_line_continuation,
  [4188] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(345), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4200] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(341), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4212] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(716), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4226] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      aux_sym_path_token2,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(615), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4240] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(291), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4252] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      anon_sym_COMMA2,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
    STATE(198), 2,
      sym_line_continuation,
      aux_sym_json_string_array_repeat1,
  [4266] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(725), 1,
      sym__non_newline_whitespace,
    STATE(183), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(199), 1,
      sym_line_continuation,
  [4282] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(353), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4294] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(201), 1,
      sym_line_continuation,
    ACTIONS(474), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4306] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(202), 1,
      sym_line_continuation,
    ACTIONS(291), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4318] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(345), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4330] = 5,
    ACTIONS(655), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(727), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(204), 1,
      sym_line_continuation,
    STATE(217), 1,
      aux_sym_shell_command_repeat2,
  [4346] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(205), 1,
      sym_line_continuation,
    ACTIONS(341), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4358] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      anon_sym_RBRACK,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(206), 1,
      sym_line_continuation,
    STATE(219), 1,
      sym_json_string,
  [4374] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(207), 1,
      sym_line_continuation,
    ACTIONS(474), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4386] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(208), 1,
      sym_line_continuation,
    ACTIONS(353), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4398] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      aux_sym_path_token2,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(291), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4412] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(353), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_line_continuation,
    ACTIONS(355), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4426] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_line_continuation,
    ACTIONS(476), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4440] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      anon_sym_LBRACE,
    ACTIONS(735), 1,
      sym_variable,
    STATE(109), 1,
      sym__expansion_body,
    STATE(212), 1,
      sym_line_continuation,
  [4456] = 5,
    ACTIONS(655), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(737), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(171), 1,
      aux_sym_shell_command_repeat2,
    STATE(213), 1,
      sym_line_continuation,
  [4472] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(347), 1,
      aux_sym_path_token2,
    STATE(214), 1,
      sym_line_continuation,
    ACTIONS(345), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4486] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(739), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(741), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4500] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(343), 1,
      aux_sym_path_token2,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(341), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4514] = 5,
    ACTIONS(655), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(737), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_required_line_continuation,
    STATE(170), 1,
      aux_sym_shell_command_repeat2,
    STATE(217), 1,
      sym_line_continuation,
  [4530] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(355), 1,
      aux_sym_path_token2,
    STATE(218), 1,
      sym_line_continuation,
    ACTIONS(353), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4544] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(640), 1,
      anon_sym_COMMA2,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_json_string_array_repeat1,
    STATE(219), 1,
      sym_line_continuation,
  [4560] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(220), 1,
      sym_line_continuation,
    ACTIONS(745), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4572] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(725), 1,
      sym__non_newline_whitespace,
    ACTIONS(747), 1,
      anon_sym_LF,
    STATE(199), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(221), 1,
      sym_line_continuation,
  [4588] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      aux_sym_path_token2,
    STATE(222), 1,
      sym_line_continuation,
    ACTIONS(291), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4602] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      aux_sym_path_token2,
    STATE(223), 1,
      sym_line_continuation,
    ACTIONS(615), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4616] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(291), 1,
      anon_sym_LF,
    STATE(224), 1,
      sym_line_continuation,
    ACTIONS(293), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4630] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      sym_variable,
    STATE(83), 1,
      sym__expansion_body,
    STATE(225), 1,
      sym_line_continuation,
  [4646] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(343), 1,
      aux_sym_path_token2,
    STATE(226), 1,
      sym_line_continuation,
    ACTIONS(341), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4660] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(476), 1,
      aux_sym_path_token2,
    STATE(227), 1,
      sym_line_continuation,
    ACTIONS(474), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4674] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(355), 1,
      aux_sym_path_token2,
    STATE(228), 1,
      sym_line_continuation,
    ACTIONS(353), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4688] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      anon_sym_LF,
    ACTIONS(751), 1,
      aux_sym_from_instruction_token2,
    STATE(229), 1,
      sym_line_continuation,
  [4701] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(753), 1,
      anon_sym_EQ,
    ACTIONS(755), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(230), 1,
      sym_line_continuation,
  [4714] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 1,
      aux_sym__env_key_token1,
    STATE(231), 1,
      sym_line_continuation,
  [4727] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(617), 1,
      anon_sym_LF,
    ACTIONS(619), 1,
      aux_sym__env_key_token1,
    STATE(232), 1,
      sym_line_continuation,
  [4740] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(757), 1,
      anon_sym_LF,
    ACTIONS(759), 1,
      aux_sym__env_key_token1,
    STATE(233), 1,
      sym_line_continuation,
  [4753] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(763), 1,
      sym__non_newline_whitespace,
    STATE(234), 1,
      sym_line_continuation,
  [4766] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(763), 1,
      sym__non_newline_whitespace,
    ACTIONS(765), 1,
      anon_sym_LF,
    STATE(235), 1,
      sym_line_continuation,
  [4779] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      anon_sym_LF,
    ACTIONS(609), 1,
      aux_sym__env_key_token1,
    STATE(236), 1,
      sym_line_continuation,
  [4792] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      aux_sym__env_key_token1,
    STATE(237), 1,
      sym_line_continuation,
  [4805] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(238), 1,
      sym_line_continuation,
    ACTIONS(685), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [4816] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(767), 1,
      anon_sym_LF,
    ACTIONS(769), 1,
      aux_sym__env_key_token1,
    STATE(239), 1,
      sym_line_continuation,
  [4829] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(464), 1,
      anon_sym_DOLLAR,
    ACTIONS(466), 1,
      aux_sym_path_token1,
    STATE(240), 1,
      sym_line_continuation,
  [4842] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(241), 1,
      sym_line_continuation,
    ACTIONS(771), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [4853] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(242), 1,
      sym_line_continuation,
    ACTIONS(773), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4864] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(464), 1,
      anon_sym_DOLLAR,
    ACTIONS(466), 1,
      aux_sym_image_name_token1,
    STATE(243), 1,
      sym_line_continuation,
  [4877] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(775), 1,
      anon_sym_LF,
    ACTIONS(777), 1,
      aux_sym_from_instruction_token2,
    STATE(244), 1,
      sym_line_continuation,
  [4890] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(245), 1,
      sym_line_continuation,
    ACTIONS(779), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4901] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(246), 1,
      sym_line_continuation,
    ACTIONS(464), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4912] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(247), 1,
      sym_line_continuation,
    ACTIONS(721), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4923] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(781), 1,
      aux_sym_path_token1,
    ACTIONS(783), 1,
      anon_sym_DOLLAR,
    STATE(248), 1,
      sym_line_continuation,
  [4936] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(785), 1,
      anon_sym_LF,
    ACTIONS(787), 1,
      anon_sym_COLON,
    STATE(249), 1,
      sym_line_continuation,
  [4949] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(789), 1,
      anon_sym_LF,
    ACTIONS(791), 1,
      aux_sym_from_instruction_token2,
    STATE(250), 1,
      sym_line_continuation,
  [4962] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(763), 1,
      sym__non_newline_whitespace,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(251), 1,
      sym_line_continuation,
  [4975] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(795), 1,
      aux_sym_mount_param_param_token1,
    STATE(39), 1,
      sym_mount_param_param,
    STATE(252), 1,
      sym_line_continuation,
  [4988] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(797), 1,
      anon_sym_LF,
    ACTIONS(799), 1,
      aux_sym_from_instruction_token2,
    STATE(253), 1,
      sym_line_continuation,
  [5001] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(254), 1,
      sym_line_continuation,
    ACTIONS(801), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5012] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      sym_json_string,
    STATE(255), 1,
      sym_line_continuation,
  [5025] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(803), 1,
      aux_sym_param_token1,
    ACTIONS(805), 1,
      anon_sym_mount,
    STATE(256), 1,
      sym_line_continuation,
  [5038] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(257), 1,
      sym_line_continuation,
    STATE(295), 1,
      sym_json_string_array,
  [5051] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(807), 1,
      anon_sym_LF,
    ACTIONS(809), 1,
      anon_sym_EQ,
    STATE(258), 1,
      sym_line_continuation,
  [5064] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(763), 1,
      sym__non_newline_whitespace,
    ACTIONS(811), 1,
      anon_sym_LF,
    STATE(259), 1,
      sym_line_continuation,
  [5077] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(795), 1,
      aux_sym_mount_param_param_token1,
    STATE(44), 1,
      sym_mount_param_param,
    STATE(260), 1,
      sym_line_continuation,
  [5090] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(813), 1,
      anon_sym_EQ,
    STATE(261), 1,
      sym_line_continuation,
  [5100] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      sym_line_continuation,
  [5110] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(817), 1,
      anon_sym_LF,
    STATE(263), 1,
      sym_line_continuation,
  [5120] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(819), 1,
      aux_sym_mount_param_param_token1,
    STATE(264), 1,
      sym_line_continuation,
  [5130] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(821), 1,
      anon_sym_LF,
    STATE(265), 1,
      sym_line_continuation,
  [5140] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(823), 1,
      anon_sym_LF,
    STATE(266), 1,
      sym_line_continuation,
  [5150] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(825), 1,
      anon_sym_LF,
    STATE(267), 1,
      sym_line_continuation,
  [5160] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(827), 1,
      anon_sym_EQ,
    STATE(268), 1,
      sym_line_continuation,
  [5170] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(829), 1,
      anon_sym_LF,
    STATE(269), 1,
      sym_line_continuation,
  [5180] = 3,
    ACTIONS(831), 1,
      anon_sym_LF,
    ACTIONS(833), 1,
      anon_sym_BSLASH_LF,
    STATE(270), 1,
      sym_line_continuation,
  [5190] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(835), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_line_continuation,
  [5200] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(837), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(272), 1,
      sym_line_continuation,
  [5210] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(839), 1,
      anon_sym_LF,
    STATE(273), 1,
      sym_line_continuation,
  [5220] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(771), 1,
      anon_sym_EQ,
    STATE(274), 1,
      sym_line_continuation,
  [5230] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(841), 1,
      anon_sym_LF,
    STATE(275), 1,
      sym_line_continuation,
  [5240] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(843), 1,
      anon_sym_LF,
    STATE(276), 1,
      sym_line_continuation,
  [5250] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(845), 1,
      anon_sym_LF,
    STATE(277), 1,
      sym_line_continuation,
  [5260] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(753), 1,
      anon_sym_EQ,
    STATE(278), 1,
      sym_line_continuation,
  [5270] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      sym_line_continuation,
  [5280] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(849), 1,
      anon_sym_LF,
    STATE(280), 1,
      sym_line_continuation,
  [5290] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(851), 1,
      anon_sym_EQ,
    STATE(281), 1,
      sym_line_continuation,
  [5300] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(853), 1,
      aux_sym_arg_instruction_token2,
    STATE(282), 1,
      sym_line_continuation,
  [5310] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(283), 1,
      sym_line_continuation,
  [5320] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(857), 1,
      anon_sym_LF,
    STATE(284), 1,
      sym_line_continuation,
  [5330] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(859), 1,
      ts_builtin_sym_end,
    STATE(285), 1,
      sym_line_continuation,
  [5340] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(617), 1,
      anon_sym_EQ,
    STATE(286), 1,
      sym_line_continuation,
  [5350] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(861), 1,
      aux_sym__expansion_body_token1,
    STATE(287), 1,
      sym_line_continuation,
  [5360] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(288), 1,
      sym_line_continuation,
  [5370] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(863), 1,
      anon_sym_LF,
    STATE(289), 1,
      sym_line_continuation,
  [5380] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      sym_line_continuation,
  [5390] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(867), 1,
      aux_sym_param_token2,
    STATE(291), 1,
      sym_line_continuation,
  [5400] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(869), 1,
      anon_sym_LF,
    STATE(292), 1,
      sym_line_continuation,
  [5410] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(871), 1,
      anon_sym_LF,
    STATE(293), 1,
      sym_line_continuation,
  [5420] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(873), 1,
      anon_sym_LF,
    STATE(294), 1,
      sym_line_continuation,
  [5430] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(875), 1,
      anon_sym_LF,
    STATE(295), 1,
      sym_line_continuation,
  [5440] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(877), 1,
      aux_sym_param_token2,
    STATE(296), 1,
      sym_line_continuation,
  [5450] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(879), 1,
      anon_sym_LF,
    STATE(297), 1,
      sym_line_continuation,
  [5460] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
    STATE(298), 1,
      sym_line_continuation,
  [5470] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(883), 1,
      aux_sym_param_token2,
    STATE(299), 1,
      sym_line_continuation,
  [5480] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(885), 1,
      anon_sym_LF,
    STATE(300), 1,
      sym_line_continuation,
  [5490] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(887), 1,
      anon_sym_LF,
    STATE(301), 1,
      sym_line_continuation,
  [5500] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(889), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(302), 1,
      sym_line_continuation,
  [5510] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(891), 1,
      aux_sym_param_token2,
    STATE(303), 1,
      sym_line_continuation,
  [5520] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(893), 1,
      anon_sym_LF,
    STATE(304), 1,
      sym_line_continuation,
  [5530] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(895), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(305), 1,
      sym_line_continuation,
  [5540] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_line_continuation,
  [5550] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(899), 1,
      anon_sym_LF,
    STATE(307), 1,
      sym_line_continuation,
  [5560] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(901), 1,
      anon_sym_LF,
    STATE(308), 1,
      sym_line_continuation,
  [5570] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      sym_line_continuation,
  [5580] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(905), 1,
      anon_sym_LF,
    STATE(310), 1,
      sym_line_continuation,
  [5590] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(907), 1,
      anon_sym_LF,
    STATE(311), 1,
      sym_line_continuation,
  [5600] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym_line_continuation,
  [5610] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(911), 1,
      aux_sym_param_token1,
    STATE(313), 1,
      sym_line_continuation,
  [5620] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      anon_sym_EQ,
    STATE(314), 1,
      sym_line_continuation,
  [5630] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    STATE(315), 1,
      sym_line_continuation,
  [5640] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(915), 1,
      aux_sym_param_token1,
    STATE(316), 1,
      sym_line_continuation,
  [5650] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      sym_line_continuation,
  [5660] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      anon_sym_EQ,
    STATE(318), 1,
      sym_line_continuation,
  [5670] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      sym_line_continuation,
  [5680] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(921), 1,
      sym__non_newline_whitespace,
    STATE(320), 1,
      sym_line_continuation,
  [5690] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      sym_line_continuation,
  [5700] = 3,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(925), 1,
      anon_sym_BSLASH_LF,
    STATE(322), 1,
      sym_line_continuation,
  [5710] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym_line_continuation,
  [5720] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      sym_line_continuation,
  [5730] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(931), 1,
      aux_sym__expansion_body_token1,
    STATE(325), 1,
      sym_line_continuation,
  [5740] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(933), 1,
      anon_sym_EQ,
    STATE(326), 1,
      sym_line_continuation,
  [5750] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(935), 1,
      aux_sym__expansion_body_token1,
    STATE(327), 1,
      sym_line_continuation,
  [5760] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(937), 1,
      anon_sym_EQ,
    STATE(328), 1,
      sym_line_continuation,
  [5770] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(939), 1,
      aux_sym__expansion_body_token1,
    STATE(329), 1,
      sym_line_continuation,
  [5780] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(941), 1,
      anon_sym_EQ,
    STATE(330), 1,
      sym_line_continuation,
  [5790] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(943), 1,
      aux_sym__expansion_body_token1,
    STATE(331), 1,
      sym_line_continuation,
  [5800] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(945), 1,
      aux_sym__expansion_body_token1,
    STATE(332), 1,
      sym_line_continuation,
  [5810] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(947), 1,
      aux_sym__expansion_body_token1,
    STATE(333), 1,
      sym_line_continuation,
  [5820] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(949), 1,
      aux_sym__expansion_body_token1,
    STATE(334), 1,
      sym_line_continuation,
  [5830] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(951), 1,
      aux_sym__expansion_body_token1,
    STATE(335), 1,
      sym_line_continuation,
  [5840] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(953), 1,
      aux_sym__expansion_body_token1,
    STATE(336), 1,
      sym_line_continuation,
  [5850] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(955), 1,
      aux_sym__expansion_body_token1,
    STATE(337), 1,
      sym_line_continuation,
  [5860] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(957), 1,
      aux_sym__expansion_body_token1,
    STATE(338), 1,
      sym_line_continuation,
  [5870] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(959), 1,
      aux_sym__expansion_body_token1,
    STATE(339), 1,
      sym_line_continuation,
  [5880] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(961), 1,
      aux_sym_param_token1,
    STATE(340), 1,
      sym_line_continuation,
  [5890] = 1,
    ACTIONS(963), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
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
  [SMALL_STATE(15)] = 655,
  [SMALL_STATE(16)] = 684,
  [SMALL_STATE(17)] = 714,
  [SMALL_STATE(18)] = 744,
  [SMALL_STATE(19)] = 774,
  [SMALL_STATE(20)] = 798,
  [SMALL_STATE(21)] = 826,
  [SMALL_STATE(22)] = 856,
  [SMALL_STATE(23)] = 886,
  [SMALL_STATE(24)] = 915,
  [SMALL_STATE(25)] = 942,
  [SMALL_STATE(26)] = 971,
  [SMALL_STATE(27)] = 998,
  [SMALL_STATE(28)] = 1025,
  [SMALL_STATE(29)] = 1054,
  [SMALL_STATE(30)] = 1083,
  [SMALL_STATE(31)] = 1112,
  [SMALL_STATE(32)] = 1141,
  [SMALL_STATE(33)] = 1162,
  [SMALL_STATE(34)] = 1191,
  [SMALL_STATE(35)] = 1214,
  [SMALL_STATE(36)] = 1241,
  [SMALL_STATE(37)] = 1270,
  [SMALL_STATE(38)] = 1299,
  [SMALL_STATE(39)] = 1328,
  [SMALL_STATE(40)] = 1351,
  [SMALL_STATE(41)] = 1378,
  [SMALL_STATE(42)] = 1407,
  [SMALL_STATE(43)] = 1425,
  [SMALL_STATE(44)] = 1451,
  [SMALL_STATE(45)] = 1469,
  [SMALL_STATE(46)] = 1495,
  [SMALL_STATE(47)] = 1513,
  [SMALL_STATE(48)] = 1541,
  [SMALL_STATE(49)] = 1567,
  [SMALL_STATE(50)] = 1595,
  [SMALL_STATE(51)] = 1621,
  [SMALL_STATE(52)] = 1645,
  [SMALL_STATE(53)] = 1663,
  [SMALL_STATE(54)] = 1681,
  [SMALL_STATE(55)] = 1699,
  [SMALL_STATE(56)] = 1717,
  [SMALL_STATE(57)] = 1745,
  [SMALL_STATE(58)] = 1767,
  [SMALL_STATE(59)] = 1795,
  [SMALL_STATE(60)] = 1823,
  [SMALL_STATE(61)] = 1849,
  [SMALL_STATE(62)] = 1874,
  [SMALL_STATE(63)] = 1899,
  [SMALL_STATE(64)] = 1922,
  [SMALL_STATE(65)] = 1939,
  [SMALL_STATE(66)] = 1964,
  [SMALL_STATE(67)] = 1987,
  [SMALL_STATE(68)] = 2010,
  [SMALL_STATE(69)] = 2035,
  [SMALL_STATE(70)] = 2060,
  [SMALL_STATE(71)] = 2085,
  [SMALL_STATE(72)] = 2110,
  [SMALL_STATE(73)] = 2127,
  [SMALL_STATE(74)] = 2152,
  [SMALL_STATE(75)] = 2175,
  [SMALL_STATE(76)] = 2200,
  [SMALL_STATE(77)] = 2217,
  [SMALL_STATE(78)] = 2238,
  [SMALL_STATE(79)] = 2263,
  [SMALL_STATE(80)] = 2280,
  [SMALL_STATE(81)] = 2305,
  [SMALL_STATE(82)] = 2328,
  [SMALL_STATE(83)] = 2345,
  [SMALL_STATE(84)] = 2362,
  [SMALL_STATE(85)] = 2387,
  [SMALL_STATE(86)] = 2404,
  [SMALL_STATE(87)] = 2421,
  [SMALL_STATE(88)] = 2439,
  [SMALL_STATE(89)] = 2461,
  [SMALL_STATE(90)] = 2481,
  [SMALL_STATE(91)] = 2501,
  [SMALL_STATE(92)] = 2521,
  [SMALL_STATE(93)] = 2543,
  [SMALL_STATE(94)] = 2565,
  [SMALL_STATE(95)] = 2585,
  [SMALL_STATE(96)] = 2605,
  [SMALL_STATE(97)] = 2621,
  [SMALL_STATE(98)] = 2637,
  [SMALL_STATE(99)] = 2653,
  [SMALL_STATE(100)] = 2669,
  [SMALL_STATE(101)] = 2691,
  [SMALL_STATE(102)] = 2713,
  [SMALL_STATE(103)] = 2729,
  [SMALL_STATE(104)] = 2745,
  [SMALL_STATE(105)] = 2761,
  [SMALL_STATE(106)] = 2777,
  [SMALL_STATE(107)] = 2793,
  [SMALL_STATE(108)] = 2809,
  [SMALL_STATE(109)] = 2825,
  [SMALL_STATE(110)] = 2841,
  [SMALL_STATE(111)] = 2863,
  [SMALL_STATE(112)] = 2879,
  [SMALL_STATE(113)] = 2897,
  [SMALL_STATE(114)] = 2917,
  [SMALL_STATE(115)] = 2939,
  [SMALL_STATE(116)] = 2955,
  [SMALL_STATE(117)] = 2975,
  [SMALL_STATE(118)] = 2991,
  [SMALL_STATE(119)] = 3013,
  [SMALL_STATE(120)] = 3035,
  [SMALL_STATE(121)] = 3055,
  [SMALL_STATE(122)] = 3071,
  [SMALL_STATE(123)] = 3093,
  [SMALL_STATE(124)] = 3113,
  [SMALL_STATE(125)] = 3135,
  [SMALL_STATE(126)] = 3153,
  [SMALL_STATE(127)] = 3175,
  [SMALL_STATE(128)] = 3190,
  [SMALL_STATE(129)] = 3205,
  [SMALL_STATE(130)] = 3224,
  [SMALL_STATE(131)] = 3243,
  [SMALL_STATE(132)] = 3258,
  [SMALL_STATE(133)] = 3277,
  [SMALL_STATE(134)] = 3292,
  [SMALL_STATE(135)] = 3311,
  [SMALL_STATE(136)] = 3330,
  [SMALL_STATE(137)] = 3345,
  [SMALL_STATE(138)] = 3360,
  [SMALL_STATE(139)] = 3375,
  [SMALL_STATE(140)] = 3394,
  [SMALL_STATE(141)] = 3411,
  [SMALL_STATE(142)] = 3424,
  [SMALL_STATE(143)] = 3437,
  [SMALL_STATE(144)] = 3450,
  [SMALL_STATE(145)] = 3463,
  [SMALL_STATE(146)] = 3476,
  [SMALL_STATE(147)] = 3489,
  [SMALL_STATE(148)] = 3502,
  [SMALL_STATE(149)] = 3519,
  [SMALL_STATE(150)] = 3534,
  [SMALL_STATE(151)] = 3549,
  [SMALL_STATE(152)] = 3564,
  [SMALL_STATE(153)] = 3579,
  [SMALL_STATE(154)] = 3594,
  [SMALL_STATE(155)] = 3609,
  [SMALL_STATE(156)] = 3624,
  [SMALL_STATE(157)] = 3637,
  [SMALL_STATE(158)] = 3656,
  [SMALL_STATE(159)] = 3671,
  [SMALL_STATE(160)] = 3686,
  [SMALL_STATE(161)] = 3701,
  [SMALL_STATE(162)] = 3718,
  [SMALL_STATE(163)] = 3731,
  [SMALL_STATE(164)] = 3744,
  [SMALL_STATE(165)] = 3759,
  [SMALL_STATE(166)] = 3774,
  [SMALL_STATE(167)] = 3788,
  [SMALL_STATE(168)] = 3802,
  [SMALL_STATE(169)] = 3818,
  [SMALL_STATE(170)] = 3834,
  [SMALL_STATE(171)] = 3848,
  [SMALL_STATE(172)] = 3864,
  [SMALL_STATE(173)] = 3880,
  [SMALL_STATE(174)] = 3896,
  [SMALL_STATE(175)] = 3912,
  [SMALL_STATE(176)] = 3928,
  [SMALL_STATE(177)] = 3944,
  [SMALL_STATE(178)] = 3960,
  [SMALL_STATE(179)] = 3976,
  [SMALL_STATE(180)] = 3992,
  [SMALL_STATE(181)] = 4008,
  [SMALL_STATE(182)] = 4024,
  [SMALL_STATE(183)] = 4040,
  [SMALL_STATE(184)] = 4054,
  [SMALL_STATE(185)] = 4070,
  [SMALL_STATE(186)] = 4086,
  [SMALL_STATE(187)] = 4098,
  [SMALL_STATE(188)] = 4114,
  [SMALL_STATE(189)] = 4128,
  [SMALL_STATE(190)] = 4144,
  [SMALL_STATE(191)] = 4156,
  [SMALL_STATE(192)] = 4172,
  [SMALL_STATE(193)] = 4188,
  [SMALL_STATE(194)] = 4200,
  [SMALL_STATE(195)] = 4212,
  [SMALL_STATE(196)] = 4226,
  [SMALL_STATE(197)] = 4240,
  [SMALL_STATE(198)] = 4252,
  [SMALL_STATE(199)] = 4266,
  [SMALL_STATE(200)] = 4282,
  [SMALL_STATE(201)] = 4294,
  [SMALL_STATE(202)] = 4306,
  [SMALL_STATE(203)] = 4318,
  [SMALL_STATE(204)] = 4330,
  [SMALL_STATE(205)] = 4346,
  [SMALL_STATE(206)] = 4358,
  [SMALL_STATE(207)] = 4374,
  [SMALL_STATE(208)] = 4386,
  [SMALL_STATE(209)] = 4398,
  [SMALL_STATE(210)] = 4412,
  [SMALL_STATE(211)] = 4426,
  [SMALL_STATE(212)] = 4440,
  [SMALL_STATE(213)] = 4456,
  [SMALL_STATE(214)] = 4472,
  [SMALL_STATE(215)] = 4486,
  [SMALL_STATE(216)] = 4500,
  [SMALL_STATE(217)] = 4514,
  [SMALL_STATE(218)] = 4530,
  [SMALL_STATE(219)] = 4544,
  [SMALL_STATE(220)] = 4560,
  [SMALL_STATE(221)] = 4572,
  [SMALL_STATE(222)] = 4588,
  [SMALL_STATE(223)] = 4602,
  [SMALL_STATE(224)] = 4616,
  [SMALL_STATE(225)] = 4630,
  [SMALL_STATE(226)] = 4646,
  [SMALL_STATE(227)] = 4660,
  [SMALL_STATE(228)] = 4674,
  [SMALL_STATE(229)] = 4688,
  [SMALL_STATE(230)] = 4701,
  [SMALL_STATE(231)] = 4714,
  [SMALL_STATE(232)] = 4727,
  [SMALL_STATE(233)] = 4740,
  [SMALL_STATE(234)] = 4753,
  [SMALL_STATE(235)] = 4766,
  [SMALL_STATE(236)] = 4779,
  [SMALL_STATE(237)] = 4792,
  [SMALL_STATE(238)] = 4805,
  [SMALL_STATE(239)] = 4816,
  [SMALL_STATE(240)] = 4829,
  [SMALL_STATE(241)] = 4842,
  [SMALL_STATE(242)] = 4853,
  [SMALL_STATE(243)] = 4864,
  [SMALL_STATE(244)] = 4877,
  [SMALL_STATE(245)] = 4890,
  [SMALL_STATE(246)] = 4901,
  [SMALL_STATE(247)] = 4912,
  [SMALL_STATE(248)] = 4923,
  [SMALL_STATE(249)] = 4936,
  [SMALL_STATE(250)] = 4949,
  [SMALL_STATE(251)] = 4962,
  [SMALL_STATE(252)] = 4975,
  [SMALL_STATE(253)] = 4988,
  [SMALL_STATE(254)] = 5001,
  [SMALL_STATE(255)] = 5012,
  [SMALL_STATE(256)] = 5025,
  [SMALL_STATE(257)] = 5038,
  [SMALL_STATE(258)] = 5051,
  [SMALL_STATE(259)] = 5064,
  [SMALL_STATE(260)] = 5077,
  [SMALL_STATE(261)] = 5090,
  [SMALL_STATE(262)] = 5100,
  [SMALL_STATE(263)] = 5110,
  [SMALL_STATE(264)] = 5120,
  [SMALL_STATE(265)] = 5130,
  [SMALL_STATE(266)] = 5140,
  [SMALL_STATE(267)] = 5150,
  [SMALL_STATE(268)] = 5160,
  [SMALL_STATE(269)] = 5170,
  [SMALL_STATE(270)] = 5180,
  [SMALL_STATE(271)] = 5190,
  [SMALL_STATE(272)] = 5200,
  [SMALL_STATE(273)] = 5210,
  [SMALL_STATE(274)] = 5220,
  [SMALL_STATE(275)] = 5230,
  [SMALL_STATE(276)] = 5240,
  [SMALL_STATE(277)] = 5250,
  [SMALL_STATE(278)] = 5260,
  [SMALL_STATE(279)] = 5270,
  [SMALL_STATE(280)] = 5280,
  [SMALL_STATE(281)] = 5290,
  [SMALL_STATE(282)] = 5300,
  [SMALL_STATE(283)] = 5310,
  [SMALL_STATE(284)] = 5320,
  [SMALL_STATE(285)] = 5330,
  [SMALL_STATE(286)] = 5340,
  [SMALL_STATE(287)] = 5350,
  [SMALL_STATE(288)] = 5360,
  [SMALL_STATE(289)] = 5370,
  [SMALL_STATE(290)] = 5380,
  [SMALL_STATE(291)] = 5390,
  [SMALL_STATE(292)] = 5400,
  [SMALL_STATE(293)] = 5410,
  [SMALL_STATE(294)] = 5420,
  [SMALL_STATE(295)] = 5430,
  [SMALL_STATE(296)] = 5440,
  [SMALL_STATE(297)] = 5450,
  [SMALL_STATE(298)] = 5460,
  [SMALL_STATE(299)] = 5470,
  [SMALL_STATE(300)] = 5480,
  [SMALL_STATE(301)] = 5490,
  [SMALL_STATE(302)] = 5500,
  [SMALL_STATE(303)] = 5510,
  [SMALL_STATE(304)] = 5520,
  [SMALL_STATE(305)] = 5530,
  [SMALL_STATE(306)] = 5540,
  [SMALL_STATE(307)] = 5550,
  [SMALL_STATE(308)] = 5560,
  [SMALL_STATE(309)] = 5570,
  [SMALL_STATE(310)] = 5580,
  [SMALL_STATE(311)] = 5590,
  [SMALL_STATE(312)] = 5600,
  [SMALL_STATE(313)] = 5610,
  [SMALL_STATE(314)] = 5620,
  [SMALL_STATE(315)] = 5630,
  [SMALL_STATE(316)] = 5640,
  [SMALL_STATE(317)] = 5650,
  [SMALL_STATE(318)] = 5660,
  [SMALL_STATE(319)] = 5670,
  [SMALL_STATE(320)] = 5680,
  [SMALL_STATE(321)] = 5690,
  [SMALL_STATE(322)] = 5700,
  [SMALL_STATE(323)] = 5710,
  [SMALL_STATE(324)] = 5720,
  [SMALL_STATE(325)] = 5730,
  [SMALL_STATE(326)] = 5740,
  [SMALL_STATE(327)] = 5750,
  [SMALL_STATE(328)] = 5760,
  [SMALL_STATE(329)] = 5770,
  [SMALL_STATE(330)] = 5780,
  [SMALL_STATE(331)] = 5790,
  [SMALL_STATE(332)] = 5800,
  [SMALL_STATE(333)] = 5810,
  [SMALL_STATE(334)] = 5820,
  [SMALL_STATE(335)] = 5830,
  [SMALL_STATE(336)] = 5840,
  [SMALL_STATE(337)] = 5850,
  [SMALL_STATE(338)] = 5860,
  [SMALL_STATE(339)] = 5870,
  [SMALL_STATE(340)] = 5880,
  [SMALL_STATE(341)] = 5890,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(282),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(257),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(305),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(311),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(173),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(54),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(256),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(192),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(85),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(172),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(108),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(141),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(182),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(212),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(117),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(117),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(260),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(261),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(41),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(116),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(176),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(121),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(174),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(127),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(141),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(182),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(158),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(185),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(302),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(220),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(178),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(196),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(189),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(169),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(190),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(191),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(125),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(223),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(180),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(131),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(131),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(69),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(187),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(115),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(274),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(316),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(215),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(156),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(139),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(255),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [859] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
