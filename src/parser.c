#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 344
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
  aux_sym_add_instruction_repeat2 = 139,
  aux_sym_volume_instruction_repeat1 = 140,
  aux_sym__user_name_or_group_repeat1 = 141,
  aux_sym__stopsignal_value_repeat1 = 142,
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
  [aux_sym_add_instruction_repeat2] = "add_instruction_repeat2",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym__user_name_or_group_repeat1] = "_user_name_or_group_repeat1",
  [aux_sym__stopsignal_value_repeat1] = "_stopsignal_value_repeat1",
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
  [aux_sym_add_instruction_repeat2] = aux_sym_add_instruction_repeat2,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym__user_name_or_group_repeat1] = aux_sym__user_name_or_group_repeat1,
  [aux_sym__stopsignal_value_repeat1] = aux_sym__stopsignal_value_repeat1,
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
  [aux_sym_add_instruction_repeat2] = {
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 15,
  [36] = 36,
  [37] = 14,
  [38] = 38,
  [39] = 39,
  [40] = 27,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 27,
  [45] = 25,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
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
  [63] = 57,
  [64] = 64,
  [65] = 65,
  [66] = 54,
  [67] = 67,
  [68] = 61,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 48,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 50,
  [80] = 80,
  [81] = 54,
  [82] = 50,
  [83] = 83,
  [84] = 53,
  [85] = 85,
  [86] = 46,
  [87] = 53,
  [88] = 88,
  [89] = 89,
  [90] = 46,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 48,
  [96] = 96,
  [97] = 57,
  [98] = 61,
  [99] = 99,
  [100] = 60,
  [101] = 101,
  [102] = 102,
  [103] = 48,
  [104] = 104,
  [105] = 105,
  [106] = 102,
  [107] = 57,
  [108] = 108,
  [109] = 109,
  [110] = 61,
  [111] = 111,
  [112] = 57,
  [113] = 113,
  [114] = 114,
  [115] = 104,
  [116] = 102,
  [117] = 48,
  [118] = 46,
  [119] = 119,
  [120] = 61,
  [121] = 46,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 104,
  [126] = 126,
  [127] = 127,
  [128] = 83,
  [129] = 129,
  [130] = 130,
  [131] = 83,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 61,
  [137] = 137,
  [138] = 138,
  [139] = 46,
  [140] = 48,
  [141] = 61,
  [142] = 142,
  [143] = 57,
  [144] = 144,
  [145] = 48,
  [146] = 146,
  [147] = 57,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 46,
  [152] = 46,
  [153] = 153,
  [154] = 154,
  [155] = 48,
  [156] = 61,
  [157] = 157,
  [158] = 126,
  [159] = 159,
  [160] = 160,
  [161] = 57,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 61,
  [168] = 46,
  [169] = 169,
  [170] = 170,
  [171] = 170,
  [172] = 170,
  [173] = 170,
  [174] = 174,
  [175] = 170,
  [176] = 174,
  [177] = 170,
  [178] = 178,
  [179] = 174,
  [180] = 180,
  [181] = 181,
  [182] = 170,
  [183] = 174,
  [184] = 170,
  [185] = 174,
  [186] = 186,
  [187] = 187,
  [188] = 170,
  [189] = 174,
  [190] = 170,
  [191] = 174,
  [192] = 174,
  [193] = 48,
  [194] = 46,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 61,
  [200] = 57,
  [201] = 201,
  [202] = 83,
  [203] = 61,
  [204] = 204,
  [205] = 205,
  [206] = 48,
  [207] = 46,
  [208] = 83,
  [209] = 57,
  [210] = 210,
  [211] = 57,
  [212] = 83,
  [213] = 170,
  [214] = 144,
  [215] = 48,
  [216] = 216,
  [217] = 217,
  [218] = 83,
  [219] = 219,
  [220] = 57,
  [221] = 221,
  [222] = 222,
  [223] = 88,
  [224] = 61,
  [225] = 48,
  [226] = 61,
  [227] = 170,
  [228] = 144,
  [229] = 46,
  [230] = 57,
  [231] = 83,
  [232] = 232,
  [233] = 233,
  [234] = 137,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 162,
  [239] = 163,
  [240] = 133,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 88,
  [246] = 246,
  [247] = 247,
  [248] = 88,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 201,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 256,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 137,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 269,
  [280] = 133,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 269,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 269,
  [301] = 272,
  [302] = 272,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 269,
  [309] = 309,
  [310] = 310,
  [311] = 269,
  [312] = 312,
  [313] = 313,
  [314] = 269,
  [315] = 286,
  [316] = 305,
  [317] = 269,
  [318] = 318,
  [319] = 269,
  [320] = 320,
  [321] = 269,
  [322] = 163,
  [323] = 269,
  [324] = 162,
  [325] = 269,
  [326] = 269,
  [327] = 286,
  [328] = 272,
  [329] = 286,
  [330] = 305,
  [331] = 286,
  [332] = 305,
  [333] = 286,
  [334] = 295,
  [335] = 286,
  [336] = 286,
  [337] = 286,
  [338] = 286,
  [339] = 286,
  [340] = 286,
  [341] = 286,
  [342] = 295,
  [343] = 343,
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
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(217);
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
          lookahead == ' ') SKIP(43)
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
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
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 59:
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(208);
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
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 160},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 15},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 160},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 55},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 38},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 38},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 22},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 25},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 39},
  [114] = {.lex_state = 160},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 21},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 38},
  [124] = {.lex_state = 38},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 38},
  [127] = {.lex_state = 38},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 30},
  [130] = {.lex_state = 33},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 38},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 30},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 33},
  [149] = {.lex_state = 33},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 42},
  [154] = {.lex_state = 41},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 30},
  [158] = {.lex_state = 160},
  [159] = {.lex_state = 38},
  [160] = {.lex_state = 44},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 42},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 51},
  [171] = {.lex_state = 51},
  [172] = {.lex_state = 51},
  [173] = {.lex_state = 51},
  [174] = {.lex_state = 51},
  [175] = {.lex_state = 51},
  [176] = {.lex_state = 51},
  [177] = {.lex_state = 51},
  [178] = {.lex_state = 23},
  [179] = {.lex_state = 51},
  [180] = {.lex_state = 160},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 51},
  [183] = {.lex_state = 51},
  [184] = {.lex_state = 51},
  [185] = {.lex_state = 51},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 30},
  [188] = {.lex_state = 51},
  [189] = {.lex_state = 51},
  [190] = {.lex_state = 51},
  [191] = {.lex_state = 51},
  [192] = {.lex_state = 51},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 160},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 160},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 38},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 13},
  [204] = {.lex_state = 13},
  [205] = {.lex_state = 23},
  [206] = {.lex_state = 13},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 23},
  [211] = {.lex_state = 16},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 51},
  [214] = {.lex_state = 37},
  [215] = {.lex_state = 15},
  [216] = {.lex_state = 16},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 15},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 15},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 160},
  [223] = {.lex_state = 38},
  [224] = {.lex_state = 37},
  [225] = {.lex_state = 37},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 51},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 37},
  [230] = {.lex_state = 37},
  [231] = {.lex_state = 37},
  [232] = {.lex_state = 23},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 20},
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 23},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 160},
  [245] = {.lex_state = 39},
  [246] = {.lex_state = 160},
  [247] = {.lex_state = 57},
  [248] = {.lex_state = 160},
  [249] = {.lex_state = 160},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 41},
  [254] = {.lex_state = 160},
  [255] = {.lex_state = 160},
  [256] = {.lex_state = 47},
  [257] = {.lex_state = 20},
  [258] = {.lex_state = 160},
  [259] = {.lex_state = 38},
  [260] = {.lex_state = 47},
  [261] = {.lex_state = 23},
  [262] = {.lex_state = 57},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 57},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 37},
  [268] = {.lex_state = 160},
  [269] = {.lex_state = 160},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 160},
  [272] = {.lex_state = 58},
  [273] = {.lex_state = 160},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 160},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 160},
  [280] = {.lex_state = 160},
  [281] = {.lex_state = 196},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 59},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 160},
  [293] = {.lex_state = 160},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 54},
  [296] = {.lex_state = 196},
  [297] = {.lex_state = 196},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 56},
  [300] = {.lex_state = 160},
  [301] = {.lex_state = 58},
  [302] = {.lex_state = 58},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 160},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 160},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 160},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 160},
  [315] = {.lex_state = 59},
  [316] = {.lex_state = 160},
  [317] = {.lex_state = 160},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 160},
  [320] = {.lex_state = 160},
  [321] = {.lex_state = 160},
  [322] = {.lex_state = 160},
  [323] = {.lex_state = 160},
  [324] = {.lex_state = 160},
  [325] = {.lex_state = 160},
  [326] = {.lex_state = 160},
  [327] = {.lex_state = 59},
  [328] = {.lex_state = 58},
  [329] = {.lex_state = 59},
  [330] = {.lex_state = 160},
  [331] = {.lex_state = 59},
  [332] = {.lex_state = 160},
  [333] = {.lex_state = 59},
  [334] = {.lex_state = 54},
  [335] = {.lex_state = 59},
  [336] = {.lex_state = 59},
  [337] = {.lex_state = 59},
  [338] = {.lex_state = 59},
  [339] = {.lex_state = 59},
  [340] = {.lex_state = 59},
  [341] = {.lex_state = 59},
  [342] = {.lex_state = 54},
  [343] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(290),
    [sym__instruction] = STATE(291),
    [sym_from_instruction] = STATE(289),
    [sym_run_instruction] = STATE(289),
    [sym_cmd_instruction] = STATE(289),
    [sym_label_instruction] = STATE(289),
    [sym_expose_instruction] = STATE(289),
    [sym_env_instruction] = STATE(289),
    [sym_add_instruction] = STATE(289),
    [sym_copy_instruction] = STATE(289),
    [sym_entrypoint_instruction] = STATE(289),
    [sym_volume_instruction] = STATE(289),
    [sym_user_instruction] = STATE(289),
    [sym_workdir_instruction] = STATE(289),
    [sym_arg_instruction] = STATE(289),
    [sym_onbuild_instruction] = STATE(289),
    [sym_stopsignal_instruction] = STATE(289),
    [sym_healthcheck_instruction] = STATE(289),
    [sym_shell_instruction] = STATE(289),
    [sym_maintainer_instruction] = STATE(289),
    [sym_cross_build_instruction] = STATE(289),
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
    STATE(291), 1,
      sym__instruction,
    STATE(289), 19,
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
    STATE(291), 1,
      sym__instruction,
    STATE(3), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(289), 19,
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
    STATE(288), 1,
      sym__instruction,
    STATE(289), 19,
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
    STATE(16), 1,
      aux_sym_run_instruction_repeat1,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym__comment_line,
    STATE(196), 1,
      sym_shell_fragment,
    STATE(277), 1,
      sym__anon_comment,
    ACTIONS(115), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(78), 2,
      sym_param,
      sym_mount_param,
    STATE(264), 2,
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
    STATE(6), 1,
      aux_sym_run_instruction_repeat1,
    STATE(7), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym__comment_line,
    STATE(196), 1,
      sym_shell_fragment,
    STATE(277), 1,
      sym__anon_comment,
    ACTIONS(115), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(78), 2,
      sym_param,
      sym_mount_param,
    STATE(283), 2,
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
    STATE(37), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(90), 1,
      sym__imm_expansion,
    STATE(100), 1,
      sym__immediate_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(237), 3,
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
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym__comment_line,
    STATE(196), 1,
      sym_shell_fragment,
    STATE(277), 1,
      sym__anon_comment,
    STATE(276), 2,
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
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym__comment_line,
    STATE(196), 1,
      sym_shell_fragment,
    STATE(277), 1,
      sym__anon_comment,
    STATE(304), 2,
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
    STATE(46), 1,
      sym__imm_expansion,
    STATE(60), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(166), 3,
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
    STATE(46), 1,
      sym__imm_expansion,
    STATE(60), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(318), 3,
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
    STATE(46), 1,
      sym__imm_expansion,
    STATE(60), 1,
      sym__immediate_expansion,
    ACTIONS(141), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(309), 3,
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
    STATE(46), 1,
      sym__imm_expansion,
    STATE(60), 1,
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
    STATE(46), 1,
      sym__imm_expansion,
    STATE(60), 1,
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
  [684] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(157), 1,
      anon_sym_DASH_DASH,
    ACTIONS(160), 1,
      aux_sym_shell_fragment_token1,
    STATE(16), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(78), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(162), 4,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [708] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_line_continuation,
    STATE(49), 1,
      aux_sym_shell_command_repeat1,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym__comment_line,
    STATE(219), 1,
      sym_shell_fragment,
    STATE(277), 1,
      sym__anon_comment,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [738] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_line_continuation,
    STATE(19), 1,
      aux_sym_shell_command_repeat1,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym__comment_line,
    STATE(277), 1,
      sym__anon_comment,
    STATE(310), 1,
      sym_shell_fragment,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [768] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_line_continuation,
    STATE(49), 1,
      aux_sym_shell_command_repeat1,
    STATE(119), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(130), 1,
      sym__comment_line,
    STATE(263), 1,
      sym_shell_fragment,
    STATE(277), 1,
      sym__anon_comment,
    ACTIONS(115), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [798] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(166), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(168), 1,
      anon_sym_DOLLAR2,
    ACTIONS(170), 1,
      aux_sym_image_name_token2,
    STATE(20), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_image_name_repeat1,
    STATE(85), 1,
      sym__immediate_expansion,
    STATE(86), 1,
      sym__imm_expansion,
    ACTIONS(164), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [828] = 8,
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
    STATE(21), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(172), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [856] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(168), 1,
      anon_sym_DOLLAR2,
    ACTIONS(170), 1,
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
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(190), 1,
      anon_sym_DOLLAR2,
    STATE(23), 1,
      sym_line_continuation,
    STATE(39), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(134), 1,
      sym__immediate_expansion,
    STATE(135), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(152), 1,
      sym__imm_expansion,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [915] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(194), 1,
      aux_sym_label_pair_token1,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      anon_sym_SQUOTE,
    STATE(142), 1,
      sym_label_pair,
    STATE(24), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
    STATE(275), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [942] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR2,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    STATE(25), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(111), 1,
      sym__immediate_expansion,
    STATE(121), 1,
      sym__imm_expansion,
    ACTIONS(207), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [971] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      aux_sym_shell_fragment_token1,
    STATE(26), 1,
      sym_line_continuation,
    STATE(33), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(211), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [994] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_line_continuation,
    STATE(32), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(111), 1,
      sym__immediate_expansion,
    STATE(121), 1,
      sym__imm_expansion,
    ACTIONS(207), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1023] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__immediate_expansion,
    STATE(121), 1,
      sym__imm_expansion,
    ACTIONS(207), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1052] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      aux_sym_path_token1,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DASH_DASH,
    STATE(29), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym_expansion,
    STATE(123), 1,
      aux_sym_add_instruction_repeat2,
    STATE(126), 1,
      aux_sym_add_instruction_repeat1,
    STATE(201), 1,
      sym_param,
    STATE(267), 1,
      sym_path,
  [1083] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(188), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(190), 1,
      anon_sym_DOLLAR2,
    STATE(23), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(30), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym__immediate_expansion,
    STATE(135), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(152), 1,
      sym__imm_expansion,
    ACTIONS(227), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1112] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      aux_sym_path_token1,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DASH_DASH,
    STATE(31), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym_expansion,
    STATE(126), 1,
      aux_sym_add_instruction_repeat1,
    STATE(127), 1,
      aux_sym_add_instruction_repeat2,
    STATE(201), 1,
      sym_param,
    STATE(267), 1,
      sym_path,
  [1143] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(229), 1,
      anon_sym_DOLLAR2,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_BSLASH,
    STATE(111), 1,
      sym__immediate_expansion,
    STATE(121), 1,
      sym__imm_expansion,
    ACTIONS(234), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(32), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1170] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      aux_sym_shell_fragment_token1,
    STATE(33), 1,
      sym_line_continuation,
    STATE(36), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(240), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1193] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      aux_sym_path_token1,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DASH_DASH,
    STATE(31), 1,
      aux_sym_add_instruction_repeat1,
    STATE(34), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym_expansion,
    STATE(99), 1,
      aux_sym_add_instruction_repeat2,
    STATE(201), 1,
      sym_param,
    STATE(267), 1,
      sym_path,
  [1224] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      aux_sym__env_key_token1,
    ACTIONS(244), 1,
      anon_sym_DOLLAR2,
    STATE(90), 1,
      sym__imm_expansion,
    STATE(100), 1,
      sym__immediate_expansion,
    ACTIONS(247), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(35), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1251] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      aux_sym_shell_fragment_token1,
    STATE(36), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(250), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1272] = 9,
    ACTIONS(123), 1,
      anon_sym_DOLLAR2,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      aux_sym__env_key_token1,
    STATE(35), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(37), 1,
      sym_line_continuation,
    STATE(90), 1,
      sym__imm_expansion,
    STATE(100), 1,
      sym__immediate_expansion,
    ACTIONS(133), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1301] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      aux_sym_path_token1,
    ACTIONS(223), 1,
      anon_sym_DOLLAR,
    ACTIONS(225), 1,
      anon_sym_DASH_DASH,
    STATE(29), 1,
      aux_sym_add_instruction_repeat1,
    STATE(38), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym_expansion,
    STATE(101), 1,
      aux_sym_add_instruction_repeat2,
    STATE(201), 1,
      sym_param,
    STATE(267), 1,
      sym_path,
  [1332] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(259), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(262), 1,
      anon_sym_DOLLAR2,
    STATE(134), 1,
      sym__immediate_expansion,
    STATE(135), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(152), 1,
      sym__imm_expansion,
    ACTIONS(257), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(39), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [1359] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(40), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__immediate_expansion,
    STATE(121), 1,
      sym__imm_expansion,
    ACTIONS(207), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1388] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(269), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(271), 1,
      anon_sym_DOLLAR2,
    ACTIONS(274), 1,
      aux_sym_image_tag_token1,
    STATE(105), 1,
      sym__immediate_expansion,
    STATE(118), 1,
      sym__imm_expansion,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(41), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1415] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(283), 1,
      aux_sym_image_tag_token1,
    STATE(41), 1,
      aux_sym_image_tag_repeat1,
    STATE(42), 1,
      sym_line_continuation,
    STATE(105), 1,
      sym__immediate_expansion,
    STATE(118), 1,
      sym__imm_expansion,
    ACTIONS(277), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1444] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(287), 1,
      aux_sym_label_pair_token1,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      aux_sym_label_instruction_repeat1,
    STATE(43), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym_label_pair,
    STATE(275), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1473] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(44), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__immediate_expansion,
    STATE(121), 1,
      sym__imm_expansion,
    ACTIONS(207), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1502] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(45), 1,
      sym_line_continuation,
    STATE(111), 1,
      sym__immediate_expansion,
    STATE(121), 1,
      sym__imm_expansion,
    ACTIONS(207), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1531] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(46), 1,
      sym_line_continuation,
    ACTIONS(299), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(297), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1549] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(188), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(190), 1,
      anon_sym_DOLLAR2,
    ACTIONS(301), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym_line_continuation,
    STATE(62), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(134), 1,
      sym__immediate_expansion,
    STATE(152), 1,
      sym__imm_expansion,
    STATE(181), 1,
      sym__immediate_user_name_or_group_fragment,
  [1577] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(48), 1,
      sym_line_continuation,
    ACTIONS(305), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(303), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1595] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(309), 1,
      anon_sym_POUND,
    STATE(130), 1,
      sym__comment_line,
    STATE(277), 1,
      sym__anon_comment,
    STATE(49), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(307), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1617] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      aux_sym_path_token2,
    ACTIONS(316), 1,
      anon_sym_DOLLAR2,
    STATE(50), 1,
      sym_line_continuation,
    STATE(54), 1,
      aux_sym_path_repeat1,
    STATE(139), 1,
      sym__imm_expansion,
    STATE(144), 1,
      sym__immediate_expansion,
    ACTIONS(312), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1643] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(320), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(322), 1,
      anon_sym_DOLLAR2,
    ACTIONS(325), 1,
      aux_sym_image_digest_token1,
    STATE(150), 1,
      sym__immediate_expansion,
    STATE(151), 1,
      sym__imm_expansion,
    STATE(51), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1669] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(332), 1,
      anon_sym_DOLLAR2,
    ACTIONS(334), 1,
      aux_sym_image_digest_token1,
    STATE(51), 1,
      aux_sym_image_digest_repeat1,
    STATE(52), 1,
      sym_line_continuation,
    STATE(150), 1,
      sym__immediate_expansion,
    STATE(151), 1,
      sym__imm_expansion,
  [1697] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(314), 1,
      aux_sym_path_token2,
    ACTIONS(316), 1,
      anon_sym_DOLLAR2,
    STATE(50), 1,
      aux_sym_path_repeat1,
    STATE(53), 1,
      sym_line_continuation,
    STATE(139), 1,
      sym__imm_expansion,
    STATE(144), 1,
      sym__immediate_expansion,
    ACTIONS(336), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1723] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(340), 1,
      aux_sym_path_token2,
    ACTIONS(343), 1,
      anon_sym_DOLLAR2,
    STATE(139), 1,
      sym__imm_expansion,
    STATE(144), 1,
      sym__immediate_expansion,
    ACTIONS(338), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(54), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1747] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(255), 1,
      aux_sym_shell_fragment_token1,
    STATE(55), 1,
      sym_line_continuation,
    ACTIONS(250), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1765] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      aux_sym_shell_fragment_token1,
    STATE(56), 1,
      sym_line_continuation,
    ACTIONS(346), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1783] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(57), 1,
      sym_line_continuation,
    ACTIONS(352), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(350), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1801] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      aux_sym_label_pair_token1,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      aux_sym_label_instruction_repeat1,
    STATE(58), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym_label_pair,
    STATE(275), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1827] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      aux_sym_image_name_token1,
    ACTIONS(364), 1,
      anon_sym_DASH_DASH,
    STATE(22), 1,
      sym_expansion,
    STATE(59), 1,
      sym_line_continuation,
    STATE(73), 1,
      sym_image_name,
    STATE(113), 1,
      sym_param,
    STATE(251), 1,
      sym_image_spec,
  [1855] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(60), 1,
      sym_line_continuation,
    ACTIONS(368), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(366), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1873] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(61), 1,
      sym_line_continuation,
    ACTIONS(372), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(370), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1891] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(376), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(379), 1,
      anon_sym_DOLLAR2,
    STATE(134), 1,
      sym__immediate_expansion,
    STATE(152), 1,
      sym__imm_expansion,
    STATE(181), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(62), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [1917] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(63), 1,
      sym_line_continuation,
    ACTIONS(352), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(350), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1934] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      aux_sym_expose_port_token1,
    STATE(64), 1,
      sym_line_continuation,
    STATE(80), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(198), 2,
      sym_expansion,
      sym_expose_port,
  [1957] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(65), 1,
      sym_line_continuation,
    STATE(210), 1,
      sym_path,
    STATE(284), 1,
      sym_json_string_array,
  [1982] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(392), 1,
      aux_sym_path_token2,
    ACTIONS(395), 1,
      anon_sym_DOLLAR2,
    ACTIONS(398), 1,
      sym__non_newline_whitespace,
    STATE(214), 1,
      sym__immediate_expansion,
    STATE(229), 1,
      sym__imm_expansion,
    STATE(66), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2005] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(405), 1,
      anon_sym_DOLLAR2,
    STATE(204), 1,
      sym__immediate_expansion,
    STATE(207), 1,
      sym__imm_expansion,
    STATE(67), 2,
      sym_line_continuation,
      aux_sym__stopsignal_value_repeat1,
  [2028] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(68), 1,
      sym_line_continuation,
    ACTIONS(372), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(370), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2045] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      anon_sym_DOLLAR2,
    ACTIONS(412), 1,
      aux_sym_image_alias_token2,
    STATE(69), 1,
      sym_line_continuation,
    STATE(76), 1,
      aux_sym_image_alias_repeat1,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(194), 1,
      sym__imm_expansion,
  [2070] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(414), 1,
      anon_sym_NONE,
    ACTIONS(416), 1,
      anon_sym_DASH_DASH,
    STATE(70), 1,
      sym_line_continuation,
    STATE(114), 1,
      aux_sym_add_instruction_repeat1,
    STATE(258), 1,
      sym_param,
    STATE(298), 1,
      sym_cmd_instruction,
  [2095] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(410), 1,
      anon_sym_DOLLAR2,
    ACTIONS(412), 1,
      aux_sym_image_alias_token2,
    ACTIONS(418), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym_image_alias_repeat1,
    STATE(71), 1,
      sym_line_continuation,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(194), 1,
      sym__imm_expansion,
  [2120] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(72), 1,
      sym_line_continuation,
    ACTIONS(305), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(303), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2137] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(422), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(424), 1,
      anon_sym_COLON,
    ACTIONS(426), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_line_continuation,
    STATE(164), 1,
      sym_image_tag,
    STATE(235), 1,
      sym_image_digest,
  [2162] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      anon_sym_LF,
    ACTIONS(430), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(432), 1,
      anon_sym_DOLLAR2,
    STATE(67), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(74), 1,
      sym_line_continuation,
    STATE(204), 1,
      sym__immediate_expansion,
    STATE(207), 1,
      sym__imm_expansion,
  [2187] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(430), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(432), 1,
      anon_sym_DOLLAR2,
    ACTIONS(434), 1,
      anon_sym_LF,
    STATE(74), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(75), 1,
      sym_line_continuation,
    STATE(204), 1,
      sym__immediate_expansion,
    STATE(207), 1,
      sym__imm_expansion,
  [2212] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(438), 1,
      anon_sym_DOLLAR2,
    ACTIONS(441), 1,
      aux_sym_image_alias_token2,
    STATE(186), 1,
      sym__immediate_expansion,
    STATE(194), 1,
      sym__imm_expansion,
    STATE(76), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2235] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(188), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(190), 1,
      anon_sym_DOLLAR2,
    STATE(47), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(77), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym__immediate_expansion,
    STATE(152), 1,
      sym__imm_expansion,
    STATE(181), 1,
      sym__immediate_user_name_or_group_fragment,
  [2260] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(446), 1,
      aux_sym_shell_fragment_token1,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(444), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2277] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      aux_sym_path_token2,
    ACTIONS(450), 1,
      anon_sym_DOLLAR2,
    ACTIONS(452), 1,
      sym__non_newline_whitespace,
    STATE(66), 1,
      aux_sym_path_repeat1,
    STATE(79), 1,
      sym_line_continuation,
    STATE(214), 1,
      sym__immediate_expansion,
    STATE(229), 1,
      sym__imm_expansion,
  [2302] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(454), 1,
      anon_sym_LF,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(459), 1,
      aux_sym_expose_port_token1,
    STATE(80), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(198), 2,
      sym_expansion,
      sym_expose_port,
  [2323] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(462), 1,
      aux_sym_path_token2,
    ACTIONS(465), 1,
      anon_sym_DOLLAR2,
    STATE(168), 1,
      sym__imm_expansion,
    STATE(228), 1,
      sym__immediate_expansion,
    STATE(81), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2346] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(452), 1,
      anon_sym_LF,
    ACTIONS(468), 1,
      aux_sym_path_token2,
    ACTIONS(470), 1,
      anon_sym_DOLLAR2,
    STATE(81), 1,
      aux_sym_path_repeat1,
    STATE(82), 1,
      sym_line_continuation,
    STATE(168), 1,
      sym__imm_expansion,
    STATE(228), 1,
      sym__immediate_expansion,
  [2371] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(474), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(472), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2388] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(468), 1,
      aux_sym_path_token2,
    ACTIONS(470), 1,
      anon_sym_DOLLAR2,
    ACTIONS(476), 1,
      anon_sym_LF,
    STATE(82), 1,
      aux_sym_path_repeat1,
    STATE(84), 1,
      sym_line_continuation,
    STATE(168), 1,
      sym__imm_expansion,
    STATE(228), 1,
      sym__immediate_expansion,
  [2413] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(480), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(478), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2430] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(299), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(297), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2447] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      aux_sym_path_token2,
    ACTIONS(450), 1,
      anon_sym_DOLLAR2,
    ACTIONS(476), 1,
      sym__non_newline_whitespace,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(87), 1,
      sym_line_continuation,
    STATE(214), 1,
      sym__immediate_expansion,
    STATE(229), 1,
      sym__imm_expansion,
  [2472] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(484), 1,
      aux_sym_shell_fragment_token1,
    STATE(88), 1,
      sym_line_continuation,
    ACTIONS(482), 5,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [2489] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(283), 1,
      aux_sym_image_tag_token1,
    STATE(42), 1,
      aux_sym_image_tag_repeat1,
    STATE(89), 1,
      sym_line_continuation,
    STATE(105), 1,
      sym__immediate_expansion,
    STATE(118), 1,
      sym__imm_expansion,
  [2511] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      aux_sym__env_key_token1,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(297), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2527] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(488), 1,
      aux_sym__env_key_token1,
    STATE(91), 1,
      sym_line_continuation,
    STATE(122), 1,
      aux_sym_env_instruction_repeat1,
    STATE(257), 1,
      sym_env_pair,
    STATE(271), 1,
      sym__env_key,
  [2549] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(490), 1,
      anon_sym_DOLLAR,
    ACTIONS(492), 1,
      aux_sym_expose_port_token1,
    STATE(64), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(92), 1,
      sym_line_continuation,
    STATE(198), 2,
      sym_expansion,
      sym_expose_port,
  [2569] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      anon_sym_DOLLAR2,
    ACTIONS(334), 1,
      aux_sym_image_digest_token1,
    STATE(52), 1,
      aux_sym_image_digest_repeat1,
    STATE(93), 1,
      sym_line_continuation,
    STATE(150), 1,
      sym__immediate_expansion,
    STATE(151), 1,
      sym__imm_expansion,
  [2591] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(494), 1,
      aux_sym__env_key_token1,
    STATE(91), 1,
      aux_sym_env_instruction_repeat1,
    STATE(94), 1,
      sym_line_continuation,
    STATE(257), 1,
      sym_env_pair,
    STATE(260), 1,
      sym__env_key,
    STATE(270), 1,
      sym__spaced_env_pair,
  [2613] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(305), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(303), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2629] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(499), 1,
      anon_sym_SQUOTE,
    ACTIONS(501), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
    STATE(96), 2,
      sym_line_continuation,
      aux_sym_single_quoted_string_repeat1,
  [2647] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(97), 1,
      sym_line_continuation,
    ACTIONS(352), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(350), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2663] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(372), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(370), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2679] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(99), 1,
      sym_line_continuation,
    STATE(124), 1,
      aux_sym_add_instruction_repeat2,
    STATE(261), 1,
      sym_path,
  [2701] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(368), 1,
      aux_sym__env_key_token1,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(366), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2717] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(101), 1,
      sym_line_continuation,
    STATE(124), 1,
      aux_sym_add_instruction_repeat2,
    STATE(232), 1,
      sym_path,
  [2739] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    ACTIONS(506), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      sym_line_continuation,
    STATE(125), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(508), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2759] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(305), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(303), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2775] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    ACTIONS(510), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(104), 1,
      sym_line_continuation,
    ACTIONS(508), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2795] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(514), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(512), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2811] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(106), 1,
      sym_line_continuation,
    ACTIONS(508), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2831] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(352), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(350), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2847] = 4,
    ACTIONS(518), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      anon_sym_BSLASH_LF,
    STATE(108), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(520), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2863] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      anon_sym_LF,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(527), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(529), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2881] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      aux_sym__env_key_token1,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(370), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2897] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(533), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(531), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2913] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(352), 1,
      aux_sym__env_key_token1,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(350), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2929] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      aux_sym_image_name_token1,
    STATE(22), 1,
      sym_expansion,
    STATE(73), 1,
      sym_image_name,
    STATE(113), 1,
      sym_line_continuation,
    STATE(236), 1,
      sym_image_spec,
  [2951] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(416), 1,
      anon_sym_DASH_DASH,
    STATE(114), 1,
      sym_line_continuation,
    STATE(158), 1,
      aux_sym_add_instruction_repeat1,
    STATE(258), 1,
      sym_param,
    STATE(266), 1,
      sym_cmd_instruction,
  [2973] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(508), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2993] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
    STATE(115), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(508), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3013] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      aux_sym__env_key_token1,
    STATE(117), 1,
      sym_line_continuation,
    ACTIONS(303), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3029] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(299), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(297), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3045] = 5,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      anon_sym_BSLASH_LF,
    STATE(108), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(541), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3063] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(372), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(370), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3079] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(299), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(297), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3095] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      aux_sym__env_key_token1,
    STATE(257), 1,
      sym_env_pair,
    STATE(271), 1,
      sym__env_key,
    STATE(122), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [3115] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(123), 1,
      sym_line_continuation,
    STATE(124), 1,
      aux_sym_add_instruction_repeat2,
    STATE(241), 1,
      sym_path,
  [3137] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(550), 1,
      aux_sym_path_token1,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    STATE(87), 1,
      sym_expansion,
    STATE(267), 1,
      sym_path,
    STATE(124), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat2,
  [3157] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(508), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3177] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(558), 1,
      aux_sym_path_token1,
    ACTIONS(560), 1,
      anon_sym_DOLLAR,
    ACTIONS(562), 1,
      anon_sym_DASH_DASH,
    STATE(201), 1,
      sym_param,
    STATE(126), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [3197] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(124), 1,
      aux_sym_add_instruction_repeat2,
    STATE(127), 1,
      sym_line_continuation,
    STATE(233), 1,
      sym_path,
  [3219] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(472), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3232] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    ACTIONS(567), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
    STATE(129), 2,
      sym_line_continuation,
      aux_sym_json_string_repeat1,
  [3247] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(570), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3260] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(472), 1,
      anon_sym_DOLLAR2,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(474), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3275] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      aux_sym_path_token1,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(132), 1,
      sym_line_continuation,
    STATE(242), 1,
      sym_path,
  [3294] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(574), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3309] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(576), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3322] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(578), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3335] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      aux_sym_from_instruction_token2,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(370), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3350] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(580), 1,
      anon_sym_LF,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(582), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3365] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(584), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(586), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3380] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(297), 1,
      anon_sym_DOLLAR2,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(299), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3395] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(303), 1,
      anon_sym_DOLLAR2,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(305), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3410] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      anon_sym_DOLLAR2,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(372), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3425] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(588), 1,
      anon_sym_LF,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(590), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3440] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(350), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3453] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(594), 1,
      anon_sym_DOLLAR2,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(592), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3468] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      aux_sym_from_instruction_token2,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(303), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3483] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_line_continuation,
    STATE(157), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(598), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3500] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(350), 1,
      anon_sym_DOLLAR2,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(352), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3515] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(600), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3528] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(602), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3541] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(606), 1,
      aux_sym_from_instruction_token2,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(604), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3556] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      aux_sym_from_instruction_token2,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(297), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3571] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(297), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3584] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(608), 1,
      anon_sym_DOLLAR,
    ACTIONS(610), 1,
      aux_sym_image_alias_token1,
    STATE(71), 1,
      sym_expansion,
    STATE(153), 1,
      sym_line_continuation,
    STATE(294), 1,
      sym_image_alias,
  [3603] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(612), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(614), 1,
      anon_sym_DOLLAR,
    STATE(75), 1,
      sym_expansion,
    STATE(154), 1,
      sym_line_continuation,
    STATE(303), 1,
      sym__stopsignal_value,
  [3622] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(303), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3635] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(370), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3648] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      aux_sym_json_string_repeat1,
    STATE(157), 1,
      sym_line_continuation,
    ACTIONS(598), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3665] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(560), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(618), 1,
      anon_sym_DASH_DASH,
    STATE(258), 1,
      sym_param,
    STATE(158), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [3682] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      aux_sym_path_token1,
    ACTIONS(623), 1,
      anon_sym_DOLLAR,
    STATE(84), 1,
      sym_expansion,
    STATE(159), 1,
      sym_line_continuation,
    STATE(285), 1,
      sym_path,
  [3701] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(625), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(627), 1,
      anon_sym_DOLLAR,
    STATE(30), 1,
      sym_expansion,
    STATE(160), 1,
      sym_line_continuation,
    STATE(252), 1,
      sym__user_name_or_group,
  [3720] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(352), 1,
      aux_sym_from_instruction_token2,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(350), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3735] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(629), 1,
      anon_sym_LF,
    STATE(162), 1,
      sym_line_continuation,
    ACTIONS(631), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3750] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      anon_sym_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(635), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3765] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(426), 1,
      anon_sym_AT,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 1,
      aux_sym_from_instruction_token2,
    STATE(164), 1,
      sym_line_continuation,
    STATE(243), 1,
      sym_image_digest,
  [3784] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(608), 1,
      anon_sym_DOLLAR,
    ACTIONS(610), 1,
      aux_sym_image_alias_token1,
    STATE(71), 1,
      sym_expansion,
    STATE(165), 1,
      sym_line_continuation,
    STATE(282), 1,
      sym_image_alias,
  [3803] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(641), 1,
      anon_sym_LF,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(643), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3818] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      aux_sym_path_token2,
    STATE(167), 1,
      sym_line_continuation,
    ACTIONS(370), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3832] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      aux_sym_path_token2,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(297), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3846] = 5,
    ACTIONS(645), 1,
      anon_sym_LF,
    ACTIONS(647), 1,
      anon_sym_BSLASH_LF,
    STATE(18), 1,
      sym_required_line_continuation,
    STATE(169), 1,
      sym_line_continuation,
    STATE(217), 1,
      aux_sym_shell_command_repeat2,
  [3862] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(651), 1,
      sym_variable,
    STATE(170), 1,
      sym_line_continuation,
    STATE(193), 1,
      sym__expansion_body,
  [3878] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(653), 1,
      anon_sym_LBRACE,
    ACTIONS(655), 1,
      sym_variable,
    STATE(117), 1,
      sym__expansion_body,
    STATE(171), 1,
      sym_line_continuation,
  [3894] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(657), 1,
      anon_sym_LBRACE,
    ACTIONS(659), 1,
      sym_variable,
    STATE(48), 1,
      sym__expansion_body,
    STATE(172), 1,
      sym_line_continuation,
  [3910] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
    ACTIONS(663), 1,
      sym_variable,
    STATE(145), 1,
      sym__expansion_body,
    STATE(173), 1,
      sym_line_continuation,
  [3926] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(651), 1,
      sym_variable,
    STATE(174), 1,
      sym_line_continuation,
    STATE(202), 1,
      sym__expansion_body,
  [3942] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(665), 1,
      anon_sym_LBRACE,
    ACTIONS(667), 1,
      sym_variable,
    STATE(95), 1,
      sym__expansion_body,
    STATE(175), 1,
      sym_line_continuation,
  [3958] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
    ACTIONS(671), 1,
      sym_variable,
    STATE(176), 1,
      sym_line_continuation,
    STATE(208), 1,
      sym__expansion_body,
  [3974] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
    ACTIONS(671), 1,
      sym_variable,
    STATE(177), 1,
      sym_line_continuation,
    STATE(206), 1,
      sym__expansion_body,
  [3990] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(673), 1,
      anon_sym_LF,
    ACTIONS(675), 1,
      sym__non_newline_whitespace,
    STATE(178), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [4004] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    ACTIONS(680), 1,
      sym_variable,
    STATE(179), 1,
      sym_line_continuation,
    STATE(218), 1,
      sym__expansion_body,
  [4020] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(682), 1,
      anon_sym_COMMA2,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      sym_line_continuation,
    STATE(197), 1,
      aux_sym_json_string_array_repeat1,
  [4036] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(686), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4048] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
    ACTIONS(680), 1,
      sym_variable,
    STATE(182), 1,
      sym_line_continuation,
    STATE(215), 1,
      sym__expansion_body,
  [4064] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    ACTIONS(690), 1,
      sym_variable,
    STATE(128), 1,
      sym__expansion_body,
    STATE(183), 1,
      sym_line_continuation,
  [4080] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
    ACTIONS(690), 1,
      sym_variable,
    STATE(155), 1,
      sym__expansion_body,
    STATE(184), 1,
      sym_line_continuation,
  [4096] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    ACTIONS(694), 1,
      sym_variable,
    STATE(131), 1,
      sym__expansion_body,
    STATE(185), 1,
      sym_line_continuation,
  [4112] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(696), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4124] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(700), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4138] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    ACTIONS(694), 1,
      sym_variable,
    STATE(140), 1,
      sym__expansion_body,
    STATE(188), 1,
      sym_line_continuation,
  [4154] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    ACTIONS(704), 1,
      sym_variable,
    STATE(189), 1,
      sym_line_continuation,
    STATE(231), 1,
      sym__expansion_body,
  [4170] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    ACTIONS(704), 1,
      sym_variable,
    STATE(190), 1,
      sym_line_continuation,
    STATE(225), 1,
      sym__expansion_body,
  [4186] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    ACTIONS(708), 1,
      sym_variable,
    STATE(83), 1,
      sym__expansion_body,
    STATE(191), 1,
      sym_line_continuation,
  [4202] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      sym_variable,
    STATE(192), 1,
      sym_line_continuation,
    STATE(212), 1,
      sym__expansion_body,
  [4218] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(303), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4230] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(297), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4242] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      anon_sym_RBRACK,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_line_continuation,
    STATE(222), 1,
      sym_json_string,
  [4258] = 5,
    ACTIONS(647), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym_required_line_continuation,
    STATE(196), 1,
      sym_line_continuation,
    STATE(221), 1,
      aux_sym_shell_command_repeat2,
  [4274] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(720), 1,
      anon_sym_COMMA2,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
    STATE(197), 2,
      sym_line_continuation,
      aux_sym_json_string_array_repeat1,
  [4288] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(727), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4302] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(370), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4314] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(200), 1,
      sym_line_continuation,
    ACTIONS(350), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4326] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      aux_sym_path_token1,
    STATE(201), 1,
      sym_line_continuation,
    ACTIONS(731), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4340] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(202), 1,
      sym_line_continuation,
    ACTIONS(472), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4352] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(370), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4364] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(204), 1,
      sym_line_continuation,
    ACTIONS(733), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4376] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(737), 1,
      sym__non_newline_whitespace,
    STATE(178), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(205), 1,
      sym_line_continuation,
  [4392] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(206), 1,
      sym_line_continuation,
    ACTIONS(303), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4404] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(207), 1,
      sym_line_continuation,
    ACTIONS(297), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4416] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(208), 1,
      sym_line_continuation,
    ACTIONS(472), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4428] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(350), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4440] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(737), 1,
      sym__non_newline_whitespace,
    ACTIONS(739), 1,
      anon_sym_LF,
    STATE(205), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(210), 1,
      sym_line_continuation,
  [4456] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(350), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_line_continuation,
    ACTIONS(352), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4470] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(472), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_line_continuation,
    ACTIONS(474), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4484] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
    ACTIONS(743), 1,
      sym_variable,
    STATE(103), 1,
      sym__expansion_body,
    STATE(213), 1,
      sym_line_continuation,
  [4500] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      aux_sym_path_token2,
    STATE(214), 1,
      sym_line_continuation,
    ACTIONS(594), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4514] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      aux_sym_path_token2,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(303), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4528] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(745), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_line_continuation,
    ACTIONS(747), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4542] = 4,
    ACTIONS(749), 1,
      anon_sym_LF,
    ACTIONS(751), 1,
      anon_sym_BSLASH_LF,
    STATE(18), 1,
      sym_required_line_continuation,
    STATE(217), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [4556] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(474), 1,
      aux_sym_path_token2,
    STATE(218), 1,
      sym_line_continuation,
    ACTIONS(472), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4570] = 5,
    ACTIONS(647), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym_required_line_continuation,
    STATE(169), 1,
      aux_sym_shell_command_repeat2,
    STATE(219), 1,
      sym_line_continuation,
  [4586] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(352), 1,
      aux_sym_path_token2,
    STATE(220), 1,
      sym_line_continuation,
    ACTIONS(350), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4600] = 5,
    ACTIONS(647), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym_required_line_continuation,
    STATE(217), 1,
      aux_sym_shell_command_repeat2,
    STATE(221), 1,
      sym_line_continuation,
  [4616] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(682), 1,
      anon_sym_COMMA2,
    ACTIONS(756), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      aux_sym_json_string_array_repeat1,
    STATE(222), 1,
      sym_line_continuation,
  [4632] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(484), 1,
      aux_sym_path_token1,
    STATE(223), 1,
      sym_line_continuation,
    ACTIONS(482), 2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4646] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(372), 1,
      aux_sym_path_token2,
    STATE(224), 1,
      sym_line_continuation,
    ACTIONS(370), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4660] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      aux_sym_path_token2,
    STATE(225), 1,
      sym_line_continuation,
    ACTIONS(303), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4674] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(370), 1,
      anon_sym_LF,
    STATE(226), 1,
      sym_line_continuation,
    ACTIONS(372), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4688] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    ACTIONS(708), 1,
      sym_variable,
    STATE(72), 1,
      sym__expansion_body,
    STATE(227), 1,
      sym_line_continuation,
  [4704] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      aux_sym_path_token2,
    STATE(228), 1,
      sym_line_continuation,
    ACTIONS(594), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4718] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(299), 1,
      aux_sym_path_token2,
    STATE(229), 1,
      sym_line_continuation,
    ACTIONS(297), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4732] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(352), 1,
      aux_sym_path_token2,
    STATE(230), 1,
      sym_line_continuation,
    ACTIONS(350), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4746] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(474), 1,
      aux_sym_path_token2,
    STATE(231), 1,
      sym_line_continuation,
    ACTIONS(472), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4760] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_LF,
    ACTIONS(760), 1,
      sym__non_newline_whitespace,
    STATE(232), 1,
      sym_line_continuation,
  [4773] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      sym__non_newline_whitespace,
    ACTIONS(762), 1,
      anon_sym_LF,
    STATE(233), 1,
      sym_line_continuation,
  [4786] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 1,
      aux_sym__env_key_token1,
    STATE(234), 1,
      sym_line_continuation,
  [4799] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      aux_sym_from_instruction_token2,
    STATE(235), 1,
      sym_line_continuation,
  [4812] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_LF,
    ACTIONS(770), 1,
      aux_sym_from_instruction_token2,
    STATE(236), 1,
      sym_line_continuation,
  [4825] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_LF,
    ACTIONS(774), 1,
      aux_sym__env_key_token1,
    STATE(237), 1,
      sym_line_continuation,
  [4838] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      aux_sym__env_key_token1,
    STATE(238), 1,
      sym_line_continuation,
  [4851] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 1,
      aux_sym__env_key_token1,
    STATE(239), 1,
      sym_line_continuation,
  [4864] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      aux_sym__env_key_token1,
    STATE(240), 1,
      sym_line_continuation,
  [4877] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      sym__non_newline_whitespace,
    ACTIONS(776), 1,
      anon_sym_LF,
    STATE(241), 1,
      sym_line_continuation,
  [4890] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(242), 1,
      sym_line_continuation,
    ACTIONS(673), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [4901] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      anon_sym_LF,
    ACTIONS(780), 1,
      aux_sym_from_instruction_token2,
    STATE(243), 1,
      sym_line_continuation,
  [4914] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      sym_line_continuation,
    STATE(255), 1,
      sym_json_string,
  [4927] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(482), 1,
      anon_sym_DOLLAR,
    ACTIONS(484), 1,
      aux_sym_image_name_token1,
    STATE(245), 1,
      sym_line_continuation,
  [4940] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(246), 1,
      sym_line_continuation,
    STATE(274), 1,
      sym_json_string_array,
  [4953] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      aux_sym_mount_param_param_token1,
    STATE(26), 1,
      sym_mount_param_param,
    STATE(247), 1,
      sym_line_continuation,
  [4966] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(248), 1,
      sym_line_continuation,
    ACTIONS(482), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4977] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(249), 1,
      sym_line_continuation,
    ACTIONS(784), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4988] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      anon_sym_LF,
    ACTIONS(788), 1,
      anon_sym_EQ,
    STATE(250), 1,
      sym_line_continuation,
  [5001] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_LF,
    ACTIONS(792), 1,
      aux_sym_from_instruction_token2,
    STATE(251), 1,
      sym_line_continuation,
  [5014] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_LF,
    ACTIONS(796), 1,
      anon_sym_COLON,
    STATE(252), 1,
      sym_line_continuation,
  [5027] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      aux_sym_param_token1,
    ACTIONS(800), 1,
      anon_sym_mount,
    STATE(253), 1,
      sym_line_continuation,
  [5040] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(254), 1,
      sym_line_continuation,
    ACTIONS(802), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5051] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(255), 1,
      sym_line_continuation,
    ACTIONS(723), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5062] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(256), 1,
      sym_line_continuation,
    ACTIONS(804), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [5073] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_LF,
    ACTIONS(808), 1,
      aux_sym__env_key_token1,
    STATE(257), 1,
      sym_line_continuation,
  [5086] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(258), 1,
      sym_line_continuation,
    ACTIONS(731), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5097] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      aux_sym_path_token1,
    ACTIONS(812), 1,
      anon_sym_DOLLAR,
    STATE(259), 1,
      sym_line_continuation,
  [5110] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_EQ,
    ACTIONS(816), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(260), 1,
      sym_line_continuation,
  [5123] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      sym__non_newline_whitespace,
    ACTIONS(818), 1,
      anon_sym_LF,
    STATE(261), 1,
      sym_line_continuation,
  [5136] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      aux_sym_mount_param_param_token1,
    STATE(55), 1,
      sym_mount_param_param,
    STATE(262), 1,
      sym_line_continuation,
  [5149] = 3,
    ACTIONS(820), 1,
      anon_sym_LF,
    ACTIONS(822), 1,
      anon_sym_BSLASH_LF,
    STATE(263), 1,
      sym_line_continuation,
  [5159] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_LF,
    STATE(264), 1,
      sym_line_continuation,
  [5169] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      aux_sym_mount_param_param_token1,
    STATE(265), 1,
      sym_line_continuation,
  [5179] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      anon_sym_LF,
    STATE(266), 1,
      sym_line_continuation,
  [5189] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      sym__non_newline_whitespace,
    STATE(267), 1,
      sym_line_continuation,
  [5199] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(804), 1,
      anon_sym_EQ,
    STATE(268), 1,
      sym_line_continuation,
  [5209] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      sym_line_continuation,
  [5219] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(834), 1,
      anon_sym_LF,
    STATE(270), 1,
      sym_line_continuation,
  [5229] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      anon_sym_EQ,
    STATE(271), 1,
      sym_line_continuation,
  [5239] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      aux_sym_param_token2,
    STATE(272), 1,
      sym_line_continuation,
  [5249] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(580), 1,
      anon_sym_EQ,
    STATE(273), 1,
      sym_line_continuation,
  [5259] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(838), 1,
      anon_sym_LF,
    STATE(274), 1,
      sym_line_continuation,
  [5269] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      anon_sym_EQ,
    STATE(275), 1,
      sym_line_continuation,
  [5279] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(842), 1,
      anon_sym_LF,
    STATE(276), 1,
      sym_line_continuation,
  [5289] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      anon_sym_LF,
    STATE(277), 1,
      sym_line_continuation,
  [5299] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      anon_sym_LF,
    STATE(278), 1,
      sym_line_continuation,
  [5309] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      sym_line_continuation,
  [5319] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(572), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_line_continuation,
  [5329] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(850), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(281), 1,
      sym_line_continuation,
  [5339] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      anon_sym_LF,
    STATE(282), 1,
      sym_line_continuation,
  [5349] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(854), 1,
      anon_sym_LF,
    STATE(283), 1,
      sym_line_continuation,
  [5359] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(856), 1,
      anon_sym_LF,
    STATE(284), 1,
      sym_line_continuation,
  [5369] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      anon_sym_LF,
    STATE(285), 1,
      sym_line_continuation,
  [5379] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(860), 1,
      aux_sym__expansion_body_token1,
    STATE(286), 1,
      sym_line_continuation,
  [5389] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(862), 1,
      anon_sym_LF,
    STATE(287), 1,
      sym_line_continuation,
  [5399] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(864), 1,
      anon_sym_LF,
    STATE(288), 1,
      sym_line_continuation,
  [5409] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(866), 1,
      anon_sym_LF,
    STATE(289), 1,
      sym_line_continuation,
  [5419] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(868), 1,
      ts_builtin_sym_end,
    STATE(290), 1,
      sym_line_continuation,
  [5429] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(870), 1,
      anon_sym_LF,
    STATE(291), 1,
      sym_line_continuation,
  [5439] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_line_continuation,
  [5449] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(874), 1,
      anon_sym_EQ,
    STATE(293), 1,
      sym_line_continuation,
  [5459] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(876), 1,
      anon_sym_LF,
    STATE(294), 1,
      sym_line_continuation,
  [5469] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(878), 1,
      aux_sym_param_token1,
    STATE(295), 1,
      sym_line_continuation,
  [5479] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(880), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(296), 1,
      sym_line_continuation,
  [5489] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(882), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(297), 1,
      sym_line_continuation,
  [5499] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      anon_sym_LF,
    STATE(298), 1,
      sym_line_continuation,
  [5509] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(886), 1,
      aux_sym_arg_instruction_token2,
    STATE(299), 1,
      sym_line_continuation,
  [5519] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_line_continuation,
  [5529] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(890), 1,
      aux_sym_param_token2,
    STATE(301), 1,
      sym_line_continuation,
  [5539] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(892), 1,
      aux_sym_param_token2,
    STATE(302), 1,
      sym_line_continuation,
  [5549] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(894), 1,
      anon_sym_LF,
    STATE(303), 1,
      sym_line_continuation,
  [5559] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(896), 1,
      anon_sym_LF,
    STATE(304), 1,
      sym_line_continuation,
  [5569] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(898), 1,
      anon_sym_EQ,
    STATE(305), 1,
      sym_line_continuation,
  [5579] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(900), 1,
      anon_sym_LF,
    STATE(306), 1,
      sym_line_continuation,
  [5589] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(902), 1,
      anon_sym_LF,
    STATE(307), 1,
      sym_line_continuation,
  [5599] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_line_continuation,
  [5609] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(906), 1,
      anon_sym_LF,
    STATE(309), 1,
      sym_line_continuation,
  [5619] = 3,
    ACTIONS(749), 1,
      anon_sym_LF,
    ACTIONS(908), 1,
      anon_sym_BSLASH_LF,
    STATE(310), 1,
      sym_line_continuation,
  [5629] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym_line_continuation,
  [5639] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(912), 1,
      anon_sym_LF,
    STATE(312), 1,
      sym_line_continuation,
  [5649] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(914), 1,
      anon_sym_LF,
    STATE(313), 1,
      sym_line_continuation,
  [5659] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_line_continuation,
  [5669] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(918), 1,
      aux_sym__expansion_body_token1,
    STATE(315), 1,
      sym_line_continuation,
  [5679] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(920), 1,
      anon_sym_EQ,
    STATE(316), 1,
      sym_line_continuation,
  [5689] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      sym_line_continuation,
  [5699] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(924), 1,
      anon_sym_LF,
    STATE(318), 1,
      sym_line_continuation,
  [5709] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(926), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      sym_line_continuation,
  [5719] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(928), 1,
      anon_sym_EQ,
    STATE(320), 1,
      sym_line_continuation,
  [5729] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      sym_line_continuation,
  [5739] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      anon_sym_EQ,
    STATE(322), 1,
      sym_line_continuation,
  [5749] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym_line_continuation,
  [5759] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(629), 1,
      anon_sym_EQ,
    STATE(324), 1,
      sym_line_continuation,
  [5769] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      sym_line_continuation,
  [5779] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
    STATE(326), 1,
      sym_line_continuation,
  [5789] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(938), 1,
      aux_sym__expansion_body_token1,
    STATE(327), 1,
      sym_line_continuation,
  [5799] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(940), 1,
      aux_sym_param_token2,
    STATE(328), 1,
      sym_line_continuation,
  [5809] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(942), 1,
      aux_sym__expansion_body_token1,
    STATE(329), 1,
      sym_line_continuation,
  [5819] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(944), 1,
      anon_sym_EQ,
    STATE(330), 1,
      sym_line_continuation,
  [5829] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(946), 1,
      aux_sym__expansion_body_token1,
    STATE(331), 1,
      sym_line_continuation,
  [5839] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(948), 1,
      anon_sym_EQ,
    STATE(332), 1,
      sym_line_continuation,
  [5849] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(950), 1,
      aux_sym__expansion_body_token1,
    STATE(333), 1,
      sym_line_continuation,
  [5859] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(952), 1,
      aux_sym_param_token1,
    STATE(334), 1,
      sym_line_continuation,
  [5869] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(954), 1,
      aux_sym__expansion_body_token1,
    STATE(335), 1,
      sym_line_continuation,
  [5879] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(956), 1,
      aux_sym__expansion_body_token1,
    STATE(336), 1,
      sym_line_continuation,
  [5889] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(958), 1,
      aux_sym__expansion_body_token1,
    STATE(337), 1,
      sym_line_continuation,
  [5899] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(960), 1,
      aux_sym__expansion_body_token1,
    STATE(338), 1,
      sym_line_continuation,
  [5909] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(962), 1,
      aux_sym__expansion_body_token1,
    STATE(339), 1,
      sym_line_continuation,
  [5919] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(964), 1,
      aux_sym__expansion_body_token1,
    STATE(340), 1,
      sym_line_continuation,
  [5929] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(966), 1,
      aux_sym__expansion_body_token1,
    STATE(341), 1,
      sym_line_continuation,
  [5939] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(968), 1,
      aux_sym_param_token1,
    STATE(342), 1,
      sym_line_continuation,
  [5949] = 1,
    ACTIONS(970), 1,
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
  [SMALL_STATE(15)] = 655,
  [SMALL_STATE(16)] = 684,
  [SMALL_STATE(17)] = 708,
  [SMALL_STATE(18)] = 738,
  [SMALL_STATE(19)] = 768,
  [SMALL_STATE(20)] = 798,
  [SMALL_STATE(21)] = 828,
  [SMALL_STATE(22)] = 856,
  [SMALL_STATE(23)] = 886,
  [SMALL_STATE(24)] = 915,
  [SMALL_STATE(25)] = 942,
  [SMALL_STATE(26)] = 971,
  [SMALL_STATE(27)] = 994,
  [SMALL_STATE(28)] = 1023,
  [SMALL_STATE(29)] = 1052,
  [SMALL_STATE(30)] = 1083,
  [SMALL_STATE(31)] = 1112,
  [SMALL_STATE(32)] = 1143,
  [SMALL_STATE(33)] = 1170,
  [SMALL_STATE(34)] = 1193,
  [SMALL_STATE(35)] = 1224,
  [SMALL_STATE(36)] = 1251,
  [SMALL_STATE(37)] = 1272,
  [SMALL_STATE(38)] = 1301,
  [SMALL_STATE(39)] = 1332,
  [SMALL_STATE(40)] = 1359,
  [SMALL_STATE(41)] = 1388,
  [SMALL_STATE(42)] = 1415,
  [SMALL_STATE(43)] = 1444,
  [SMALL_STATE(44)] = 1473,
  [SMALL_STATE(45)] = 1502,
  [SMALL_STATE(46)] = 1531,
  [SMALL_STATE(47)] = 1549,
  [SMALL_STATE(48)] = 1577,
  [SMALL_STATE(49)] = 1595,
  [SMALL_STATE(50)] = 1617,
  [SMALL_STATE(51)] = 1643,
  [SMALL_STATE(52)] = 1669,
  [SMALL_STATE(53)] = 1697,
  [SMALL_STATE(54)] = 1723,
  [SMALL_STATE(55)] = 1747,
  [SMALL_STATE(56)] = 1765,
  [SMALL_STATE(57)] = 1783,
  [SMALL_STATE(58)] = 1801,
  [SMALL_STATE(59)] = 1827,
  [SMALL_STATE(60)] = 1855,
  [SMALL_STATE(61)] = 1873,
  [SMALL_STATE(62)] = 1891,
  [SMALL_STATE(63)] = 1917,
  [SMALL_STATE(64)] = 1934,
  [SMALL_STATE(65)] = 1957,
  [SMALL_STATE(66)] = 1982,
  [SMALL_STATE(67)] = 2005,
  [SMALL_STATE(68)] = 2028,
  [SMALL_STATE(69)] = 2045,
  [SMALL_STATE(70)] = 2070,
  [SMALL_STATE(71)] = 2095,
  [SMALL_STATE(72)] = 2120,
  [SMALL_STATE(73)] = 2137,
  [SMALL_STATE(74)] = 2162,
  [SMALL_STATE(75)] = 2187,
  [SMALL_STATE(76)] = 2212,
  [SMALL_STATE(77)] = 2235,
  [SMALL_STATE(78)] = 2260,
  [SMALL_STATE(79)] = 2277,
  [SMALL_STATE(80)] = 2302,
  [SMALL_STATE(81)] = 2323,
  [SMALL_STATE(82)] = 2346,
  [SMALL_STATE(83)] = 2371,
  [SMALL_STATE(84)] = 2388,
  [SMALL_STATE(85)] = 2413,
  [SMALL_STATE(86)] = 2430,
  [SMALL_STATE(87)] = 2447,
  [SMALL_STATE(88)] = 2472,
  [SMALL_STATE(89)] = 2489,
  [SMALL_STATE(90)] = 2511,
  [SMALL_STATE(91)] = 2527,
  [SMALL_STATE(92)] = 2549,
  [SMALL_STATE(93)] = 2569,
  [SMALL_STATE(94)] = 2591,
  [SMALL_STATE(95)] = 2613,
  [SMALL_STATE(96)] = 2629,
  [SMALL_STATE(97)] = 2647,
  [SMALL_STATE(98)] = 2663,
  [SMALL_STATE(99)] = 2679,
  [SMALL_STATE(100)] = 2701,
  [SMALL_STATE(101)] = 2717,
  [SMALL_STATE(102)] = 2739,
  [SMALL_STATE(103)] = 2759,
  [SMALL_STATE(104)] = 2775,
  [SMALL_STATE(105)] = 2795,
  [SMALL_STATE(106)] = 2811,
  [SMALL_STATE(107)] = 2831,
  [SMALL_STATE(108)] = 2847,
  [SMALL_STATE(109)] = 2863,
  [SMALL_STATE(110)] = 2881,
  [SMALL_STATE(111)] = 2897,
  [SMALL_STATE(112)] = 2913,
  [SMALL_STATE(113)] = 2929,
  [SMALL_STATE(114)] = 2951,
  [SMALL_STATE(115)] = 2973,
  [SMALL_STATE(116)] = 2993,
  [SMALL_STATE(117)] = 3013,
  [SMALL_STATE(118)] = 3029,
  [SMALL_STATE(119)] = 3045,
  [SMALL_STATE(120)] = 3063,
  [SMALL_STATE(121)] = 3079,
  [SMALL_STATE(122)] = 3095,
  [SMALL_STATE(123)] = 3115,
  [SMALL_STATE(124)] = 3137,
  [SMALL_STATE(125)] = 3157,
  [SMALL_STATE(126)] = 3177,
  [SMALL_STATE(127)] = 3197,
  [SMALL_STATE(128)] = 3219,
  [SMALL_STATE(129)] = 3232,
  [SMALL_STATE(130)] = 3247,
  [SMALL_STATE(131)] = 3260,
  [SMALL_STATE(132)] = 3275,
  [SMALL_STATE(133)] = 3294,
  [SMALL_STATE(134)] = 3309,
  [SMALL_STATE(135)] = 3322,
  [SMALL_STATE(136)] = 3335,
  [SMALL_STATE(137)] = 3350,
  [SMALL_STATE(138)] = 3365,
  [SMALL_STATE(139)] = 3380,
  [SMALL_STATE(140)] = 3395,
  [SMALL_STATE(141)] = 3410,
  [SMALL_STATE(142)] = 3425,
  [SMALL_STATE(143)] = 3440,
  [SMALL_STATE(144)] = 3453,
  [SMALL_STATE(145)] = 3468,
  [SMALL_STATE(146)] = 3483,
  [SMALL_STATE(147)] = 3500,
  [SMALL_STATE(148)] = 3515,
  [SMALL_STATE(149)] = 3528,
  [SMALL_STATE(150)] = 3541,
  [SMALL_STATE(151)] = 3556,
  [SMALL_STATE(152)] = 3571,
  [SMALL_STATE(153)] = 3584,
  [SMALL_STATE(154)] = 3603,
  [SMALL_STATE(155)] = 3622,
  [SMALL_STATE(156)] = 3635,
  [SMALL_STATE(157)] = 3648,
  [SMALL_STATE(158)] = 3665,
  [SMALL_STATE(159)] = 3682,
  [SMALL_STATE(160)] = 3701,
  [SMALL_STATE(161)] = 3720,
  [SMALL_STATE(162)] = 3735,
  [SMALL_STATE(163)] = 3750,
  [SMALL_STATE(164)] = 3765,
  [SMALL_STATE(165)] = 3784,
  [SMALL_STATE(166)] = 3803,
  [SMALL_STATE(167)] = 3818,
  [SMALL_STATE(168)] = 3832,
  [SMALL_STATE(169)] = 3846,
  [SMALL_STATE(170)] = 3862,
  [SMALL_STATE(171)] = 3878,
  [SMALL_STATE(172)] = 3894,
  [SMALL_STATE(173)] = 3910,
  [SMALL_STATE(174)] = 3926,
  [SMALL_STATE(175)] = 3942,
  [SMALL_STATE(176)] = 3958,
  [SMALL_STATE(177)] = 3974,
  [SMALL_STATE(178)] = 3990,
  [SMALL_STATE(179)] = 4004,
  [SMALL_STATE(180)] = 4020,
  [SMALL_STATE(181)] = 4036,
  [SMALL_STATE(182)] = 4048,
  [SMALL_STATE(183)] = 4064,
  [SMALL_STATE(184)] = 4080,
  [SMALL_STATE(185)] = 4096,
  [SMALL_STATE(186)] = 4112,
  [SMALL_STATE(187)] = 4124,
  [SMALL_STATE(188)] = 4138,
  [SMALL_STATE(189)] = 4154,
  [SMALL_STATE(190)] = 4170,
  [SMALL_STATE(191)] = 4186,
  [SMALL_STATE(192)] = 4202,
  [SMALL_STATE(193)] = 4218,
  [SMALL_STATE(194)] = 4230,
  [SMALL_STATE(195)] = 4242,
  [SMALL_STATE(196)] = 4258,
  [SMALL_STATE(197)] = 4274,
  [SMALL_STATE(198)] = 4288,
  [SMALL_STATE(199)] = 4302,
  [SMALL_STATE(200)] = 4314,
  [SMALL_STATE(201)] = 4326,
  [SMALL_STATE(202)] = 4340,
  [SMALL_STATE(203)] = 4352,
  [SMALL_STATE(204)] = 4364,
  [SMALL_STATE(205)] = 4376,
  [SMALL_STATE(206)] = 4392,
  [SMALL_STATE(207)] = 4404,
  [SMALL_STATE(208)] = 4416,
  [SMALL_STATE(209)] = 4428,
  [SMALL_STATE(210)] = 4440,
  [SMALL_STATE(211)] = 4456,
  [SMALL_STATE(212)] = 4470,
  [SMALL_STATE(213)] = 4484,
  [SMALL_STATE(214)] = 4500,
  [SMALL_STATE(215)] = 4514,
  [SMALL_STATE(216)] = 4528,
  [SMALL_STATE(217)] = 4542,
  [SMALL_STATE(218)] = 4556,
  [SMALL_STATE(219)] = 4570,
  [SMALL_STATE(220)] = 4586,
  [SMALL_STATE(221)] = 4600,
  [SMALL_STATE(222)] = 4616,
  [SMALL_STATE(223)] = 4632,
  [SMALL_STATE(224)] = 4646,
  [SMALL_STATE(225)] = 4660,
  [SMALL_STATE(226)] = 4674,
  [SMALL_STATE(227)] = 4688,
  [SMALL_STATE(228)] = 4704,
  [SMALL_STATE(229)] = 4718,
  [SMALL_STATE(230)] = 4732,
  [SMALL_STATE(231)] = 4746,
  [SMALL_STATE(232)] = 4760,
  [SMALL_STATE(233)] = 4773,
  [SMALL_STATE(234)] = 4786,
  [SMALL_STATE(235)] = 4799,
  [SMALL_STATE(236)] = 4812,
  [SMALL_STATE(237)] = 4825,
  [SMALL_STATE(238)] = 4838,
  [SMALL_STATE(239)] = 4851,
  [SMALL_STATE(240)] = 4864,
  [SMALL_STATE(241)] = 4877,
  [SMALL_STATE(242)] = 4890,
  [SMALL_STATE(243)] = 4901,
  [SMALL_STATE(244)] = 4914,
  [SMALL_STATE(245)] = 4927,
  [SMALL_STATE(246)] = 4940,
  [SMALL_STATE(247)] = 4953,
  [SMALL_STATE(248)] = 4966,
  [SMALL_STATE(249)] = 4977,
  [SMALL_STATE(250)] = 4988,
  [SMALL_STATE(251)] = 5001,
  [SMALL_STATE(252)] = 5014,
  [SMALL_STATE(253)] = 5027,
  [SMALL_STATE(254)] = 5040,
  [SMALL_STATE(255)] = 5051,
  [SMALL_STATE(256)] = 5062,
  [SMALL_STATE(257)] = 5073,
  [SMALL_STATE(258)] = 5086,
  [SMALL_STATE(259)] = 5097,
  [SMALL_STATE(260)] = 5110,
  [SMALL_STATE(261)] = 5123,
  [SMALL_STATE(262)] = 5136,
  [SMALL_STATE(263)] = 5149,
  [SMALL_STATE(264)] = 5159,
  [SMALL_STATE(265)] = 5169,
  [SMALL_STATE(266)] = 5179,
  [SMALL_STATE(267)] = 5189,
  [SMALL_STATE(268)] = 5199,
  [SMALL_STATE(269)] = 5209,
  [SMALL_STATE(270)] = 5219,
  [SMALL_STATE(271)] = 5229,
  [SMALL_STATE(272)] = 5239,
  [SMALL_STATE(273)] = 5249,
  [SMALL_STATE(274)] = 5259,
  [SMALL_STATE(275)] = 5269,
  [SMALL_STATE(276)] = 5279,
  [SMALL_STATE(277)] = 5289,
  [SMALL_STATE(278)] = 5299,
  [SMALL_STATE(279)] = 5309,
  [SMALL_STATE(280)] = 5319,
  [SMALL_STATE(281)] = 5329,
  [SMALL_STATE(282)] = 5339,
  [SMALL_STATE(283)] = 5349,
  [SMALL_STATE(284)] = 5359,
  [SMALL_STATE(285)] = 5369,
  [SMALL_STATE(286)] = 5379,
  [SMALL_STATE(287)] = 5389,
  [SMALL_STATE(288)] = 5399,
  [SMALL_STATE(289)] = 5409,
  [SMALL_STATE(290)] = 5419,
  [SMALL_STATE(291)] = 5429,
  [SMALL_STATE(292)] = 5439,
  [SMALL_STATE(293)] = 5449,
  [SMALL_STATE(294)] = 5459,
  [SMALL_STATE(295)] = 5469,
  [SMALL_STATE(296)] = 5479,
  [SMALL_STATE(297)] = 5489,
  [SMALL_STATE(298)] = 5499,
  [SMALL_STATE(299)] = 5509,
  [SMALL_STATE(300)] = 5519,
  [SMALL_STATE(301)] = 5529,
  [SMALL_STATE(302)] = 5539,
  [SMALL_STATE(303)] = 5549,
  [SMALL_STATE(304)] = 5559,
  [SMALL_STATE(305)] = 5569,
  [SMALL_STATE(306)] = 5579,
  [SMALL_STATE(307)] = 5589,
  [SMALL_STATE(308)] = 5599,
  [SMALL_STATE(309)] = 5609,
  [SMALL_STATE(310)] = 5619,
  [SMALL_STATE(311)] = 5629,
  [SMALL_STATE(312)] = 5639,
  [SMALL_STATE(313)] = 5649,
  [SMALL_STATE(314)] = 5659,
  [SMALL_STATE(315)] = 5669,
  [SMALL_STATE(316)] = 5679,
  [SMALL_STATE(317)] = 5689,
  [SMALL_STATE(318)] = 5699,
  [SMALL_STATE(319)] = 5709,
  [SMALL_STATE(320)] = 5719,
  [SMALL_STATE(321)] = 5729,
  [SMALL_STATE(322)] = 5739,
  [SMALL_STATE(323)] = 5749,
  [SMALL_STATE(324)] = 5759,
  [SMALL_STATE(325)] = 5769,
  [SMALL_STATE(326)] = 5779,
  [SMALL_STATE(327)] = 5789,
  [SMALL_STATE(328)] = 5799,
  [SMALL_STATE(329)] = 5809,
  [SMALL_STATE(330)] = 5819,
  [SMALL_STATE(331)] = 5829,
  [SMALL_STATE(332)] = 5839,
  [SMALL_STATE(333)] = 5849,
  [SMALL_STATE(334)] = 5859,
  [SMALL_STATE(335)] = 5869,
  [SMALL_STATE(336)] = 5879,
  [SMALL_STATE(337)] = 5889,
  [SMALL_STATE(338)] = 5899,
  [SMALL_STATE(339)] = 5909,
  [SMALL_STATE(340)] = 5919,
  [SMALL_STATE(341)] = 5929,
  [SMALL_STATE(342)] = 5939,
  [SMALL_STATE(343)] = 5949,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(246),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(297),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(172),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(60),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(253),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(227),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(85),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(275),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(45),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(116),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(213),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(111),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(111),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(171),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(100),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(262),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(134),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(184),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(175),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(105),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(281),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(173),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(150),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(144),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(188),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(134),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(184),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(214),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(190),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(204),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(177),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(170),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(186),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(192),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(109),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(228),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(182),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(138),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(138),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(108),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(268),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(87),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(189),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(342),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(187),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(295),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(132),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(244),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(148),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [868] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
