#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 333
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
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
  anon_sym_LBRACK = 62,
  anon_sym_COMMA2 = 63,
  anon_sym_RBRACK = 64,
  anon_sym_DQUOTE = 65,
  aux_sym_json_string_token1 = 66,
  sym_json_escape_sequence = 67,
  aux_sym_double_quoted_string_token1 = 68,
  anon_sym_BSLASH = 69,
  anon_sym_SQUOTE = 70,
  aux_sym_single_quoted_string_token1 = 71,
  aux_sym_unquoted_string_token1 = 72,
  anon_sym_BSLASH2 = 73,
  sym_double_quoted_escape_sequence = 74,
  sym_single_quoted_escape_sequence = 75,
  sym__non_newline_whitespace = 76,
  aux_sym_comment_token1 = 77,
  sym_source_file = 78,
  sym__instruction = 79,
  sym_from_instruction = 80,
  sym_run_instruction = 81,
  sym_cmd_instruction = 82,
  sym_label_instruction = 83,
  sym_expose_instruction = 84,
  sym_env_instruction = 85,
  sym_add_instruction = 86,
  sym_copy_instruction = 87,
  sym_entrypoint_instruction = 88,
  sym_volume_instruction = 89,
  sym_user_instruction = 90,
  sym__user_name_or_group = 91,
  aux_sym__immediate_user_name_or_group = 92,
  sym__immediate_user_name_or_group_fragment = 93,
  sym_workdir_instruction = 94,
  sym_arg_instruction = 95,
  sym_onbuild_instruction = 96,
  sym_stopsignal_instruction = 97,
  sym__stopsignal_value = 98,
  sym_healthcheck_instruction = 99,
  sym_shell_instruction = 100,
  sym_maintainer_instruction = 101,
  sym_cross_build_instruction = 102,
  sym_path = 103,
  sym_expansion = 104,
  sym__immediate_expansion = 105,
  sym__imm_expansion = 106,
  sym__expansion_body = 107,
  sym_env_pair = 108,
  sym__spaced_env_pair = 109,
  sym__env_key = 110,
  sym_expose_port = 111,
  sym_label_pair = 112,
  sym_image_spec = 113,
  sym_image_name = 114,
  sym_image_tag = 115,
  sym_image_digest = 116,
  sym_param = 117,
  sym_mount_param = 118,
  sym_mount_param_param = 119,
  sym_image_alias = 120,
  sym_shell_command = 121,
  sym_shell_fragment = 122,
  sym_line_continuation = 123,
  sym_required_line_continuation = 124,
  sym_json_string_array = 125,
  sym_json_string = 126,
  sym_double_quoted_string = 127,
  sym_single_quoted_string = 128,
  sym_unquoted_string = 129,
  sym_comment = 130,
  aux_sym_source_file_repeat1 = 131,
  aux_sym_run_instruction_repeat1 = 132,
  aux_sym_label_instruction_repeat1 = 133,
  aux_sym_expose_instruction_repeat1 = 134,
  aux_sym_env_instruction_repeat1 = 135,
  aux_sym_add_instruction_repeat1 = 136,
  aux_sym_volume_instruction_repeat1 = 137,
  aux_sym__user_name_or_group_repeat1 = 138,
  aux_sym__stopsignal_value_repeat1 = 139,
  aux_sym_healthcheck_instruction_repeat1 = 140,
  aux_sym_path_repeat1 = 141,
  aux_sym_image_name_repeat1 = 142,
  aux_sym_image_tag_repeat1 = 143,
  aux_sym_image_digest_repeat1 = 144,
  aux_sym_mount_param_repeat1 = 145,
  aux_sym_image_alias_repeat1 = 146,
  aux_sym_shell_command_repeat1 = 147,
  aux_sym_shell_fragment_repeat1 = 148,
  aux_sym_json_string_array_repeat1 = 149,
  aux_sym_json_string_repeat1 = 150,
  aux_sym_double_quoted_string_repeat1 = 151,
  aux_sym_single_quoted_string_repeat1 = 152,
  aux_sym_unquoted_string_repeat1 = 153,
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
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_json_string_array] = "json_string_array",
  [sym_json_string] = "json_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_comment] = "comment",
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_json_string_array] = sym_json_string_array,
  [sym_json_string] = sym_json_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_comment] = sym_comment,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
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
  [24] = 17,
  [25] = 23,
  [26] = 13,
  [27] = 27,
  [28] = 17,
  [29] = 29,
  [30] = 12,
  [31] = 31,
  [32] = 32,
  [33] = 23,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 46,
  [56] = 56,
  [57] = 47,
  [58] = 58,
  [59] = 59,
  [60] = 43,
  [61] = 49,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 42,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 40,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 43,
  [76] = 48,
  [77] = 77,
  [78] = 40,
  [79] = 79,
  [80] = 47,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 49,
  [91] = 46,
  [92] = 92,
  [93] = 93,
  [94] = 42,
  [95] = 95,
  [96] = 96,
  [97] = 42,
  [98] = 98,
  [99] = 41,
  [100] = 42,
  [101] = 101,
  [102] = 102,
  [103] = 96,
  [104] = 49,
  [105] = 85,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 85,
  [110] = 96,
  [111] = 49,
  [112] = 112,
  [113] = 48,
  [114] = 114,
  [115] = 46,
  [116] = 116,
  [117] = 48,
  [118] = 48,
  [119] = 119,
  [120] = 46,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 46,
  [126] = 42,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 49,
  [131] = 79,
  [132] = 132,
  [133] = 79,
  [134] = 42,
  [135] = 135,
  [136] = 136,
  [137] = 46,
  [138] = 138,
  [139] = 46,
  [140] = 140,
  [141] = 48,
  [142] = 142,
  [143] = 143,
  [144] = 49,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 49,
  [154] = 154,
  [155] = 155,
  [156] = 48,
  [157] = 157,
  [158] = 158,
  [159] = 42,
  [160] = 48,
  [161] = 79,
  [162] = 42,
  [163] = 163,
  [164] = 164,
  [165] = 164,
  [166] = 164,
  [167] = 164,
  [168] = 168,
  [169] = 164,
  [170] = 170,
  [171] = 171,
  [172] = 168,
  [173] = 173,
  [174] = 164,
  [175] = 175,
  [176] = 168,
  [177] = 164,
  [178] = 178,
  [179] = 168,
  [180] = 180,
  [181] = 164,
  [182] = 168,
  [183] = 164,
  [184] = 168,
  [185] = 164,
  [186] = 168,
  [187] = 168,
  [188] = 42,
  [189] = 189,
  [190] = 48,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 49,
  [195] = 46,
  [196] = 196,
  [197] = 197,
  [198] = 79,
  [199] = 49,
  [200] = 42,
  [201] = 46,
  [202] = 79,
  [203] = 164,
  [204] = 48,
  [205] = 140,
  [206] = 46,
  [207] = 207,
  [208] = 49,
  [209] = 48,
  [210] = 79,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 46,
  [215] = 49,
  [216] = 49,
  [217] = 164,
  [218] = 42,
  [219] = 46,
  [220] = 79,
  [221] = 48,
  [222] = 140,
  [223] = 223,
  [224] = 138,
  [225] = 225,
  [226] = 226,
  [227] = 148,
  [228] = 152,
  [229] = 229,
  [230] = 230,
  [231] = 92,
  [232] = 136,
  [233] = 233,
  [234] = 92,
  [235] = 235,
  [236] = 236,
  [237] = 92,
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
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 251,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 138,
  [274] = 274,
  [275] = 152,
  [276] = 136,
  [277] = 269,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 267,
  [282] = 267,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 274,
  [289] = 267,
  [290] = 269,
  [291] = 291,
  [292] = 274,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 267,
  [298] = 298,
  [299] = 299,
  [300] = 267,
  [301] = 301,
  [302] = 302,
  [303] = 267,
  [304] = 304,
  [305] = 305,
  [306] = 267,
  [307] = 307,
  [308] = 267,
  [309] = 148,
  [310] = 267,
  [311] = 311,
  [312] = 267,
  [313] = 255,
  [314] = 267,
  [315] = 267,
  [316] = 305,
  [317] = 269,
  [318] = 305,
  [319] = 255,
  [320] = 305,
  [321] = 255,
  [322] = 305,
  [323] = 305,
  [324] = 305,
  [325] = 305,
  [326] = 305,
  [327] = 305,
  [328] = 305,
  [329] = 305,
  [330] = 305,
  [331] = 331,
  [332] = 332,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == ']') ADVANCE(259);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(254);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(253);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(271);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(200);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(46)
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(221);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(248);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 75:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 92:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 93:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 94:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 95:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(192);
      END_STATE();
    case 104:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 113:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 114:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 115:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 154:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 155:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == ',') ADVANCE(258);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == ']') ADVANCE(259);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 161:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ',') ADVANCE(258);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(259);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(139);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(142);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(123);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ',') ADVANCE(258);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == '[') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(259);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(139);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(142);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(123);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '}') ADVANCE(284);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(212);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(284);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 161},
  [2] = {.lex_state = 161},
  [3] = {.lex_state = 161},
  [4] = {.lex_state = 161},
  [5] = {.lex_state = 161},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 44},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 42},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 44},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 53},
  [54] = {.lex_state = 41},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 52},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 161},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 41},
  [71] = {.lex_state = 52},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 22},
  [81] = {.lex_state = 32},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 161},
  [85] = {.lex_state = 26},
  [86] = {.lex_state = 161},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 51},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 42},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 32},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 44},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 32},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 42},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 21},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 53},
  [122] = {.lex_state = 32},
  [123] = {.lex_state = 32},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 161},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 25},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 32},
  [143] = {.lex_state = 31},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 38},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 32},
  [150] = {.lex_state = 31},
  [151] = {.lex_state = 31},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 25},
  [154] = {.lex_state = 39},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 38},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 25},
  [160] = {.lex_state = 25},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 22},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 45},
  [165] = {.lex_state = 45},
  [166] = {.lex_state = 45},
  [167] = {.lex_state = 45},
  [168] = {.lex_state = 45},
  [169] = {.lex_state = 45},
  [170] = {.lex_state = 24},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 45},
  [175] = {.lex_state = 161},
  [176] = {.lex_state = 45},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 45},
  [180] = {.lex_state = 31},
  [181] = {.lex_state = 45},
  [182] = {.lex_state = 45},
  [183] = {.lex_state = 45},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 45},
  [186] = {.lex_state = 45},
  [187] = {.lex_state = 45},
  [188] = {.lex_state = 13},
  [189] = {.lex_state = 161},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 161},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 24},
  [197] = {.lex_state = 24},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 45},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 52},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 22},
  [209] = {.lex_state = 22},
  [210] = {.lex_state = 22},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 44},
  [213] = {.lex_state = 161},
  [214] = {.lex_state = 22},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 52},
  [217] = {.lex_state = 45},
  [218] = {.lex_state = 52},
  [219] = {.lex_state = 52},
  [220] = {.lex_state = 52},
  [221] = {.lex_state = 52},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 24},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 24},
  [231] = {.lex_state = 32},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 24},
  [234] = {.lex_state = 53},
  [235] = {.lex_state = 161},
  [236] = {.lex_state = 161},
  [237] = {.lex_state = 161},
  [238] = {.lex_state = 161},
  [239] = {.lex_state = 161},
  [240] = {.lex_state = 54},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 161},
  [243] = {.lex_state = 54},
  [244] = {.lex_state = 24},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 161},
  [247] = {.lex_state = 14},
  [248] = {.lex_state = 36},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 32},
  [251] = {.lex_state = 43},
  [252] = {.lex_state = 18},
  [253] = {.lex_state = 43},
  [254] = {.lex_state = 24},
  [255] = {.lex_state = 161},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 46},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 161},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 54},
  [265] = {.lex_state = 161},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 161},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 55},
  [270] = {.lex_state = 161},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 161},
  [274] = {.lex_state = 48},
  [275] = {.lex_state = 161},
  [276] = {.lex_state = 161},
  [277] = {.lex_state = 55},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 197},
  [281] = {.lex_state = 161},
  [282] = {.lex_state = 161},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 197},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 50},
  [288] = {.lex_state = 48},
  [289] = {.lex_state = 161},
  [290] = {.lex_state = 55},
  [291] = {.lex_state = 161},
  [292] = {.lex_state = 48},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 161},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 161},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 161},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 161},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 56},
  [306] = {.lex_state = 161},
  [307] = {.lex_state = 161},
  [308] = {.lex_state = 161},
  [309] = {.lex_state = 161},
  [310] = {.lex_state = 161},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 161},
  [313] = {.lex_state = 161},
  [314] = {.lex_state = 161},
  [315] = {.lex_state = 161},
  [316] = {.lex_state = 56},
  [317] = {.lex_state = 55},
  [318] = {.lex_state = 56},
  [319] = {.lex_state = 161},
  [320] = {.lex_state = 56},
  [321] = {.lex_state = 161},
  [322] = {.lex_state = 56},
  [323] = {.lex_state = 56},
  [324] = {.lex_state = 56},
  [325] = {.lex_state = 56},
  [326] = {.lex_state = 56},
  [327] = {.lex_state = 56},
  [328] = {.lex_state = 56},
  [329] = {.lex_state = 56},
  [330] = {.lex_state = 56},
  [331] = {(TSStateId)(-1)},
  [332] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [sym_comment] = STATE(0),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(295),
    [sym__instruction] = STATE(263),
    [sym_from_instruction] = STATE(293),
    [sym_run_instruction] = STATE(293),
    [sym_cmd_instruction] = STATE(293),
    [sym_label_instruction] = STATE(293),
    [sym_expose_instruction] = STATE(293),
    [sym_env_instruction] = STATE(293),
    [sym_add_instruction] = STATE(293),
    [sym_copy_instruction] = STATE(293),
    [sym_entrypoint_instruction] = STATE(293),
    [sym_volume_instruction] = STATE(293),
    [sym_user_instruction] = STATE(293),
    [sym_workdir_instruction] = STATE(293),
    [sym_arg_instruction] = STATE(293),
    [sym_onbuild_instruction] = STATE(293),
    [sym_stopsignal_instruction] = STATE(293),
    [sym_healthcheck_instruction] = STATE(293),
    [sym_shell_instruction] = STATE(293),
    [sym_maintainer_instruction] = STATE(293),
    [sym_cross_build_instruction] = STATE(293),
    [sym_line_continuation] = STATE(1),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_from_instruction_token1] = ACTIONS(9),
    [aux_sym_run_instruction_token1] = ACTIONS(11),
    [aux_sym_cmd_instruction_token1] = ACTIONS(13),
    [aux_sym_label_instruction_token1] = ACTIONS(15),
    [aux_sym_expose_instruction_token1] = ACTIONS(17),
    [aux_sym_env_instruction_token1] = ACTIONS(19),
    [aux_sym_add_instruction_token1] = ACTIONS(21),
    [aux_sym_copy_instruction_token1] = ACTIONS(23),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(25),
    [aux_sym_volume_instruction_token1] = ACTIONS(27),
    [aux_sym_user_instruction_token1] = ACTIONS(29),
    [aux_sym_workdir_instruction_token1] = ACTIONS(31),
    [aux_sym_arg_instruction_token1] = ACTIONS(33),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(35),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(37),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(39),
    [aux_sym_shell_instruction_token1] = ACTIONS(41),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(43),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(45),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
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
    STATE(263), 1,
      sym__instruction,
    STATE(2), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(293), 19,
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
  [96] = 26,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(263), 1,
      sym__instruction,
    STATE(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(293), 19,
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
  [194] = 24,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    STATE(284), 1,
      sym__instruction,
    STATE(4), 2,
      sym_line_continuation,
      sym_comment,
    STATE(293), 19,
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
  [286] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    STATE(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(49), 20,
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
  [319] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(112), 1,
      anon_sym_DOLLAR2,
    ACTIONS(114), 1,
      aux_sym__env_key_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(124), 1,
      anon_sym_BSLASH2,
    STATE(30), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(99), 1,
      sym__immediate_expansion,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(6), 2,
      sym_line_continuation,
      sym_comment,
    STATE(225), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [365] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(126), 1,
      anon_sym_DASH_DASH,
    ACTIONS(128), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      aux_sym_run_instruction_repeat1,
    STATE(106), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(192), 1,
      sym_shell_fragment,
    ACTIONS(130), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(7), 2,
      sym_line_continuation,
      sym_comment,
    STATE(114), 2,
      sym_param,
      sym_mount_param,
    STATE(268), 2,
      sym_shell_command,
      sym_json_string_array,
  [406] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(126), 1,
      anon_sym_DASH_DASH,
    ACTIONS(128), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      aux_sym_run_instruction_repeat1,
    STATE(106), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(192), 1,
      sym_shell_fragment,
    ACTIONS(130), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(8), 2,
      sym_line_continuation,
      sym_comment,
    STATE(114), 2,
      sym_param,
      sym_mount_param,
    STATE(278), 2,
      sym_shell_command,
      sym_json_string_array,
  [447] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      anon_sym_DOLLAR2,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH2,
    STATE(12), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(41), 1,
      sym__immediate_expansion,
    STATE(48), 1,
      sym__imm_expansion,
    STATE(9), 2,
      sym_line_continuation,
      sym_comment,
    STATE(158), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [487] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      anon_sym_DOLLAR2,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH2,
    STATE(12), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(41), 1,
      sym__immediate_expansion,
    STATE(48), 1,
      sym__imm_expansion,
    STATE(10), 2,
      sym_line_continuation,
      sym_comment,
    STATE(311), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [527] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      anon_sym_DOLLAR2,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH2,
    STATE(12), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(41), 1,
      sym__immediate_expansion,
    STATE(48), 1,
      sym__imm_expansion,
    STATE(11), 2,
      sym_line_continuation,
      sym_comment,
    STATE(301), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [567] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(134), 1,
      anon_sym_DOLLAR2,
    ACTIONS(140), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(142), 1,
      anon_sym_BSLASH2,
    ACTIONS(144), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(41), 1,
      sym__immediate_expansion,
    STATE(48), 1,
      sym__imm_expansion,
    STATE(12), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(146), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [604] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(150), 1,
      anon_sym_DOLLAR2,
    ACTIONS(155), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(158), 1,
      anon_sym_BSLASH2,
    STATE(41), 1,
      sym__immediate_expansion,
    STATE(48), 1,
      sym__imm_expansion,
    ACTIONS(153), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(13), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [639] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(163), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(165), 1,
      anon_sym_DOLLAR2,
    ACTIONS(167), 1,
      aux_sym_image_name_token2,
    STATE(16), 1,
      aux_sym_image_name_repeat1,
    STATE(76), 1,
      sym__imm_expansion,
    STATE(77), 1,
      sym__immediate_expansion,
    STATE(14), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [673] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(165), 1,
      anon_sym_DOLLAR2,
    ACTIONS(167), 1,
      aux_sym_image_name_token2,
    ACTIONS(171), 1,
      aux_sym_from_instruction_token2,
    STATE(14), 1,
      aux_sym_image_name_repeat1,
    STATE(76), 1,
      sym__imm_expansion,
    STATE(77), 1,
      sym__immediate_expansion,
    STATE(15), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [707] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(175), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(177), 1,
      anon_sym_DOLLAR2,
    ACTIONS(180), 1,
      aux_sym_image_name_token2,
    STATE(76), 1,
      sym__imm_expansion,
    STATE(77), 1,
      sym__immediate_expansion,
    ACTIONS(173), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(16), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_image_name_repeat1,
  [739] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_double_quoted_escape_sequence,
    STATE(20), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(82), 1,
      sym__immediate_expansion,
    STATE(117), 1,
      sym__imm_expansion,
    ACTIONS(187), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(17), 2,
      sym_line_continuation,
      sym_comment,
  [772] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(191), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      aux_sym_label_pair_token1,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    STATE(145), 1,
      sym_label_pair,
    STATE(265), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(18), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [803] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(204), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(206), 1,
      anon_sym_DOLLAR2,
    STATE(32), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(128), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(141), 1,
      sym__imm_expansion,
    ACTIONS(202), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(19), 2,
      sym_line_continuation,
      sym_comment,
  [836] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(208), 1,
      anon_sym_DOLLAR2,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      sym_double_quoted_escape_sequence,
    STATE(82), 1,
      sym__immediate_expansion,
    STATE(117), 1,
      sym__imm_expansion,
    ACTIONS(213), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(20), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [867] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(106), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(192), 1,
      sym_shell_fragment,
    STATE(21), 2,
      sym_line_continuation,
      sym_comment,
    STATE(266), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(130), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [896] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(221), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(223), 1,
      anon_sym_DOLLAR2,
    ACTIONS(225), 1,
      aux_sym_image_tag_token1,
    STATE(27), 1,
      aux_sym_image_tag_repeat1,
    STATE(107), 1,
      sym__immediate_expansion,
    STATE(118), 1,
      sym__imm_expansion,
    ACTIONS(219), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(22), 2,
      sym_line_continuation,
      sym_comment,
  [929] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    ACTIONS(189), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(82), 1,
      sym__immediate_expansion,
    STATE(117), 1,
      sym__imm_expansion,
    ACTIONS(187), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_line_continuation,
      sym_comment,
  [962] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    ACTIONS(189), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(82), 1,
      sym__immediate_expansion,
    STATE(117), 1,
      sym__imm_expansion,
    ACTIONS(187), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(24), 2,
      sym_line_continuation,
      sym_comment,
  [995] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    ACTIONS(189), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(82), 1,
      sym__immediate_expansion,
    STATE(117), 1,
      sym__imm_expansion,
    ACTIONS(187), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(25), 2,
      sym_line_continuation,
      sym_comment,
  [1028] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      aux_sym__env_key_token1,
    ACTIONS(233), 1,
      anon_sym_DOLLAR2,
    ACTIONS(236), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(239), 1,
      anon_sym_BSLASH2,
    STATE(99), 1,
      sym__immediate_expansion,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(26), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [1061] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(244), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(249), 1,
      aux_sym_image_tag_token1,
    STATE(107), 1,
      sym__immediate_expansion,
    STATE(118), 1,
      sym__imm_expansion,
    ACTIONS(242), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(27), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_image_tag_repeat1,
  [1092] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    ACTIONS(189), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(82), 1,
      sym__immediate_expansion,
    STATE(117), 1,
      sym__imm_expansion,
    ACTIONS(187), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(28), 2,
      sym_line_continuation,
      sym_comment,
  [1125] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      aux_sym_label_pair_token1,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      aux_sym_label_instruction_repeat1,
    STATE(145), 1,
      sym_label_pair,
    STATE(29), 2,
      sym_line_continuation,
      sym_comment,
    STATE(265), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1158] = 11,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(112), 1,
      anon_sym_DOLLAR2,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(122), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(124), 1,
      anon_sym_BSLASH2,
    ACTIONS(144), 1,
      anon_sym_LF,
    ACTIONS(146), 1,
      aux_sym__env_key_token1,
    STATE(26), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(99), 1,
      sym__immediate_expansion,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(30), 2,
      sym_line_continuation,
      sym_comment,
  [1193] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(262), 1,
      anon_sym_DASH_DASH,
    ACTIONS(265), 1,
      aux_sym_shell_fragment_token1,
    STATE(114), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(267), 3,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_LBRACK,
    STATE(31), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_run_instruction_repeat1,
  [1220] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(204), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(206), 1,
      anon_sym_DOLLAR2,
    STATE(34), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(128), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(141), 1,
      sym__imm_expansion,
    ACTIONS(269), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(32), 2,
      sym_line_continuation,
      sym_comment,
  [1253] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    ACTIONS(189), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(82), 1,
      sym__immediate_expansion,
    STATE(117), 1,
      sym__imm_expansion,
    ACTIONS(187), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(33), 2,
      sym_line_continuation,
      sym_comment,
  [1286] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(275), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(278), 1,
      anon_sym_DOLLAR2,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(128), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(141), 1,
      sym__imm_expansion,
    ACTIONS(273), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(34), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym__user_name_or_group_repeat1,
  [1317] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(106), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(192), 1,
      sym_shell_fragment,
    STATE(35), 2,
      sym_line_continuation,
      sym_comment,
    STATE(294), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(130), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1346] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      aux_sym_shell_fragment_token1,
    STATE(44), 1,
      aux_sym_mount_param_repeat1,
    STATE(36), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(281), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_LBRACK,
  [1372] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(289), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(291), 1,
      anon_sym_DOLLAR2,
    ACTIONS(294), 1,
      aux_sym_image_digest_token1,
    STATE(129), 1,
      sym__immediate_expansion,
    STATE(156), 1,
      sym__imm_expansion,
    STATE(37), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_image_digest_repeat1,
  [1402] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      aux_sym_path_token1,
    ACTIONS(299), 1,
      anon_sym_DOLLAR,
    ACTIONS(301), 1,
      anon_sym_DASH_DASH,
    STATE(60), 1,
      sym_expansion,
    STATE(95), 1,
      sym_param,
    STATE(101), 1,
      aux_sym_add_instruction_repeat1,
    STATE(257), 1,
      sym_path,
    STATE(38), 2,
      sym_line_continuation,
      sym_comment,
  [1434] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      aux_sym_path_token1,
    ACTIONS(299), 1,
      anon_sym_DOLLAR,
    ACTIONS(301), 1,
      anon_sym_DASH_DASH,
    STATE(60), 1,
      sym_expansion,
    STATE(108), 1,
      sym_param,
    STATE(112), 1,
      aux_sym_add_instruction_repeat1,
    STATE(257), 1,
      sym_path,
    STATE(39), 2,
      sym_line_continuation,
      sym_comment,
  [1466] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      aux_sym_path_token2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR2,
    STATE(47), 1,
      aux_sym_path_repeat1,
    STATE(140), 1,
      sym__immediate_expansion,
    STATE(160), 1,
      sym__imm_expansion,
    ACTIONS(303), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(40), 2,
      sym_line_continuation,
      sym_comment,
  [1496] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(41), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(311), 4,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
  [1518] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(42), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(315), 4,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
  [1540] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      aux_sym_path_token2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR2,
    STATE(40), 1,
      aux_sym_path_repeat1,
    STATE(140), 1,
      sym__immediate_expansion,
    STATE(160), 1,
      sym__imm_expansion,
    ACTIONS(317), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(43), 2,
      sym_line_continuation,
      sym_comment,
  [1570] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      aux_sym_shell_fragment_token1,
    STATE(44), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_mount_param_repeat1,
    ACTIONS(319), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_LBRACK,
  [1594] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(204), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(206), 1,
      anon_sym_DOLLAR2,
    ACTIONS(326), 1,
      anon_sym_LF,
    STATE(51), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(141), 1,
      sym__imm_expansion,
    STATE(173), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(45), 2,
      sym_line_continuation,
      sym_comment,
  [1626] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(46), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(330), 4,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
  [1648] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(334), 1,
      aux_sym_path_token2,
    ACTIONS(337), 1,
      anon_sym_DOLLAR2,
    STATE(140), 1,
      sym__immediate_expansion,
    STATE(160), 1,
      sym__imm_expansion,
    ACTIONS(332), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(47), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_path_repeat1,
  [1676] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(48), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(342), 4,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
  [1698] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(49), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
    ACTIONS(346), 4,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
  [1720] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      aux_sym_label_pair_token1,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_label_instruction_repeat1,
    STATE(145), 1,
      sym_label_pair,
    STATE(50), 2,
      sym_line_continuation,
      sym_comment,
    STATE(265), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1750] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      anon_sym_LF,
    ACTIONS(356), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(359), 1,
      anon_sym_DOLLAR2,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(141), 1,
      sym__imm_expansion,
    STATE(173), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(51), 3,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
      sym_comment,
  [1780] = 10,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(364), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(366), 1,
      anon_sym_DOLLAR2,
    ACTIONS(368), 1,
      aux_sym_image_digest_token1,
    STATE(37), 1,
      aux_sym_image_digest_repeat1,
    STATE(129), 1,
      sym__immediate_expansion,
    STATE(156), 1,
      sym__imm_expansion,
    STATE(52), 2,
      sym_line_continuation,
      sym_comment,
  [1812] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    ACTIONS(372), 1,
      aux_sym_image_name_token1,
    ACTIONS(374), 1,
      anon_sym_DASH_DASH,
    STATE(15), 1,
      sym_expansion,
    STATE(67), 1,
      sym_image_name,
    STATE(121), 1,
      sym_param,
    STATE(247), 1,
      sym_image_spec,
    STATE(53), 2,
      sym_line_continuation,
      sym_comment,
  [1844] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      aux_sym_shell_fragment_token1,
    STATE(36), 1,
      aux_sym_mount_param_repeat1,
    STATE(54), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(376), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_LBRACK,
  [1870] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    STATE(55), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1891] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      anon_sym_DOLLAR2,
    ACTIONS(385), 1,
      aux_sym_image_alias_token2,
    STATE(178), 1,
      sym__immediate_expansion,
    STATE(190), 1,
      sym__imm_expansion,
    STATE(56), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_image_alias_repeat1,
  [1918] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(388), 1,
      aux_sym_path_token2,
    ACTIONS(391), 1,
      anon_sym_DOLLAR2,
    ACTIONS(394), 1,
      sym__non_newline_whitespace,
    STATE(205), 1,
      sym__immediate_expansion,
    STATE(221), 1,
      sym__imm_expansion,
    STATE(57), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_path_repeat1,
  [1945] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      aux_sym_path_token1,
    ACTIONS(398), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      sym_expansion,
    STATE(196), 1,
      sym_path,
    STATE(259), 1,
      sym_json_string_array,
    STATE(58), 2,
      sym_line_continuation,
      sym_comment,
  [1974] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(400), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(405), 1,
      anon_sym_DOLLAR2,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(204), 1,
      sym__imm_expansion,
    STATE(59), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym__stopsignal_value_repeat1,
  [2001] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(408), 1,
      aux_sym_path_token2,
    ACTIONS(410), 1,
      anon_sym_DOLLAR2,
    ACTIONS(412), 1,
      sym__non_newline_whitespace,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(205), 1,
      sym__immediate_expansion,
    STATE(221), 1,
      sym__imm_expansion,
    STATE(60), 2,
      sym_line_continuation,
      sym_comment,
  [2030] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    STATE(61), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2051] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      anon_sym_DOLLAR2,
    ACTIONS(418), 1,
      aux_sym_image_alias_token2,
    STATE(56), 1,
      aux_sym_image_alias_repeat1,
    STATE(178), 1,
      sym__immediate_expansion,
    STATE(190), 1,
      sym__imm_expansion,
    STATE(62), 2,
      sym_line_continuation,
      sym_comment,
  [2080] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      anon_sym_NONE,
    ACTIONS(422), 1,
      anon_sym_DASH_DASH,
    STATE(84), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(236), 1,
      sym_param,
    STATE(261), 1,
      sym_cmd_instruction,
    STATE(63), 2,
      sym_line_continuation,
      sym_comment,
  [2109] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(416), 1,
      anon_sym_DOLLAR2,
    ACTIONS(418), 1,
      aux_sym_image_alias_token2,
    ACTIONS(424), 1,
      anon_sym_LF,
    STATE(62), 1,
      aux_sym_image_alias_repeat1,
    STATE(178), 1,
      sym__immediate_expansion,
    STATE(190), 1,
      sym__imm_expansion,
    STATE(64), 2,
      sym_line_continuation,
      sym_comment,
  [2138] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    STATE(65), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(313), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2159] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(426), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(430), 1,
      anon_sym_DOLLAR2,
    STATE(59), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(204), 1,
      sym__imm_expansion,
    STATE(66), 2,
      sym_line_continuation,
      sym_comment,
  [2188] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(438), 1,
      anon_sym_AT,
    STATE(155), 1,
      sym_image_tag,
    STATE(226), 1,
      sym_image_digest,
    STATE(67), 2,
      sym_line_continuation,
      sym_comment,
  [2217] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(204), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(206), 1,
      anon_sym_DOLLAR2,
    STATE(45), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(127), 1,
      sym__immediate_expansion,
    STATE(141), 1,
      sym__imm_expansion,
    STATE(173), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(68), 2,
      sym_line_continuation,
      sym_comment,
  [2246] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(442), 1,
      aux_sym_shell_fragment_token1,
    STATE(69), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 5,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_LBRACK,
  [2267] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(324), 1,
      aux_sym_shell_fragment_token1,
    STATE(70), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_LBRACK,
  [2288] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(408), 1,
      aux_sym_path_token2,
    ACTIONS(410), 1,
      anon_sym_DOLLAR2,
    ACTIONS(444), 1,
      sym__non_newline_whitespace,
    STATE(57), 1,
      aux_sym_path_repeat1,
    STATE(205), 1,
      sym__immediate_expansion,
    STATE(221), 1,
      sym__imm_expansion,
    STATE(71), 2,
      sym_line_continuation,
      sym_comment,
  [2317] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(428), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(430), 1,
      anon_sym_DOLLAR2,
    ACTIONS(446), 1,
      anon_sym_LF,
    STATE(66), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(204), 1,
      sym__imm_expansion,
    STATE(72), 2,
      sym_line_continuation,
      sym_comment,
  [2346] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    ACTIONS(453), 1,
      aux_sym_expose_port_token1,
    STATE(193), 2,
      sym_expansion,
      sym_expose_port,
    STATE(73), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_expose_instruction_repeat1,
  [2371] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      anon_sym_DOLLAR,
    ACTIONS(460), 1,
      aux_sym_expose_port_token1,
    STATE(73), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(74), 2,
      sym_line_continuation,
      sym_comment,
    STATE(193), 2,
      sym_expansion,
      sym_expose_port,
  [2398] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(462), 1,
      aux_sym_path_token2,
    ACTIONS(464), 1,
      anon_sym_DOLLAR2,
    STATE(78), 1,
      aux_sym_path_repeat1,
    STATE(209), 1,
      sym__imm_expansion,
    STATE(222), 1,
      sym__immediate_expansion,
    STATE(75), 2,
      sym_line_continuation,
      sym_comment,
  [2427] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    STATE(76), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2448] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(468), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    STATE(77), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(466), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2469] = 9,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(444), 1,
      anon_sym_LF,
    ACTIONS(462), 1,
      aux_sym_path_token2,
    ACTIONS(464), 1,
      anon_sym_DOLLAR2,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(209), 1,
      sym__imm_expansion,
    STATE(222), 1,
      sym__immediate_expansion,
    STATE(78), 2,
      sym_line_continuation,
      sym_comment,
  [2498] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(472), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    STATE(79), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(470), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2519] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(474), 1,
      aux_sym_path_token2,
    ACTIONS(477), 1,
      anon_sym_DOLLAR2,
    STATE(209), 1,
      sym__imm_expansion,
    STATE(222), 1,
      sym__immediate_expansion,
    STATE(80), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_path_repeat1,
  [2546] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(480), 1,
      aux_sym_path_token1,
    ACTIONS(483), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_expansion,
    STATE(257), 1,
      sym_path,
    STATE(81), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_add_instruction_repeat1,
  [2570] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(486), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    STATE(82), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(488), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [2590] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(493), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(490), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
    STATE(83), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_single_quoted_string_repeat1,
  [2612] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      anon_sym_DASH_DASH,
    STATE(135), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(236), 1,
      sym_param,
    STATE(258), 1,
      sym_cmd_instruction,
    STATE(84), 2,
      sym_line_continuation,
      sym_comment,
  [2638] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(502), 1,
      sym_single_quoted_escape_sequence,
    STATE(83), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(498), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
    STATE(85), 2,
      sym_line_continuation,
      sym_comment,
  [2662] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(504), 1,
      anon_sym_DOLLAR,
    ACTIONS(506), 1,
      aux_sym_expose_port_token1,
    STATE(74), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(86), 2,
      sym_line_continuation,
      sym_comment,
    STATE(193), 2,
      sym_expansion,
      sym_expose_port,
  [2686] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      aux_sym__env_key_token1,
    STATE(93), 1,
      aux_sym_env_instruction_repeat1,
    STATE(252), 1,
      sym_env_pair,
    STATE(253), 1,
      sym__env_key,
    STATE(260), 1,
      sym__spaced_env_pair,
    STATE(87), 2,
      sym_line_continuation,
      sym_comment,
  [2712] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(223), 1,
      anon_sym_DOLLAR2,
    ACTIONS(225), 1,
      aux_sym_image_tag_token1,
    STATE(22), 1,
      aux_sym_image_tag_repeat1,
    STATE(107), 1,
      sym__immediate_expansion,
    STATE(118), 1,
      sym__imm_expansion,
    STATE(88), 2,
      sym_line_continuation,
      sym_comment,
  [2738] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      anon_sym_DOLLAR2,
    ACTIONS(368), 1,
      aux_sym_image_digest_token1,
    STATE(52), 1,
      aux_sym_image_digest_repeat1,
    STATE(129), 1,
      sym__immediate_expansion,
    STATE(156), 1,
      sym__imm_expansion,
    STATE(89), 2,
      sym_line_continuation,
      sym_comment,
  [2764] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    STATE(90), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [2784] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    STATE(91), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2804] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(512), 1,
      aux_sym_shell_fragment_token1,
    STATE(92), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(510), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_LBRACK,
  [2824] = 8,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      aux_sym__env_key_token1,
    STATE(116), 1,
      aux_sym_env_instruction_repeat1,
    STATE(252), 1,
      sym_env_pair,
    STATE(270), 1,
      sym__env_key,
    STATE(93), 2,
      sym_line_continuation,
      sym_comment,
  [2850] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    STATE(94), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2870] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      aux_sym_path_token1,
    ACTIONS(299), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_expansion,
    STATE(122), 1,
      aux_sym_add_instruction_repeat1,
    STATE(257), 1,
      sym_path,
    STATE(95), 2,
      sym_line_continuation,
      sym_comment,
  [2896] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(518), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(498), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
    STATE(96), 2,
      sym_line_continuation,
      sym_comment,
  [2920] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 2,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
    STATE(97), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
  [2940] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    STATE(106), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(302), 1,
      sym_shell_fragment,
    STATE(98), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(130), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2962] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(311), 2,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
    STATE(99), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
  [2982] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    STATE(100), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [3002] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(396), 1,
      aux_sym_path_token1,
    ACTIONS(398), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      sym_expansion,
    STATE(81), 1,
      aux_sym_add_instruction_repeat1,
    STATE(244), 1,
      sym_path,
    STATE(101), 2,
      sym_line_continuation,
      sym_comment,
  [3028] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      anon_sym_LF,
    ACTIONS(525), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(522), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(102), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_shell_fragment_repeat1,
  [3048] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(498), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
    STATE(103), 2,
      sym_line_continuation,
      sym_comment,
  [3072] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    STATE(104), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3092] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(498), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
    STATE(105), 2,
      sym_line_continuation,
      sym_comment,
  [3116] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(533), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(106), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(128), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [3138] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(537), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    STATE(107), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3158] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      aux_sym_path_token1,
    ACTIONS(299), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_expansion,
    STATE(123), 1,
      aux_sym_add_instruction_repeat1,
    STATE(257), 1,
      sym_path,
    STATE(108), 2,
      sym_line_continuation,
      sym_comment,
  [3184] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(539), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(498), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
    STATE(109), 2,
      sym_line_continuation,
      sym_comment,
  [3208] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(502), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(541), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(498), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
    STATE(110), 2,
      sym_line_continuation,
      sym_comment,
  [3232] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 2,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
    STATE(111), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
  [3252] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(396), 1,
      aux_sym_path_token1,
    ACTIONS(398), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      sym_expansion,
    STATE(81), 1,
      aux_sym_add_instruction_repeat1,
    STATE(254), 1,
      sym_path,
    STATE(112), 2,
      sym_line_continuation,
      sym_comment,
  [3278] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 2,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
    STATE(113), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
  [3298] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(545), 1,
      aux_sym_shell_fragment_token1,
    STATE(114), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(543), 4,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_LBRACK,
  [3318] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 2,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
    STATE(115), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_BSLASH2,
  [3338] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      aux_sym__env_key_token1,
    STATE(252), 1,
      sym_env_pair,
    STATE(270), 1,
      sym__env_key,
    STATE(116), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [3362] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(340), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    STATE(117), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [3382] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    STATE(118), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3402] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(554), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(556), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    STATE(119), 2,
      sym_line_continuation,
      sym_comment,
  [3424] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(328), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    STATE(120), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [3444] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    ACTIONS(372), 1,
      aux_sym_image_name_token1,
    STATE(15), 1,
      sym_expansion,
    STATE(67), 1,
      sym_image_name,
    STATE(229), 1,
      sym_image_spec,
    STATE(121), 2,
      sym_line_continuation,
      sym_comment,
  [3470] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(396), 1,
      aux_sym_path_token1,
    ACTIONS(398), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      sym_expansion,
    STATE(81), 1,
      aux_sym_add_instruction_repeat1,
    STATE(230), 1,
      sym_path,
    STATE(122), 2,
      sym_line_continuation,
      sym_comment,
  [3496] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(396), 1,
      aux_sym_path_token1,
    ACTIONS(398), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      sym_expansion,
    STATE(81), 1,
      aux_sym_add_instruction_repeat1,
    STATE(223), 1,
      sym_path,
    STATE(123), 2,
      sym_line_continuation,
      sym_comment,
  [3522] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(560), 1,
      sym_single_quoted_escape_sequence,
    STATE(124), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(558), 3,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      aux_sym_single_quoted_string_token1,
  [3541] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(328), 1,
      anon_sym_DOLLAR2,
    STATE(125), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(330), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3560] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(126), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(313), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3577] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(562), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3594] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(128), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(564), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3611] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(568), 1,
      aux_sym_from_instruction_token2,
    STATE(129), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(566), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3630] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(130), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(344), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3647] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(470), 1,
      anon_sym_DOLLAR2,
    STATE(131), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(472), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3666] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(570), 1,
      anon_sym_LF,
    STATE(132), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(572), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_BSLASH_LF,
  [3683] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(133), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(470), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3700] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 1,
      aux_sym_from_instruction_token2,
    STATE(134), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3719] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(574), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(576), 1,
      anon_sym_DASH_DASH,
    STATE(236), 1,
      sym_param,
    STATE(135), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [3740] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      anon_sym_LF,
    STATE(136), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(581), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3759] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(137), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3776] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(583), 1,
      anon_sym_LF,
    STATE(138), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(585), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3795] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      aux_sym_from_instruction_token2,
    STATE(139), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3814] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      anon_sym_DOLLAR2,
    STATE(140), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(587), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3833] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(141), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3850] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(396), 1,
      aux_sym_path_token1,
    ACTIONS(398), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      sym_expansion,
    STATE(233), 1,
      sym_path,
    STATE(142), 2,
      sym_line_continuation,
      sym_comment,
  [3873] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    ACTIONS(593), 1,
      aux_sym_json_string_token1,
    ACTIONS(596), 1,
      sym_json_escape_sequence,
    STATE(143), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_json_string_repeat1,
  [3894] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      aux_sym_from_instruction_token2,
    STATE(144), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3913] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(599), 1,
      anon_sym_LF,
    STATE(145), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(601), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3932] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(603), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    STATE(286), 1,
      sym__stopsignal_value,
    STATE(146), 2,
      sym_line_continuation,
      sym_comment,
  [3955] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(607), 1,
      anon_sym_DOLLAR,
    ACTIONS(609), 1,
      aux_sym_image_alias_token1,
    STATE(64), 1,
      sym_expansion,
    STATE(299), 1,
      sym_image_alias,
    STATE(147), 2,
      sym_line_continuation,
      sym_comment,
  [3978] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(611), 1,
      anon_sym_LF,
    STATE(148), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(613), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3997] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(615), 1,
      aux_sym_path_token1,
    ACTIONS(617), 1,
      anon_sym_DOLLAR,
    STATE(75), 1,
      sym_expansion,
    STATE(283), 1,
      sym_path,
    STATE(149), 2,
      sym_line_continuation,
      sym_comment,
  [4020] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(619), 1,
      anon_sym_DQUOTE,
    ACTIONS(621), 1,
      aux_sym_json_string_token1,
    ACTIONS(623), 1,
      sym_json_escape_sequence,
    STATE(151), 1,
      aux_sym_json_string_repeat1,
    STATE(150), 2,
      sym_line_continuation,
      sym_comment,
  [4043] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      aux_sym_json_string_token1,
    ACTIONS(623), 1,
      sym_json_escape_sequence,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      aux_sym_json_string_repeat1,
    STATE(151), 2,
      sym_line_continuation,
      sym_comment,
  [4066] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(627), 1,
      anon_sym_LF,
    STATE(152), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(629), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4085] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      anon_sym_DOLLAR2,
    STATE(153), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4104] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(631), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(633), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym_expansion,
    STATE(249), 1,
      sym__user_name_or_group,
    STATE(154), 2,
      sym_line_continuation,
      sym_comment,
  [4127] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(438), 1,
      anon_sym_AT,
    ACTIONS(635), 1,
      anon_sym_LF,
    ACTIONS(637), 1,
      aux_sym_from_instruction_token2,
    STATE(245), 1,
      sym_image_digest,
    STATE(155), 2,
      sym_line_continuation,
      sym_comment,
  [4150] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      aux_sym_from_instruction_token2,
    STATE(156), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4169] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(607), 1,
      anon_sym_DOLLAR,
    ACTIONS(609), 1,
      aux_sym_image_alias_token1,
    STATE(64), 1,
      sym_expansion,
    STATE(271), 1,
      sym_image_alias,
    STATE(157), 2,
      sym_line_continuation,
      sym_comment,
  [4192] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(158), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(641), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4211] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(313), 1,
      anon_sym_DOLLAR2,
    STATE(159), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4230] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(340), 1,
      anon_sym_DOLLAR2,
    STATE(160), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [4249] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(161), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4265] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 1,
      aux_sym_path_token2,
    ACTIONS(313), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    STATE(162), 2,
      sym_line_continuation,
      sym_comment,
  [4283] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(643), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4299] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    ACTIONS(647), 1,
      sym_variable,
    STATE(188), 1,
      sym__expansion_body,
    STATE(164), 2,
      sym_line_continuation,
      sym_comment,
  [4319] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(651), 1,
      sym_variable,
    STATE(97), 1,
      sym__expansion_body,
    STATE(165), 2,
      sym_line_continuation,
      sym_comment,
  [4339] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(653), 1,
      anon_sym_LBRACE,
    ACTIONS(655), 1,
      sym_variable,
    STATE(42), 1,
      sym__expansion_body,
    STATE(166), 2,
      sym_line_continuation,
      sym_comment,
  [4359] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(657), 1,
      anon_sym_LBRACE,
    ACTIONS(659), 1,
      sym_variable,
    STATE(134), 1,
      sym__expansion_body,
    STATE(167), 2,
      sym_line_continuation,
      sym_comment,
  [4379] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    ACTIONS(647), 1,
      sym_variable,
    STATE(198), 1,
      sym__expansion_body,
    STATE(168), 2,
      sym_line_continuation,
      sym_comment,
  [4399] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
    ACTIONS(663), 1,
      sym_variable,
    STATE(94), 1,
      sym__expansion_body,
    STATE(169), 2,
      sym_line_continuation,
      sym_comment,
  [4419] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(667), 1,
      sym__non_newline_whitespace,
    STATE(170), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [4437] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(672), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_required_line_continuation,
    STATE(171), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_shell_command_repeat1,
  [4455] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
    ACTIONS(677), 1,
      sym_variable,
    STATE(161), 1,
      sym__expansion_body,
    STATE(172), 2,
      sym_line_continuation,
      sym_comment,
  [4475] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(173), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(679), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4491] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
    ACTIONS(677), 1,
      sym_variable,
    STATE(200), 1,
      sym__expansion_body,
    STATE(174), 2,
      sym_line_continuation,
      sym_comment,
  [4511] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(681), 1,
      anon_sym_COMMA2,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_json_string_array_repeat1,
    STATE(175), 2,
      sym_line_continuation,
      sym_comment,
  [4531] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(685), 1,
      anon_sym_LBRACE,
    ACTIONS(687), 1,
      sym_variable,
    STATE(210), 1,
      sym__expansion_body,
    STATE(176), 2,
      sym_line_continuation,
      sym_comment,
  [4551] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(685), 1,
      anon_sym_LBRACE,
    ACTIONS(687), 1,
      sym_variable,
    STATE(162), 1,
      sym__expansion_body,
    STATE(177), 2,
      sym_line_continuation,
      sym_comment,
  [4571] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(178), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(689), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4587] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    ACTIONS(693), 1,
      sym_variable,
    STATE(133), 1,
      sym__expansion_body,
    STATE(179), 2,
      sym_line_continuation,
      sym_comment,
  [4607] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      sym_json_escape_sequence,
    ACTIONS(695), 2,
      anon_sym_DQUOTE,
      aux_sym_json_string_token1,
    STATE(180), 2,
      sym_line_continuation,
      sym_comment,
  [4625] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    ACTIONS(693), 1,
      sym_variable,
    STATE(126), 1,
      sym__expansion_body,
    STATE(181), 2,
      sym_line_continuation,
      sym_comment,
  [4645] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(699), 1,
      anon_sym_LBRACE,
    ACTIONS(701), 1,
      sym_variable,
    STATE(131), 1,
      sym__expansion_body,
    STATE(182), 2,
      sym_line_continuation,
      sym_comment,
  [4665] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(699), 1,
      anon_sym_LBRACE,
    ACTIONS(701), 1,
      sym_variable,
    STATE(159), 1,
      sym__expansion_body,
    STATE(183), 2,
      sym_line_continuation,
      sym_comment,
  [4685] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(703), 1,
      anon_sym_LBRACE,
    ACTIONS(705), 1,
      sym_variable,
    STATE(220), 1,
      sym__expansion_body,
    STATE(184), 2,
      sym_line_continuation,
      sym_comment,
  [4705] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(703), 1,
      anon_sym_LBRACE,
    ACTIONS(705), 1,
      sym_variable,
    STATE(218), 1,
      sym__expansion_body,
    STATE(185), 2,
      sym_line_continuation,
      sym_comment,
  [4725] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(707), 1,
      anon_sym_LBRACE,
    ACTIONS(709), 1,
      sym_variable,
    STATE(202), 1,
      sym__expansion_body,
    STATE(186), 2,
      sym_line_continuation,
      sym_comment,
  [4745] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(711), 1,
      anon_sym_LBRACE,
    ACTIONS(713), 1,
      sym_variable,
    STATE(79), 1,
      sym__expansion_body,
    STATE(187), 2,
      sym_line_continuation,
      sym_comment,
  [4765] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(188), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4781] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(715), 1,
      anon_sym_COMMA2,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
    STATE(189), 3,
      sym_line_continuation,
      sym_comment,
      aux_sym_json_string_array_repeat1,
  [4799] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(190), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4815] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(720), 1,
      anon_sym_RBRACK,
    ACTIONS(722), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      sym_json_string,
    STATE(191), 2,
      sym_line_continuation,
      sym_comment,
  [4835] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(724), 1,
      anon_sym_LF,
    ACTIONS(726), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_required_line_continuation,
    STATE(211), 1,
      aux_sym_shell_command_repeat1,
    STATE(192), 2,
      sym_line_continuation,
      sym_comment,
  [4855] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(730), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    STATE(193), 2,
      sym_line_continuation,
      sym_comment,
  [4873] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4889] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(195), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4905] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(732), 1,
      anon_sym_LF,
    ACTIONS(734), 1,
      sym__non_newline_whitespace,
    STATE(197), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(196), 2,
      sym_line_continuation,
      sym_comment,
  [4925] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      sym__non_newline_whitespace,
    ACTIONS(736), 1,
      anon_sym_LF,
    STATE(170), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(197), 2,
      sym_line_continuation,
      sym_comment,
  [4945] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(198), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4961] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(199), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4977] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(200), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4993] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(330), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    STATE(201), 2,
      sym_line_continuation,
      sym_comment,
  [5011] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(472), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    STATE(202), 2,
      sym_line_continuation,
      sym_comment,
  [5029] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(738), 1,
      anon_sym_LBRACE,
    ACTIONS(740), 1,
      sym_variable,
    STATE(100), 1,
      sym__expansion_body,
    STATE(203), 2,
      sym_line_continuation,
      sym_comment,
  [5049] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(204), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5065] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(587), 1,
      aux_sym_path_token2,
    ACTIONS(589), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    STATE(205), 2,
      sym_line_continuation,
      sym_comment,
  [5083] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    STATE(206), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5099] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_LF,
    ACTIONS(744), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    STATE(207), 2,
      sym_line_continuation,
      sym_comment,
  [5117] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      aux_sym_path_token2,
    ACTIONS(344), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    STATE(208), 2,
      sym_line_continuation,
      sym_comment,
  [5135] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      aux_sym_path_token2,
    ACTIONS(340), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    STATE(209), 2,
      sym_line_continuation,
      sym_comment,
  [5153] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(472), 1,
      aux_sym_path_token2,
    ACTIONS(470), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    STATE(210), 2,
      sym_line_continuation,
      sym_comment,
  [5171] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(726), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      anon_sym_LF,
    STATE(98), 1,
      sym_required_line_continuation,
    STATE(171), 1,
      aux_sym_shell_command_repeat1,
    STATE(211), 2,
      sym_line_continuation,
      sym_comment,
  [5191] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    STATE(212), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(748), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [5207] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(681), 1,
      anon_sym_COMMA2,
    ACTIONS(750), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_json_string_array_repeat1,
    STATE(213), 2,
      sym_line_continuation,
      sym_comment,
  [5227] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      aux_sym_path_token2,
    ACTIONS(328), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    STATE(214), 2,
      sym_line_continuation,
      sym_comment,
  [5245] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(346), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    STATE(215), 2,
      sym_line_continuation,
      sym_comment,
  [5263] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(346), 1,
      aux_sym_path_token2,
    ACTIONS(344), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    STATE(216), 2,
      sym_line_continuation,
      sym_comment,
  [5281] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(711), 1,
      anon_sym_LBRACE,
    ACTIONS(713), 1,
      sym_variable,
    STATE(65), 1,
      sym__expansion_body,
    STATE(217), 2,
      sym_line_continuation,
      sym_comment,
  [5301] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(315), 1,
      aux_sym_path_token2,
    ACTIONS(313), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    STATE(218), 2,
      sym_line_continuation,
      sym_comment,
  [5319] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      aux_sym_path_token2,
    ACTIONS(328), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    STATE(219), 2,
      sym_line_continuation,
      sym_comment,
  [5337] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(472), 1,
      aux_sym_path_token2,
    ACTIONS(470), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    STATE(220), 2,
      sym_line_continuation,
      sym_comment,
  [5355] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      aux_sym_path_token2,
    ACTIONS(340), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    STATE(221), 2,
      sym_line_continuation,
      sym_comment,
  [5373] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(587), 1,
      aux_sym_path_token2,
    ACTIONS(589), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    STATE(222), 2,
      sym_line_continuation,
      sym_comment,
  [5391] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      anon_sym_LF,
    ACTIONS(754), 1,
      sym__non_newline_whitespace,
    STATE(223), 2,
      sym_line_continuation,
      sym_comment,
  [5408] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 1,
      aux_sym__env_key_token1,
    STATE(224), 2,
      sym_line_continuation,
      sym_comment,
  [5425] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(758), 1,
      aux_sym__env_key_token1,
    STATE(225), 2,
      sym_line_continuation,
      sym_comment,
  [5442] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_LF,
    ACTIONS(762), 1,
      aux_sym_from_instruction_token2,
    STATE(226), 2,
      sym_line_continuation,
      sym_comment,
  [5459] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      aux_sym__env_key_token1,
    STATE(227), 2,
      sym_line_continuation,
      sym_comment,
  [5476] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(627), 1,
      anon_sym_LF,
    ACTIONS(629), 1,
      aux_sym__env_key_token1,
    STATE(228), 2,
      sym_line_continuation,
      sym_comment,
  [5493] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      aux_sym_from_instruction_token2,
    STATE(229), 2,
      sym_line_continuation,
      sym_comment,
  [5510] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      sym__non_newline_whitespace,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(230), 2,
      sym_line_continuation,
      sym_comment,
  [5527] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    ACTIONS(512), 1,
      aux_sym_path_token1,
    STATE(231), 2,
      sym_line_continuation,
      sym_comment,
  [5544] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 1,
      aux_sym__env_key_token1,
    STATE(232), 2,
      sym_line_continuation,
      sym_comment,
  [5561] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(665), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(233), 2,
      sym_line_continuation,
      sym_comment,
  [5576] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    ACTIONS(512), 1,
      aux_sym_image_name_token1,
    STATE(234), 2,
      sym_line_continuation,
      sym_comment,
  [5593] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(722), 1,
      anon_sym_DQUOTE,
    STATE(246), 1,
      sym_json_string,
    STATE(235), 2,
      sym_line_continuation,
      sym_comment,
  [5610] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(770), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
    STATE(236), 2,
      sym_line_continuation,
      sym_comment,
  [5625] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(510), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
    STATE(237), 2,
      sym_line_continuation,
      sym_comment,
  [5640] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(772), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
    STATE(238), 2,
      sym_line_continuation,
      sym_comment,
  [5655] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(296), 1,
      sym_json_string_array,
    STATE(239), 2,
      sym_line_continuation,
      sym_comment,
  [5672] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(774), 1,
      aux_sym_mount_param_param_token1,
    STATE(54), 1,
      sym_mount_param_param,
    STATE(240), 2,
      sym_line_continuation,
      sym_comment,
  [5689] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      anon_sym_LF,
    ACTIONS(778), 1,
      anon_sym_EQ,
    STATE(241), 2,
      sym_line_continuation,
      sym_comment,
  [5706] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(780), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
    STATE(242), 2,
      sym_line_continuation,
      sym_comment,
  [5721] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(774), 1,
      aux_sym_mount_param_param_token1,
    STATE(70), 1,
      sym_mount_param_param,
    STATE(243), 2,
      sym_line_continuation,
      sym_comment,
  [5738] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      sym__non_newline_whitespace,
    ACTIONS(782), 1,
      anon_sym_LF,
    STATE(244), 2,
      sym_line_continuation,
      sym_comment,
  [5755] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      anon_sym_LF,
    ACTIONS(786), 1,
      aux_sym_from_instruction_token2,
    STATE(245), 2,
      sym_line_continuation,
      sym_comment,
  [5772] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(718), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
    STATE(246), 2,
      sym_line_continuation,
      sym_comment,
  [5787] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 1,
      aux_sym_from_instruction_token2,
    STATE(247), 2,
      sym_line_continuation,
      sym_comment,
  [5804] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(792), 1,
      aux_sym_param_token1,
    ACTIONS(794), 1,
      anon_sym_mount,
    STATE(248), 2,
      sym_line_continuation,
      sym_comment,
  [5821] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LF,
    ACTIONS(798), 1,
      anon_sym_COLON,
    STATE(249), 2,
      sym_line_continuation,
      sym_comment,
  [5838] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(800), 1,
      aux_sym_path_token1,
    ACTIONS(802), 1,
      anon_sym_DOLLAR,
    STATE(250), 2,
      sym_line_continuation,
      sym_comment,
  [5855] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(804), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
    STATE(251), 2,
      sym_line_continuation,
      sym_comment,
  [5870] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_LF,
    ACTIONS(808), 1,
      aux_sym__env_key_token1,
    STATE(252), 2,
      sym_line_continuation,
      sym_comment,
  [5887] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_EQ,
    ACTIONS(812), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(253), 2,
      sym_line_continuation,
      sym_comment,
  [5904] = 5,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      sym__non_newline_whitespace,
    ACTIONS(814), 1,
      anon_sym_LF,
    STATE(254), 2,
      sym_line_continuation,
      sym_comment,
  [5921] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(816), 1,
      anon_sym_EQ,
    STATE(255), 2,
      sym_line_continuation,
      sym_comment,
  [5935] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(818), 1,
      anon_sym_LF,
    STATE(256), 2,
      sym_line_continuation,
      sym_comment,
  [5949] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(820), 1,
      sym__non_newline_whitespace,
    STATE(257), 2,
      sym_line_continuation,
      sym_comment,
  [5963] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      anon_sym_LF,
    STATE(258), 2,
      sym_line_continuation,
      sym_comment,
  [5977] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_LF,
    STATE(259), 2,
      sym_line_continuation,
      sym_comment,
  [5991] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      anon_sym_LF,
    STATE(260), 2,
      sym_line_continuation,
      sym_comment,
  [6005] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      anon_sym_LF,
    STATE(261), 2,
      sym_line_continuation,
      sym_comment,
  [6019] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(804), 1,
      anon_sym_EQ,
    STATE(262), 2,
      sym_line_continuation,
      sym_comment,
  [6033] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      anon_sym_LF,
    STATE(263), 2,
      sym_line_continuation,
      sym_comment,
  [6047] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(832), 1,
      aux_sym_mount_param_param_token1,
    STATE(264), 2,
      sym_line_continuation,
      sym_comment,
  [6061] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(834), 1,
      anon_sym_EQ,
    STATE(265), 2,
      sym_line_continuation,
      sym_comment,
  [6075] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      anon_sym_LF,
    STATE(266), 2,
      sym_line_continuation,
      sym_comment,
  [6089] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    STATE(267), 2,
      sym_line_continuation,
      sym_comment,
  [6103] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      anon_sym_LF,
    STATE(268), 2,
      sym_line_continuation,
      sym_comment,
  [6117] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(842), 1,
      aux_sym_param_token2,
    STATE(269), 2,
      sym_line_continuation,
      sym_comment,
  [6131] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(810), 1,
      anon_sym_EQ,
    STATE(270), 2,
      sym_line_continuation,
      sym_comment,
  [6145] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      anon_sym_LF,
    STATE(271), 2,
      sym_line_continuation,
      sym_comment,
  [6159] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      anon_sym_LF,
    STATE(272), 2,
      sym_line_continuation,
      sym_comment,
  [6173] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(583), 1,
      anon_sym_EQ,
    STATE(273), 2,
      sym_line_continuation,
      sym_comment,
  [6187] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(848), 1,
      aux_sym_param_token1,
    STATE(274), 2,
      sym_line_continuation,
      sym_comment,
  [6201] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(627), 1,
      anon_sym_EQ,
    STATE(275), 2,
      sym_line_continuation,
      sym_comment,
  [6215] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(579), 1,
      anon_sym_EQ,
    STATE(276), 2,
      sym_line_continuation,
      sym_comment,
  [6229] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(850), 1,
      aux_sym_param_token2,
    STATE(277), 2,
      sym_line_continuation,
      sym_comment,
  [6243] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      anon_sym_LF,
    STATE(278), 2,
      sym_line_continuation,
      sym_comment,
  [6257] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(854), 1,
      anon_sym_LF,
    STATE(279), 2,
      sym_line_continuation,
      sym_comment,
  [6271] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(856), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(280), 2,
      sym_line_continuation,
      sym_comment,
  [6285] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    STATE(281), 2,
      sym_line_continuation,
      sym_comment,
  [6299] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    STATE(282), 2,
      sym_line_continuation,
      sym_comment,
  [6313] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(862), 1,
      anon_sym_LF,
    STATE(283), 2,
      sym_line_continuation,
      sym_comment,
  [6327] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(864), 1,
      anon_sym_LF,
    STATE(284), 2,
      sym_line_continuation,
      sym_comment,
  [6341] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(866), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(285), 2,
      sym_line_continuation,
      sym_comment,
  [6355] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(868), 1,
      anon_sym_LF,
    STATE(286), 2,
      sym_line_continuation,
      sym_comment,
  [6369] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(870), 1,
      aux_sym_arg_instruction_token2,
    STATE(287), 2,
      sym_line_continuation,
      sym_comment,
  [6383] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(872), 1,
      aux_sym_param_token1,
    STATE(288), 2,
      sym_line_continuation,
      sym_comment,
  [6397] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
    STATE(289), 2,
      sym_line_continuation,
      sym_comment,
  [6411] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(876), 1,
      aux_sym_param_token2,
    STATE(290), 2,
      sym_line_continuation,
      sym_comment,
  [6425] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(878), 1,
      anon_sym_EQ,
    STATE(291), 2,
      sym_line_continuation,
      sym_comment,
  [6439] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(880), 1,
      aux_sym_param_token1,
    STATE(292), 2,
      sym_line_continuation,
      sym_comment,
  [6453] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(882), 1,
      anon_sym_LF,
    STATE(293), 2,
      sym_line_continuation,
      sym_comment,
  [6467] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      anon_sym_LF,
    STATE(294), 2,
      sym_line_continuation,
      sym_comment,
  [6481] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(886), 1,
      ts_builtin_sym_end,
    STATE(295), 2,
      sym_line_continuation,
      sym_comment,
  [6495] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(888), 1,
      anon_sym_LF,
    STATE(296), 2,
      sym_line_continuation,
      sym_comment,
  [6509] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
    STATE(297), 2,
      sym_line_continuation,
      sym_comment,
  [6523] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(892), 1,
      anon_sym_LF,
    STATE(298), 2,
      sym_line_continuation,
      sym_comment,
  [6537] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(894), 1,
      anon_sym_LF,
    STATE(299), 2,
      sym_line_continuation,
      sym_comment,
  [6551] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
    STATE(300), 2,
      sym_line_continuation,
      sym_comment,
  [6565] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(898), 1,
      anon_sym_LF,
    STATE(301), 2,
      sym_line_continuation,
      sym_comment,
  [6579] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(900), 1,
      anon_sym_BSLASH_LF,
    STATE(302), 2,
      sym_line_continuation,
      sym_comment,
  [6593] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
    STATE(303), 2,
      sym_line_continuation,
      sym_comment,
  [6607] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(904), 1,
      anon_sym_LF,
    STATE(304), 2,
      sym_line_continuation,
      sym_comment,
  [6621] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(906), 1,
      aux_sym__expansion_body_token1,
    STATE(305), 2,
      sym_line_continuation,
      sym_comment,
  [6635] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
    STATE(306), 2,
      sym_line_continuation,
      sym_comment,
  [6649] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(910), 1,
      anon_sym_EQ,
    STATE(307), 2,
      sym_line_continuation,
      sym_comment,
  [6663] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    STATE(308), 2,
      sym_line_continuation,
      sym_comment,
  [6677] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(611), 1,
      anon_sym_EQ,
    STATE(309), 2,
      sym_line_continuation,
      sym_comment,
  [6691] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
    STATE(310), 2,
      sym_line_continuation,
      sym_comment,
  [6705] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(916), 1,
      anon_sym_LF,
    STATE(311), 2,
      sym_line_continuation,
      sym_comment,
  [6719] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    STATE(312), 2,
      sym_line_continuation,
      sym_comment,
  [6733] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(920), 1,
      anon_sym_EQ,
    STATE(313), 2,
      sym_line_continuation,
      sym_comment,
  [6747] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    STATE(314), 2,
      sym_line_continuation,
      sym_comment,
  [6761] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
    STATE(315), 2,
      sym_line_continuation,
      sym_comment,
  [6775] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(926), 1,
      aux_sym__expansion_body_token1,
    STATE(316), 2,
      sym_line_continuation,
      sym_comment,
  [6789] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(928), 1,
      aux_sym_param_token2,
    STATE(317), 2,
      sym_line_continuation,
      sym_comment,
  [6803] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(930), 1,
      aux_sym__expansion_body_token1,
    STATE(318), 2,
      sym_line_continuation,
      sym_comment,
  [6817] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(932), 1,
      anon_sym_EQ,
    STATE(319), 2,
      sym_line_continuation,
      sym_comment,
  [6831] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(934), 1,
      aux_sym__expansion_body_token1,
    STATE(320), 2,
      sym_line_continuation,
      sym_comment,
  [6845] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    ACTIONS(936), 1,
      anon_sym_EQ,
    STATE(321), 2,
      sym_line_continuation,
      sym_comment,
  [6859] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(938), 1,
      aux_sym__expansion_body_token1,
    STATE(322), 2,
      sym_line_continuation,
      sym_comment,
  [6873] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(940), 1,
      aux_sym__expansion_body_token1,
    STATE(323), 2,
      sym_line_continuation,
      sym_comment,
  [6887] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(942), 1,
      aux_sym__expansion_body_token1,
    STATE(324), 2,
      sym_line_continuation,
      sym_comment,
  [6901] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(944), 1,
      aux_sym__expansion_body_token1,
    STATE(325), 2,
      sym_line_continuation,
      sym_comment,
  [6915] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(946), 1,
      aux_sym__expansion_body_token1,
    STATE(326), 2,
      sym_line_continuation,
      sym_comment,
  [6929] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(948), 1,
      aux_sym__expansion_body_token1,
    STATE(327), 2,
      sym_line_continuation,
      sym_comment,
  [6943] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(950), 1,
      aux_sym__expansion_body_token1,
    STATE(328), 2,
      sym_line_continuation,
      sym_comment,
  [6957] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(952), 1,
      aux_sym__expansion_body_token1,
    STATE(329), 2,
      sym_line_continuation,
      sym_comment,
  [6971] = 4,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(954), 1,
      aux_sym__expansion_body_token1,
    STATE(330), 2,
      sym_line_continuation,
      sym_comment,
  [6985] = 1,
    ACTIONS(956), 1,
      ts_builtin_sym_end,
  [6989] = 1,
    ACTIONS(958), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 96,
  [SMALL_STATE(4)] = 194,
  [SMALL_STATE(5)] = 286,
  [SMALL_STATE(6)] = 319,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 406,
  [SMALL_STATE(9)] = 447,
  [SMALL_STATE(10)] = 487,
  [SMALL_STATE(11)] = 527,
  [SMALL_STATE(12)] = 567,
  [SMALL_STATE(13)] = 604,
  [SMALL_STATE(14)] = 639,
  [SMALL_STATE(15)] = 673,
  [SMALL_STATE(16)] = 707,
  [SMALL_STATE(17)] = 739,
  [SMALL_STATE(18)] = 772,
  [SMALL_STATE(19)] = 803,
  [SMALL_STATE(20)] = 836,
  [SMALL_STATE(21)] = 867,
  [SMALL_STATE(22)] = 896,
  [SMALL_STATE(23)] = 929,
  [SMALL_STATE(24)] = 962,
  [SMALL_STATE(25)] = 995,
  [SMALL_STATE(26)] = 1028,
  [SMALL_STATE(27)] = 1061,
  [SMALL_STATE(28)] = 1092,
  [SMALL_STATE(29)] = 1125,
  [SMALL_STATE(30)] = 1158,
  [SMALL_STATE(31)] = 1193,
  [SMALL_STATE(32)] = 1220,
  [SMALL_STATE(33)] = 1253,
  [SMALL_STATE(34)] = 1286,
  [SMALL_STATE(35)] = 1317,
  [SMALL_STATE(36)] = 1346,
  [SMALL_STATE(37)] = 1372,
  [SMALL_STATE(38)] = 1402,
  [SMALL_STATE(39)] = 1434,
  [SMALL_STATE(40)] = 1466,
  [SMALL_STATE(41)] = 1496,
  [SMALL_STATE(42)] = 1518,
  [SMALL_STATE(43)] = 1540,
  [SMALL_STATE(44)] = 1570,
  [SMALL_STATE(45)] = 1594,
  [SMALL_STATE(46)] = 1626,
  [SMALL_STATE(47)] = 1648,
  [SMALL_STATE(48)] = 1676,
  [SMALL_STATE(49)] = 1698,
  [SMALL_STATE(50)] = 1720,
  [SMALL_STATE(51)] = 1750,
  [SMALL_STATE(52)] = 1780,
  [SMALL_STATE(53)] = 1812,
  [SMALL_STATE(54)] = 1844,
  [SMALL_STATE(55)] = 1870,
  [SMALL_STATE(56)] = 1891,
  [SMALL_STATE(57)] = 1918,
  [SMALL_STATE(58)] = 1945,
  [SMALL_STATE(59)] = 1974,
  [SMALL_STATE(60)] = 2001,
  [SMALL_STATE(61)] = 2030,
  [SMALL_STATE(62)] = 2051,
  [SMALL_STATE(63)] = 2080,
  [SMALL_STATE(64)] = 2109,
  [SMALL_STATE(65)] = 2138,
  [SMALL_STATE(66)] = 2159,
  [SMALL_STATE(67)] = 2188,
  [SMALL_STATE(68)] = 2217,
  [SMALL_STATE(69)] = 2246,
  [SMALL_STATE(70)] = 2267,
  [SMALL_STATE(71)] = 2288,
  [SMALL_STATE(72)] = 2317,
  [SMALL_STATE(73)] = 2346,
  [SMALL_STATE(74)] = 2371,
  [SMALL_STATE(75)] = 2398,
  [SMALL_STATE(76)] = 2427,
  [SMALL_STATE(77)] = 2448,
  [SMALL_STATE(78)] = 2469,
  [SMALL_STATE(79)] = 2498,
  [SMALL_STATE(80)] = 2519,
  [SMALL_STATE(81)] = 2546,
  [SMALL_STATE(82)] = 2570,
  [SMALL_STATE(83)] = 2590,
  [SMALL_STATE(84)] = 2612,
  [SMALL_STATE(85)] = 2638,
  [SMALL_STATE(86)] = 2662,
  [SMALL_STATE(87)] = 2686,
  [SMALL_STATE(88)] = 2712,
  [SMALL_STATE(89)] = 2738,
  [SMALL_STATE(90)] = 2764,
  [SMALL_STATE(91)] = 2784,
  [SMALL_STATE(92)] = 2804,
  [SMALL_STATE(93)] = 2824,
  [SMALL_STATE(94)] = 2850,
  [SMALL_STATE(95)] = 2870,
  [SMALL_STATE(96)] = 2896,
  [SMALL_STATE(97)] = 2920,
  [SMALL_STATE(98)] = 2940,
  [SMALL_STATE(99)] = 2962,
  [SMALL_STATE(100)] = 2982,
  [SMALL_STATE(101)] = 3002,
  [SMALL_STATE(102)] = 3028,
  [SMALL_STATE(103)] = 3048,
  [SMALL_STATE(104)] = 3072,
  [SMALL_STATE(105)] = 3092,
  [SMALL_STATE(106)] = 3116,
  [SMALL_STATE(107)] = 3138,
  [SMALL_STATE(108)] = 3158,
  [SMALL_STATE(109)] = 3184,
  [SMALL_STATE(110)] = 3208,
  [SMALL_STATE(111)] = 3232,
  [SMALL_STATE(112)] = 3252,
  [SMALL_STATE(113)] = 3278,
  [SMALL_STATE(114)] = 3298,
  [SMALL_STATE(115)] = 3318,
  [SMALL_STATE(116)] = 3338,
  [SMALL_STATE(117)] = 3362,
  [SMALL_STATE(118)] = 3382,
  [SMALL_STATE(119)] = 3402,
  [SMALL_STATE(120)] = 3424,
  [SMALL_STATE(121)] = 3444,
  [SMALL_STATE(122)] = 3470,
  [SMALL_STATE(123)] = 3496,
  [SMALL_STATE(124)] = 3522,
  [SMALL_STATE(125)] = 3541,
  [SMALL_STATE(126)] = 3560,
  [SMALL_STATE(127)] = 3577,
  [SMALL_STATE(128)] = 3594,
  [SMALL_STATE(129)] = 3611,
  [SMALL_STATE(130)] = 3630,
  [SMALL_STATE(131)] = 3647,
  [SMALL_STATE(132)] = 3666,
  [SMALL_STATE(133)] = 3683,
  [SMALL_STATE(134)] = 3700,
  [SMALL_STATE(135)] = 3719,
  [SMALL_STATE(136)] = 3740,
  [SMALL_STATE(137)] = 3759,
  [SMALL_STATE(138)] = 3776,
  [SMALL_STATE(139)] = 3795,
  [SMALL_STATE(140)] = 3814,
  [SMALL_STATE(141)] = 3833,
  [SMALL_STATE(142)] = 3850,
  [SMALL_STATE(143)] = 3873,
  [SMALL_STATE(144)] = 3894,
  [SMALL_STATE(145)] = 3913,
  [SMALL_STATE(146)] = 3932,
  [SMALL_STATE(147)] = 3955,
  [SMALL_STATE(148)] = 3978,
  [SMALL_STATE(149)] = 3997,
  [SMALL_STATE(150)] = 4020,
  [SMALL_STATE(151)] = 4043,
  [SMALL_STATE(152)] = 4066,
  [SMALL_STATE(153)] = 4085,
  [SMALL_STATE(154)] = 4104,
  [SMALL_STATE(155)] = 4127,
  [SMALL_STATE(156)] = 4150,
  [SMALL_STATE(157)] = 4169,
  [SMALL_STATE(158)] = 4192,
  [SMALL_STATE(159)] = 4211,
  [SMALL_STATE(160)] = 4230,
  [SMALL_STATE(161)] = 4249,
  [SMALL_STATE(162)] = 4265,
  [SMALL_STATE(163)] = 4283,
  [SMALL_STATE(164)] = 4299,
  [SMALL_STATE(165)] = 4319,
  [SMALL_STATE(166)] = 4339,
  [SMALL_STATE(167)] = 4359,
  [SMALL_STATE(168)] = 4379,
  [SMALL_STATE(169)] = 4399,
  [SMALL_STATE(170)] = 4419,
  [SMALL_STATE(171)] = 4437,
  [SMALL_STATE(172)] = 4455,
  [SMALL_STATE(173)] = 4475,
  [SMALL_STATE(174)] = 4491,
  [SMALL_STATE(175)] = 4511,
  [SMALL_STATE(176)] = 4531,
  [SMALL_STATE(177)] = 4551,
  [SMALL_STATE(178)] = 4571,
  [SMALL_STATE(179)] = 4587,
  [SMALL_STATE(180)] = 4607,
  [SMALL_STATE(181)] = 4625,
  [SMALL_STATE(182)] = 4645,
  [SMALL_STATE(183)] = 4665,
  [SMALL_STATE(184)] = 4685,
  [SMALL_STATE(185)] = 4705,
  [SMALL_STATE(186)] = 4725,
  [SMALL_STATE(187)] = 4745,
  [SMALL_STATE(188)] = 4765,
  [SMALL_STATE(189)] = 4781,
  [SMALL_STATE(190)] = 4799,
  [SMALL_STATE(191)] = 4815,
  [SMALL_STATE(192)] = 4835,
  [SMALL_STATE(193)] = 4855,
  [SMALL_STATE(194)] = 4873,
  [SMALL_STATE(195)] = 4889,
  [SMALL_STATE(196)] = 4905,
  [SMALL_STATE(197)] = 4925,
  [SMALL_STATE(198)] = 4945,
  [SMALL_STATE(199)] = 4961,
  [SMALL_STATE(200)] = 4977,
  [SMALL_STATE(201)] = 4993,
  [SMALL_STATE(202)] = 5011,
  [SMALL_STATE(203)] = 5029,
  [SMALL_STATE(204)] = 5049,
  [SMALL_STATE(205)] = 5065,
  [SMALL_STATE(206)] = 5083,
  [SMALL_STATE(207)] = 5099,
  [SMALL_STATE(208)] = 5117,
  [SMALL_STATE(209)] = 5135,
  [SMALL_STATE(210)] = 5153,
  [SMALL_STATE(211)] = 5171,
  [SMALL_STATE(212)] = 5191,
  [SMALL_STATE(213)] = 5207,
  [SMALL_STATE(214)] = 5227,
  [SMALL_STATE(215)] = 5245,
  [SMALL_STATE(216)] = 5263,
  [SMALL_STATE(217)] = 5281,
  [SMALL_STATE(218)] = 5301,
  [SMALL_STATE(219)] = 5319,
  [SMALL_STATE(220)] = 5337,
  [SMALL_STATE(221)] = 5355,
  [SMALL_STATE(222)] = 5373,
  [SMALL_STATE(223)] = 5391,
  [SMALL_STATE(224)] = 5408,
  [SMALL_STATE(225)] = 5425,
  [SMALL_STATE(226)] = 5442,
  [SMALL_STATE(227)] = 5459,
  [SMALL_STATE(228)] = 5476,
  [SMALL_STATE(229)] = 5493,
  [SMALL_STATE(230)] = 5510,
  [SMALL_STATE(231)] = 5527,
  [SMALL_STATE(232)] = 5544,
  [SMALL_STATE(233)] = 5561,
  [SMALL_STATE(234)] = 5576,
  [SMALL_STATE(235)] = 5593,
  [SMALL_STATE(236)] = 5610,
  [SMALL_STATE(237)] = 5625,
  [SMALL_STATE(238)] = 5640,
  [SMALL_STATE(239)] = 5655,
  [SMALL_STATE(240)] = 5672,
  [SMALL_STATE(241)] = 5689,
  [SMALL_STATE(242)] = 5706,
  [SMALL_STATE(243)] = 5721,
  [SMALL_STATE(244)] = 5738,
  [SMALL_STATE(245)] = 5755,
  [SMALL_STATE(246)] = 5772,
  [SMALL_STATE(247)] = 5787,
  [SMALL_STATE(248)] = 5804,
  [SMALL_STATE(249)] = 5821,
  [SMALL_STATE(250)] = 5838,
  [SMALL_STATE(251)] = 5855,
  [SMALL_STATE(252)] = 5870,
  [SMALL_STATE(253)] = 5887,
  [SMALL_STATE(254)] = 5904,
  [SMALL_STATE(255)] = 5921,
  [SMALL_STATE(256)] = 5935,
  [SMALL_STATE(257)] = 5949,
  [SMALL_STATE(258)] = 5963,
  [SMALL_STATE(259)] = 5977,
  [SMALL_STATE(260)] = 5991,
  [SMALL_STATE(261)] = 6005,
  [SMALL_STATE(262)] = 6019,
  [SMALL_STATE(263)] = 6033,
  [SMALL_STATE(264)] = 6047,
  [SMALL_STATE(265)] = 6061,
  [SMALL_STATE(266)] = 6075,
  [SMALL_STATE(267)] = 6089,
  [SMALL_STATE(268)] = 6103,
  [SMALL_STATE(269)] = 6117,
  [SMALL_STATE(270)] = 6131,
  [SMALL_STATE(271)] = 6145,
  [SMALL_STATE(272)] = 6159,
  [SMALL_STATE(273)] = 6173,
  [SMALL_STATE(274)] = 6187,
  [SMALL_STATE(275)] = 6201,
  [SMALL_STATE(276)] = 6215,
  [SMALL_STATE(277)] = 6229,
  [SMALL_STATE(278)] = 6243,
  [SMALL_STATE(279)] = 6257,
  [SMALL_STATE(280)] = 6271,
  [SMALL_STATE(281)] = 6285,
  [SMALL_STATE(282)] = 6299,
  [SMALL_STATE(283)] = 6313,
  [SMALL_STATE(284)] = 6327,
  [SMALL_STATE(285)] = 6341,
  [SMALL_STATE(286)] = 6355,
  [SMALL_STATE(287)] = 6369,
  [SMALL_STATE(288)] = 6383,
  [SMALL_STATE(289)] = 6397,
  [SMALL_STATE(290)] = 6411,
  [SMALL_STATE(291)] = 6425,
  [SMALL_STATE(292)] = 6439,
  [SMALL_STATE(293)] = 6453,
  [SMALL_STATE(294)] = 6467,
  [SMALL_STATE(295)] = 6481,
  [SMALL_STATE(296)] = 6495,
  [SMALL_STATE(297)] = 6509,
  [SMALL_STATE(298)] = 6523,
  [SMALL_STATE(299)] = 6537,
  [SMALL_STATE(300)] = 6551,
  [SMALL_STATE(301)] = 6565,
  [SMALL_STATE(302)] = 6579,
  [SMALL_STATE(303)] = 6593,
  [SMALL_STATE(304)] = 6607,
  [SMALL_STATE(305)] = 6621,
  [SMALL_STATE(306)] = 6635,
  [SMALL_STATE(307)] = 6649,
  [SMALL_STATE(308)] = 6663,
  [SMALL_STATE(309)] = 6677,
  [SMALL_STATE(310)] = 6691,
  [SMALL_STATE(311)] = 6705,
  [SMALL_STATE(312)] = 6719,
  [SMALL_STATE(313)] = 6733,
  [SMALL_STATE(314)] = 6747,
  [SMALL_STATE(315)] = 6761,
  [SMALL_STATE(316)] = 6775,
  [SMALL_STATE(317)] = 6789,
  [SMALL_STATE(318)] = 6803,
  [SMALL_STATE(319)] = 6817,
  [SMALL_STATE(320)] = 6831,
  [SMALL_STATE(321)] = 6845,
  [SMALL_STATE(322)] = 6859,
  [SMALL_STATE(323)] = 6873,
  [SMALL_STATE(324)] = 6887,
  [SMALL_STATE(325)] = 6901,
  [SMALL_STATE(326)] = 6915,
  [SMALL_STATE(327)] = 6929,
  [SMALL_STATE(328)] = 6943,
  [SMALL_STATE(329)] = 6957,
  [SMALL_STATE(330)] = 6971,
  [SMALL_STATE(331)] = 6985,
  [SMALL_STATE(332)] = 6989,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(287),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(285),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(166),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(41),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(41),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(217),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(77),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(265),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(33),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(103),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(203),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(82),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(82),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(165),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(99),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(99),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(169),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(107),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(248),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(127),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(181),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(167),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(129),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(243),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(140),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(183),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(127),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(181),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(164),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(178),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(205),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(185),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(163),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(174),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(186),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(119),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(222),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(177),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(60),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(184),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(124),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(124),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(132),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(262),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(288),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(180),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(180),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(142),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(212),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(235),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [886] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
