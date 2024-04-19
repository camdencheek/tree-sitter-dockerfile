#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 340
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
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
  anon_sym_POUND = 66,
  anon_sym_LBRACK = 67,
  anon_sym_COMMA2 = 68,
  anon_sym_RBRACK = 69,
  anon_sym_DQUOTE = 70,
  aux_sym_json_string_token1 = 71,
  sym_json_escape_sequence = 72,
  aux_sym_double_quoted_string_token1 = 73,
  anon_sym_BSLASH = 74,
  anon_sym_SQUOTE = 75,
  aux_sym_single_quoted_string_token1 = 76,
  aux_sym_unquoted_string_token1 = 77,
  anon_sym_BSLASH2 = 78,
  sym_double_quoted_escape_sequence = 79,
  sym_single_quoted_escape_sequence = 80,
  sym__non_newline_whitespace = 81,
  sym_comment = 82,
  sym_heredoc_marker = 83,
  sym_heredoc_line = 84,
  sym_heredoc_end = 85,
  sym_heredoc_nl = 86,
  sym_error_sentinel = 87,
  sym_source_file = 88,
  sym__instruction = 89,
  sym_from_instruction = 90,
  sym_run_instruction = 91,
  sym_cmd_instruction = 92,
  sym_label_instruction = 93,
  sym_expose_instruction = 94,
  sym_env_instruction = 95,
  sym_add_instruction = 96,
  sym_copy_instruction = 97,
  sym_entrypoint_instruction = 98,
  sym_volume_instruction = 99,
  sym_user_instruction = 100,
  sym__user_name_or_group = 101,
  aux_sym__immediate_user_name_or_group = 102,
  sym__immediate_user_name_or_group_fragment = 103,
  sym_workdir_instruction = 104,
  sym_arg_instruction = 105,
  sym_onbuild_instruction = 106,
  sym_stopsignal_instruction = 107,
  sym__stopsignal_value = 108,
  sym_healthcheck_instruction = 109,
  sym_shell_instruction = 110,
  sym_maintainer_instruction = 111,
  sym_cross_build_instruction = 112,
  sym_heredoc_block = 113,
  sym_path = 114,
  sym_path_with_heredoc = 115,
  sym_expansion = 116,
  sym__immediate_expansion = 117,
  sym__imm_expansion = 118,
  sym__expansion_body = 119,
  sym_env_pair = 120,
  sym__spaced_env_pair = 121,
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
  sym__comment_line = 135,
  sym__anon_comment = 136,
  sym_json_string_array = 137,
  sym_json_string = 138,
  sym_double_quoted_string = 139,
  sym_single_quoted_string = 140,
  sym_unquoted_string = 141,
  aux_sym_source_file_repeat1 = 142,
  aux_sym_run_instruction_repeat1 = 143,
  aux_sym_run_instruction_repeat2 = 144,
  aux_sym_label_instruction_repeat1 = 145,
  aux_sym_expose_instruction_repeat1 = 146,
  aux_sym_env_instruction_repeat1 = 147,
  aux_sym_add_instruction_repeat1 = 148,
  aux_sym_add_instruction_repeat2 = 149,
  aux_sym_volume_instruction_repeat1 = 150,
  aux_sym__user_name_or_group_repeat1 = 151,
  aux_sym__stopsignal_value_repeat1 = 152,
  aux_sym_heredoc_block_repeat1 = 153,
  aux_sym_path_repeat1 = 154,
  aux_sym_image_name_repeat1 = 155,
  aux_sym_image_tag_repeat1 = 156,
  aux_sym_image_digest_repeat1 = 157,
  aux_sym_mount_param_repeat1 = 158,
  aux_sym_image_alias_repeat1 = 159,
  aux_sym_shell_command_repeat1 = 160,
  aux_sym_shell_command_repeat2 = 161,
  aux_sym_shell_fragment_repeat1 = 162,
  aux_sym_json_string_array_repeat1 = 163,
  aux_sym_json_string_repeat1 = 164,
  aux_sym_double_quoted_string_repeat1 = 165,
  aux_sym_single_quoted_string_repeat1 = 166,
  aux_sym_unquoted_string_repeat1 = 167,
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
  [sym__comment_line] = "_comment_line",
  [sym__anon_comment] = "comment",
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
  [sym__comment_line] = sym__comment_line,
  [sym__anon_comment] = sym_comment,
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
  [18] = 13,
  [19] = 16,
  [20] = 12,
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 30,
  [43] = 43,
  [44] = 39,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 25,
  [53] = 53,
  [54] = 46,
  [55] = 21,
  [56] = 56,
  [57] = 33,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 51,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 59,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 65,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 62,
  [89] = 59,
  [90] = 49,
  [91] = 56,
  [92] = 92,
  [93] = 66,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 72,
  [100] = 59,
  [101] = 101,
  [102] = 72,
  [103] = 103,
  [104] = 66,
  [105] = 72,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 66,
  [110] = 106,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 72,
  [115] = 103,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 66,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 72,
  [126] = 126,
  [127] = 103,
  [128] = 66,
  [129] = 53,
  [130] = 130,
  [131] = 106,
  [132] = 85,
  [133] = 133,
  [134] = 134,
  [135] = 66,
  [136] = 72,
  [137] = 137,
  [138] = 72,
  [139] = 139,
  [140] = 66,
  [141] = 141,
  [142] = 142,
  [143] = 85,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 85,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 66,
  [157] = 71,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 72,
  [170] = 66,
  [171] = 168,
  [172] = 172,
  [173] = 173,
  [174] = 66,
  [175] = 175,
  [176] = 72,
  [177] = 173,
  [178] = 85,
  [179] = 173,
  [180] = 173,
  [181] = 181,
  [182] = 173,
  [183] = 72,
  [184] = 184,
  [185] = 66,
  [186] = 85,
  [187] = 187,
  [188] = 72,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 85,
  [194] = 181,
  [195] = 195,
  [196] = 181,
  [197] = 173,
  [198] = 72,
  [199] = 181,
  [200] = 175,
  [201] = 66,
  [202] = 85,
  [203] = 162,
  [204] = 173,
  [205] = 181,
  [206] = 206,
  [207] = 173,
  [208] = 181,
  [209] = 85,
  [210] = 173,
  [211] = 211,
  [212] = 212,
  [213] = 173,
  [214] = 164,
  [215] = 215,
  [216] = 216,
  [217] = 181,
  [218] = 173,
  [219] = 219,
  [220] = 215,
  [221] = 181,
  [222] = 72,
  [223] = 181,
  [224] = 173,
  [225] = 173,
  [226] = 134,
  [227] = 154,
  [228] = 195,
  [229] = 229,
  [230] = 230,
  [231] = 184,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 191,
  [236] = 236,
  [237] = 237,
  [238] = 137,
  [239] = 160,
  [240] = 240,
  [241] = 147,
  [242] = 144,
  [243] = 243,
  [244] = 244,
  [245] = 53,
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
  [257] = 53,
  [258] = 258,
  [259] = 259,
  [260] = 233,
  [261] = 261,
  [262] = 206,
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
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 274,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 252,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 230,
  [292] = 283,
  [293] = 284,
  [294] = 294,
  [295] = 137,
  [296] = 283,
  [297] = 284,
  [298] = 160,
  [299] = 299,
  [300] = 283,
  [301] = 301,
  [302] = 283,
  [303] = 283,
  [304] = 284,
  [305] = 305,
  [306] = 283,
  [307] = 307,
  [308] = 308,
  [309] = 283,
  [310] = 310,
  [311] = 147,
  [312] = 283,
  [313] = 313,
  [314] = 283,
  [315] = 315,
  [316] = 283,
  [317] = 144,
  [318] = 283,
  [319] = 319,
  [320] = 283,
  [321] = 283,
  [322] = 285,
  [323] = 286,
  [324] = 285,
  [325] = 286,
  [326] = 285,
  [327] = 286,
  [328] = 285,
  [329] = 285,
  [330] = 285,
  [331] = 285,
  [332] = 285,
  [333] = 285,
  [334] = 285,
  [335] = 285,
  [336] = 285,
  [337] = 285,
  [338] = 279,
  [339] = 279,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '"', 261,
        '#', 257,
        '$', 209,
        '\'', 270,
        ',', 243,
        '-', 250,
        ':', 179,
        '<', 223,
        '=', 188,
        '@', 231,
        '[', 258,
        '\\', 267,
        ']', 260,
        '_', 215,
        '{', 210,
        '}', 214,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 255,
        'u', 159,
        '\t', 3,
        ' ', 3,
        '"', 264,
        '/', 264,
        '\\', 264,
        'b', 264,
        'f', 264,
        'n', 264,
        'r', 264,
        't', 264,
      );
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(253);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(279);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(21);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '\n', 166,
        '$', 208,
        '/', 65,
        ':', 179,
        '@', 231,
        '\\', 3,
        'A', 140,
        'a', 140,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(253);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(268);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(46);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(249);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(228);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(279);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(53);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '[') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(201);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(236);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 44:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 45:
      if (lookahead == '$') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 46:
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 50:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 55:
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 56:
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 57:
      if (lookahead == '\\') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(245);
      END_STATE();
    case 58:
      if (lookahead == '\\') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 59:
      if (lookahead == '\\') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
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
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(221);
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
          lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
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
          lookahead == 'g') ADVANCE(186);
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
          lookahead == 'k') ADVANCE(193);
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
          lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
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
          lookahead == 'm') ADVANCE(167);
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
          lookahead == 'n') ADVANCE(169);
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
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
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
          lookahead == 's') ADVANCE(168);
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
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(173);
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
          lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 154:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
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
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(207);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(203);
      END_STATE();
    case 162:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '"', 261,
        '#', 257,
        '$', 208,
        '\'', 270,
        ',', 259,
        '-', 250,
        '<', 223,
        '=', 201,
        '[', 258,
        '\\', 267,
        ']', 260,
        ':', 201,
        '@', 201,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(162);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 163:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '"', 261,
        '#', 280,
        '$', 208,
        ',', 259,
        '-', 47,
        '=', 188,
        'N', 51,
        '[', 258,
        '\\', 3,
        ']', 260,
        '}', 214,
        'A', 76,
        'a', 76,
        'C', 113,
        'c', 113,
        'E', 115,
        'e', 115,
        'F', 138,
        'f', 138,
        'H', 85,
        'h', 85,
        'L', 66,
        'l', 66,
        'M', 67,
        'm', 67,
        'O', 117,
        'o', 117,
        'R', 149,
        'r', 149,
        'S', 93,
        's', 93,
        'U', 141,
        'u', 141,
        'V', 122,
        'v', 122,
        'W', 124,
        'w', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      ADVANCE_MAP(
        '"', 261,
        '#', 280,
        '$', 208,
        ',', 259,
        '-', 47,
        'N', 51,
        '[', 258,
        '\\', 3,
        ']', 260,
        'A', 76,
        'a', 76,
        'C', 113,
        'c', 113,
        'E', 115,
        'e', 115,
        'F', 138,
        'f', 138,
        'H', 85,
        'h', 85,
        'L', 66,
        'l', 66,
        'M', 67,
        'm', 67,
        'O', 117,
        'o', 117,
        'R', 149,
        'r', 149,
        'S', 93,
        's', 93,
        'U', 141,
        'u', 141,
        'V', 122,
        'v', 122,
        'W', 124,
        'w', 124,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
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
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(199);
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
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_with_heredoc_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (lookahead == '-') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(204);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_required_line_continuation);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
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
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(277);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(278);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 163},
  [2] = {.lex_state = 163},
  [3] = {.lex_state = 163},
  [4] = {.lex_state = 163},
  [5] = {.lex_state = 163},
  [6] = {.lex_state = 32, .external_lex_state = 2},
  [7] = {.lex_state = 32, .external_lex_state = 2},
  [8] = {.lex_state = 33, .external_lex_state = 2},
  [9] = {.lex_state = 33, .external_lex_state = 2},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 32, .external_lex_state = 2},
  [12] = {.lex_state = 33, .external_lex_state = 2},
  [13] = {.lex_state = 33, .external_lex_state = 2},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 33, .external_lex_state = 2},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 33, .external_lex_state = 2},
  [19] = {.lex_state = 33, .external_lex_state = 2},
  [20] = {.lex_state = 33, .external_lex_state = 2},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 31, .external_lex_state = 2},
  [23] = {.lex_state = 31, .external_lex_state = 2},
  [24] = {.lex_state = 38, .external_lex_state = 2},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 38, .external_lex_state = 2},
  [27] = {.lex_state = 31, .external_lex_state = 2},
  [28] = {.lex_state = 38, .external_lex_state = 2},
  [29] = {.lex_state = 38, .external_lex_state = 2},
  [30] = {.lex_state = 19, .external_lex_state = 3},
  [31] = {.lex_state = 33, .external_lex_state = 2},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 19, .external_lex_state = 3},
  [34] = {.lex_state = 31, .external_lex_state = 2},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 31, .external_lex_state = 2},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 19, .external_lex_state = 2},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 15, .external_lex_state = 4},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 19, .external_lex_state = 3},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 32, .external_lex_state = 2},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 15, .external_lex_state = 4},
  [57] = {.lex_state = 19, .external_lex_state = 2},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 15, .external_lex_state = 4},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 38, .external_lex_state = 2},
  [64] = {.lex_state = 38, .external_lex_state = 2},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 19, .external_lex_state = 2},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 38, .external_lex_state = 2},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 38, .external_lex_state = 2},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 39},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 40},
  [78] = {.lex_state = 38, .external_lex_state = 2},
  [79] = {.lex_state = 38, .external_lex_state = 2},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 163},
  [96] = {.lex_state = 33, .external_lex_state = 2},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 163},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 15, .external_lex_state = 4},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 25},
  [107] = {.lex_state = 15, .external_lex_state = 4},
  [108] = {.lex_state = 15, .external_lex_state = 4},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 25},
  [111] = {.lex_state = 39},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 22},
  [114] = {.lex_state = 15, .external_lex_state = 4},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 163},
  [118] = {.lex_state = 15, .external_lex_state = 4},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 55},
  [121] = {.lex_state = 15, .external_lex_state = 4},
  [122] = {.lex_state = 35},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 36},
  [125] = {.lex_state = 24},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 38, .external_lex_state = 2},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 15, .external_lex_state = 4},
  [133] = {.lex_state = 42},
  [134] = {.lex_state = 19, .external_lex_state = 4},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 15},
  [139] = {.lex_state = 44},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 45},
  [142] = {.lex_state = 30},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 5, .external_lex_state = 4},
  [146] = {.lex_state = 5, .external_lex_state = 4},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 30},
  [149] = {.lex_state = 5, .external_lex_state = 4},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 17},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 5, .external_lex_state = 4},
  [154] = {.lex_state = 19, .external_lex_state = 4},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 163},
  [158] = {.lex_state = 30},
  [159] = {.lex_state = 38, .external_lex_state = 2},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 5, .external_lex_state = 4},
  [162] = {.lex_state = 19, .external_lex_state = 4},
  [163] = {.lex_state = 5, .external_lex_state = 4},
  [164] = {.lex_state = 19, .external_lex_state = 4},
  [165] = {.lex_state = 5, .external_lex_state = 4},
  [166] = {.lex_state = 5, .external_lex_state = 4},
  [167] = {.lex_state = 5, .external_lex_state = 4},
  [168] = {.lex_state = 19, .external_lex_state = 4},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 19},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 52},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 163},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 52},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 52},
  [180] = {.lex_state = 52},
  [181] = {.lex_state = 52},
  [182] = {.lex_state = 52},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 19, .external_lex_state = 4},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 163},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 0, .external_lex_state = 5},
  [191] = {.lex_state = 19, .external_lex_state = 4},
  [192] = {.lex_state = 0, .external_lex_state = 5},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 52},
  [195] = {.lex_state = 163},
  [196] = {.lex_state = 52},
  [197] = {.lex_state = 52},
  [198] = {.lex_state = 37},
  [199] = {.lex_state = 52},
  [200] = {.lex_state = 163},
  [201] = {.lex_state = 37},
  [202] = {.lex_state = 37},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 52},
  [205] = {.lex_state = 52},
  [206] = {.lex_state = 15, .external_lex_state = 4},
  [207] = {.lex_state = 52},
  [208] = {.lex_state = 52},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 52},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 52},
  [214] = {.lex_state = 19},
  [215] = {.lex_state = 163},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 52},
  [219] = {.lex_state = 0, .external_lex_state = 5},
  [220] = {.lex_state = 163},
  [221] = {.lex_state = 52},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 52},
  [224] = {.lex_state = 52},
  [225] = {.lex_state = 52},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 19},
  [228] = {.lex_state = 163},
  [229] = {.lex_state = 163},
  [230] = {.lex_state = 5, .external_lex_state = 4},
  [231] = {.lex_state = 19},
  [232] = {.lex_state = 163},
  [233] = {.lex_state = 5, .external_lex_state = 4},
  [234] = {.lex_state = 42},
  [235] = {.lex_state = 19},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 22},
  [239] = {.lex_state = 22},
  [240] = {.lex_state = 57},
  [241] = {.lex_state = 22},
  [242] = {.lex_state = 22},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 163},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 57},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 5, .external_lex_state = 4},
  [250] = {.lex_state = 5, .external_lex_state = 4},
  [251] = {.lex_state = 0, .external_lex_state = 5},
  [252] = {.lex_state = 5, .external_lex_state = 4},
  [253] = {.lex_state = 163},
  [254] = {.lex_state = 163},
  [255] = {.lex_state = 22},
  [256] = {.lex_state = 48},
  [257] = {.lex_state = 39},
  [258] = {.lex_state = 163},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 37},
  [262] = {.lex_state = 37},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 163},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 198},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 248},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 248},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 54},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 163},
  [284] = {.lex_state = 58},
  [285] = {.lex_state = 59},
  [286] = {.lex_state = 163},
  [287] = {.lex_state = 163},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 198},
  [290] = {.lex_state = 198},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 163},
  [293] = {.lex_state = 58},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 163},
  [296] = {.lex_state = 163},
  [297] = {.lex_state = 58},
  [298] = {.lex_state = 163},
  [299] = {.lex_state = 163},
  [300] = {.lex_state = 163},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 163},
  [303] = {.lex_state = 163},
  [304] = {.lex_state = 58},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 163},
  [307] = {.lex_state = 56},
  [308] = {.lex_state = 57},
  [309] = {.lex_state = 163},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 163},
  [312] = {.lex_state = 163},
  [313] = {.lex_state = 163},
  [314] = {.lex_state = 163},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 163},
  [317] = {.lex_state = 163},
  [318] = {.lex_state = 163},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 163},
  [321] = {.lex_state = 163},
  [322] = {.lex_state = 59},
  [323] = {.lex_state = 163},
  [324] = {.lex_state = 59},
  [325] = {.lex_state = 163},
  [326] = {.lex_state = 59},
  [327] = {.lex_state = 163},
  [328] = {.lex_state = 59},
  [329] = {.lex_state = 59},
  [330] = {.lex_state = 59},
  [331] = {.lex_state = 59},
  [332] = {.lex_state = 59},
  [333] = {.lex_state = 59},
  [334] = {.lex_state = 59},
  [335] = {.lex_state = 59},
  [336] = {.lex_state = 59},
  [337] = {.lex_state = 59},
  [338] = {.lex_state = 54},
  [339] = {.lex_state = 54},
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
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_heredoc_marker] = ACTIONS(1),
    [sym_heredoc_line] = ACTIONS(1),
    [sym_heredoc_end] = ACTIONS(1),
    [sym_heredoc_nl] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(282),
    [sym__instruction] = STATE(288),
    [sym_from_instruction] = STATE(288),
    [sym_run_instruction] = STATE(288),
    [sym_cmd_instruction] = STATE(288),
    [sym_label_instruction] = STATE(288),
    [sym_expose_instruction] = STATE(288),
    [sym_env_instruction] = STATE(288),
    [sym_add_instruction] = STATE(288),
    [sym_copy_instruction] = STATE(288),
    [sym_entrypoint_instruction] = STATE(288),
    [sym_volume_instruction] = STATE(288),
    [sym_user_instruction] = STATE(288),
    [sym_workdir_instruction] = STATE(288),
    [sym_arg_instruction] = STATE(288),
    [sym_onbuild_instruction] = STATE(288),
    [sym_stopsignal_instruction] = STATE(288),
    [sym_healthcheck_instruction] = STATE(288),
    [sym_shell_instruction] = STATE(288),
    [sym_maintainer_instruction] = STATE(288),
    [sym_cross_build_instruction] = STATE(288),
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
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
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
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(288), 20,
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
  [92] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
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
    STATE(288), 20,
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
  [184] = 21,
    ACTIONS(3), 1,
      sym_line_continuation,
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
    STATE(267), 20,
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
  [267] = 2,
    ACTIONS(3), 1,
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
  [294] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_heredoc_marker,
    STATE(33), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(162), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(18), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    STATE(166), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(11), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(111), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [338] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_heredoc_marker,
    STATE(33), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(162), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(18), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    STATE(163), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(6), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(111), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [382] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(203), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(13), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    STATE(268), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(121), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [420] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(203), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(13), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    STATE(273), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(121), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [458] = 10,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(133), 1,
      aux_sym__env_key_token1,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(143), 1,
      anon_sym_BSLASH2,
    STATE(52), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(255), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [493] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(147), 1,
      anon_sym_DASH_DASH,
    ACTIONS(150), 3,
      sym_heredoc_marker,
      anon_sym_POUND,
      anon_sym_LBRACK,
    STATE(11), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(145), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [516] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      sym_heredoc_marker,
    ACTIONS(152), 1,
      aux_sym_shell_fragment_token2,
    STATE(33), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(191), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(31), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(111), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [547] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(171), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(31), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(121), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [578] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(154), 1,
      anon_sym_DOLLAR2,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(162), 1,
      anon_sym_BSLASH2,
    STATE(25), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(275), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [607] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(154), 1,
      anon_sym_DOLLAR2,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(162), 1,
      anon_sym_BSLASH2,
    STATE(25), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(319), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [636] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(231), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(20), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(121), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [667] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(154), 1,
      anon_sym_DOLLAR2,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(162), 1,
      anon_sym_BSLASH2,
    STATE(25), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(155), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [696] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      sym_heredoc_marker,
    ACTIONS(152), 1,
      aux_sym_shell_fragment_token2,
    STATE(33), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(168), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(31), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(111), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [727] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      sym_heredoc_marker,
    ACTIONS(152), 1,
      aux_sym_shell_fragment_token2,
    STATE(33), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(184), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(12), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(111), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [758] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(235), 1,
      sym_shell_fragment,
    STATE(269), 1,
      sym__anon_comment,
    STATE(31), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(121), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [789] = 7,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(171), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(174), 1,
      anon_sym_BSLASH2,
    ACTIONS(169), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(21), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [815] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(177), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(179), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [837] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(183), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(185), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [859] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      aux_sym_path_token1,
    ACTIONS(192), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      anon_sym_DASH_DASH,
    ACTIONS(198), 1,
      sym_heredoc_marker,
    STATE(79), 1,
      aux_sym_add_instruction_repeat2,
    STATE(91), 1,
      sym_expansion,
    STATE(261), 1,
      sym_path_with_heredoc,
    STATE(71), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [891] = 7,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(154), 1,
      anon_sym_DOLLAR2,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(204), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(206), 1,
      anon_sym_BSLASH2,
    ACTIONS(202), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(21), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [917] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      aux_sym_path_token1,
    ACTIONS(192), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      anon_sym_DASH_DASH,
    ACTIONS(198), 1,
      sym_heredoc_marker,
    STATE(64), 1,
      aux_sym_add_instruction_repeat2,
    STATE(91), 1,
      sym_expansion,
    STATE(261), 1,
      sym_path_with_heredoc,
    STATE(24), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [949] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(208), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(210), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [971] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      aux_sym_path_token1,
    ACTIONS(192), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      anon_sym_DASH_DASH,
    ACTIONS(198), 1,
      sym_heredoc_marker,
    STATE(63), 1,
      aux_sym_add_instruction_repeat2,
    STATE(91), 1,
      sym_expansion,
    STATE(261), 1,
      sym_path_with_heredoc,
    STATE(29), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [1003] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      aux_sym_path_token1,
    ACTIONS(192), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(196), 1,
      anon_sym_DASH_DASH,
    ACTIONS(198), 1,
      sym_heredoc_marker,
    STATE(73), 1,
      aux_sym_add_instruction_repeat2,
    STATE(91), 1,
      sym_expansion,
    STATE(261), 1,
      sym_path_with_heredoc,
    STATE(71), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [1035] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(217), 1,
      sym_required_line_continuation,
    ACTIONS(219), 1,
      sym_heredoc_marker,
    STATE(30), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(212), 2,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(214), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1058] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(226), 1,
      anon_sym_POUND,
    STATE(269), 1,
      sym__anon_comment,
    ACTIONS(224), 2,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token2,
    STATE(31), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
    ACTIONS(222), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1081] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(233), 1,
      anon_sym_DOLLAR2,
    ACTIONS(235), 1,
      aux_sym_image_name_token2,
    ACTIONS(229), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(35), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [1104] = 6,
    ACTIONS(119), 1,
      sym_heredoc_marker,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      sym_required_line_continuation,
    STATE(30), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(237), 2,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(239), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1127] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(243), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(245), 5,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1144] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      anon_sym_DOLLAR2,
    ACTIONS(249), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(251), 1,
      aux_sym_image_name_token2,
    ACTIONS(247), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(36), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [1167] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(257), 1,
      anon_sym_DOLLAR2,
    ACTIONS(260), 1,
      aux_sym_image_name_token2,
    ACTIONS(253), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(36), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [1190] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(183), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(185), 5,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1207] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(265), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(263), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(41), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1227] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_DOLLAR2,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(275), 1,
      anon_sym_BSLASH,
    ACTIONS(273), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(47), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1249] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_DOLLAR2,
    ACTIONS(275), 1,
      anon_sym_BSLASH,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(47), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1271] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(284), 1,
      anon_sym_DOLLAR2,
    ACTIONS(279), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(41), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1291] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(217), 1,
      sym_required_line_continuation,
    ACTIONS(290), 1,
      sym_heredoc_marker,
    STATE(42), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(287), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1313] = 7,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(293), 1,
      anon_sym_LF,
    ACTIONS(295), 1,
      aux_sym_label_pair_token1,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    STATE(43), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(266), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1337] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_DOLLAR2,
    ACTIONS(275), 1,
      anon_sym_BSLASH,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(47), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1359] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(308), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    ACTIONS(313), 1,
      aux_sym_image_tag_token1,
    ACTIONS(306), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(45), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1381] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_DOLLAR2,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      anon_sym_BSLASH,
    ACTIONS(318), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(39), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1403] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(322), 1,
      anon_sym_DOLLAR2,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_BSLASH,
    ACTIONS(327), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(47), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1425] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_DOLLAR2,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1447] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(341), 1,
      aux_sym_path_token3,
    ACTIONS(343), 1,
      anon_sym_DOLLAR2,
    ACTIONS(345), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
    STATE(59), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1469] = 7,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(349), 1,
      aux_sym_label_pair_token1,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_SQUOTE,
    STATE(43), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(266), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1493] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(212), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(217), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1509] = 7,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      aux_sym__env_key_token1,
    ACTIONS(355), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(357), 1,
      anon_sym_BSLASH2,
    STATE(55), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1533] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(359), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(361), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1549] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      anon_sym_DOLLAR2,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      anon_sym_BSLASH,
    ACTIONS(365), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(44), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1571] = 7,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      aux_sym__env_key_token1,
    ACTIONS(369), 1,
      anon_sym_DOLLAR2,
    ACTIONS(372), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(375), 1,
      anon_sym_BSLASH2,
    STATE(55), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1595] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      anon_sym_DOLLAR2,
    ACTIONS(378), 1,
      anon_sym_LF,
    ACTIONS(380), 1,
      aux_sym_path_token3,
    ACTIONS(382), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
    STATE(49), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1617] = 6,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(237), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      sym_required_line_continuation,
    STATE(42), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(384), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1639] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(388), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(392), 1,
      aux_sym_image_tag_token1,
    ACTIONS(386), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(45), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1661] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      aux_sym_path_token3,
    ACTIONS(399), 1,
      anon_sym_DOLLAR2,
    ACTIONS(402), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
    STATE(59), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1683] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(406), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(404), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(38), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1703] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(413), 1,
      anon_sym_DOLLAR2,
    STATE(61), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(172), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1724] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(418), 1,
      aux_sym_path_token3,
    ACTIONS(420), 1,
      anon_sym_DOLLAR2,
    ACTIONS(422), 1,
      sym__non_newline_whitespace,
    STATE(76), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1745] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(424), 1,
      aux_sym_path_token1,
    ACTIONS(426), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 1,
      sym_heredoc_marker,
    STATE(56), 1,
      sym_expansion,
    STATE(78), 1,
      aux_sym_add_instruction_repeat2,
    STATE(118), 1,
      sym_path_with_heredoc,
  [1770] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(424), 1,
      aux_sym_path_token1,
    ACTIONS(426), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 1,
      sym_heredoc_marker,
    STATE(56), 1,
      sym_expansion,
    STATE(78), 1,
      aux_sym_add_instruction_repeat2,
    STATE(121), 1,
      sym_path_with_heredoc,
  [1795] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(420), 1,
      anon_sym_DOLLAR2,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      aux_sym_path_token3,
    ACTIONS(436), 1,
      sym__non_newline_whitespace,
    STATE(62), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1816] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
    ACTIONS(440), 4,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BSLASH2,
  [1831] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(446), 1,
      anon_sym_DOLLAR2,
    ACTIONS(449), 1,
      aux_sym_image_digest_token1,
    STATE(67), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1852] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(212), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(217), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1867] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      aux_sym_label_pair_token1,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    ACTIONS(456), 1,
      anon_sym_SQUOTE,
    STATE(50), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(266), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1888] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(458), 1,
      anon_sym_LF,
    ACTIONS(460), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(61), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(172), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1909] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(462), 1,
      aux_sym_path_token1,
    ACTIONS(466), 1,
      anon_sym_DASH_DASH,
    STATE(71), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
    ACTIONS(464), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [1928] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(469), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
    ACTIONS(471), 4,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BSLASH2,
  [1943] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(424), 1,
      aux_sym_path_token1,
    ACTIONS(426), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 1,
      sym_heredoc_marker,
    STATE(56), 1,
      sym_expansion,
    STATE(78), 1,
      aux_sym_add_instruction_repeat2,
    STATE(108), 1,
      sym_path_with_heredoc,
  [1968] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(477), 1,
      anon_sym_DOLLAR2,
    ACTIONS(479), 1,
      aux_sym_image_digest_token1,
    STATE(67), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1989] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(481), 1,
      anon_sym_DOLLAR,
    ACTIONS(483), 1,
      aux_sym_image_name_token1,
    ACTIONS(485), 1,
      anon_sym_DASH_DASH,
    STATE(32), 1,
      sym_expansion,
    STATE(98), 1,
      sym_image_name,
    STATE(111), 1,
      sym_param,
    STATE(236), 1,
      sym_image_spec,
  [2014] = 6,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      sym__non_newline_whitespace,
    ACTIONS(487), 1,
      aux_sym_path_token3,
    ACTIONS(490), 1,
      anon_sym_DOLLAR2,
    STATE(76), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2035] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(493), 1,
      aux_sym_path_token1,
    ACTIONS(495), 1,
      aux_sym_path_token2,
    ACTIONS(497), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_expansion,
    STATE(189), 1,
      sym_path,
    STATE(270), 1,
      sym_json_string_array,
  [2060] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      aux_sym_path_token1,
    ACTIONS(502), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(505), 1,
      anon_sym_DOLLAR,
    ACTIONS(508), 1,
      sym_heredoc_marker,
    STATE(78), 1,
      aux_sym_add_instruction_repeat2,
    STATE(91), 1,
      sym_expansion,
    STATE(261), 1,
      sym_path_with_heredoc,
  [2085] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(424), 1,
      aux_sym_path_token1,
    ACTIONS(426), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    ACTIONS(430), 1,
      sym_heredoc_marker,
    STATE(56), 1,
      sym_expansion,
    STATE(78), 1,
      aux_sym_add_instruction_repeat2,
    STATE(107), 1,
      sym_path_with_heredoc,
  [2110] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(513), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(515), 1,
      anon_sym_DOLLAR2,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2128] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      anon_sym_DOLLAR2,
    ACTIONS(521), 1,
      aux_sym_image_alias_token2,
    STATE(97), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2146] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      aux_sym_path_token3,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    STATE(88), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2164] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(532), 1,
      anon_sym_DOLLAR2,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2182] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(460), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(70), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(172), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [2200] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(537), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(535), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2214] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      anon_sym_DOLLAR,
    ACTIONS(543), 1,
      aux_sym_expose_port_token1,
    STATE(94), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2232] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      anon_sym_DOLLAR2,
    ACTIONS(550), 1,
      aux_sym_image_alias_token2,
    STATE(87), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2250] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(422), 1,
      anon_sym_LF,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(553), 1,
      aux_sym_path_token3,
    STATE(89), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2268] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      aux_sym_path_token3,
    ACTIONS(558), 1,
      anon_sym_DOLLAR2,
    STATE(89), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2286] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      sym__non_newline_whitespace,
    ACTIONS(561), 1,
      aux_sym_path_token3,
    ACTIONS(563), 1,
      anon_sym_DOLLAR2,
    STATE(100), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2304] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(382), 1,
      sym__non_newline_whitespace,
    ACTIONS(563), 1,
      anon_sym_DOLLAR2,
    ACTIONS(565), 1,
      aux_sym_path_token3,
    STATE(90), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2322] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(515), 1,
      anon_sym_DOLLAR2,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 1,
      aux_sym__stopsignal_value_token2,
    STATE(80), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2340] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(438), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2354] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(573), 1,
      anon_sym_DOLLAR,
    ACTIONS(576), 1,
      aux_sym_expose_port_token1,
    STATE(94), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2372] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(579), 1,
      anon_sym_NONE,
    ACTIONS(581), 1,
      anon_sym_DASH_DASH,
    STATE(272), 1,
      sym_cmd_instruction,
    STATE(101), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2392] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(583), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(585), 3,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [2406] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_DOLLAR2,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(589), 1,
      aux_sym_image_alias_token2,
    STATE(87), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2424] = 7,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(595), 1,
      anon_sym_COLON,
    ACTIONS(597), 1,
      anon_sym_AT,
    STATE(151), 1,
      sym_image_tag,
    STATE(244), 1,
      sym_image_digest,
  [2446] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(471), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(469), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2460] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(402), 1,
      sym__non_newline_whitespace,
    ACTIONS(599), 1,
      aux_sym_path_token3,
    ACTIONS(602), 1,
      anon_sym_DOLLAR2,
    STATE(100), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2478] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(581), 1,
      anon_sym_DASH_DASH,
    STATE(301), 1,
      sym_cmd_instruction,
    STATE(157), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2495] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(471), 2,
      aux_sym__env_key_token1,
      anon_sym_BSLASH2,
    ACTIONS(469), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
  [2508] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(605), 1,
      anon_sym_BSLASH,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(609), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2525] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(438), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2538] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(471), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(469), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2551] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_BSLASH,
    ACTIONS(613), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(615), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2568] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(617), 1,
      anon_sym_LF,
    ACTIONS(619), 1,
      sym__non_newline_whitespace,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    STATE(145), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2585] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      sym__non_newline_whitespace,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(623), 1,
      anon_sym_LF,
    STATE(146), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2602] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      aux_sym__env_key_token1,
      anon_sym_BSLASH2,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
  [2615] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_BSLASH,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(615), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2632] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(481), 1,
      anon_sym_DOLLAR,
    ACTIONS(483), 1,
      aux_sym_image_name_token1,
    STATE(32), 1,
      sym_expansion,
    STATE(98), 1,
      sym_image_name,
    STATE(243), 1,
      sym_image_spec,
  [2651] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(627), 1,
      anon_sym_BSLASH,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(632), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2668] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(635), 1,
      anon_sym_LF,
    ACTIONS(637), 1,
      aux_sym__env_key_token1,
    STATE(299), 1,
      sym__env_key,
    STATE(113), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2685] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(471), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(469), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2698] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(644), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2715] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(648), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(650), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2730] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      anon_sym_DOLLAR,
    ACTIONS(654), 1,
      aux_sym_expose_port_token1,
    STATE(86), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2745] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      sym__non_newline_whitespace,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(656), 1,
      anon_sym_LF,
    STATE(165), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2762] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(438), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2775] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      aux_sym__env_key_token1,
    STATE(256), 1,
      sym__env_key,
    STATE(265), 1,
      sym__spaced_env_pair,
    STATE(126), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2792] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      sym__non_newline_whitespace,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(660), 1,
      anon_sym_LF,
    STATE(167), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2809] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_DOLLAR2,
    ACTIONS(662), 1,
      aux_sym_image_digest_token1,
    STATE(74), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2824] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      aux_sym_path_token1,
    ACTIONS(495), 1,
      aux_sym_path_token2,
    ACTIONS(497), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      sym_expansion,
    STATE(259), 1,
      sym_path,
  [2843] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(390), 1,
      anon_sym_DOLLAR2,
    ACTIONS(664), 1,
      aux_sym_image_tag_token1,
    STATE(58), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2858] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(471), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(469), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [2871] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      anon_sym_LF,
    ACTIONS(668), 1,
      aux_sym__env_key_token1,
    STATE(299), 1,
      sym__env_key,
    STATE(113), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2888] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(670), 1,
      anon_sym_BSLASH,
    ACTIONS(672), 1,
      anon_sym_SQUOTE,
    STATE(131), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(674), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2905] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(440), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2918] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(359), 1,
      aux_sym_path_token1,
    ACTIONS(361), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [2931] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      aux_sym_path_token1,
    ACTIONS(678), 1,
      aux_sym_path_token2,
    ACTIONS(680), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    STATE(264), 1,
      sym_path,
  [2950] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_BSLASH,
    ACTIONS(682), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(615), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [2967] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(537), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(535), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2980] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(686), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(263), 1,
      sym__stopsignal_value,
  [2996] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(690), 1,
      sym_required_line_continuation,
    STATE(134), 1,
      aux_sym_shell_command_repeat2,
    ACTIONS(688), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3010] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(438), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3020] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(469), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3030] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3042] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(469), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(471), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3054] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      anon_sym_DOLLAR,
    ACTIONS(699), 1,
      aux_sym_image_alias_token1,
    STATE(81), 1,
      sym_expansion,
    STATE(315), 1,
      sym_image_alias,
  [3070] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(438), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(440), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3082] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(703), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_expansion,
    STATE(248), 1,
      sym__user_name_or_group,
  [3098] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(707), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3112] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(535), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(537), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3124] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      anon_sym_LF,
    ACTIONS(711), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3136] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(713), 1,
      anon_sym_LF,
    STATE(149), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3150] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(715), 1,
      anon_sym_LF,
    STATE(149), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3164] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3176] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(723), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3190] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(726), 1,
      anon_sym_LF,
    ACTIONS(728), 1,
      sym_heredoc_nl,
    STATE(149), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3204] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      anon_sym_DOLLAR,
    ACTIONS(699), 1,
      aux_sym_image_alias_token1,
    STATE(81), 1,
      sym_expansion,
    STATE(305), 1,
      sym_image_alias,
  [3220] = 5,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(597), 1,
      anon_sym_AT,
    ACTIONS(731), 1,
      anon_sym_LF,
    ACTIONS(733), 1,
      aux_sym_from_instruction_token2,
    STATE(237), 1,
      sym_image_digest,
  [3236] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(535), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3246] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(735), 1,
      anon_sym_LF,
    STATE(149), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3260] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      sym_required_line_continuation,
    STATE(134), 1,
      aux_sym_shell_command_repeat2,
    ACTIONS(737), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3274] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      anon_sym_LF,
    ACTIONS(743), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3286] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(440), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3298] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(464), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(745), 1,
      anon_sym_DASH_DASH,
    STATE(157), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [3312] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(748), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(750), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(752), 1,
      aux_sym_path_token1,
    ACTIONS(754), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [3338] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(758), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3350] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(760), 1,
      anon_sym_LF,
    STATE(149), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3364] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      sym_required_line_continuation,
    STATE(164), 1,
      aux_sym_shell_command_repeat2,
    ACTIONS(762), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3378] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(764), 1,
      anon_sym_LF,
    STATE(161), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3392] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      sym_required_line_continuation,
    STATE(134), 1,
      aux_sym_shell_command_repeat2,
    ACTIONS(766), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3406] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(149), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3420] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(760), 1,
      anon_sym_LF,
    STATE(153), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3434] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      sym_heredoc_nl,
    ACTIONS(770), 1,
      anon_sym_LF,
    STATE(149), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3448] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      sym_required_line_continuation,
    STATE(154), 1,
      aux_sym_shell_command_repeat2,
    ACTIONS(766), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3462] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(469), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3474] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(440), 1,
      aux_sym_path_token3,
    ACTIONS(438), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3485] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(766), 1,
      anon_sym_LF,
    ACTIONS(772), 1,
      sym_required_line_continuation,
    STATE(227), 1,
      aux_sym_shell_command_repeat2,
  [3498] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(774), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3507] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      sym_variable,
    STATE(174), 1,
      sym__expansion_body,
  [3520] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3529] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(780), 1,
      anon_sym_RBRACK,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    STATE(220), 1,
      sym_json_string,
  [3542] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(469), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3551] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(786), 1,
      sym_variable,
    STATE(104), 1,
      sym__expansion_body,
  [3564] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(535), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3573] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(788), 1,
      anon_sym_LBRACE,
    ACTIONS(790), 1,
      sym_variable,
    STATE(109), 1,
      sym__expansion_body,
  [3586] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
    ACTIONS(794), 1,
      sym_variable,
    STATE(66), 1,
      sym__expansion_body,
  [3599] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(796), 1,
      sym_variable,
    STATE(178), 1,
      sym__expansion_body,
  [3612] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    ACTIONS(800), 1,
      sym_variable,
    STATE(156), 1,
      sym__expansion_body,
  [3625] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(469), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3634] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(802), 1,
      sym_required_line_continuation,
    ACTIONS(688), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3645] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(438), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3654] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(535), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3663] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(804), 1,
      anon_sym_COMMA2,
    ACTIONS(807), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym_json_string_array_repeat1,
  [3676] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      aux_sym_path_token3,
    ACTIONS(469), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3687] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(809), 1,
      anon_sym_LF,
    ACTIONS(811), 1,
      sym__non_newline_whitespace,
    STATE(211), 1,
      aux_sym_volume_instruction_repeat1,
  [3700] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(813), 1,
      sym_heredoc_line,
    ACTIONS(816), 1,
      sym_heredoc_end,
    STATE(190), 1,
      aux_sym_heredoc_block_repeat1,
  [3713] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(820), 1,
      sym_required_line_continuation,
    ACTIONS(818), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3724] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(822), 1,
      sym_heredoc_line,
    ACTIONS(824), 1,
      sym_heredoc_end,
    STATE(190), 1,
      aux_sym_heredoc_block_repeat1,
  [3737] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
      aux_sym_path_token3,
    ACTIONS(535), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3748] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(784), 1,
      anon_sym_LBRACE,
    ACTIONS(826), 1,
      sym_variable,
    STATE(132), 1,
      sym__expansion_body,
  [3761] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(828), 1,
      anon_sym_COMMA2,
    ACTIONS(830), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym_json_string_array_repeat1,
  [3774] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    ACTIONS(834), 1,
      sym_variable,
    STATE(209), 1,
      sym__expansion_body,
  [3787] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(838), 1,
      sym_variable,
    STATE(128), 1,
      sym__expansion_body,
  [3800] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      aux_sym_path_token3,
    ACTIONS(469), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3811] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(842), 1,
      sym_variable,
    STATE(186), 1,
      sym__expansion_body,
  [3824] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(844), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      sym_json_string,
  [3837] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(440), 1,
      aux_sym_path_token3,
    ACTIONS(438), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3848] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
      aux_sym_path_token3,
    ACTIONS(535), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3859] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(762), 1,
      anon_sym_LF,
    ACTIONS(772), 1,
      sym_required_line_continuation,
    STATE(214), 1,
      aux_sym_shell_command_repeat2,
  [3872] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(846), 1,
      sym_variable,
    STATE(185), 1,
      sym__expansion_body,
  [3885] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(848), 1,
      anon_sym_LBRACE,
    ACTIONS(850), 1,
      sym_variable,
    STATE(193), 1,
      sym__expansion_body,
  [3898] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(378), 1,
      anon_sym_LF,
    ACTIONS(382), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
  [3909] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(848), 1,
      anon_sym_LBRACE,
    ACTIONS(852), 1,
      sym_variable,
    STATE(170), 1,
      sym__expansion_body,
  [3922] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      sym_variable,
    STATE(152), 1,
      sym__expansion_body,
  [3935] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3946] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
    ACTIONS(860), 1,
      sym_variable,
    STATE(119), 1,
      sym__expansion_body,
  [3959] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(811), 1,
      sym__non_newline_whitespace,
    ACTIONS(862), 1,
      anon_sym_LF,
    STATE(212), 1,
      aux_sym_volume_instruction_repeat1,
  [3972] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(864), 1,
      anon_sym_LF,
    ACTIONS(866), 1,
      sym__non_newline_whitespace,
    STATE(212), 1,
      aux_sym_volume_instruction_repeat1,
  [3985] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
    ACTIONS(869), 1,
      sym_variable,
    STATE(135), 1,
      sym__expansion_body,
  [3998] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(766), 1,
      anon_sym_LF,
    ACTIONS(772), 1,
      sym_required_line_continuation,
    STATE(226), 1,
      aux_sym_shell_command_repeat2,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(828), 1,
      anon_sym_COMMA2,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_json_string_array_repeat1,
  [4024] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(873), 1,
      anon_sym_LF,
    ACTIONS(875), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4035] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(877), 1,
      anon_sym_LBRACE,
    ACTIONS(879), 1,
      sym_variable,
    STATE(143), 1,
      sym__expansion_body,
  [4048] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(877), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      sym_variable,
    STATE(140), 1,
      sym__expansion_body,
  [4061] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(822), 1,
      sym_heredoc_line,
    ACTIONS(883), 1,
      sym_heredoc_end,
    STATE(192), 1,
      aux_sym_heredoc_block_repeat1,
  [4074] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(828), 1,
      anon_sym_COMMA2,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_json_string_array_repeat1,
  [4087] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(887), 1,
      anon_sym_LBRACE,
    ACTIONS(889), 1,
      sym_variable,
    STATE(85), 1,
      sym__expansion_body,
  [4100] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(471), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4111] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
    ACTIONS(893), 1,
      sym_variable,
    STATE(202), 1,
      sym__expansion_body,
  [4124] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(887), 1,
      anon_sym_LBRACE,
    ACTIONS(895), 1,
      sym_variable,
    STATE(93), 1,
      sym__expansion_body,
  [4137] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
    ACTIONS(897), 1,
      sym_variable,
    STATE(201), 1,
      sym__expansion_body,
  [4150] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(899), 1,
      sym_required_line_continuation,
    STATE(226), 1,
      aux_sym_shell_command_repeat2,
  [4163] = 4,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      anon_sym_LF,
    ACTIONS(772), 1,
      sym_required_line_continuation,
    STATE(226), 1,
      aux_sym_shell_command_repeat2,
  [4176] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(828), 1,
      anon_sym_COMMA2,
    ACTIONS(902), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym_json_string_array_repeat1,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(904), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4197] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(906), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4205] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(802), 1,
      sym_required_line_continuation,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    STATE(277), 1,
      sym_json_string_array,
  [4225] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(908), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4233] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(910), 1,
      aux_sym_param_token1,
    ACTIONS(912), 1,
      anon_sym_mount,
  [4243] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(818), 1,
      anon_sym_LF,
    ACTIONS(820), 1,
      sym_required_line_continuation,
  [4253] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(914), 1,
      anon_sym_LF,
    ACTIONS(916), 1,
      aux_sym_from_instruction_token2,
  [4263] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(918), 1,
      anon_sym_LF,
    ACTIONS(920), 1,
      aux_sym_from_instruction_token2,
  [4273] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 1,
      aux_sym__env_key_token1,
  [4283] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(756), 1,
      anon_sym_LF,
    ACTIONS(758), 1,
      aux_sym__env_key_token1,
  [4293] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(922), 1,
      aux_sym_mount_param_param_token1,
    STATE(22), 1,
      sym_mount_param_param,
  [4303] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 1,
      aux_sym__env_key_token1,
  [4313] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      anon_sym_LF,
    ACTIONS(711), 1,
      aux_sym__env_key_token1,
  [4323] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(924), 1,
      anon_sym_LF,
    ACTIONS(926), 1,
      aux_sym_from_instruction_token2,
  [4333] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(928), 1,
      anon_sym_LF,
    ACTIONS(930), 1,
      aux_sym_from_instruction_token2,
  [4343] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4351] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(932), 1,
      anon_sym_LF,
    ACTIONS(934), 1,
      anon_sym_EQ,
  [4361] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(922), 1,
      aux_sym_mount_param_param_token1,
    STATE(37), 1,
      sym_mount_param_param,
  [4371] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_LF,
    ACTIONS(938), 1,
      anon_sym_COLON,
  [4381] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(940), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4389] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(942), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4397] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(816), 2,
      sym_heredoc_line,
      sym_heredoc_end,
  [4405] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(944), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(807), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4421] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(946), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4429] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(948), 1,
      anon_sym_LF,
    ACTIONS(950), 1,
      aux_sym__env_key_token1,
  [4439] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(952), 1,
      anon_sym_EQ,
    ACTIONS(954), 1,
      aux_sym__spaced_env_pair_token1,
  [4449] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(359), 1,
      aux_sym_image_name_token1,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
  [4459] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    STATE(253), 1,
      sym_json_string,
  [4469] = 3,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(864), 1,
      anon_sym_LF,
    ACTIONS(956), 1,
      sym__non_newline_whitespace,
  [4479] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(908), 1,
      anon_sym_LF,
  [4486] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(619), 1,
      sym__non_newline_whitespace,
  [4493] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(382), 1,
      sym__non_newline_whitespace,
  [4500] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(958), 1,
      anon_sym_LF,
  [4507] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(960), 1,
      anon_sym_LF,
  [4514] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(962), 1,
      anon_sym_LF,
  [4521] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(964), 1,
      anon_sym_EQ,
  [4528] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(966), 1,
      anon_sym_LF,
  [4535] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(968), 1,
      anon_sym_LF,
  [4542] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(970), 1,
      anon_sym_LF,
  [4549] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_LF,
  [4556] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(974), 1,
      aux_sym_maintainer_instruction_token2,
  [4563] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(976), 1,
      anon_sym_LF,
  [4570] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(978), 1,
      anon_sym_LF,
  [4577] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(980), 1,
      aux_sym_shell_fragment_token1,
  [4584] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(982), 1,
      anon_sym_LF,
  [4591] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(984), 1,
      aux_sym_shell_fragment_token1,
  [4598] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(986), 1,
      anon_sym_LF,
  [4605] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(988), 1,
      anon_sym_LF,
  [4612] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(990), 1,
      aux_sym_param_token1,
  [4619] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(992), 1,
      anon_sym_LF,
  [4626] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(944), 1,
      anon_sym_LF,
  [4633] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(994), 1,
      ts_builtin_sym_end,
  [4640] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(996), 1,
      anon_sym_RBRACE,
  [4647] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(998), 1,
      aux_sym_param_token2,
  [4654] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1000), 1,
      aux_sym__expansion_body_token1,
  [4661] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1002), 1,
      anon_sym_EQ,
  [4668] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1004), 1,
      anon_sym_EQ,
  [4675] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1006), 1,
      anon_sym_LF,
  [4682] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1008), 1,
      aux_sym_maintainer_instruction_token2,
  [4689] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1010), 1,
      aux_sym_maintainer_instruction_token2,
  [4696] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(906), 1,
      anon_sym_LF,
  [4703] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1012), 1,
      anon_sym_RBRACE,
  [4710] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1014), 1,
      aux_sym_param_token2,
  [4717] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1016), 1,
      anon_sym_LF,
  [4724] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      anon_sym_EQ,
  [4731] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
  [4738] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1020), 1,
      aux_sym_param_token2,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(756), 1,
      anon_sym_EQ,
  [4752] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(952), 1,
      anon_sym_EQ,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
  [4766] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1024), 1,
      anon_sym_LF,
  [4773] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1028), 1,
      anon_sym_RBRACE,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1030), 1,
      aux_sym_param_token2,
  [4794] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1032), 1,
      anon_sym_LF,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1034), 1,
      anon_sym_RBRACE,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1036), 1,
      aux_sym_arg_instruction_token2,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1038), 1,
      aux_sym_mount_param_param_token1,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_RBRACE,
  [4829] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1042), 1,
      anon_sym_LF,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_EQ,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
  [4850] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1046), 1,
      anon_sym_EQ,
  [4857] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1048), 1,
      anon_sym_RBRACE,
  [4864] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1050), 1,
      anon_sym_LF,
  [4871] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1052), 1,
      anon_sym_RBRACE,
  [4878] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      anon_sym_EQ,
  [4885] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
  [4892] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1056), 1,
      anon_sym_LF,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1058), 1,
      anon_sym_RBRACE,
  [4906] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
  [4913] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1062), 1,
      aux_sym__expansion_body_token1,
  [4920] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1064), 1,
      anon_sym_EQ,
  [4927] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1066), 1,
      aux_sym__expansion_body_token1,
  [4934] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1068), 1,
      anon_sym_EQ,
  [4941] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1070), 1,
      aux_sym__expansion_body_token1,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1072), 1,
      anon_sym_EQ,
  [4955] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1074), 1,
      aux_sym__expansion_body_token1,
  [4962] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1076), 1,
      aux_sym__expansion_body_token1,
  [4969] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1078), 1,
      aux_sym__expansion_body_token1,
  [4976] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1080), 1,
      aux_sym__expansion_body_token1,
  [4983] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      aux_sym__expansion_body_token1,
  [4990] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1084), 1,
      aux_sym__expansion_body_token1,
  [4997] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1086), 1,
      aux_sym__expansion_body_token1,
  [5004] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1088), 1,
      aux_sym__expansion_body_token1,
  [5011] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1090), 1,
      aux_sym__expansion_body_token1,
  [5018] = 2,
    ACTIONS(135), 1,
      sym_line_continuation,
    ACTIONS(1092), 1,
      aux_sym__expansion_body_token1,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1094), 1,
      aux_sym_param_token1,
  [5032] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1096), 1,
      aux_sym_param_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 92,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 267,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 338,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 420,
  [SMALL_STATE(10)] = 458,
  [SMALL_STATE(11)] = 493,
  [SMALL_STATE(12)] = 516,
  [SMALL_STATE(13)] = 547,
  [SMALL_STATE(14)] = 578,
  [SMALL_STATE(15)] = 607,
  [SMALL_STATE(16)] = 636,
  [SMALL_STATE(17)] = 667,
  [SMALL_STATE(18)] = 696,
  [SMALL_STATE(19)] = 727,
  [SMALL_STATE(20)] = 758,
  [SMALL_STATE(21)] = 789,
  [SMALL_STATE(22)] = 815,
  [SMALL_STATE(23)] = 837,
  [SMALL_STATE(24)] = 859,
  [SMALL_STATE(25)] = 891,
  [SMALL_STATE(26)] = 917,
  [SMALL_STATE(27)] = 949,
  [SMALL_STATE(28)] = 971,
  [SMALL_STATE(29)] = 1003,
  [SMALL_STATE(30)] = 1035,
  [SMALL_STATE(31)] = 1058,
  [SMALL_STATE(32)] = 1081,
  [SMALL_STATE(33)] = 1104,
  [SMALL_STATE(34)] = 1127,
  [SMALL_STATE(35)] = 1144,
  [SMALL_STATE(36)] = 1167,
  [SMALL_STATE(37)] = 1190,
  [SMALL_STATE(38)] = 1207,
  [SMALL_STATE(39)] = 1227,
  [SMALL_STATE(40)] = 1249,
  [SMALL_STATE(41)] = 1271,
  [SMALL_STATE(42)] = 1291,
  [SMALL_STATE(43)] = 1313,
  [SMALL_STATE(44)] = 1337,
  [SMALL_STATE(45)] = 1359,
  [SMALL_STATE(46)] = 1381,
  [SMALL_STATE(47)] = 1403,
  [SMALL_STATE(48)] = 1425,
  [SMALL_STATE(49)] = 1447,
  [SMALL_STATE(50)] = 1469,
  [SMALL_STATE(51)] = 1493,
  [SMALL_STATE(52)] = 1509,
  [SMALL_STATE(53)] = 1533,
  [SMALL_STATE(54)] = 1549,
  [SMALL_STATE(55)] = 1571,
  [SMALL_STATE(56)] = 1595,
  [SMALL_STATE(57)] = 1617,
  [SMALL_STATE(58)] = 1639,
  [SMALL_STATE(59)] = 1661,
  [SMALL_STATE(60)] = 1683,
  [SMALL_STATE(61)] = 1703,
  [SMALL_STATE(62)] = 1724,
  [SMALL_STATE(63)] = 1745,
  [SMALL_STATE(64)] = 1770,
  [SMALL_STATE(65)] = 1795,
  [SMALL_STATE(66)] = 1816,
  [SMALL_STATE(67)] = 1831,
  [SMALL_STATE(68)] = 1852,
  [SMALL_STATE(69)] = 1867,
  [SMALL_STATE(70)] = 1888,
  [SMALL_STATE(71)] = 1909,
  [SMALL_STATE(72)] = 1928,
  [SMALL_STATE(73)] = 1943,
  [SMALL_STATE(74)] = 1968,
  [SMALL_STATE(75)] = 1989,
  [SMALL_STATE(76)] = 2014,
  [SMALL_STATE(77)] = 2035,
  [SMALL_STATE(78)] = 2060,
  [SMALL_STATE(79)] = 2085,
  [SMALL_STATE(80)] = 2110,
  [SMALL_STATE(81)] = 2128,
  [SMALL_STATE(82)] = 2146,
  [SMALL_STATE(83)] = 2164,
  [SMALL_STATE(84)] = 2182,
  [SMALL_STATE(85)] = 2200,
  [SMALL_STATE(86)] = 2214,
  [SMALL_STATE(87)] = 2232,
  [SMALL_STATE(88)] = 2250,
  [SMALL_STATE(89)] = 2268,
  [SMALL_STATE(90)] = 2286,
  [SMALL_STATE(91)] = 2304,
  [SMALL_STATE(92)] = 2322,
  [SMALL_STATE(93)] = 2340,
  [SMALL_STATE(94)] = 2354,
  [SMALL_STATE(95)] = 2372,
  [SMALL_STATE(96)] = 2392,
  [SMALL_STATE(97)] = 2406,
  [SMALL_STATE(98)] = 2424,
  [SMALL_STATE(99)] = 2446,
  [SMALL_STATE(100)] = 2460,
  [SMALL_STATE(101)] = 2478,
  [SMALL_STATE(102)] = 2495,
  [SMALL_STATE(103)] = 2508,
  [SMALL_STATE(104)] = 2525,
  [SMALL_STATE(105)] = 2538,
  [SMALL_STATE(106)] = 2551,
  [SMALL_STATE(107)] = 2568,
  [SMALL_STATE(108)] = 2585,
  [SMALL_STATE(109)] = 2602,
  [SMALL_STATE(110)] = 2615,
  [SMALL_STATE(111)] = 2632,
  [SMALL_STATE(112)] = 2651,
  [SMALL_STATE(113)] = 2668,
  [SMALL_STATE(114)] = 2685,
  [SMALL_STATE(115)] = 2698,
  [SMALL_STATE(116)] = 2715,
  [SMALL_STATE(117)] = 2730,
  [SMALL_STATE(118)] = 2745,
  [SMALL_STATE(119)] = 2762,
  [SMALL_STATE(120)] = 2775,
  [SMALL_STATE(121)] = 2792,
  [SMALL_STATE(122)] = 2809,
  [SMALL_STATE(123)] = 2824,
  [SMALL_STATE(124)] = 2843,
  [SMALL_STATE(125)] = 2858,
  [SMALL_STATE(126)] = 2871,
  [SMALL_STATE(127)] = 2888,
  [SMALL_STATE(128)] = 2905,
  [SMALL_STATE(129)] = 2918,
  [SMALL_STATE(130)] = 2931,
  [SMALL_STATE(131)] = 2950,
  [SMALL_STATE(132)] = 2967,
  [SMALL_STATE(133)] = 2980,
  [SMALL_STATE(134)] = 2996,
  [SMALL_STATE(135)] = 3010,
  [SMALL_STATE(136)] = 3020,
  [SMALL_STATE(137)] = 3030,
  [SMALL_STATE(138)] = 3042,
  [SMALL_STATE(139)] = 3054,
  [SMALL_STATE(140)] = 3070,
  [SMALL_STATE(141)] = 3082,
  [SMALL_STATE(142)] = 3098,
  [SMALL_STATE(143)] = 3112,
  [SMALL_STATE(144)] = 3124,
  [SMALL_STATE(145)] = 3136,
  [SMALL_STATE(146)] = 3150,
  [SMALL_STATE(147)] = 3164,
  [SMALL_STATE(148)] = 3176,
  [SMALL_STATE(149)] = 3190,
  [SMALL_STATE(150)] = 3204,
  [SMALL_STATE(151)] = 3220,
  [SMALL_STATE(152)] = 3236,
  [SMALL_STATE(153)] = 3246,
  [SMALL_STATE(154)] = 3260,
  [SMALL_STATE(155)] = 3274,
  [SMALL_STATE(156)] = 3286,
  [SMALL_STATE(157)] = 3298,
  [SMALL_STATE(158)] = 3312,
  [SMALL_STATE(159)] = 3326,
  [SMALL_STATE(160)] = 3338,
  [SMALL_STATE(161)] = 3350,
  [SMALL_STATE(162)] = 3364,
  [SMALL_STATE(163)] = 3378,
  [SMALL_STATE(164)] = 3392,
  [SMALL_STATE(165)] = 3406,
  [SMALL_STATE(166)] = 3420,
  [SMALL_STATE(167)] = 3434,
  [SMALL_STATE(168)] = 3448,
  [SMALL_STATE(169)] = 3462,
  [SMALL_STATE(170)] = 3474,
  [SMALL_STATE(171)] = 3485,
  [SMALL_STATE(172)] = 3498,
  [SMALL_STATE(173)] = 3507,
  [SMALL_STATE(174)] = 3520,
  [SMALL_STATE(175)] = 3529,
  [SMALL_STATE(176)] = 3542,
  [SMALL_STATE(177)] = 3551,
  [SMALL_STATE(178)] = 3564,
  [SMALL_STATE(179)] = 3573,
  [SMALL_STATE(180)] = 3586,
  [SMALL_STATE(181)] = 3599,
  [SMALL_STATE(182)] = 3612,
  [SMALL_STATE(183)] = 3625,
  [SMALL_STATE(184)] = 3634,
  [SMALL_STATE(185)] = 3645,
  [SMALL_STATE(186)] = 3654,
  [SMALL_STATE(187)] = 3663,
  [SMALL_STATE(188)] = 3676,
  [SMALL_STATE(189)] = 3687,
  [SMALL_STATE(190)] = 3700,
  [SMALL_STATE(191)] = 3713,
  [SMALL_STATE(192)] = 3724,
  [SMALL_STATE(193)] = 3737,
  [SMALL_STATE(194)] = 3748,
  [SMALL_STATE(195)] = 3761,
  [SMALL_STATE(196)] = 3774,
  [SMALL_STATE(197)] = 3787,
  [SMALL_STATE(198)] = 3800,
  [SMALL_STATE(199)] = 3811,
  [SMALL_STATE(200)] = 3824,
  [SMALL_STATE(201)] = 3837,
  [SMALL_STATE(202)] = 3848,
  [SMALL_STATE(203)] = 3859,
  [SMALL_STATE(204)] = 3872,
  [SMALL_STATE(205)] = 3885,
  [SMALL_STATE(206)] = 3898,
  [SMALL_STATE(207)] = 3909,
  [SMALL_STATE(208)] = 3922,
  [SMALL_STATE(209)] = 3935,
  [SMALL_STATE(210)] = 3946,
  [SMALL_STATE(211)] = 3959,
  [SMALL_STATE(212)] = 3972,
  [SMALL_STATE(213)] = 3985,
  [SMALL_STATE(214)] = 3998,
  [SMALL_STATE(215)] = 4011,
  [SMALL_STATE(216)] = 4024,
  [SMALL_STATE(217)] = 4035,
  [SMALL_STATE(218)] = 4048,
  [SMALL_STATE(219)] = 4061,
  [SMALL_STATE(220)] = 4074,
  [SMALL_STATE(221)] = 4087,
  [SMALL_STATE(222)] = 4100,
  [SMALL_STATE(223)] = 4111,
  [SMALL_STATE(224)] = 4124,
  [SMALL_STATE(225)] = 4137,
  [SMALL_STATE(226)] = 4150,
  [SMALL_STATE(227)] = 4163,
  [SMALL_STATE(228)] = 4176,
  [SMALL_STATE(229)] = 4189,
  [SMALL_STATE(230)] = 4197,
  [SMALL_STATE(231)] = 4205,
  [SMALL_STATE(232)] = 4215,
  [SMALL_STATE(233)] = 4225,
  [SMALL_STATE(234)] = 4233,
  [SMALL_STATE(235)] = 4243,
  [SMALL_STATE(236)] = 4253,
  [SMALL_STATE(237)] = 4263,
  [SMALL_STATE(238)] = 4273,
  [SMALL_STATE(239)] = 4283,
  [SMALL_STATE(240)] = 4293,
  [SMALL_STATE(241)] = 4303,
  [SMALL_STATE(242)] = 4313,
  [SMALL_STATE(243)] = 4323,
  [SMALL_STATE(244)] = 4333,
  [SMALL_STATE(245)] = 4343,
  [SMALL_STATE(246)] = 4351,
  [SMALL_STATE(247)] = 4361,
  [SMALL_STATE(248)] = 4371,
  [SMALL_STATE(249)] = 4381,
  [SMALL_STATE(250)] = 4389,
  [SMALL_STATE(251)] = 4397,
  [SMALL_STATE(252)] = 4405,
  [SMALL_STATE(253)] = 4413,
  [SMALL_STATE(254)] = 4421,
  [SMALL_STATE(255)] = 4429,
  [SMALL_STATE(256)] = 4439,
  [SMALL_STATE(257)] = 4449,
  [SMALL_STATE(258)] = 4459,
  [SMALL_STATE(259)] = 4469,
  [SMALL_STATE(260)] = 4479,
  [SMALL_STATE(261)] = 4486,
  [SMALL_STATE(262)] = 4493,
  [SMALL_STATE(263)] = 4500,
  [SMALL_STATE(264)] = 4507,
  [SMALL_STATE(265)] = 4514,
  [SMALL_STATE(266)] = 4521,
  [SMALL_STATE(267)] = 4528,
  [SMALL_STATE(268)] = 4535,
  [SMALL_STATE(269)] = 4542,
  [SMALL_STATE(270)] = 4549,
  [SMALL_STATE(271)] = 4556,
  [SMALL_STATE(272)] = 4563,
  [SMALL_STATE(273)] = 4570,
  [SMALL_STATE(274)] = 4577,
  [SMALL_STATE(275)] = 4584,
  [SMALL_STATE(276)] = 4591,
  [SMALL_STATE(277)] = 4598,
  [SMALL_STATE(278)] = 4605,
  [SMALL_STATE(279)] = 4612,
  [SMALL_STATE(280)] = 4619,
  [SMALL_STATE(281)] = 4626,
  [SMALL_STATE(282)] = 4633,
  [SMALL_STATE(283)] = 4640,
  [SMALL_STATE(284)] = 4647,
  [SMALL_STATE(285)] = 4654,
  [SMALL_STATE(286)] = 4661,
  [SMALL_STATE(287)] = 4668,
  [SMALL_STATE(288)] = 4675,
  [SMALL_STATE(289)] = 4682,
  [SMALL_STATE(290)] = 4689,
  [SMALL_STATE(291)] = 4696,
  [SMALL_STATE(292)] = 4703,
  [SMALL_STATE(293)] = 4710,
  [SMALL_STATE(294)] = 4717,
  [SMALL_STATE(295)] = 4724,
  [SMALL_STATE(296)] = 4731,
  [SMALL_STATE(297)] = 4738,
  [SMALL_STATE(298)] = 4745,
  [SMALL_STATE(299)] = 4752,
  [SMALL_STATE(300)] = 4759,
  [SMALL_STATE(301)] = 4766,
  [SMALL_STATE(302)] = 4773,
  [SMALL_STATE(303)] = 4780,
  [SMALL_STATE(304)] = 4787,
  [SMALL_STATE(305)] = 4794,
  [SMALL_STATE(306)] = 4801,
  [SMALL_STATE(307)] = 4808,
  [SMALL_STATE(308)] = 4815,
  [SMALL_STATE(309)] = 4822,
  [SMALL_STATE(310)] = 4829,
  [SMALL_STATE(311)] = 4836,
  [SMALL_STATE(312)] = 4843,
  [SMALL_STATE(313)] = 4850,
  [SMALL_STATE(314)] = 4857,
  [SMALL_STATE(315)] = 4864,
  [SMALL_STATE(316)] = 4871,
  [SMALL_STATE(317)] = 4878,
  [SMALL_STATE(318)] = 4885,
  [SMALL_STATE(319)] = 4892,
  [SMALL_STATE(320)] = 4899,
  [SMALL_STATE(321)] = 4906,
  [SMALL_STATE(322)] = 4913,
  [SMALL_STATE(323)] = 4920,
  [SMALL_STATE(324)] = 4927,
  [SMALL_STATE(325)] = 4934,
  [SMALL_STATE(326)] = 4941,
  [SMALL_STATE(327)] = 4948,
  [SMALL_STATE(328)] = 4955,
  [SMALL_STATE(329)] = 4962,
  [SMALL_STATE(330)] = 4969,
  [SMALL_STATE(331)] = 4976,
  [SMALL_STATE(332)] = 4983,
  [SMALL_STATE(333)] = 4990,
  [SMALL_STATE(334)] = 4997,
  [SMALL_STATE(335)] = 5004,
  [SMALL_STATE(336)] = 5011,
  [SMALL_STATE(337)] = 5018,
  [SMALL_STATE(338)] = 5025,
  [SMALL_STATE(339)] = 5032,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, 0, 13),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, 0, 13),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, 0, 15),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, 0, 15),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, 0, 13),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 13),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0), SHIFT_REPEAT(172),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0), SHIFT_REPEAT(213),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, 0, 11),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(91),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(91),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(223),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(262),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_line, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, 0, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, 0, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2, 0, 0),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(219),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 5),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 5),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 9),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 9),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(339),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2, 0, 0),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3, 0, 0),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, 0, 0),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [899] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3, 0, 0),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2, 0, 0),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, 0, 8),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, 0, 8),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 6),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 6),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 4),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, 0, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2, 0, 0),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 3, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, 0, 10),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, 0, 10),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, 0, 0),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, 0, 0),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, 0, 0),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, 0, 0),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, 0, 0),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 12),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2, 0, 0),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, 0, 0),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, 0, 7),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, 0, 14),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, 0, 10),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
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
