#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 337
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
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
  aux_sym_path_token3 = 33,
  aux_sym_path_with_heredoc_token1 = 34,
  anon_sym_DOLLAR = 35,
  anon_sym_DOLLAR2 = 36,
  anon_sym_LBRACE = 37,
  aux_sym__expansion_body_token1 = 38,
  anon_sym_RBRACE = 39,
  sym_variable = 40,
  aux_sym__spaced_env_pair_token1 = 41,
  aux_sym__env_key_token1 = 42,
  aux_sym_expose_port_token1 = 43,
  anon_sym_SLASHtcp = 44,
  anon_sym_SLASHudp = 45,
  aux_sym_label_pair_token1 = 46,
  aux_sym_image_name_token1 = 47,
  aux_sym_image_name_token2 = 48,
  aux_sym_image_tag_token1 = 49,
  anon_sym_AT = 50,
  aux_sym_image_digest_token1 = 51,
  anon_sym_DASH_DASH = 52,
  aux_sym_param_token1 = 53,
  aux_sym_param_token2 = 54,
  anon_sym_mount = 55,
  anon_sym_COMMA = 56,
  aux_sym_mount_param_param_token1 = 57,
  aux_sym_image_alias_token1 = 58,
  aux_sym_image_alias_token2 = 59,
  aux_sym_shell_fragment_token1 = 60,
  aux_sym_shell_fragment_token2 = 61,
  aux_sym_shell_fragment_token3 = 62,
  aux_sym_shell_fragment_token4 = 63,
  sym_line_continuation = 64,
  sym_required_line_continuation = 65,
  anon_sym_LBRACK = 66,
  anon_sym_COMMA2 = 67,
  anon_sym_RBRACK = 68,
  anon_sym_DQUOTE = 69,
  aux_sym_json_string_token1 = 70,
  sym_json_escape_sequence = 71,
  aux_sym_double_quoted_string_token1 = 72,
  anon_sym_BSLASH = 73,
  anon_sym_SQUOTE = 74,
  aux_sym_single_quoted_string_token1 = 75,
  aux_sym_unquoted_string_token1 = 76,
  anon_sym_BSLASH2 = 77,
  sym_double_quoted_escape_sequence = 78,
  sym_single_quoted_escape_sequence = 79,
  sym__non_newline_whitespace = 80,
  sym_comment = 81,
  sym_heredoc_marker = 82,
  sym_heredoc_line = 83,
  sym_heredoc_end = 84,
  sym_heredoc_nl = 85,
  sym_error_sentinel = 86,
  sym_source_file = 87,
  sym__instruction = 88,
  sym_from_instruction = 89,
  sym_run_instruction = 90,
  sym_cmd_instruction = 91,
  sym_label_instruction = 92,
  sym_expose_instruction = 93,
  sym_env_instruction = 94,
  sym_add_instruction = 95,
  sym_copy_instruction = 96,
  sym_entrypoint_instruction = 97,
  sym_volume_instruction = 98,
  sym_user_instruction = 99,
  sym__user_name_or_group = 100,
  aux_sym__immediate_user_name_or_group = 101,
  sym__immediate_user_name_or_group_fragment = 102,
  sym_workdir_instruction = 103,
  sym_arg_instruction = 104,
  sym_onbuild_instruction = 105,
  sym_stopsignal_instruction = 106,
  sym__stopsignal_value = 107,
  sym_healthcheck_instruction = 108,
  sym_shell_instruction = 109,
  sym_maintainer_instruction = 110,
  sym_cross_build_instruction = 111,
  sym_heredoc_block = 112,
  sym_path = 113,
  sym_path_with_heredoc = 114,
  sym_expansion = 115,
  sym__immediate_expansion = 116,
  sym__imm_expansion = 117,
  sym__expansion_body = 118,
  sym_env_pair = 119,
  sym__spaced_env_pair = 120,
  sym__spaced_env_value = 121,
  sym__env_key = 122,
  sym_expose_port = 123,
  sym_label_pair = 124,
  sym_image_spec = 125,
  sym_image_name = 126,
  sym_image_tag = 127,
  sym_image_digest = 128,
  sym_param = 129,
  sym_mount_param = 130,
  sym_mount_param_param = 131,
  sym_image_alias = 132,
  sym_shell_command = 133,
  sym_shell_fragment = 134,
  sym_json_string_array = 135,
  sym_json_string = 136,
  sym_double_quoted_string = 137,
  sym_single_quoted_string = 138,
  sym_unquoted_string = 139,
  aux_sym_source_file_repeat1 = 140,
  aux_sym_run_instruction_repeat1 = 141,
  aux_sym_run_instruction_repeat2 = 142,
  aux_sym_label_instruction_repeat1 = 143,
  aux_sym_expose_instruction_repeat1 = 144,
  aux_sym_env_instruction_repeat1 = 145,
  aux_sym_add_instruction_repeat1 = 146,
  aux_sym_add_instruction_repeat2 = 147,
  aux_sym_volume_instruction_repeat1 = 148,
  aux_sym__user_name_or_group_repeat1 = 149,
  aux_sym__stopsignal_value_repeat1 = 150,
  aux_sym_heredoc_block_repeat1 = 151,
  aux_sym_path_repeat1 = 152,
  aux_sym__spaced_env_value_repeat1 = 153,
  aux_sym_image_name_repeat1 = 154,
  aux_sym_image_tag_repeat1 = 155,
  aux_sym_image_digest_repeat1 = 156,
  aux_sym_mount_param_repeat1 = 157,
  aux_sym_image_alias_repeat1 = 158,
  aux_sym_shell_command_repeat1 = 159,
  aux_sym_shell_fragment_repeat1 = 160,
  aux_sym_json_string_array_repeat1 = 161,
  aux_sym_json_string_repeat1 = 162,
  aux_sym_double_quoted_string_repeat1 = 163,
  aux_sym_single_quoted_string_repeat1 = 164,
  aux_sym_unquoted_string_repeat1 = 165,
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
  [aux_sym_path_token3] = "path_token3",
  [aux_sym_path_with_heredoc_token1] = "path_with_heredoc_token1",
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
  [aux_sym_shell_fragment_token4] = "shell_fragment_token4",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "line_continuation",
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
  [sym_heredoc_marker] = "heredoc_marker",
  [sym_heredoc_line] = "heredoc_line",
  [sym_heredoc_end] = "heredoc_end",
  [sym_heredoc_nl] = "_heredoc_nl",
  [sym_error_sentinel] = "error_sentinel",
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
  [sym_heredoc_block] = "heredoc_block",
  [sym_path] = "path",
  [sym_path_with_heredoc] = "path",
  [sym_expansion] = "expansion",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [sym_env_pair] = "env_pair",
  [sym__spaced_env_pair] = "env_pair",
  [sym__spaced_env_value] = "unquoted_string",
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
  [sym_json_string_array] = "json_string_array",
  [sym_json_string] = "json_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
  [aux_sym_run_instruction_repeat2] = "run_instruction_repeat2",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
  [aux_sym_add_instruction_repeat2] = "add_instruction_repeat2",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym__user_name_or_group_repeat1] = "_user_name_or_group_repeat1",
  [aux_sym__stopsignal_value_repeat1] = "_stopsignal_value_repeat1",
  [aux_sym_heredoc_block_repeat1] = "heredoc_block_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym__spaced_env_value_repeat1] = "_spaced_env_value_repeat1",
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
  [aux_sym_path_token3] = aux_sym_path_token3,
  [aux_sym_path_with_heredoc_token1] = aux_sym_path_with_heredoc_token1,
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
  [aux_sym_shell_fragment_token4] = aux_sym_shell_fragment_token4,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_line_continuation,
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
  [sym_heredoc_marker] = sym_heredoc_marker,
  [sym_heredoc_line] = sym_heredoc_line,
  [sym_heredoc_end] = sym_heredoc_end,
  [sym_heredoc_nl] = sym_heredoc_nl,
  [sym_error_sentinel] = sym_error_sentinel,
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
  [sym_heredoc_block] = sym_heredoc_block,
  [sym_path] = sym_path,
  [sym_path_with_heredoc] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [sym_env_pair] = sym_env_pair,
  [sym__spaced_env_pair] = sym_env_pair,
  [sym__spaced_env_value] = sym_unquoted_string,
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
  [sym_json_string_array] = sym_json_string_array,
  [sym_json_string] = sym_json_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
  [aux_sym_run_instruction_repeat2] = aux_sym_run_instruction_repeat2,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
  [aux_sym_add_instruction_repeat2] = aux_sym_add_instruction_repeat2,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym__user_name_or_group_repeat1] = aux_sym__user_name_or_group_repeat1,
  [aux_sym__stopsignal_value_repeat1] = aux_sym__stopsignal_value_repeat1,
  [aux_sym_heredoc_block_repeat1] = aux_sym_heredoc_block_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym__spaced_env_value_repeat1] = aux_sym__spaced_env_value_repeat1,
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
  [aux_sym_path_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_with_heredoc_token1] = {
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
  [aux_sym_shell_fragment_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_required_line_continuation] = {
    .visible = true,
    .named = true,
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
  [sym_heredoc_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_line] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_nl] = {
    .visible = true,
    .named = false,
  },
  [sym_error_sentinel] = {
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
  [sym_heredoc_block] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_path_with_heredoc] = {
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
  [sym__spaced_env_value] = {
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
  [aux_sym_run_instruction_repeat2] = {
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
  [aux_sym_heredoc_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__spaced_env_value_repeat1] = {
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

enum ts_field_identifiers {
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 30,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 33,
  [42] = 42,
  [43] = 43,
  [44] = 22,
  [45] = 45,
  [46] = 23,
  [47] = 47,
  [48] = 18,
  [49] = 20,
  [50] = 18,
  [51] = 20,
  [52] = 52,
  [53] = 30,
  [54] = 33,
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
  [66] = 32,
  [67] = 60,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 52,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 52,
  [80] = 80,
  [81] = 81,
  [82] = 76,
  [83] = 73,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 52,
  [90] = 90,
  [91] = 47,
  [92] = 92,
  [93] = 62,
  [94] = 45,
  [95] = 95,
  [96] = 75,
  [97] = 97,
  [98] = 76,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 99,
  [109] = 109,
  [110] = 110,
  [111] = 75,
  [112] = 112,
  [113] = 113,
  [114] = 72,
  [115] = 115,
  [116] = 92,
  [117] = 75,
  [118] = 76,
  [119] = 76,
  [120] = 75,
  [121] = 76,
  [122] = 75,
  [123] = 75,
  [124] = 124,
  [125] = 76,
  [126] = 126,
  [127] = 112,
  [128] = 99,
  [129] = 112,
  [130] = 130,
  [131] = 131,
  [132] = 75,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 92,
  [138] = 75,
  [139] = 139,
  [140] = 76,
  [141] = 92,
  [142] = 75,
  [143] = 76,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 76,
  [154] = 154,
  [155] = 77,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 92,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 136,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 175,
  [177] = 145,
  [178] = 159,
  [179] = 76,
  [180] = 92,
  [181] = 75,
  [182] = 76,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 92,
  [188] = 75,
  [189] = 76,
  [190] = 92,
  [191] = 75,
  [192] = 76,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 76,
  [197] = 197,
  [198] = 198,
  [199] = 75,
  [200] = 200,
  [201] = 198,
  [202] = 194,
  [203] = 203,
  [204] = 186,
  [205] = 183,
  [206] = 175,
  [207] = 198,
  [208] = 208,
  [209] = 175,
  [210] = 198,
  [211] = 175,
  [212] = 198,
  [213] = 175,
  [214] = 198,
  [215] = 175,
  [216] = 198,
  [217] = 175,
  [218] = 198,
  [219] = 175,
  [220] = 198,
  [221] = 175,
  [222] = 175,
  [223] = 175,
  [224] = 175,
  [225] = 175,
  [226] = 92,
  [227] = 72,
  [228] = 152,
  [229] = 161,
  [230] = 163,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 72,
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
  [247] = 185,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 151,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 151,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 258,
  [273] = 234,
  [274] = 274,
  [275] = 152,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 276,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 276,
  [286] = 277,
  [287] = 287,
  [288] = 269,
  [289] = 276,
  [290] = 277,
  [291] = 277,
  [292] = 173,
  [293] = 276,
  [294] = 294,
  [295] = 232,
  [296] = 276,
  [297] = 297,
  [298] = 298,
  [299] = 276,
  [300] = 300,
  [301] = 301,
  [302] = 276,
  [303] = 303,
  [304] = 304,
  [305] = 276,
  [306] = 161,
  [307] = 276,
  [308] = 308,
  [309] = 276,
  [310] = 243,
  [311] = 276,
  [312] = 312,
  [313] = 276,
  [314] = 163,
  [315] = 276,
  [316] = 276,
  [317] = 308,
  [318] = 258,
  [319] = 308,
  [320] = 258,
  [321] = 308,
  [322] = 322,
  [323] = 308,
  [324] = 308,
  [325] = 308,
  [326] = 308,
  [327] = 308,
  [328] = 308,
  [329] = 308,
  [330] = 308,
  [331] = 308,
  [332] = 308,
  [333] = 308,
  [334] = 303,
  [335] = 303,
  [336] = 336,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(168);
      ADVANCE_MAP(
        '"', 271,
        '#', 206,
        '$', 214,
        '\'', 282,
        ',', 253,
        '-', 261,
        ':', 182,
        '<', 229,
        '=', 191,
        '@', 240,
        '[', 268,
        '\\', 279,
        ']', 270,
        '_', 221,
        '{', 215,
        '}', 220,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 266,
        'u', 162,
        '\t', 3,
        ' ', 3,
        '"', 275,
        '/', 275,
        '\\', 275,
        'b', 275,
        'f', 275,
        'n', 275,
        'r', 275,
        't', 275,
      );
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(264);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 169,
        '#', 294,
        '$', 213,
        '/', 68,
        ':', 182,
        '@', 240,
        '\\', 3,
        'A', 143,
        'a', 143,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(18);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(18);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(289);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '\n', 169,
        '#', 234,
        '$', 214,
        ':', 182,
        '@', 240,
        '\\', 232,
        'A', 233,
        'a', 233,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '@') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(18);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(264);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(42);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '<') ADVANCE(164);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(204);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '<') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(204);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(245);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(260);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(49);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(236);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(239);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '$') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(49);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(256);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(243);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(197);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 'O') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 95:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(196);
      END_STATE();
    case 106:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 115:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 116:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 117:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 156:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(178);
      END_STATE();
    case 157:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(212);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(207);
      END_STATE();
    case 165:
      if (eof) ADVANCE(168);
      ADVANCE_MAP(
        '"', 271,
        '#', 206,
        '$', 213,
        '\'', 282,
        ',', 269,
        '-', 261,
        '<', 229,
        '=', 204,
        '[', 268,
        '\\', 279,
        ']', 270,
        ':', 204,
        '@', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(165);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 166:
      if (eof) ADVANCE(168);
      ADVANCE_MAP(
        '"', 271,
        '#', 294,
        '$', 213,
        ',', 269,
        '-', 59,
        '=', 191,
        'N', 62,
        '[', 268,
        '\\', 3,
        ']', 270,
        '}', 220,
        'A', 79,
        'a', 79,
        'C', 116,
        'c', 116,
        'E', 118,
        'e', 118,
        'F', 141,
        'f', 141,
        'H', 88,
        'h', 88,
        'L', 69,
        'l', 69,
        'M', 70,
        'm', 70,
        'O', 120,
        'o', 120,
        'R', 152,
        'r', 152,
        'S', 96,
        's', 96,
        'U', 144,
        'u', 144,
        'V', 125,
        'v', 125,
        'W', 127,
        'w', 127,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 167:
      if (eof) ADVANCE(168);
      ADVANCE_MAP(
        '"', 271,
        '#', 294,
        '$', 213,
        ',', 269,
        '-', 59,
        'N', 62,
        '[', 268,
        '\\', 3,
        ']', 270,
        'A', 79,
        'a', 79,
        'C', 116,
        'c', 116,
        'E', 118,
        'e', 118,
        'F', 141,
        'f', 141,
        'H', 88,
        'h', 88,
        'L', 69,
        'l', 69,
        'M', 70,
        'm', 70,
        'O', 120,
        'o', 120,
        'R', 152,
        'r', 152,
        'S', 96,
        's', 96,
        'U', 144,
        'u', 144,
        'V', 125,
        'v', 125,
        'W', 127,
        'w', 127,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_with_heredoc_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(219);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(217);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '-') ADVANCE(243);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(208);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_required_line_continuation);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(294);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '#') ADVANCE(272);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(291);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(289);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 166},
  [2] = {.lex_state = 166},
  [3] = {.lex_state = 166},
  [4] = {.lex_state = 166},
  [5] = {.lex_state = 166},
  [6] = {.lex_state = 44, .external_lex_state = 2},
  [7] = {.lex_state = 44, .external_lex_state = 2},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 45, .external_lex_state = 2},
  [13] = {.lex_state = 33, .external_lex_state = 2},
  [14] = {.lex_state = 33, .external_lex_state = 2},
  [15] = {.lex_state = 33, .external_lex_state = 2},
  [16] = {.lex_state = 45, .external_lex_state = 2},
  [17] = {.lex_state = 33, .external_lex_state = 2},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 44, .external_lex_state = 2},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 15, .external_lex_state = 3},
  [23] = {.lex_state = 15, .external_lex_state = 3},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 43, .external_lex_state = 2},
  [27] = {.lex_state = 43, .external_lex_state = 2},
  [28] = {.lex_state = 43, .external_lex_state = 2},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 15, .external_lex_state = 3},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 43, .external_lex_state = 2},
  [43] = {.lex_state = 43, .external_lex_state = 2},
  [44] = {.lex_state = 15, .external_lex_state = 2},
  [45] = {.lex_state = 23, .external_lex_state = 4},
  [46] = {.lex_state = 15, .external_lex_state = 2},
  [47] = {.lex_state = 23, .external_lex_state = 4},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 23, .external_lex_state = 4},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 33, .external_lex_state = 2},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 45, .external_lex_state = 2},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 29},
  [65] = {.lex_state = 33, .external_lex_state = 2},
  [66] = {.lex_state = 15, .external_lex_state = 2},
  [67] = {.lex_state = 45, .external_lex_state = 2},
  [68] = {.lex_state = 33, .external_lex_state = 2},
  [69] = {.lex_state = 33, .external_lex_state = 2},
  [70] = {.lex_state = 33, .external_lex_state = 2},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 44, .external_lex_state = 2},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 33, .external_lex_state = 2},
  [78] = {.lex_state = 166},
  [79] = {.lex_state = 54},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 36},
  [91] = {.lex_state = 54},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 54},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 16, .external_lex_state = 4},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 16, .external_lex_state = 4},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 51},
  [105] = {.lex_state = 166},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 53},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 27},
  [114] = {.lex_state = 33, .external_lex_state = 2},
  [115] = {.lex_state = 16, .external_lex_state = 4},
  [116] = {.lex_state = 23, .external_lex_state = 4},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 23, .external_lex_state = 4},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 23, .external_lex_state = 4},
  [124] = {.lex_state = 16, .external_lex_state = 4},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 166},
  [131] = {.lex_state = 35},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 9, .external_lex_state = 4},
  [134] = {.lex_state = 9, .external_lex_state = 4},
  [135] = {.lex_state = 9, .external_lex_state = 4},
  [136] = {.lex_state = 15, .external_lex_state = 4},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 39},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 15, .external_lex_state = 4},
  [146] = {.lex_state = 32},
  [147] = {.lex_state = 32},
  [148] = {.lex_state = 38},
  [149] = {.lex_state = 9, .external_lex_state = 4},
  [150] = {.lex_state = 39},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 32},
  [155] = {.lex_state = 166},
  [156] = {.lex_state = 9, .external_lex_state = 4},
  [157] = {.lex_state = 9, .external_lex_state = 4},
  [158] = {.lex_state = 9, .external_lex_state = 4},
  [159] = {.lex_state = 15, .external_lex_state = 4},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 33, .external_lex_state = 2},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 9, .external_lex_state = 4},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 9, .external_lex_state = 4},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 166},
  [169] = {.lex_state = 166, .external_lex_state = 5},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 16, .external_lex_state = 4},
  [174] = {.lex_state = 16},
  [175] = {.lex_state = 47},
  [176] = {.lex_state = 47},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 13},
  [180] = {.lex_state = 54},
  [181] = {.lex_state = 54},
  [182] = {.lex_state = 54},
  [183] = {.lex_state = 166},
  [184] = {.lex_state = 166, .external_lex_state = 5},
  [185] = {.lex_state = 15, .external_lex_state = 4},
  [186] = {.lex_state = 166},
  [187] = {.lex_state = 24},
  [188] = {.lex_state = 24},
  [189] = {.lex_state = 24},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 166, .external_lex_state = 5},
  [194] = {.lex_state = 166},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 47},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 47},
  [202] = {.lex_state = 166},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 166},
  [205] = {.lex_state = 166},
  [206] = {.lex_state = 47},
  [207] = {.lex_state = 47},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 47},
  [210] = {.lex_state = 47},
  [211] = {.lex_state = 47},
  [212] = {.lex_state = 47},
  [213] = {.lex_state = 47},
  [214] = {.lex_state = 47},
  [215] = {.lex_state = 47},
  [216] = {.lex_state = 47},
  [217] = {.lex_state = 47},
  [218] = {.lex_state = 47},
  [219] = {.lex_state = 47},
  [220] = {.lex_state = 47},
  [221] = {.lex_state = 47},
  [222] = {.lex_state = 47},
  [223] = {.lex_state = 47},
  [224] = {.lex_state = 47},
  [225] = {.lex_state = 47},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 55},
  [228] = {.lex_state = 19},
  [229] = {.lex_state = 19},
  [230] = {.lex_state = 19},
  [231] = {.lex_state = 166},
  [232] = {.lex_state = 9, .external_lex_state = 4},
  [233] = {.lex_state = 9, .external_lex_state = 4},
  [234] = {.lex_state = 9, .external_lex_state = 4},
  [235] = {.lex_state = 166},
  [236] = {.lex_state = 166},
  [237] = {.lex_state = 56},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 19},
  [241] = {.lex_state = 166},
  [242] = {.lex_state = 166},
  [243] = {.lex_state = 9, .external_lex_state = 4},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 46},
  [247] = {.lex_state = 15},
  [248] = {.lex_state = 166, .external_lex_state = 5},
  [249] = {.lex_state = 13},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 13},
  [252] = {.lex_state = 38},
  [253] = {.lex_state = 9, .external_lex_state = 4},
  [254] = {.lex_state = 56},
  [255] = {.lex_state = 166},
  [256] = {.lex_state = 9},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 166},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 201},
  [262] = {.lex_state = 52},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 166},
  [265] = {.lex_state = 166},
  [266] = {.lex_state = 9},
  [267] = {.lex_state = 166},
  [268] = {.lex_state = 201},
  [269] = {.lex_state = 259},
  [270] = {.lex_state = 48},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 166},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 166},
  [276] = {.lex_state = 166},
  [277] = {.lex_state = 57},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 9},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 166},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 166},
  [286] = {.lex_state = 57},
  [287] = {.lex_state = 56},
  [288] = {.lex_state = 259},
  [289] = {.lex_state = 166},
  [290] = {.lex_state = 57},
  [291] = {.lex_state = 57},
  [292] = {.lex_state = 48},
  [293] = {.lex_state = 166},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 166},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 166},
  [300] = {.lex_state = 166},
  [301] = {.lex_state = 166},
  [302] = {.lex_state = 166},
  [303] = {.lex_state = 50},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 166},
  [306] = {.lex_state = 166},
  [307] = {.lex_state = 166},
  [308] = {.lex_state = 58},
  [309] = {.lex_state = 166},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 166},
  [312] = {.lex_state = 166},
  [313] = {.lex_state = 166},
  [314] = {.lex_state = 166},
  [315] = {.lex_state = 166},
  [316] = {.lex_state = 166},
  [317] = {.lex_state = 58},
  [318] = {.lex_state = 166},
  [319] = {.lex_state = 58},
  [320] = {.lex_state = 166},
  [321] = {.lex_state = 58},
  [322] = {.lex_state = 9},
  [323] = {.lex_state = 58},
  [324] = {.lex_state = 58},
  [325] = {.lex_state = 58},
  [326] = {.lex_state = 58},
  [327] = {.lex_state = 58},
  [328] = {.lex_state = 58},
  [329] = {.lex_state = 58},
  [330] = {.lex_state = 58},
  [331] = {.lex_state = 58},
  [332] = {.lex_state = 58},
  [333] = {.lex_state = 58},
  [334] = {.lex_state = 50},
  [335] = {.lex_state = 50},
  [336] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [aux_sym_shell_fragment_token2] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym_heredoc_marker] = ACTIONS(1),
    [sym_heredoc_line] = ACTIONS(1),
    [sym_heredoc_end] = ACTIONS(1),
    [sym_heredoc_nl] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(312),
    [sym__instruction] = STATE(322),
    [sym_from_instruction] = STATE(322),
    [sym_run_instruction] = STATE(322),
    [sym_cmd_instruction] = STATE(322),
    [sym_label_instruction] = STATE(322),
    [sym_expose_instruction] = STATE(322),
    [sym_env_instruction] = STATE(322),
    [sym_add_instruction] = STATE(322),
    [sym_copy_instruction] = STATE(322),
    [sym_entrypoint_instruction] = STATE(322),
    [sym_volume_instruction] = STATE(322),
    [sym_user_instruction] = STATE(322),
    [sym_workdir_instruction] = STATE(322),
    [sym_arg_instruction] = STATE(322),
    [sym_onbuild_instruction] = STATE(322),
    [sym_stopsignal_instruction] = STATE(322),
    [sym_healthcheck_instruction] = STATE(322),
    [sym_shell_instruction] = STATE(322),
    [sym_maintainer_instruction] = STATE(322),
    [sym_cross_build_instruction] = STATE(322),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
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
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(322), 20,
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
  [90] = 23,
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
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(322), 20,
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
  [180] = 21,
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
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(298), 20,
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
  [264] = 2,
    ACTIONS(3), 2,
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
  [291] = 9,
    ACTIONS(110), 1,
      anon_sym_DASH_DASH,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    STATE(22), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(136), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(166), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(19), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(108), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [326] = 9,
    ACTIONS(110), 1,
      anon_sym_DASH_DASH,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    STATE(22), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(136), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(133), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(6), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(108), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [361] = 9,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(120), 1,
      aux_sym__env_key_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(48), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(240), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [395] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym_unquoted_string,
    ACTIONS(134), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(50), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(260), 3,
      sym__spaced_env_value,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [428] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_DOLLAR2,
    ACTIONS(138), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(18), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(282), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [458] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_DOLLAR2,
    ACTIONS(138), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(18), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(165), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [488] = 8,
    ACTIONS(142), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      sym_heredoc_marker,
    STATE(44), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(172), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(263), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(140), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [517] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym_path_token1,
    ACTIONS(150), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(152), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      anon_sym_DASH_DASH,
    ACTIONS(156), 1,
      sym_heredoc_marker,
    STATE(58), 1,
      aux_sym_add_instruction_repeat2,
    STATE(94), 1,
      sym_expansion,
    STATE(270), 1,
      sym_path_with_heredoc,
    STATE(17), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [552] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym_path_token1,
    ACTIONS(150), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(152), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      anon_sym_DASH_DASH,
    ACTIONS(156), 1,
      sym_heredoc_marker,
    STATE(65), 1,
      aux_sym_add_instruction_repeat2,
    STATE(94), 1,
      sym_expansion,
    STATE(270), 1,
      sym_path_with_heredoc,
    STATE(15), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [587] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym_path_token1,
    ACTIONS(150), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(152), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      anon_sym_DASH_DASH,
    ACTIONS(156), 1,
      sym_heredoc_marker,
    STATE(68), 1,
      aux_sym_add_instruction_repeat2,
    STATE(94), 1,
      sym_expansion,
    STATE(270), 1,
      sym_path_with_heredoc,
    STATE(77), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [622] = 8,
    ACTIONS(142), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      sym_heredoc_marker,
    STATE(44), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(172), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(283), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(140), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [651] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym_path_token1,
    ACTIONS(150), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(152), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      anon_sym_DASH_DASH,
    ACTIONS(156), 1,
      sym_heredoc_marker,
    STATE(70), 1,
      aux_sym_add_instruction_repeat2,
    STATE(94), 1,
      sym_expansion,
    STATE(270), 1,
      sym_path_with_heredoc,
    STATE(77), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [686] = 6,
    ACTIONS(136), 1,
      anon_sym_DOLLAR2,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(162), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(160), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(20), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [711] = 5,
    ACTIONS(166), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(169), 2,
      sym_heredoc_marker,
      anon_sym_LBRACK,
    STATE(19), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(164), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [734] = 6,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(173), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(178), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(176), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(20), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [759] = 6,
    ACTIONS(183), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(185), 1,
      anon_sym_DOLLAR2,
    ACTIONS(187), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(24), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [783] = 6,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    ACTIONS(193), 1,
      sym_required_line_continuation,
    STATE(23), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(189), 2,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(191), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [807] = 6,
    ACTIONS(200), 1,
      sym_required_line_continuation,
    ACTIONS(202), 1,
      sym_heredoc_marker,
    STATE(23), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(195), 2,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(197), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [831] = 6,
    ACTIONS(185), 1,
      anon_sym_DOLLAR2,
    ACTIONS(207), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(209), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(25), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [855] = 6,
    ACTIONS(213), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(215), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(25), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [879] = 5,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(223), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(221), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [901] = 5,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(229), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(227), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [923] = 5,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(233), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(231), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [945] = 6,
    ACTIONS(240), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(242), 1,
      anon_sym_DOLLAR2,
    ACTIONS(244), 1,
      aux_sym_image_tag_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(238), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(39), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [968] = 6,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(250), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(41), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [991] = 5,
    ACTIONS(256), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(258), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(35), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1012] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(195), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(200), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1029] = 6,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(262), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(37), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1052] = 7,
    ACTIONS(266), 1,
      anon_sym_LF,
    ACTIONS(268), 1,
      aux_sym_label_pair_token1,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(34), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(300), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1077] = 5,
    ACTIONS(258), 1,
      anon_sym_DOLLAR2,
    ACTIONS(279), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(38), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1098] = 6,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(283), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(33), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1121] = 6,
    ACTIONS(287), 1,
      anon_sym_DOLLAR2,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(292), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(37), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1144] = 5,
    ACTIONS(300), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(303), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(38), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1165] = 6,
    ACTIONS(308), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    ACTIONS(313), 1,
      aux_sym_image_tag_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(39), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1188] = 7,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(318), 1,
      aux_sym_label_pair_token1,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(34), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(300), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1213] = 6,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(262), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(37), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1236] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(326), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(328), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [1253] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(231), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(233), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [1270] = 6,
    ACTIONS(146), 1,
      sym_heredoc_marker,
    ACTIONS(189), 1,
      anon_sym_LF,
    ACTIONS(193), 1,
      sym_required_line_continuation,
    STATE(46), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(330), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1293] = 6,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(334), 1,
      aux_sym_path_token3,
    ACTIONS(336), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(338), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
    STATE(47), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1316] = 6,
    ACTIONS(195), 1,
      anon_sym_LF,
    ACTIONS(200), 1,
      sym_required_line_continuation,
    ACTIONS(343), 1,
      sym_heredoc_marker,
    STATE(46), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(340), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1339] = 6,
    ACTIONS(336), 1,
      anon_sym_DOLLAR2,
    ACTIONS(346), 1,
      anon_sym_LF,
    ACTIONS(348), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(350), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
    STATE(52), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1362] = 6,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(158), 1,
      anon_sym_LF,
    ACTIONS(160), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(352), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(49), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1385] = 6,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      aux_sym__env_key_token1,
    ACTIONS(354), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(357), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(49), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1408] = 6,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(158), 1,
      sym__non_newline_whitespace,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(360), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(51), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1431] = 6,
    ACTIONS(171), 1,
      sym__non_newline_whitespace,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(362), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(365), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(51), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1454] = 6,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(370), 1,
      aux_sym_path_token3,
    ACTIONS(373), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(376), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
    STATE(52), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1477] = 6,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(380), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(54), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1500] = 6,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(264), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(262), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(37), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1523] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    STATE(238), 1,
      sym_unquoted_string,
    ACTIONS(134), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(50), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1545] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      aux_sym_image_name_token1,
    ACTIONS(390), 1,
      anon_sym_DASH_DASH,
    STATE(21), 1,
      sym_expansion,
    STATE(80), 1,
      sym_image_name,
    STATE(107), 1,
      sym_param,
    STATE(239), 1,
      sym_image_spec,
  [1573] = 6,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(394), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(396), 1,
      anon_sym_DOLLAR2,
    ACTIONS(398), 1,
      aux_sym_image_digest_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(61), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1595] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_path_token1,
    ACTIONS(402), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      sym_heredoc_marker,
    STATE(45), 1,
      sym_expansion,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(102), 1,
      sym_path_with_heredoc,
  [1623] = 6,
    ACTIONS(258), 1,
      anon_sym_DOLLAR2,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(63), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1645] = 6,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    ACTIONS(412), 1,
      aux_sym_shell_fragment_token2,
    STATE(22), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(185), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(108), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1667] = 6,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(418), 1,
      anon_sym_DOLLAR2,
    ACTIONS(421), 1,
      aux_sym_image_digest_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(61), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1689] = 6,
    ACTIONS(424), 1,
      anon_sym_LF,
    ACTIONS(426), 1,
      aux_sym_path_token3,
    ACTIONS(428), 1,
      anon_sym_DOLLAR2,
    ACTIONS(430), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(73), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1711] = 6,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(437), 1,
      anon_sym_DOLLAR2,
    STATE(63), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1733] = 6,
    ACTIONS(440), 1,
      aux_sym_label_pair_token1,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
    ACTIONS(444), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(40), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(300), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1755] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_path_token1,
    ACTIONS(402), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      sym_heredoc_marker,
    STATE(45), 1,
      sym_expansion,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(100), 1,
      sym_path_with_heredoc,
  [1783] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(195), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(200), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1799] = 6,
    ACTIONS(142), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(146), 1,
      sym_heredoc_marker,
    STATE(44), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(247), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(140), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1821] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_path_token1,
    ACTIONS(402), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      sym_heredoc_marker,
    STATE(45), 1,
      sym_expansion,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(115), 1,
      sym_path_with_heredoc,
  [1849] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(446), 1,
      aux_sym_path_token1,
    ACTIONS(449), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      sym_heredoc_marker,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(94), 1,
      sym_expansion,
    STATE(270), 1,
      sym_path_with_heredoc,
  [1877] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(400), 1,
      aux_sym_path_token1,
    ACTIONS(402), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    ACTIONS(406), 1,
      sym_heredoc_marker,
    STATE(45), 1,
      sym_expansion,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(124), 1,
      sym_path_with_heredoc,
  [1905] = 6,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(376), 1,
      sym__non_newline_whitespace,
    ACTIONS(458), 1,
      aux_sym_path_token3,
    ACTIONS(461), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1927] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(466), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(464), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1943] = 6,
    ACTIONS(428), 1,
      anon_sym_DOLLAR2,
    ACTIONS(468), 1,
      anon_sym_LF,
    ACTIONS(470), 1,
      aux_sym_path_token3,
    ACTIONS(472), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1965] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(474), 1,
      aux_sym_path_token1,
    ACTIONS(476), 1,
      aux_sym_path_token2,
    ACTIONS(478), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_expansion,
    STATE(200), 1,
      sym_path,
    STATE(274), 1,
      sym_json_string_array,
  [1993] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(482), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2009] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(486), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2025] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym_path_token1,
    ACTIONS(492), 1,
      anon_sym_DASH_DASH,
    STATE(77), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
    ACTIONS(490), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [2047] = 6,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(495), 1,
      anon_sym_NONE,
    ACTIONS(497), 1,
      anon_sym_DASH_DASH,
    STATE(304), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(130), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2068] = 5,
    ACTIONS(376), 1,
      sym__non_newline_whitespace,
    ACTIONS(499), 1,
      aux_sym_path_token3,
    ACTIONS(502), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(79), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2087] = 7,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(509), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_AT,
    STATE(160), 1,
      sym_image_tag,
    STATE(249), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [2110] = 5,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(518), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(81), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2129] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(486), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(484), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2144] = 5,
    ACTIONS(472), 1,
      anon_sym_LF,
    ACTIONS(521), 1,
      aux_sym_path_token3,
    ACTIONS(523), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(89), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2163] = 5,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      anon_sym_DOLLAR2,
    ACTIONS(530), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(84), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2182] = 5,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
    ACTIONS(537), 1,
      aux_sym_expose_port_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(87), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2201] = 5,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      anon_sym_DOLLAR2,
    ACTIONS(543), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(84), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2220] = 5,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      anon_sym_DOLLAR,
    ACTIONS(550), 1,
      aux_sym_expose_port_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(87), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2239] = 5,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(557), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(95), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2258] = 5,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      aux_sym_path_token3,
    ACTIONS(562), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(89), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2277] = 5,
    ACTIONS(258), 1,
      anon_sym_DOLLAR2,
    ACTIONS(410), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(59), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [2296] = 5,
    ACTIONS(350), 1,
      sym__non_newline_whitespace,
    ACTIONS(565), 1,
      aux_sym_path_token3,
    ACTIONS(567), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(79), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2315] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(571), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(569), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2330] = 5,
    ACTIONS(430), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      anon_sym_DOLLAR2,
    ACTIONS(573), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2349] = 5,
    ACTIONS(338), 1,
      sym__non_newline_whitespace,
    ACTIONS(567), 1,
      anon_sym_DOLLAR2,
    ACTIONS(575), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(91), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2368] = 5,
    ACTIONS(557), 1,
      anon_sym_DOLLAR2,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(81), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2387] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(482), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(480), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2402] = 5,
    ACTIONS(541), 1,
      anon_sym_DOLLAR2,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(86), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2421] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(486), 3,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2435] = 5,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      sym_single_quoted_escape_sequence,
    STATE(113), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2453] = 5,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      sym__non_newline_whitespace,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(149), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2471] = 4,
    ACTIONS(597), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(601), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2487] = 5,
    ACTIONS(593), 1,
      sym__non_newline_whitespace,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(156), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2505] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_path_token1,
    ACTIONS(476), 1,
      aux_sym_path_token2,
    ACTIONS(478), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_expansion,
    STATE(244), 1,
      sym_path,
  [2527] = 5,
    ACTIONS(605), 1,
      aux_sym__env_key_token1,
    STATE(246), 1,
      sym__env_key,
    STATE(278), 1,
      sym__spaced_env_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(106), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2545] = 4,
    ACTIONS(607), 1,
      anon_sym_DOLLAR,
    ACTIONS(609), 1,
      aux_sym_expose_port_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(85), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2561] = 5,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(613), 1,
      aux_sym__env_key_token1,
    STATE(265), 1,
      sym__env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(126), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2579] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      aux_sym_image_name_token1,
    STATE(21), 1,
      sym_expansion,
    STATE(80), 1,
      sym_image_name,
    STATE(250), 1,
      sym_image_spec,
  [2601] = 5,
    ACTIONS(589), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2619] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_DOLLAR2,
    ACTIONS(617), 1,
      aux_sym_image_tag_token1,
    STATE(29), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2637] = 4,
    ACTIONS(396), 1,
      anon_sym_DOLLAR2,
    ACTIONS(619), 1,
      aux_sym_image_digest_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2653] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(482), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [2667] = 5,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      sym_single_quoted_escape_sequence,
    STATE(108), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2685] = 5,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      sym_single_quoted_escape_sequence,
    STATE(113), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2703] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(464), 1,
      aux_sym_path_token1,
    ACTIONS(466), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [2719] = 5,
    ACTIONS(593), 1,
      sym__non_newline_whitespace,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(635), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(134), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2737] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(569), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2751] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(482), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(480), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2765] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(486), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [2779] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(484), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2793] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(482), 3,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2807] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(486), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(484), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2821] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(482), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2835] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(480), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2849] = 5,
    ACTIONS(593), 1,
      sym__non_newline_whitespace,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(135), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2867] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(486), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2881] = 5,
    ACTIONS(639), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      aux_sym__env_key_token1,
    STATE(265), 1,
      sym__env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(126), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2899] = 5,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(648), 1,
      sym_single_quoted_escape_sequence,
    STATE(128), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2917] = 5,
    ACTIONS(589), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2935] = 5,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
    ACTIONS(656), 1,
      sym_single_quoted_escape_sequence,
    STATE(99), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(652), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2953] = 5,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(497), 1,
      anon_sym_DASH_DASH,
    STATE(280), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(155), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2971] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(658), 1,
      aux_sym_path_token1,
    ACTIONS(660), 1,
      aux_sym_path_token2,
    ACTIONS(662), 1,
      anon_sym_DOLLAR,
    STATE(93), 1,
      sym_expansion,
    STATE(279), 1,
      sym_path,
  [2993] = 3,
    ACTIONS(482), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3006] = 4,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(158), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3021] = 4,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(666), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(157), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3036] = 4,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(157), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3051] = 4,
    ACTIONS(672), 1,
      sym_required_line_continuation,
    STATE(145), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(670), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3066] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(571), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3079] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(482), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3092] = 5,
    ACTIONS(674), 1,
      anon_sym_DOLLAR,
    ACTIONS(676), 1,
      aux_sym_image_alias_token1,
    STATE(97), 1,
      sym_expansion,
    STATE(294), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3109] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(486), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3122] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(569), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3133] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3144] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3155] = 5,
    ACTIONS(678), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_expansion,
    STATE(245), 1,
      sym__user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3172] = 4,
    ACTIONS(672), 1,
      sym_required_line_continuation,
    STATE(159), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(682), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3187] = 5,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    ACTIONS(686), 1,
      aux_sym_json_string_token1,
    ACTIONS(689), 1,
      sym_json_escape_sequence,
    STATE(146), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3204] = 5,
    ACTIONS(692), 1,
      anon_sym_DQUOTE,
    ACTIONS(694), 1,
      aux_sym_json_string_token1,
    ACTIONS(696), 1,
      sym_json_escape_sequence,
    STATE(154), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3221] = 5,
    ACTIONS(698), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(700), 1,
      anon_sym_DOLLAR,
    STATE(88), 1,
      sym_expansion,
    STATE(259), 1,
      sym__stopsignal_value,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3238] = 4,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(702), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(157), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3253] = 5,
    ACTIONS(674), 1,
      anon_sym_DOLLAR,
    ACTIONS(676), 1,
      aux_sym_image_alias_token1,
    STATE(97), 1,
      sym_expansion,
    STATE(266), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3270] = 3,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(706), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3283] = 3,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(710), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3296] = 3,
    ACTIONS(486), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3309] = 5,
    ACTIONS(712), 1,
      anon_sym_DQUOTE,
    ACTIONS(714), 1,
      aux_sym_json_string_token1,
    ACTIONS(716), 1,
      sym_json_escape_sequence,
    STATE(146), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3326] = 4,
    ACTIONS(490), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(718), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(155), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [3341] = 4,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(721), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(157), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3356] = 4,
    ACTIONS(723), 1,
      anon_sym_LF,
    ACTIONS(725), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(157), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3371] = 4,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(157), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3386] = 4,
    ACTIONS(732), 1,
      sym_required_line_continuation,
    STATE(159), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(730), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3401] = 5,
    ACTIONS(511), 1,
      anon_sym_AT,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(737), 1,
      aux_sym_from_instruction_token2,
    STATE(251), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3418] = 3,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3431] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(743), 1,
      aux_sym_path_token1,
    ACTIONS(745), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [3446] = 3,
    ACTIONS(747), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(749), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3459] = 4,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(751), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(157), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3474] = 3,
    ACTIONS(753), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(755), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3487] = 4,
    ACTIONS(595), 1,
      sym_heredoc_nl,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(164), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3502] = 3,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3514] = 4,
    ACTIONS(757), 1,
      anon_sym_COMMA2,
    ACTIONS(760), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3528] = 4,
    ACTIONS(762), 1,
      sym_heredoc_line,
    ACTIONS(765), 1,
      sym_heredoc_end,
    STATE(169), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3542] = 4,
    ACTIONS(767), 1,
      anon_sym_LF,
    ACTIONS(769), 1,
      sym__non_newline_whitespace,
    STATE(171), 1,
      aux_sym__spaced_env_value_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3556] = 4,
    ACTIONS(771), 1,
      anon_sym_LF,
    ACTIONS(773), 1,
      sym__non_newline_whitespace,
    STATE(171), 1,
      aux_sym__spaced_env_value_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3570] = 4,
    ACTIONS(670), 1,
      anon_sym_LF,
    ACTIONS(776), 1,
      sym_required_line_continuation,
    STATE(177), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3584] = 3,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(338), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
  [3596] = 4,
    ACTIONS(778), 1,
      anon_sym_LF,
    ACTIONS(780), 1,
      sym__non_newline_whitespace,
    STATE(203), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3610] = 4,
    ACTIONS(782), 1,
      anon_sym_LBRACE,
    ACTIONS(784), 1,
      sym_variable,
    STATE(96), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3624] = 4,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      sym_variable,
    STATE(111), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3638] = 4,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(776), 1,
      sym_required_line_continuation,
    STATE(178), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3652] = 4,
    ACTIONS(730), 1,
      anon_sym_LF,
    ACTIONS(790), 1,
      sym_required_line_continuation,
    STATE(178), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3666] = 3,
    ACTIONS(484), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3678] = 3,
    ACTIONS(571), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3690] = 3,
    ACTIONS(482), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3702] = 3,
    ACTIONS(486), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3714] = 4,
    ACTIONS(793), 1,
      anon_sym_COMMA2,
    ACTIONS(795), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3728] = 4,
    ACTIONS(797), 1,
      sym_heredoc_line,
    ACTIONS(799), 1,
      sym_heredoc_end,
    STATE(169), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3742] = 3,
    ACTIONS(801), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(730), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3754] = 4,
    ACTIONS(793), 1,
      anon_sym_COMMA2,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3768] = 3,
    ACTIONS(571), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3780] = 3,
    ACTIONS(482), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3792] = 3,
    ACTIONS(486), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3804] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(569), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3814] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3824] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3834] = 4,
    ACTIONS(797), 1,
      sym_heredoc_line,
    ACTIONS(805), 1,
      sym_heredoc_end,
    STATE(184), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3848] = 4,
    ACTIONS(807), 1,
      anon_sym_RBRACK,
    ACTIONS(809), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3862] = 3,
    ACTIONS(811), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3874] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3884] = 4,
    ACTIONS(769), 1,
      sym__non_newline_whitespace,
    ACTIONS(815), 1,
      anon_sym_LF,
    STATE(170), 1,
      aux_sym__spaced_env_value_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3898] = 4,
    ACTIONS(782), 1,
      anon_sym_LBRACE,
    ACTIONS(817), 1,
      sym_variable,
    STATE(92), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3912] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3922] = 4,
    ACTIONS(780), 1,
      sym__non_newline_whitespace,
    ACTIONS(819), 1,
      anon_sym_LF,
    STATE(174), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3936] = 4,
    ACTIONS(821), 1,
      anon_sym_LBRACE,
    ACTIONS(823), 1,
      sym_variable,
    STATE(167), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3950] = 4,
    ACTIONS(809), 1,
      anon_sym_DQUOTE,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3964] = 4,
    ACTIONS(827), 1,
      anon_sym_LF,
    ACTIONS(829), 1,
      sym__non_newline_whitespace,
    STATE(203), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3978] = 4,
    ACTIONS(793), 1,
      anon_sym_COMMA2,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3992] = 4,
    ACTIONS(793), 1,
      anon_sym_COMMA2,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4006] = 4,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(838), 1,
      sym_variable,
    STATE(181), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4020] = 4,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      sym_variable,
    STATE(180), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4034] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(842), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4044] = 4,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(846), 1,
      sym_variable,
    STATE(138), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4058] = 4,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      sym_variable,
    STATE(137), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4072] = 4,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    ACTIONS(852), 1,
      sym_variable,
    STATE(142), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4086] = 4,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      sym_variable,
    STATE(141), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4100] = 4,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(858), 1,
      sym_variable,
    STATE(188), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4114] = 4,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(860), 1,
      sym_variable,
    STATE(187), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4128] = 4,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      sym_variable,
    STATE(191), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4142] = 4,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(866), 1,
      sym_variable,
    STATE(190), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4156] = 4,
    ACTIONS(868), 1,
      anon_sym_LBRACE,
    ACTIONS(870), 1,
      sym_variable,
    STATE(117), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4170] = 4,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 1,
      sym_variable,
    STATE(116), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4184] = 4,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(878), 1,
      sym_variable,
    STATE(132), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4198] = 4,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    ACTIONS(882), 1,
      sym_variable,
    STATE(226), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4212] = 4,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    ACTIONS(886), 1,
      sym_variable,
    STATE(75), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4226] = 4,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    ACTIONS(890), 1,
      sym_variable,
    STATE(120), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4240] = 4,
    ACTIONS(892), 1,
      anon_sym_LBRACE,
    ACTIONS(894), 1,
      sym_variable,
    STATE(122), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4254] = 4,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      sym_variable,
    STATE(123), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4268] = 4,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    ACTIONS(898), 1,
      sym_variable,
    STATE(199), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4282] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(569), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4292] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(464), 1,
      aux_sym_image_name_token1,
    ACTIONS(466), 1,
      anon_sym_DOLLAR,
  [4305] = 3,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(710), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4316] = 3,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(741), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4327] = 3,
    ACTIONS(747), 1,
      anon_sym_LF,
    ACTIONS(749), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4338] = 3,
    ACTIONS(809), 1,
      anon_sym_DQUOTE,
    STATE(242), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4349] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(900), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4358] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(902), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4367] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(904), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4376] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(466), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4385] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(271), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4396] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_mount_param_param_token1,
    STATE(43), 1,
      sym_mount_param_param,
  [4409] = 3,
    ACTIONS(771), 1,
      anon_sym_LF,
    ACTIONS(908), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4420] = 3,
    ACTIONS(910), 1,
      anon_sym_LF,
    ACTIONS(912), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4431] = 3,
    ACTIONS(914), 1,
      anon_sym_LF,
    ACTIONS(916), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4442] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(918), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4451] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(760), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4460] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(920), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4469] = 3,
    ACTIONS(827), 1,
      anon_sym_LF,
    ACTIONS(922), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4480] = 3,
    ACTIONS(924), 1,
      anon_sym_LF,
    ACTIONS(926), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4491] = 3,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(930), 1,
      aux_sym__spaced_env_pair_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4502] = 3,
    ACTIONS(730), 1,
      anon_sym_LF,
    ACTIONS(801), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4513] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(765), 2,
      sym_heredoc_line,
      sym_heredoc_end,
  [4522] = 3,
    ACTIONS(932), 1,
      anon_sym_LF,
    ACTIONS(934), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4533] = 3,
    ACTIONS(936), 1,
      anon_sym_LF,
    ACTIONS(938), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4544] = 3,
    ACTIONS(940), 1,
      anon_sym_LF,
    ACTIONS(942), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4555] = 3,
    ACTIONS(944), 1,
      aux_sym_param_token1,
    ACTIONS(946), 1,
      anon_sym_mount,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4566] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(948), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4575] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_mount_param_param_token1,
    STATE(26), 1,
      sym_mount_param_param,
  [4588] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(950), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4597] = 3,
    ACTIONS(952), 1,
      anon_sym_LF,
    ACTIONS(954), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4608] = 3,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4619] = 2,
    ACTIONS(956), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4627] = 2,
    ACTIONS(958), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4635] = 2,
    ACTIONS(960), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4643] = 2,
    ACTIONS(962), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4651] = 2,
    ACTIONS(964), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4659] = 2,
    ACTIONS(966), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4667] = 2,
    ACTIONS(968), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4675] = 2,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4683] = 2,
    ACTIONS(970), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4691] = 2,
    ACTIONS(704), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4699] = 2,
    ACTIONS(972), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4707] = 2,
    ACTIONS(974), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4715] = 2,
    ACTIONS(593), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4723] = 2,
    ACTIONS(976), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4731] = 2,
    ACTIONS(978), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4739] = 2,
    ACTIONS(904), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4747] = 2,
    ACTIONS(980), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4755] = 2,
    ACTIONS(708), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4763] = 2,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4771] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(984), 1,
      aux_sym_param_token2,
  [4781] = 2,
    ACTIONS(986), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4789] = 2,
    ACTIONS(988), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4797] = 2,
    ACTIONS(990), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4805] = 2,
    ACTIONS(992), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4813] = 2,
    ACTIONS(994), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4821] = 2,
    ACTIONS(996), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4829] = 2,
    ACTIONS(998), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4837] = 2,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4845] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym_param_token2,
  [4855] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1004), 1,
      aux_sym_mount_param_param_token1,
  [4865] = 2,
    ACTIONS(1006), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4873] = 2,
    ACTIONS(1008), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4881] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1010), 1,
      aux_sym_param_token2,
  [4891] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1012), 1,
      aux_sym_param_token2,
  [4901] = 2,
    ACTIONS(338), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4909] = 2,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4917] = 2,
    ACTIONS(1016), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4925] = 2,
    ACTIONS(900), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4933] = 2,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4941] = 2,
    ACTIONS(1020), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4949] = 2,
    ACTIONS(1022), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4957] = 2,
    ACTIONS(1024), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4965] = 2,
    ACTIONS(1026), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4973] = 2,
    ACTIONS(1028), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4981] = 2,
    ACTIONS(1030), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4989] = 2,
    ACTIONS(1032), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4997] = 2,
    ACTIONS(1034), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5005] = 2,
    ACTIONS(1036), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5013] = 2,
    ACTIONS(739), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5021] = 2,
    ACTIONS(1038), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5029] = 2,
    ACTIONS(1040), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5037] = 2,
    ACTIONS(1042), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5045] = 2,
    ACTIONS(920), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5053] = 2,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5061] = 2,
    ACTIONS(1046), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5069] = 2,
    ACTIONS(1048), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5077] = 2,
    ACTIONS(747), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5085] = 2,
    ACTIONS(1050), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5093] = 2,
    ACTIONS(1052), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5101] = 2,
    ACTIONS(1054), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5109] = 2,
    ACTIONS(1056), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5117] = 2,
    ACTIONS(1058), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5125] = 2,
    ACTIONS(1060), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5133] = 2,
    ACTIONS(1062), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5141] = 2,
    ACTIONS(1064), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5149] = 2,
    ACTIONS(1066), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5157] = 2,
    ACTIONS(1068), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5165] = 2,
    ACTIONS(1070), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5173] = 2,
    ACTIONS(1072), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5181] = 2,
    ACTIONS(1074), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5189] = 2,
    ACTIONS(1076), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5197] = 2,
    ACTIONS(1078), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5205] = 2,
    ACTIONS(1080), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5213] = 2,
    ACTIONS(1082), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5221] = 2,
    ACTIONS(1084), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5229] = 2,
    ACTIONS(1086), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5237] = 2,
    ACTIONS(1088), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5245] = 2,
    ACTIONS(1090), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5253] = 2,
    ACTIONS(1092), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 264,
  [SMALL_STATE(6)] = 291,
  [SMALL_STATE(7)] = 326,
  [SMALL_STATE(8)] = 361,
  [SMALL_STATE(9)] = 395,
  [SMALL_STATE(10)] = 428,
  [SMALL_STATE(11)] = 458,
  [SMALL_STATE(12)] = 488,
  [SMALL_STATE(13)] = 517,
  [SMALL_STATE(14)] = 552,
  [SMALL_STATE(15)] = 587,
  [SMALL_STATE(16)] = 622,
  [SMALL_STATE(17)] = 651,
  [SMALL_STATE(18)] = 686,
  [SMALL_STATE(19)] = 711,
  [SMALL_STATE(20)] = 734,
  [SMALL_STATE(21)] = 759,
  [SMALL_STATE(22)] = 783,
  [SMALL_STATE(23)] = 807,
  [SMALL_STATE(24)] = 831,
  [SMALL_STATE(25)] = 855,
  [SMALL_STATE(26)] = 879,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 923,
  [SMALL_STATE(29)] = 945,
  [SMALL_STATE(30)] = 968,
  [SMALL_STATE(31)] = 991,
  [SMALL_STATE(32)] = 1012,
  [SMALL_STATE(33)] = 1029,
  [SMALL_STATE(34)] = 1052,
  [SMALL_STATE(35)] = 1077,
  [SMALL_STATE(36)] = 1098,
  [SMALL_STATE(37)] = 1121,
  [SMALL_STATE(38)] = 1144,
  [SMALL_STATE(39)] = 1165,
  [SMALL_STATE(40)] = 1188,
  [SMALL_STATE(41)] = 1213,
  [SMALL_STATE(42)] = 1236,
  [SMALL_STATE(43)] = 1253,
  [SMALL_STATE(44)] = 1270,
  [SMALL_STATE(45)] = 1293,
  [SMALL_STATE(46)] = 1316,
  [SMALL_STATE(47)] = 1339,
  [SMALL_STATE(48)] = 1362,
  [SMALL_STATE(49)] = 1385,
  [SMALL_STATE(50)] = 1408,
  [SMALL_STATE(51)] = 1431,
  [SMALL_STATE(52)] = 1454,
  [SMALL_STATE(53)] = 1477,
  [SMALL_STATE(54)] = 1500,
  [SMALL_STATE(55)] = 1523,
  [SMALL_STATE(56)] = 1545,
  [SMALL_STATE(57)] = 1573,
  [SMALL_STATE(58)] = 1595,
  [SMALL_STATE(59)] = 1623,
  [SMALL_STATE(60)] = 1645,
  [SMALL_STATE(61)] = 1667,
  [SMALL_STATE(62)] = 1689,
  [SMALL_STATE(63)] = 1711,
  [SMALL_STATE(64)] = 1733,
  [SMALL_STATE(65)] = 1755,
  [SMALL_STATE(66)] = 1783,
  [SMALL_STATE(67)] = 1799,
  [SMALL_STATE(68)] = 1821,
  [SMALL_STATE(69)] = 1849,
  [SMALL_STATE(70)] = 1877,
  [SMALL_STATE(71)] = 1905,
  [SMALL_STATE(72)] = 1927,
  [SMALL_STATE(73)] = 1943,
  [SMALL_STATE(74)] = 1965,
  [SMALL_STATE(75)] = 1993,
  [SMALL_STATE(76)] = 2009,
  [SMALL_STATE(77)] = 2025,
  [SMALL_STATE(78)] = 2047,
  [SMALL_STATE(79)] = 2068,
  [SMALL_STATE(80)] = 2087,
  [SMALL_STATE(81)] = 2110,
  [SMALL_STATE(82)] = 2129,
  [SMALL_STATE(83)] = 2144,
  [SMALL_STATE(84)] = 2163,
  [SMALL_STATE(85)] = 2182,
  [SMALL_STATE(86)] = 2201,
  [SMALL_STATE(87)] = 2220,
  [SMALL_STATE(88)] = 2239,
  [SMALL_STATE(89)] = 2258,
  [SMALL_STATE(90)] = 2277,
  [SMALL_STATE(91)] = 2296,
  [SMALL_STATE(92)] = 2315,
  [SMALL_STATE(93)] = 2330,
  [SMALL_STATE(94)] = 2349,
  [SMALL_STATE(95)] = 2368,
  [SMALL_STATE(96)] = 2387,
  [SMALL_STATE(97)] = 2402,
  [SMALL_STATE(98)] = 2421,
  [SMALL_STATE(99)] = 2435,
  [SMALL_STATE(100)] = 2453,
  [SMALL_STATE(101)] = 2471,
  [SMALL_STATE(102)] = 2487,
  [SMALL_STATE(103)] = 2505,
  [SMALL_STATE(104)] = 2527,
  [SMALL_STATE(105)] = 2545,
  [SMALL_STATE(106)] = 2561,
  [SMALL_STATE(107)] = 2579,
  [SMALL_STATE(108)] = 2601,
  [SMALL_STATE(109)] = 2619,
  [SMALL_STATE(110)] = 2637,
  [SMALL_STATE(111)] = 2653,
  [SMALL_STATE(112)] = 2667,
  [SMALL_STATE(113)] = 2685,
  [SMALL_STATE(114)] = 2703,
  [SMALL_STATE(115)] = 2719,
  [SMALL_STATE(116)] = 2737,
  [SMALL_STATE(117)] = 2751,
  [SMALL_STATE(118)] = 2765,
  [SMALL_STATE(119)] = 2779,
  [SMALL_STATE(120)] = 2793,
  [SMALL_STATE(121)] = 2807,
  [SMALL_STATE(122)] = 2821,
  [SMALL_STATE(123)] = 2835,
  [SMALL_STATE(124)] = 2849,
  [SMALL_STATE(125)] = 2867,
  [SMALL_STATE(126)] = 2881,
  [SMALL_STATE(127)] = 2899,
  [SMALL_STATE(128)] = 2917,
  [SMALL_STATE(129)] = 2935,
  [SMALL_STATE(130)] = 2953,
  [SMALL_STATE(131)] = 2971,
  [SMALL_STATE(132)] = 2993,
  [SMALL_STATE(133)] = 3006,
  [SMALL_STATE(134)] = 3021,
  [SMALL_STATE(135)] = 3036,
  [SMALL_STATE(136)] = 3051,
  [SMALL_STATE(137)] = 3066,
  [SMALL_STATE(138)] = 3079,
  [SMALL_STATE(139)] = 3092,
  [SMALL_STATE(140)] = 3109,
  [SMALL_STATE(141)] = 3122,
  [SMALL_STATE(142)] = 3133,
  [SMALL_STATE(143)] = 3144,
  [SMALL_STATE(144)] = 3155,
  [SMALL_STATE(145)] = 3172,
  [SMALL_STATE(146)] = 3187,
  [SMALL_STATE(147)] = 3204,
  [SMALL_STATE(148)] = 3221,
  [SMALL_STATE(149)] = 3238,
  [SMALL_STATE(150)] = 3253,
  [SMALL_STATE(151)] = 3270,
  [SMALL_STATE(152)] = 3283,
  [SMALL_STATE(153)] = 3296,
  [SMALL_STATE(154)] = 3309,
  [SMALL_STATE(155)] = 3326,
  [SMALL_STATE(156)] = 3341,
  [SMALL_STATE(157)] = 3356,
  [SMALL_STATE(158)] = 3371,
  [SMALL_STATE(159)] = 3386,
  [SMALL_STATE(160)] = 3401,
  [SMALL_STATE(161)] = 3418,
  [SMALL_STATE(162)] = 3431,
  [SMALL_STATE(163)] = 3446,
  [SMALL_STATE(164)] = 3459,
  [SMALL_STATE(165)] = 3474,
  [SMALL_STATE(166)] = 3487,
  [SMALL_STATE(167)] = 3502,
  [SMALL_STATE(168)] = 3514,
  [SMALL_STATE(169)] = 3528,
  [SMALL_STATE(170)] = 3542,
  [SMALL_STATE(171)] = 3556,
  [SMALL_STATE(172)] = 3570,
  [SMALL_STATE(173)] = 3584,
  [SMALL_STATE(174)] = 3596,
  [SMALL_STATE(175)] = 3610,
  [SMALL_STATE(176)] = 3624,
  [SMALL_STATE(177)] = 3638,
  [SMALL_STATE(178)] = 3652,
  [SMALL_STATE(179)] = 3666,
  [SMALL_STATE(180)] = 3678,
  [SMALL_STATE(181)] = 3690,
  [SMALL_STATE(182)] = 3702,
  [SMALL_STATE(183)] = 3714,
  [SMALL_STATE(184)] = 3728,
  [SMALL_STATE(185)] = 3742,
  [SMALL_STATE(186)] = 3754,
  [SMALL_STATE(187)] = 3768,
  [SMALL_STATE(188)] = 3780,
  [SMALL_STATE(189)] = 3792,
  [SMALL_STATE(190)] = 3804,
  [SMALL_STATE(191)] = 3814,
  [SMALL_STATE(192)] = 3824,
  [SMALL_STATE(193)] = 3834,
  [SMALL_STATE(194)] = 3848,
  [SMALL_STATE(195)] = 3862,
  [SMALL_STATE(196)] = 3874,
  [SMALL_STATE(197)] = 3884,
  [SMALL_STATE(198)] = 3898,
  [SMALL_STATE(199)] = 3912,
  [SMALL_STATE(200)] = 3922,
  [SMALL_STATE(201)] = 3936,
  [SMALL_STATE(202)] = 3950,
  [SMALL_STATE(203)] = 3964,
  [SMALL_STATE(204)] = 3978,
  [SMALL_STATE(205)] = 3992,
  [SMALL_STATE(206)] = 4006,
  [SMALL_STATE(207)] = 4020,
  [SMALL_STATE(208)] = 4034,
  [SMALL_STATE(209)] = 4044,
  [SMALL_STATE(210)] = 4058,
  [SMALL_STATE(211)] = 4072,
  [SMALL_STATE(212)] = 4086,
  [SMALL_STATE(213)] = 4100,
  [SMALL_STATE(214)] = 4114,
  [SMALL_STATE(215)] = 4128,
  [SMALL_STATE(216)] = 4142,
  [SMALL_STATE(217)] = 4156,
  [SMALL_STATE(218)] = 4170,
  [SMALL_STATE(219)] = 4184,
  [SMALL_STATE(220)] = 4198,
  [SMALL_STATE(221)] = 4212,
  [SMALL_STATE(222)] = 4226,
  [SMALL_STATE(223)] = 4240,
  [SMALL_STATE(224)] = 4254,
  [SMALL_STATE(225)] = 4268,
  [SMALL_STATE(226)] = 4282,
  [SMALL_STATE(227)] = 4292,
  [SMALL_STATE(228)] = 4305,
  [SMALL_STATE(229)] = 4316,
  [SMALL_STATE(230)] = 4327,
  [SMALL_STATE(231)] = 4338,
  [SMALL_STATE(232)] = 4349,
  [SMALL_STATE(233)] = 4358,
  [SMALL_STATE(234)] = 4367,
  [SMALL_STATE(235)] = 4376,
  [SMALL_STATE(236)] = 4385,
  [SMALL_STATE(237)] = 4396,
  [SMALL_STATE(238)] = 4409,
  [SMALL_STATE(239)] = 4420,
  [SMALL_STATE(240)] = 4431,
  [SMALL_STATE(241)] = 4442,
  [SMALL_STATE(242)] = 4451,
  [SMALL_STATE(243)] = 4460,
  [SMALL_STATE(244)] = 4469,
  [SMALL_STATE(245)] = 4480,
  [SMALL_STATE(246)] = 4491,
  [SMALL_STATE(247)] = 4502,
  [SMALL_STATE(248)] = 4513,
  [SMALL_STATE(249)] = 4522,
  [SMALL_STATE(250)] = 4533,
  [SMALL_STATE(251)] = 4544,
  [SMALL_STATE(252)] = 4555,
  [SMALL_STATE(253)] = 4566,
  [SMALL_STATE(254)] = 4575,
  [SMALL_STATE(255)] = 4588,
  [SMALL_STATE(256)] = 4597,
  [SMALL_STATE(257)] = 4608,
  [SMALL_STATE(258)] = 4619,
  [SMALL_STATE(259)] = 4627,
  [SMALL_STATE(260)] = 4635,
  [SMALL_STATE(261)] = 4643,
  [SMALL_STATE(262)] = 4651,
  [SMALL_STATE(263)] = 4659,
  [SMALL_STATE(264)] = 4667,
  [SMALL_STATE(265)] = 4675,
  [SMALL_STATE(266)] = 4683,
  [SMALL_STATE(267)] = 4691,
  [SMALL_STATE(268)] = 4699,
  [SMALL_STATE(269)] = 4707,
  [SMALL_STATE(270)] = 4715,
  [SMALL_STATE(271)] = 4723,
  [SMALL_STATE(272)] = 4731,
  [SMALL_STATE(273)] = 4739,
  [SMALL_STATE(274)] = 4747,
  [SMALL_STATE(275)] = 4755,
  [SMALL_STATE(276)] = 4763,
  [SMALL_STATE(277)] = 4771,
  [SMALL_STATE(278)] = 4781,
  [SMALL_STATE(279)] = 4789,
  [SMALL_STATE(280)] = 4797,
  [SMALL_STATE(281)] = 4805,
  [SMALL_STATE(282)] = 4813,
  [SMALL_STATE(283)] = 4821,
  [SMALL_STATE(284)] = 4829,
  [SMALL_STATE(285)] = 4837,
  [SMALL_STATE(286)] = 4845,
  [SMALL_STATE(287)] = 4855,
  [SMALL_STATE(288)] = 4865,
  [SMALL_STATE(289)] = 4873,
  [SMALL_STATE(290)] = 4881,
  [SMALL_STATE(291)] = 4891,
  [SMALL_STATE(292)] = 4901,
  [SMALL_STATE(293)] = 4909,
  [SMALL_STATE(294)] = 4917,
  [SMALL_STATE(295)] = 4925,
  [SMALL_STATE(296)] = 4933,
  [SMALL_STATE(297)] = 4941,
  [SMALL_STATE(298)] = 4949,
  [SMALL_STATE(299)] = 4957,
  [SMALL_STATE(300)] = 4965,
  [SMALL_STATE(301)] = 4973,
  [SMALL_STATE(302)] = 4981,
  [SMALL_STATE(303)] = 4989,
  [SMALL_STATE(304)] = 4997,
  [SMALL_STATE(305)] = 5005,
  [SMALL_STATE(306)] = 5013,
  [SMALL_STATE(307)] = 5021,
  [SMALL_STATE(308)] = 5029,
  [SMALL_STATE(309)] = 5037,
  [SMALL_STATE(310)] = 5045,
  [SMALL_STATE(311)] = 5053,
  [SMALL_STATE(312)] = 5061,
  [SMALL_STATE(313)] = 5069,
  [SMALL_STATE(314)] = 5077,
  [SMALL_STATE(315)] = 5085,
  [SMALL_STATE(316)] = 5093,
  [SMALL_STATE(317)] = 5101,
  [SMALL_STATE(318)] = 5109,
  [SMALL_STATE(319)] = 5117,
  [SMALL_STATE(320)] = 5125,
  [SMALL_STATE(321)] = 5133,
  [SMALL_STATE(322)] = 5141,
  [SMALL_STATE(323)] = 5149,
  [SMALL_STATE(324)] = 5157,
  [SMALL_STATE(325)] = 5165,
  [SMALL_STATE(326)] = 5173,
  [SMALL_STATE(327)] = 5181,
  [SMALL_STATE(328)] = 5189,
  [SMALL_STATE(329)] = 5197,
  [SMALL_STATE(330)] = 5205,
  [SMALL_STATE(331)] = 5213,
  [SMALL_STATE(332)] = 5221,
  [SMALL_STATE(333)] = 5229,
  [SMALL_STATE(334)] = 5237,
  [SMALL_STATE(335)] = 5245,
  [SMALL_STATE(336)] = 5253,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, 0, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, 0, 13),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, 0, 13),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, 0, 15),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, 0, 15),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, 0, 11),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0), SHIFT_REPEAT(208),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0), SHIFT_REPEAT(211),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(94),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(94),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(207),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(292),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, 0, 13),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 13),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, 0, 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, 0, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, 0, 0),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(193),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 5),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 5),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 9),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 9),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spaced_env_value, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__spaced_env_value_repeat1, 2, 0, 0),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__spaced_env_value_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [790] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spaced_env_pair, 3, 0, 10),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, 0, 0),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__spaced_env_value_repeat1, 2, 0, 0),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, 0, 0),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, 0, 10),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, 0, 10),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, 0, 3),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 6),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 6),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, 0, 0),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, 0, 8),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, 0, 8),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 3, 0, 0),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 4),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, 0, 10),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, 0, 0),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, 0, 14),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, 0, 0),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 12),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, 0, 7),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, 0, 0),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, 0, 0),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1046] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_heredoc_marker = 0,
  ts_external_token_heredoc_line = 1,
  ts_external_token_heredoc_end = 2,
  ts_external_token_heredoc_nl = 3,
  ts_external_token_error_sentinel = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc_marker] = sym_heredoc_marker,
  [ts_external_token_heredoc_line] = sym_heredoc_line,
  [ts_external_token_heredoc_end] = sym_heredoc_end,
  [ts_external_token_heredoc_nl] = sym_heredoc_nl,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
    [ts_external_token_heredoc_nl] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_heredoc_marker] = true,
  },
  [3] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_nl] = true,
  },
  [4] = {
    [ts_external_token_heredoc_nl] = true,
  },
  [5] = {
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dockerfile_external_scanner_create(void);
void tree_sitter_dockerfile_external_scanner_destroy(void *);
bool tree_sitter_dockerfile_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dockerfile_external_scanner_serialize(void *, char *);
void tree_sitter_dockerfile_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dockerfile(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dockerfile_external_scanner_create,
      tree_sitter_dockerfile_external_scanner_destroy,
      tree_sitter_dockerfile_external_scanner_scan,
      tree_sitter_dockerfile_external_scanner_serialize,
      tree_sitter_dockerfile_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
