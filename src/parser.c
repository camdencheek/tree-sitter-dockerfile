#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 325
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 164
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
  sym__env_key = 121,
  sym_expose_port = 122,
  sym_label_pair = 123,
  sym_image_spec = 124,
  sym_image_name = 125,
  sym_image_tag = 126,
  sym_image_digest = 127,
  sym_param = 128,
  sym_mount_param = 129,
  sym_mount_param_param = 130,
  sym_image_alias = 131,
  sym_shell_command = 132,
  sym_shell_fragment = 133,
  sym_json_string_array = 134,
  sym_json_string = 135,
  sym_double_quoted_string = 136,
  sym_single_quoted_string = 137,
  sym_unquoted_string = 138,
  aux_sym_source_file_repeat1 = 139,
  aux_sym_run_instruction_repeat1 = 140,
  aux_sym_run_instruction_repeat2 = 141,
  aux_sym_label_instruction_repeat1 = 142,
  aux_sym_expose_instruction_repeat1 = 143,
  aux_sym_env_instruction_repeat1 = 144,
  aux_sym_add_instruction_repeat1 = 145,
  aux_sym_add_instruction_repeat2 = 146,
  aux_sym_volume_instruction_repeat1 = 147,
  aux_sym__user_name_or_group_repeat1 = 148,
  aux_sym__stopsignal_value_repeat1 = 149,
  aux_sym_heredoc_block_repeat1 = 150,
  aux_sym_path_repeat1 = 151,
  aux_sym_image_name_repeat1 = 152,
  aux_sym_image_tag_repeat1 = 153,
  aux_sym_image_digest_repeat1 = 154,
  aux_sym_mount_param_repeat1 = 155,
  aux_sym_image_alias_repeat1 = 156,
  aux_sym_shell_command_repeat1 = 157,
  aux_sym_shell_fragment_repeat1 = 158,
  aux_sym_json_string_array_repeat1 = 159,
  aux_sym_json_string_repeat1 = 160,
  aux_sym_double_quoted_string_repeat1 = 161,
  aux_sym_single_quoted_string_repeat1 = 162,
  aux_sym_unquoted_string_repeat1 = 163,
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
  [31] = 24,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 35,
  [44] = 14,
  [45] = 45,
  [46] = 46,
  [47] = 12,
  [48] = 38,
  [49] = 49,
  [50] = 25,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 45,
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 65,
  [73] = 73,
  [74] = 51,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 66,
  [79] = 79,
  [80] = 46,
  [81] = 36,
  [82] = 51,
  [83] = 51,
  [84] = 84,
  [85] = 85,
  [86] = 62,
  [87] = 87,
  [88] = 67,
  [89] = 89,
  [90] = 71,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 37,
  [96] = 96,
  [97] = 71,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 98,
  [104] = 66,
  [105] = 105,
  [106] = 106,
  [107] = 66,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 71,
  [117] = 117,
  [118] = 71,
  [119] = 92,
  [120] = 66,
  [121] = 121,
  [122] = 98,
  [123] = 123,
  [124] = 102,
  [125] = 75,
  [126] = 66,
  [127] = 102,
  [128] = 71,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 71,
  [138] = 138,
  [139] = 92,
  [140] = 66,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 66,
  [146] = 146,
  [147] = 147,
  [148] = 66,
  [149] = 71,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 71,
  [161] = 161,
  [162] = 70,
  [163] = 92,
  [164] = 71,
  [165] = 92,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 167,
  [172] = 167,
  [173] = 173,
  [174] = 167,
  [175] = 173,
  [176] = 167,
  [177] = 173,
  [178] = 178,
  [179] = 167,
  [180] = 173,
  [181] = 181,
  [182] = 167,
  [183] = 173,
  [184] = 167,
  [185] = 185,
  [186] = 173,
  [187] = 167,
  [188] = 173,
  [189] = 167,
  [190] = 190,
  [191] = 190,
  [192] = 173,
  [193] = 155,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 173,
  [198] = 92,
  [199] = 167,
  [200] = 71,
  [201] = 196,
  [202] = 66,
  [203] = 92,
  [204] = 133,
  [205] = 205,
  [206] = 206,
  [207] = 66,
  [208] = 208,
  [209] = 71,
  [210] = 66,
  [211] = 211,
  [212] = 92,
  [213] = 36,
  [214] = 144,
  [215] = 194,
  [216] = 66,
  [217] = 71,
  [218] = 167,
  [219] = 66,
  [220] = 92,
  [221] = 36,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 152,
  [226] = 157,
  [227] = 75,
  [228] = 154,
  [229] = 159,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 170,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 75,
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
  [253] = 154,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 195,
  [259] = 231,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 265,
  [268] = 266,
  [269] = 269,
  [270] = 235,
  [271] = 271,
  [272] = 256,
  [273] = 263,
  [274] = 157,
  [275] = 275,
  [276] = 152,
  [277] = 266,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 244,
  [282] = 256,
  [283] = 263,
  [284] = 284,
  [285] = 285,
  [286] = 256,
  [287] = 263,
  [288] = 288,
  [289] = 289,
  [290] = 256,
  [291] = 159,
  [292] = 292,
  [293] = 256,
  [294] = 294,
  [295] = 295,
  [296] = 256,
  [297] = 297,
  [298] = 298,
  [299] = 256,
  [300] = 300,
  [301] = 301,
  [302] = 256,
  [303] = 303,
  [304] = 256,
  [305] = 305,
  [306] = 256,
  [307] = 307,
  [308] = 256,
  [309] = 309,
  [310] = 256,
  [311] = 256,
  [312] = 309,
  [313] = 309,
  [314] = 309,
  [315] = 309,
  [316] = 309,
  [317] = 309,
  [318] = 309,
  [319] = 309,
  [320] = 309,
  [321] = 309,
  [322] = 309,
  [323] = 309,
  [324] = 309,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(171);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == ',') ADVANCE(256);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '<') ADVANCE(232);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(282);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '}') ADVANCE(223);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(168)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(267);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(198);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(263);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(266);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(18)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '@') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(239);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if ((11 <= lookahead && lookahead <= '\r')) SKIP(18)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(267);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(284);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(282);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(289);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '<') ADVANCE(167);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(207);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '<') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(207);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(282);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == ',') ADVANCE(256);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == ',') ADVANCE(263);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(263);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(263);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(218);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(50)
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(242);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(50)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(259);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(252);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(222);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(246);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(200);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 96:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 98:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 108:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      END_STATE();
    case 109:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 118:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 119:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 120:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 159:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 160:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(215);
      END_STATE();
    case 167:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(210);
      END_STATE();
    case 168:
      if (eof) ADVANCE(171);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '<') ADVANCE(232);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(282);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(207);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(168)
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 169:
      if (eof) ADVANCE(171);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(144);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(128);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(170)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 170:
      if (eof) ADVANCE(171);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(216);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(144);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(128);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(170)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < 11 || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_path_with_heredoc_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '}') ADVANCE(297);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (lookahead == '-') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < 11 || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < 11 || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(242);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < 11 || '\r' < lookahead)) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < 11 || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '-') ADVANCE(246);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(211);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_required_line_continuation);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(297);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '#') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 169},
  [2] = {.lex_state = 169},
  [3] = {.lex_state = 169},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 45, .external_lex_state = 2},
  [7] = {.lex_state = 45, .external_lex_state = 2},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 33, .external_lex_state = 2},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 46, .external_lex_state = 2},
  [16] = {.lex_state = 45, .external_lex_state = 2},
  [17] = {.lex_state = 33, .external_lex_state = 2},
  [18] = {.lex_state = 33, .external_lex_state = 2},
  [19] = {.lex_state = 33, .external_lex_state = 2},
  [20] = {.lex_state = 46, .external_lex_state = 2},
  [21] = {.lex_state = 43, .external_lex_state = 2},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 43, .external_lex_state = 2},
  [24] = {.lex_state = 15, .external_lex_state = 3},
  [25] = {.lex_state = 15, .external_lex_state = 3},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 43, .external_lex_state = 2},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 43, .external_lex_state = 2},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 15, .external_lex_state = 2},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 44, .external_lex_state = 2},
  [37] = {.lex_state = 22, .external_lex_state = 4},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 15, .external_lex_state = 3},
  [46] = {.lex_state = 22, .external_lex_state = 4},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 15, .external_lex_state = 2},
  [51] = {.lex_state = 22, .external_lex_state = 4},
  [52] = {.lex_state = 43, .external_lex_state = 2},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 15, .external_lex_state = 2},
  [55] = {.lex_state = 33, .external_lex_state = 2},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 33, .external_lex_state = 2},
  [60] = {.lex_state = 33, .external_lex_state = 2},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 46, .external_lex_state = 2},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 33, .external_lex_state = 2},
  [69] = {.lex_state = 33, .external_lex_state = 2},
  [70] = {.lex_state = 33, .external_lex_state = 2},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 46, .external_lex_state = 2},
  [73] = {.lex_state = 56},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 45, .external_lex_state = 2},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 55},
  [81] = {.lex_state = 32, .external_lex_state = 2},
  [82] = {.lex_state = 55},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 169},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 55},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 54},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 16, .external_lex_state = 4},
  [106] = {.lex_state = 16, .external_lex_state = 4},
  [107] = {.lex_state = 25},
  [108] = {.lex_state = 169},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 169},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 16, .external_lex_state = 4},
  [114] = {.lex_state = 52},
  [115] = {.lex_state = 16, .external_lex_state = 4},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 35},
  [118] = {.lex_state = 22, .external_lex_state = 4},
  [119] = {.lex_state = 22, .external_lex_state = 4},
  [120] = {.lex_state = 22, .external_lex_state = 4},
  [121] = {.lex_state = 35},
  [122] = {.lex_state = 26},
  [123] = {.lex_state = 56},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 33, .external_lex_state = 2},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 26},
  [128] = {.lex_state = 25},
  [129] = {.lex_state = 9, .external_lex_state = 4},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 9, .external_lex_state = 4},
  [132] = {.lex_state = 39},
  [133] = {.lex_state = 15, .external_lex_state = 4},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 38},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 39},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 9, .external_lex_state = 4},
  [142] = {.lex_state = 9, .external_lex_state = 4},
  [143] = {.lex_state = 9, .external_lex_state = 4},
  [144] = {.lex_state = 15, .external_lex_state = 4},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9, .external_lex_state = 4},
  [147] = {.lex_state = 41},
  [148] = {.lex_state = 22},
  [149] = {.lex_state = 22},
  [150] = {.lex_state = 31},
  [151] = {.lex_state = 33, .external_lex_state = 2},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 9, .external_lex_state = 4},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 15, .external_lex_state = 4},
  [156] = {.lex_state = 9, .external_lex_state = 4},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 9, .external_lex_state = 4},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 169},
  [163] = {.lex_state = 22},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 16},
  [167] = {.lex_state = 48},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 48},
  [170] = {.lex_state = 15, .external_lex_state = 4},
  [171] = {.lex_state = 48},
  [172] = {.lex_state = 48},
  [173] = {.lex_state = 48},
  [174] = {.lex_state = 48},
  [175] = {.lex_state = 48},
  [176] = {.lex_state = 48},
  [177] = {.lex_state = 48},
  [178] = {.lex_state = 169},
  [179] = {.lex_state = 48},
  [180] = {.lex_state = 48},
  [181] = {.lex_state = 169, .external_lex_state = 5},
  [182] = {.lex_state = 48},
  [183] = {.lex_state = 48},
  [184] = {.lex_state = 48},
  [185] = {.lex_state = 169, .external_lex_state = 5},
  [186] = {.lex_state = 48},
  [187] = {.lex_state = 48},
  [188] = {.lex_state = 48},
  [189] = {.lex_state = 48},
  [190] = {.lex_state = 169},
  [191] = {.lex_state = 169},
  [192] = {.lex_state = 48},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 169},
  [195] = {.lex_state = 16, .external_lex_state = 4},
  [196] = {.lex_state = 169},
  [197] = {.lex_state = 48},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 48},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 169},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 15},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 13},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 23},
  [211] = {.lex_state = 169, .external_lex_state = 5},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 169},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 169},
  [216] = {.lex_state = 55},
  [217] = {.lex_state = 55},
  [218] = {.lex_state = 48},
  [219] = {.lex_state = 13},
  [220] = {.lex_state = 55},
  [221] = {.lex_state = 57},
  [222] = {.lex_state = 38},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 13},
  [225] = {.lex_state = 19},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 56},
  [228] = {.lex_state = 19},
  [229] = {.lex_state = 19},
  [230] = {.lex_state = 169},
  [231] = {.lex_state = 9, .external_lex_state = 4},
  [232] = {.lex_state = 19},
  [233] = {.lex_state = 169},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 9, .external_lex_state = 4},
  [236] = {.lex_state = 169, .external_lex_state = 5},
  [237] = {.lex_state = 9, .external_lex_state = 4},
  [238] = {.lex_state = 169},
  [239] = {.lex_state = 9, .external_lex_state = 4},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 169},
  [242] = {.lex_state = 59},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 9, .external_lex_state = 4},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 169},
  [247] = {.lex_state = 169},
  [248] = {.lex_state = 13},
  [249] = {.lex_state = 47},
  [250] = {.lex_state = 13},
  [251] = {.lex_state = 59},
  [252] = {.lex_state = 169},
  [253] = {.lex_state = 169},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 169},
  [257] = {.lex_state = 49},
  [258] = {.lex_state = 49},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 169},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 60},
  [264] = {.lex_state = 9},
  [265] = {.lex_state = 262},
  [266] = {.lex_state = 51},
  [267] = {.lex_state = 262},
  [268] = {.lex_state = 51},
  [269] = {.lex_state = 169},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 169},
  [273] = {.lex_state = 60},
  [274] = {.lex_state = 169},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 169},
  [277] = {.lex_state = 51},
  [278] = {.lex_state = 169},
  [279] = {.lex_state = 204},
  [280] = {.lex_state = 204},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 169},
  [283] = {.lex_state = 60},
  [284] = {.lex_state = 59},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 169},
  [287] = {.lex_state = 60},
  [288] = {.lex_state = 53},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 169},
  [291] = {.lex_state = 169},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 169},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 169},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 169},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 9},
  [302] = {.lex_state = 169},
  [303] = {.lex_state = 169},
  [304] = {.lex_state = 169},
  [305] = {.lex_state = 9},
  [306] = {.lex_state = 169},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 169},
  [309] = {.lex_state = 61},
  [310] = {.lex_state = 169},
  [311] = {.lex_state = 169},
  [312] = {.lex_state = 61},
  [313] = {.lex_state = 61},
  [314] = {.lex_state = 61},
  [315] = {.lex_state = 61},
  [316] = {.lex_state = 61},
  [317] = {.lex_state = 61},
  [318] = {.lex_state = 61},
  [319] = {.lex_state = 61},
  [320] = {.lex_state = 61},
  [321] = {.lex_state = 61},
  [322] = {.lex_state = 61},
  [323] = {.lex_state = 61},
  [324] = {.lex_state = 61},
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
    [sym_source_file] = STATE(278),
    [sym__instruction] = STATE(271),
    [sym_from_instruction] = STATE(271),
    [sym_run_instruction] = STATE(271),
    [sym_cmd_instruction] = STATE(271),
    [sym_label_instruction] = STATE(271),
    [sym_expose_instruction] = STATE(271),
    [sym_env_instruction] = STATE(271),
    [sym_add_instruction] = STATE(271),
    [sym_copy_instruction] = STATE(271),
    [sym_entrypoint_instruction] = STATE(271),
    [sym_volume_instruction] = STATE(271),
    [sym_user_instruction] = STATE(271),
    [sym_workdir_instruction] = STATE(271),
    [sym_arg_instruction] = STATE(271),
    [sym_onbuild_instruction] = STATE(271),
    [sym_stopsignal_instruction] = STATE(271),
    [sym_healthcheck_instruction] = STATE(271),
    [sym_shell_instruction] = STATE(271),
    [sym_maintainer_instruction] = STATE(271),
    [sym_cross_build_instruction] = STATE(271),
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
    STATE(271), 20,
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
    STATE(271), 20,
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
    STATE(292), 20,
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
    STATE(25), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(155), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(153), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(7), 3,
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
    STATE(25), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(155), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(131), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(16), 3,
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
    STATE(44), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(232), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [395] = 8,
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
    ACTIONS(134), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(14), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(307), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [425] = 8,
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
    ACTIONS(134), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(14), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(301), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [455] = 8,
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
    ACTIONS(134), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(14), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(130), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [485] = 6,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(143), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(141), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [510] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_path_token1,
    ACTIONS(148), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_DASH_DASH,
    ACTIONS(154), 1,
      sym_heredoc_marker,
    STATE(55), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(257), 1,
      sym_path_with_heredoc,
    STATE(70), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [545] = 6,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(160), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(158), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [570] = 8,
    ACTIONS(164), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      sym_heredoc_marker,
    STATE(50), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(193), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(255), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(162), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [599] = 5,
    ACTIONS(172), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(175), 2,
      sym_heredoc_marker,
      anon_sym_LBRACK,
    STATE(16), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(170), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [622] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_path_token1,
    ACTIONS(148), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_DASH_DASH,
    ACTIONS(154), 1,
      sym_heredoc_marker,
    STATE(60), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(257), 1,
      sym_path_with_heredoc,
    STATE(19), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [657] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_path_token1,
    ACTIONS(148), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_DASH_DASH,
    ACTIONS(154), 1,
      sym_heredoc_marker,
    STATE(59), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(257), 1,
      sym_path_with_heredoc,
    STATE(13), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [692] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_path_token1,
    ACTIONS(148), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_DASH_DASH,
    ACTIONS(154), 1,
      sym_heredoc_marker,
    STATE(68), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(257), 1,
      sym_path_with_heredoc,
    STATE(70), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [727] = 8,
    ACTIONS(164), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      sym_heredoc_marker,
    STATE(50), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(193), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(262), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(162), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [756] = 5,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(179), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(177), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [778] = 6,
    ACTIONS(185), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(187), 1,
      anon_sym_DOLLAR2,
    ACTIONS(189), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(28), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [802] = 5,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(193), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(191), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [824] = 6,
    ACTIONS(203), 1,
      sym_required_line_continuation,
    ACTIONS(205), 1,
      sym_heredoc_marker,
    STATE(24), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(198), 2,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(200), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [848] = 6,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    ACTIONS(212), 1,
      sym_required_line_continuation,
    STATE(24), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(208), 2,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(210), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [872] = 6,
    ACTIONS(187), 1,
      anon_sym_DOLLAR2,
    ACTIONS(216), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(218), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(22), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [896] = 5,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(222), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(220), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [918] = 6,
    ACTIONS(226), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(228), 1,
      anon_sym_DOLLAR2,
    ACTIONS(231), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(28), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [942] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(234), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(236), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [959] = 5,
    ACTIONS(240), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(242), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(238), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(33), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [980] = 6,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(203), 1,
      sym_required_line_continuation,
    ACTIONS(247), 1,
      sym_heredoc_marker,
    STATE(31), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(244), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1003] = 6,
    ACTIONS(252), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(254), 1,
      anon_sym_DOLLAR2,
    ACTIONS(257), 1,
      aux_sym_image_tag_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(32), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1026] = 5,
    ACTIONS(262), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(265), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(33), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1047] = 7,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(270), 1,
      aux_sym_label_pair_token1,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(34), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(261), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1072] = 6,
    ACTIONS(279), 1,
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
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1095] = 4,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(291), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(289), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1114] = 6,
    ACTIONS(293), 1,
      anon_sym_LF,
    ACTIONS(295), 1,
      aux_sym_path_token3,
    ACTIONS(297), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(299), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
    STATE(51), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1137] = 6,
    ACTIONS(279), 1,
      anon_sym_DOLLAR2,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(303), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1160] = 6,
    ACTIONS(279), 1,
      anon_sym_DOLLAR2,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(309), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(38), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1183] = 6,
    ACTIONS(279), 1,
      anon_sym_DOLLAR2,
    ACTIONS(305), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(303), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1206] = 7,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(317), 1,
      aux_sym_label_pair_token1,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(34), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(261), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1231] = 6,
    ACTIONS(325), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(327), 1,
      anon_sym_DOLLAR2,
    ACTIONS(329), 1,
      aux_sym_image_tag_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(32), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1254] = 6,
    ACTIONS(279), 1,
      anon_sym_DOLLAR2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(48), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1277] = 6,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(337), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(47), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1300] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(198), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(203), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1317] = 6,
    ACTIONS(297), 1,
      anon_sym_DOLLAR2,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(341), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
    STATE(37), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1340] = 6,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      aux_sym__env_key_token1,
    ACTIONS(345), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(348), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(47), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1363] = 6,
    ACTIONS(279), 1,
      anon_sym_DOLLAR2,
    ACTIONS(305), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(303), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1386] = 5,
    ACTIONS(242), 1,
      anon_sym_DOLLAR2,
    ACTIONS(355), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(30), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1407] = 6,
    ACTIONS(168), 1,
      sym_heredoc_marker,
    ACTIONS(208), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      sym_required_line_continuation,
    STATE(31), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(357), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1430] = 6,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(361), 1,
      aux_sym_path_token3,
    ACTIONS(364), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(367), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
    STATE(51), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1453] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(191), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(193), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [1470] = 6,
    ACTIONS(369), 1,
      anon_sym_DOLLAR2,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    ACTIONS(377), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(374), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1493] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(198), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(203), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1509] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_path_token1,
    ACTIONS(382), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      sym_heredoc_marker,
    STATE(46), 1,
      sym_expansion,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(106), 1,
      sym_path_with_heredoc,
  [1537] = 6,
    ACTIONS(242), 1,
      anon_sym_DOLLAR2,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(390), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(63), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(168), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1559] = 6,
    ACTIONS(392), 1,
      aux_sym_label_pair_token1,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(41), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(261), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1581] = 6,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(400), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(402), 1,
      anon_sym_DOLLAR2,
    ACTIONS(405), 1,
      aux_sym_image_digest_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(58), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1603] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_path_token1,
    ACTIONS(382), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      sym_heredoc_marker,
    STATE(46), 1,
      sym_expansion,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(113), 1,
      sym_path_with_heredoc,
  [1631] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_path_token1,
    ACTIONS(382), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      sym_heredoc_marker,
    STATE(46), 1,
      sym_expansion,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(115), 1,
      sym_path_with_heredoc,
  [1659] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      aux_sym_path_token1,
    ACTIONS(410), 1,
      aux_sym_path_token2,
    ACTIONS(412), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_expansion,
    STATE(205), 1,
      sym_path,
    STATE(289), 1,
      sym_json_string_array,
  [1687] = 6,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      aux_sym_path_token3,
    ACTIONS(418), 1,
      anon_sym_DOLLAR2,
    ACTIONS(420), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(67), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1709] = 6,
    ACTIONS(422), 1,
      anon_sym_LF,
    ACTIONS(424), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    STATE(63), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(168), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1731] = 6,
    ACTIONS(430), 1,
      anon_sym_LF,
    ACTIONS(432), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(434), 1,
      anon_sym_DOLLAR2,
    ACTIONS(436), 1,
      aux_sym_image_digest_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(58), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1753] = 6,
    ACTIONS(164), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(168), 1,
      sym_heredoc_marker,
    STATE(50), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(234), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(162), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1775] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(440), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1791] = 6,
    ACTIONS(418), 1,
      anon_sym_DOLLAR2,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 1,
      aux_sym_path_token3,
    ACTIONS(446), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(74), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1813] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_path_token1,
    ACTIONS(382), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(384), 1,
      anon_sym_DOLLAR,
    ACTIONS(386), 1,
      sym_heredoc_marker,
    STATE(46), 1,
      sym_expansion,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(105), 1,
      sym_path_with_heredoc,
  [1841] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_path_token1,
    ACTIONS(451), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(454), 1,
      anon_sym_DOLLAR,
    ACTIONS(457), 1,
      sym_heredoc_marker,
    STATE(69), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(257), 1,
      sym_path_with_heredoc,
  [1869] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym_path_token1,
    ACTIONS(464), 1,
      anon_sym_DASH_DASH,
    STATE(70), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
    ACTIONS(462), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [1891] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(469), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1907] = 6,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    ACTIONS(471), 1,
      aux_sym_shell_fragment_token2,
    STATE(25), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(170), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(108), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1929] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_DOLLAR,
    ACTIONS(475), 1,
      aux_sym_image_name_token1,
    ACTIONS(477), 1,
      anon_sym_DASH_DASH,
    STATE(26), 1,
      sym_expansion,
    STATE(89), 1,
      sym_image_name,
    STATE(123), 1,
      sym_param,
    STATE(248), 1,
      sym_image_spec,
  [1957] = 6,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      sym__non_newline_whitespace,
    ACTIONS(479), 1,
      aux_sym_path_token3,
    ACTIONS(482), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(74), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1979] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(487), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(485), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1995] = 5,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 1,
      anon_sym_DOLLAR,
    ACTIONS(494), 1,
      aux_sym_expose_port_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2014] = 5,
    ACTIONS(497), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOLLAR2,
    ACTIONS(501), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(84), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2033] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(438), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2048] = 5,
    ACTIONS(503), 1,
      anon_sym_LF,
    ACTIONS(505), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(508), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(79), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2067] = 5,
    ACTIONS(343), 1,
      sym__non_newline_whitespace,
    ACTIONS(511), 1,
      aux_sym_path_token3,
    ACTIONS(513), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(95), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2086] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_path_token1,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(291), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [2105] = 5,
    ACTIONS(367), 1,
      sym__non_newline_whitespace,
    ACTIONS(517), 1,
      aux_sym_path_token3,
    ACTIONS(520), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(82), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2124] = 5,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      aux_sym_path_token3,
    ACTIONS(526), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2143] = 5,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(531), 1,
      anon_sym_DOLLAR2,
    ACTIONS(534), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(84), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2162] = 6,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(537), 1,
      anon_sym_NONE,
    ACTIONS(539), 1,
      anon_sym_DASH_DASH,
    STATE(295), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(111), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2183] = 5,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      aux_sym_path_token3,
    ACTIONS(543), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(88), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2202] = 5,
    ACTIONS(499), 1,
      anon_sym_DOLLAR2,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(77), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2221] = 5,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      anon_sym_DOLLAR2,
    ACTIONS(549), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(83), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2240] = 7,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_AT,
    STATE(161), 1,
      sym_image_tag,
    STATE(223), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [2263] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(469), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(467), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2278] = 5,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(563), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(79), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2297] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(567), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(565), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2312] = 5,
    ACTIONS(563), 1,
      anon_sym_DOLLAR2,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(91), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2331] = 5,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 1,
      anon_sym_DOLLAR,
    ACTIONS(577), 1,
      aux_sym_expose_port_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(76), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2350] = 5,
    ACTIONS(299), 1,
      sym__non_newline_whitespace,
    ACTIONS(513), 1,
      anon_sym_DOLLAR2,
    ACTIONS(579), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(82), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2369] = 5,
    ACTIONS(242), 1,
      anon_sym_DOLLAR2,
    ACTIONS(390), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(56), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(168), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [2388] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(469), 3,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2402] = 5,
    ACTIONS(583), 1,
      anon_sym_SQUOTE,
    ACTIONS(585), 1,
      sym_single_quoted_escape_sequence,
    STATE(110), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2420] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DOLLAR2,
    ACTIONS(587), 1,
      aux_sym_image_tag_token1,
    STATE(42), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2438] = 4,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(593), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2454] = 4,
    ACTIONS(434), 1,
      anon_sym_DOLLAR2,
    ACTIONS(595), 1,
      aux_sym_image_digest_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(64), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2470] = 5,
    ACTIONS(599), 1,
      anon_sym_SQUOTE,
    ACTIONS(601), 1,
      sym_single_quoted_escape_sequence,
    STATE(103), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2488] = 5,
    ACTIONS(585), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2506] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2520] = 5,
    ACTIONS(605), 1,
      anon_sym_LF,
    ACTIONS(607), 1,
      sym__non_newline_whitespace,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(141), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2538] = 5,
    ACTIONS(607), 1,
      sym__non_newline_whitespace,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(143), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2556] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(440), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [2570] = 4,
    ACTIONS(613), 1,
      anon_sym_DOLLAR,
    ACTIONS(615), 1,
      aux_sym_expose_port_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(94), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2586] = 5,
    ACTIONS(617), 1,
      anon_sym_LF,
    ACTIONS(619), 1,
      aux_sym__env_key_token1,
    STATE(252), 1,
      sym__env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(109), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2604] = 5,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    ACTIONS(627), 1,
      sym_single_quoted_escape_sequence,
    STATE(110), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2622] = 5,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(539), 1,
      anon_sym_DASH_DASH,
    STATE(254), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(162), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2640] = 5,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(632), 1,
      aux_sym__env_key_token1,
    STATE(252), 1,
      sym__env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(109), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2658] = 5,
    ACTIONS(607), 1,
      sym__non_newline_whitespace,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(156), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2676] = 5,
    ACTIONS(636), 1,
      aux_sym__env_key_token1,
    STATE(249), 1,
      sym__env_key,
    STATE(260), 1,
      sym__spaced_env_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(112), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2694] = 5,
    ACTIONS(607), 1,
      sym__non_newline_whitespace,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(638), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(158), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2712] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(469), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(467), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2726] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(408), 1,
      aux_sym_path_token1,
    ACTIONS(410), 1,
      aux_sym_path_token2,
    ACTIONS(412), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      sym_expansion,
    STATE(245), 1,
      sym_path,
  [2748] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(467), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2762] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(565), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2776] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(438), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2790] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(640), 1,
      aux_sym_path_token1,
    ACTIONS(642), 1,
      aux_sym_path_token2,
    ACTIONS(644), 1,
      anon_sym_DOLLAR,
    STATE(86), 1,
      sym_expansion,
    STATE(285), 1,
      sym_path,
  [2812] = 5,
    ACTIONS(585), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2830] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_DOLLAR,
    ACTIONS(475), 1,
      aux_sym_image_name_token1,
    STATE(26), 1,
      sym_expansion,
    STATE(89), 1,
      sym_image_name,
    STATE(224), 1,
      sym_image_spec,
  [2852] = 5,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      sym_single_quoted_escape_sequence,
    STATE(122), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2870] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_path_token1,
    ACTIONS(487), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [2886] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(440), 3,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2900] = 5,
    ACTIONS(656), 1,
      anon_sym_SQUOTE,
    ACTIONS(658), 1,
      sym_single_quoted_escape_sequence,
    STATE(98), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2918] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(469), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [2932] = 4,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(142), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2947] = 3,
    ACTIONS(662), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(664), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2960] = 4,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(666), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(129), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2975] = 5,
    ACTIONS(668), 1,
      anon_sym_DOLLAR,
    ACTIONS(670), 1,
      aux_sym_image_alias_token1,
    STATE(87), 1,
      sym_expansion,
    STATE(305), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2992] = 4,
    ACTIONS(674), 1,
      sym_required_line_continuation,
    STATE(144), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(672), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3007] = 5,
    ACTIONS(676), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      aux_sym_json_string_token1,
    ACTIONS(680), 1,
      sym_json_escape_sequence,
    STATE(135), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3024] = 5,
    ACTIONS(682), 1,
      anon_sym_DQUOTE,
    ACTIONS(684), 1,
      aux_sym_json_string_token1,
    ACTIONS(686), 1,
      sym_json_escape_sequence,
    STATE(150), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3041] = 5,
    ACTIONS(688), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(690), 1,
      anon_sym_DOLLAR,
    STATE(93), 1,
      sym_expansion,
    STATE(294), 1,
      sym__stopsignal_value,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3058] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3069] = 5,
    ACTIONS(668), 1,
      anon_sym_DOLLAR,
    ACTIONS(670), 1,
      aux_sym_image_alias_token1,
    STATE(87), 1,
      sym_expansion,
    STATE(264), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3086] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(565), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3097] = 3,
    ACTIONS(440), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3110] = 4,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(692), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(142), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3125] = 4,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(696), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(142), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3140] = 4,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(142), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3155] = 4,
    ACTIONS(703), 1,
      sym_required_line_continuation,
    STATE(144), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(701), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3170] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3181] = 4,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(666), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(142), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3196] = 5,
    ACTIONS(706), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(708), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_expansion,
    STATE(243), 1,
      sym__user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3213] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(440), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3226] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(469), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3239] = 5,
    ACTIONS(710), 1,
      anon_sym_DQUOTE,
    ACTIONS(712), 1,
      aux_sym_json_string_token1,
    ACTIONS(715), 1,
      sym_json_escape_sequence,
    STATE(150), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3256] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(718), 1,
      aux_sym_path_token1,
    ACTIONS(720), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [3271] = 3,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(724), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3284] = 4,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(726), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(146), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3299] = 3,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(730), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3312] = 4,
    ACTIONS(674), 1,
      sym_required_line_continuation,
    STATE(133), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(732), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3327] = 4,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(734), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(142), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3342] = 3,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(738), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3355] = 4,
    ACTIONS(609), 1,
      sym_heredoc_nl,
    ACTIONS(740), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(142), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3370] = 3,
    ACTIONS(742), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(744), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3383] = 3,
    ACTIONS(469), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3396] = 5,
    ACTIONS(557), 1,
      anon_sym_AT,
    ACTIONS(746), 1,
      anon_sym_LF,
    ACTIONS(748), 1,
      aux_sym_from_instruction_token2,
    STATE(250), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3413] = 4,
    ACTIONS(462), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(750), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(162), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [3428] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(567), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3441] = 3,
    ACTIONS(469), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3453] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(565), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3463] = 4,
    ACTIONS(753), 1,
      anon_sym_LF,
    ACTIONS(755), 1,
      sym__non_newline_whitespace,
    STATE(166), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3477] = 4,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
    ACTIONS(760), 1,
      sym_variable,
    STATE(200), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3491] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(762), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3501] = 4,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(766), 1,
      sym_variable,
    STATE(118), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3515] = 3,
    ACTIONS(768), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(701), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [3527] = 4,
    ACTIONS(770), 1,
      anon_sym_LBRACE,
    ACTIONS(772), 1,
      sym_variable,
    STATE(97), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3541] = 4,
    ACTIONS(774), 1,
      anon_sym_LBRACE,
    ACTIONS(776), 1,
      sym_variable,
    STATE(71), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3555] = 4,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      sym_variable,
    STATE(203), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3569] = 4,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      sym_variable,
    STATE(160), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3583] = 4,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
    ACTIONS(784), 1,
      sym_variable,
    STATE(119), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3597] = 4,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      sym_variable,
    STATE(116), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3611] = 4,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      sym_variable,
    STATE(165), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3625] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA2,
    ACTIONS(797), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3639] = 4,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
    ACTIONS(799), 1,
      sym_variable,
    STATE(209), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3653] = 4,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    ACTIONS(803), 1,
      sym_variable,
    STATE(212), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3667] = 4,
    ACTIONS(805), 1,
      sym_heredoc_line,
    ACTIONS(808), 1,
      sym_heredoc_end,
    STATE(181), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3681] = 4,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      sym_variable,
    STATE(164), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3695] = 4,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      sym_variable,
    STATE(139), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3709] = 4,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    ACTIONS(816), 1,
      sym_variable,
    STATE(137), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3723] = 4,
    ACTIONS(818), 1,
      sym_heredoc_line,
    ACTIONS(820), 1,
      sym_heredoc_end,
    STATE(181), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3737] = 4,
    ACTIONS(822), 1,
      anon_sym_LBRACE,
    ACTIONS(824), 1,
      sym_variable,
    STATE(163), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3751] = 4,
    ACTIONS(822), 1,
      anon_sym_LBRACE,
    ACTIONS(826), 1,
      sym_variable,
    STATE(149), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3765] = 4,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    ACTIONS(830), 1,
      sym_variable,
    STATE(220), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3779] = 4,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      sym_variable,
    STATE(217), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3793] = 4,
    ACTIONS(834), 1,
      anon_sym_COMMA2,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3807] = 4,
    ACTIONS(834), 1,
      anon_sym_COMMA2,
    ACTIONS(838), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3821] = 4,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(842), 1,
      sym_variable,
    STATE(92), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3835] = 4,
    ACTIONS(732), 1,
      anon_sym_LF,
    ACTIONS(844), 1,
      sym_required_line_continuation,
    STATE(204), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3849] = 4,
    ACTIONS(834), 1,
      anon_sym_COMMA2,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3863] = 3,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      sym_heredoc_nl,
      sym__non_newline_whitespace,
  [3875] = 4,
    ACTIONS(848), 1,
      anon_sym_RBRACK,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3889] = 4,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      sym_variable,
    STATE(198), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3903] = 3,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3915] = 4,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(858), 1,
      sym_variable,
    STATE(128), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3929] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3939] = 4,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3953] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3963] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(565), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3973] = 4,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(844), 1,
      sym_required_line_continuation,
    STATE(214), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3987] = 4,
    ACTIONS(862), 1,
      anon_sym_LF,
    ACTIONS(864), 1,
      sym__non_newline_whitespace,
    STATE(206), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4001] = 4,
    ACTIONS(864), 1,
      sym__non_newline_whitespace,
    ACTIONS(866), 1,
      anon_sym_LF,
    STATE(166), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4015] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4025] = 3,
    ACTIONS(868), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(870), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4037] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4047] = 3,
    ACTIONS(440), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4059] = 4,
    ACTIONS(818), 1,
      sym_heredoc_line,
    ACTIONS(872), 1,
      sym_heredoc_end,
    STATE(185), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4073] = 3,
    ACTIONS(567), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4085] = 3,
    ACTIONS(874), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(291), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4097] = 4,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(876), 1,
      sym_required_line_continuation,
    STATE(214), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4111] = 4,
    ACTIONS(834), 1,
      anon_sym_COMMA2,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4125] = 3,
    ACTIONS(440), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4137] = 3,
    ACTIONS(469), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4149] = 4,
    ACTIONS(840), 1,
      anon_sym_LBRACE,
    ACTIONS(881), 1,
      sym_variable,
    STATE(90), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4163] = 3,
    ACTIONS(438), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4175] = 3,
    ACTIONS(567), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4187] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_image_name_token1,
    ACTIONS(291), 1,
      anon_sym_DOLLAR,
    ACTIONS(883), 1,
      anon_sym_EQ,
  [4203] = 3,
    ACTIONS(885), 1,
      aux_sym_param_token1,
    ACTIONS(887), 1,
      anon_sym_mount,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4214] = 3,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(891), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4225] = 3,
    ACTIONS(893), 1,
      anon_sym_LF,
    ACTIONS(895), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4236] = 3,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(724), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4247] = 3,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4258] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(485), 1,
      aux_sym_image_name_token1,
    ACTIONS(487), 1,
      anon_sym_DOLLAR,
  [4271] = 3,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(730), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4282] = 3,
    ACTIONS(742), 1,
      anon_sym_LF,
    ACTIONS(744), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4293] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4302] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(899), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4311] = 3,
    ACTIONS(901), 1,
      anon_sym_LF,
    ACTIONS(903), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4322] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4331] = 3,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(768), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4342] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(905), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4351] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(808), 2,
      sym_heredoc_line,
      sym_heredoc_end,
  [4360] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(907), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4369] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(487), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4378] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(909), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4387] = 3,
    ACTIONS(911), 1,
      anon_sym_LF,
    ACTIONS(913), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4398] = 3,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    STATE(297), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4409] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(915), 1,
      aux_sym_mount_param_param_token1,
    STATE(52), 1,
      sym_mount_param_param,
  [4422] = 3,
    ACTIONS(917), 1,
      anon_sym_LF,
    ACTIONS(919), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4433] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(921), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4442] = 3,
    ACTIONS(753), 1,
      anon_sym_LF,
    ACTIONS(923), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4453] = 3,
    ACTIONS(850), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4464] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(925), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4473] = 3,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(929), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4484] = 3,
    ACTIONS(931), 1,
      anon_sym_EQ,
    ACTIONS(933), 1,
      aux_sym__spaced_env_pair_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4495] = 3,
    ACTIONS(935), 1,
      anon_sym_LF,
    ACTIONS(937), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4506] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(915), 1,
      aux_sym_mount_param_param_token1,
    STATE(27), 1,
      sym_mount_param_param,
  [4519] = 2,
    ACTIONS(931), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4527] = 2,
    ACTIONS(728), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4535] = 2,
    ACTIONS(939), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4543] = 2,
    ACTIONS(941), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4551] = 2,
    ACTIONS(943), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4559] = 2,
    ACTIONS(607), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4567] = 2,
    ACTIONS(343), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4575] = 2,
    ACTIONS(899), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4583] = 2,
    ACTIONS(945), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4591] = 2,
    ACTIONS(947), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4599] = 2,
    ACTIONS(949), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4607] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym_param_token2,
  [4617] = 2,
    ACTIONS(953), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4625] = 2,
    ACTIONS(955), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4633] = 2,
    ACTIONS(957), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4641] = 2,
    ACTIONS(959), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4649] = 2,
    ACTIONS(961), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4657] = 2,
    ACTIONS(963), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4665] = 2,
    ACTIONS(905), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4673] = 2,
    ACTIONS(965), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4681] = 2,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4689] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(969), 1,
      aux_sym_param_token2,
  [4699] = 2,
    ACTIONS(736), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4707] = 2,
    ACTIONS(971), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4715] = 2,
    ACTIONS(722), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4723] = 2,
    ACTIONS(973), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4731] = 2,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4739] = 2,
    ACTIONS(977), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4747] = 2,
    ACTIONS(979), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4755] = 2,
    ACTIONS(921), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4763] = 2,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4771] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym_param_token2,
  [4781] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(985), 1,
      aux_sym_mount_param_param_token1,
  [4791] = 2,
    ACTIONS(987), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4799] = 2,
    ACTIONS(989), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4807] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(991), 1,
      aux_sym_param_token2,
  [4817] = 2,
    ACTIONS(993), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4825] = 2,
    ACTIONS(995), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4833] = 2,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4841] = 2,
    ACTIONS(742), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4849] = 2,
    ACTIONS(999), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4857] = 2,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4865] = 2,
    ACTIONS(1003), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4873] = 2,
    ACTIONS(1005), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4881] = 2,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4889] = 2,
    ACTIONS(1009), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4897] = 2,
    ACTIONS(1011), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4905] = 2,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4913] = 2,
    ACTIONS(1015), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4921] = 2,
    ACTIONS(1017), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4929] = 2,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4937] = 2,
    ACTIONS(1021), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4945] = 2,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4953] = 2,
    ACTIONS(1025), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4961] = 2,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4969] = 2,
    ACTIONS(1029), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4977] = 2,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4985] = 2,
    ACTIONS(1033), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4993] = 2,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5001] = 2,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5009] = 2,
    ACTIONS(1039), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5017] = 2,
    ACTIONS(1041), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5025] = 2,
    ACTIONS(1043), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5033] = 2,
    ACTIONS(1045), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5041] = 2,
    ACTIONS(1047), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5049] = 2,
    ACTIONS(1049), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5057] = 2,
    ACTIONS(1051), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5065] = 2,
    ACTIONS(1053), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5073] = 2,
    ACTIONS(1055), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5081] = 2,
    ACTIONS(1057), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5089] = 2,
    ACTIONS(1059), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5097] = 2,
    ACTIONS(1061), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5105] = 2,
    ACTIONS(1063), 1,
      aux_sym__expansion_body_token1,
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
  [SMALL_STATE(10)] = 425,
  [SMALL_STATE(11)] = 455,
  [SMALL_STATE(12)] = 485,
  [SMALL_STATE(13)] = 510,
  [SMALL_STATE(14)] = 545,
  [SMALL_STATE(15)] = 570,
  [SMALL_STATE(16)] = 599,
  [SMALL_STATE(17)] = 622,
  [SMALL_STATE(18)] = 657,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 727,
  [SMALL_STATE(21)] = 756,
  [SMALL_STATE(22)] = 778,
  [SMALL_STATE(23)] = 802,
  [SMALL_STATE(24)] = 824,
  [SMALL_STATE(25)] = 848,
  [SMALL_STATE(26)] = 872,
  [SMALL_STATE(27)] = 896,
  [SMALL_STATE(28)] = 918,
  [SMALL_STATE(29)] = 942,
  [SMALL_STATE(30)] = 959,
  [SMALL_STATE(31)] = 980,
  [SMALL_STATE(32)] = 1003,
  [SMALL_STATE(33)] = 1026,
  [SMALL_STATE(34)] = 1047,
  [SMALL_STATE(35)] = 1072,
  [SMALL_STATE(36)] = 1095,
  [SMALL_STATE(37)] = 1114,
  [SMALL_STATE(38)] = 1137,
  [SMALL_STATE(39)] = 1160,
  [SMALL_STATE(40)] = 1183,
  [SMALL_STATE(41)] = 1206,
  [SMALL_STATE(42)] = 1231,
  [SMALL_STATE(43)] = 1254,
  [SMALL_STATE(44)] = 1277,
  [SMALL_STATE(45)] = 1300,
  [SMALL_STATE(46)] = 1317,
  [SMALL_STATE(47)] = 1340,
  [SMALL_STATE(48)] = 1363,
  [SMALL_STATE(49)] = 1386,
  [SMALL_STATE(50)] = 1407,
  [SMALL_STATE(51)] = 1430,
  [SMALL_STATE(52)] = 1453,
  [SMALL_STATE(53)] = 1470,
  [SMALL_STATE(54)] = 1493,
  [SMALL_STATE(55)] = 1509,
  [SMALL_STATE(56)] = 1537,
  [SMALL_STATE(57)] = 1559,
  [SMALL_STATE(58)] = 1581,
  [SMALL_STATE(59)] = 1603,
  [SMALL_STATE(60)] = 1631,
  [SMALL_STATE(61)] = 1659,
  [SMALL_STATE(62)] = 1687,
  [SMALL_STATE(63)] = 1709,
  [SMALL_STATE(64)] = 1731,
  [SMALL_STATE(65)] = 1753,
  [SMALL_STATE(66)] = 1775,
  [SMALL_STATE(67)] = 1791,
  [SMALL_STATE(68)] = 1813,
  [SMALL_STATE(69)] = 1841,
  [SMALL_STATE(70)] = 1869,
  [SMALL_STATE(71)] = 1891,
  [SMALL_STATE(72)] = 1907,
  [SMALL_STATE(73)] = 1929,
  [SMALL_STATE(74)] = 1957,
  [SMALL_STATE(75)] = 1979,
  [SMALL_STATE(76)] = 1995,
  [SMALL_STATE(77)] = 2014,
  [SMALL_STATE(78)] = 2033,
  [SMALL_STATE(79)] = 2048,
  [SMALL_STATE(80)] = 2067,
  [SMALL_STATE(81)] = 2086,
  [SMALL_STATE(82)] = 2105,
  [SMALL_STATE(83)] = 2124,
  [SMALL_STATE(84)] = 2143,
  [SMALL_STATE(85)] = 2162,
  [SMALL_STATE(86)] = 2183,
  [SMALL_STATE(87)] = 2202,
  [SMALL_STATE(88)] = 2221,
  [SMALL_STATE(89)] = 2240,
  [SMALL_STATE(90)] = 2263,
  [SMALL_STATE(91)] = 2278,
  [SMALL_STATE(92)] = 2297,
  [SMALL_STATE(93)] = 2312,
  [SMALL_STATE(94)] = 2331,
  [SMALL_STATE(95)] = 2350,
  [SMALL_STATE(96)] = 2369,
  [SMALL_STATE(97)] = 2388,
  [SMALL_STATE(98)] = 2402,
  [SMALL_STATE(99)] = 2420,
  [SMALL_STATE(100)] = 2438,
  [SMALL_STATE(101)] = 2454,
  [SMALL_STATE(102)] = 2470,
  [SMALL_STATE(103)] = 2488,
  [SMALL_STATE(104)] = 2506,
  [SMALL_STATE(105)] = 2520,
  [SMALL_STATE(106)] = 2538,
  [SMALL_STATE(107)] = 2556,
  [SMALL_STATE(108)] = 2570,
  [SMALL_STATE(109)] = 2586,
  [SMALL_STATE(110)] = 2604,
  [SMALL_STATE(111)] = 2622,
  [SMALL_STATE(112)] = 2640,
  [SMALL_STATE(113)] = 2658,
  [SMALL_STATE(114)] = 2676,
  [SMALL_STATE(115)] = 2694,
  [SMALL_STATE(116)] = 2712,
  [SMALL_STATE(117)] = 2726,
  [SMALL_STATE(118)] = 2748,
  [SMALL_STATE(119)] = 2762,
  [SMALL_STATE(120)] = 2776,
  [SMALL_STATE(121)] = 2790,
  [SMALL_STATE(122)] = 2812,
  [SMALL_STATE(123)] = 2830,
  [SMALL_STATE(124)] = 2852,
  [SMALL_STATE(125)] = 2870,
  [SMALL_STATE(126)] = 2886,
  [SMALL_STATE(127)] = 2900,
  [SMALL_STATE(128)] = 2918,
  [SMALL_STATE(129)] = 2932,
  [SMALL_STATE(130)] = 2947,
  [SMALL_STATE(131)] = 2960,
  [SMALL_STATE(132)] = 2975,
  [SMALL_STATE(133)] = 2992,
  [SMALL_STATE(134)] = 3007,
  [SMALL_STATE(135)] = 3024,
  [SMALL_STATE(136)] = 3041,
  [SMALL_STATE(137)] = 3058,
  [SMALL_STATE(138)] = 3069,
  [SMALL_STATE(139)] = 3086,
  [SMALL_STATE(140)] = 3097,
  [SMALL_STATE(141)] = 3110,
  [SMALL_STATE(142)] = 3125,
  [SMALL_STATE(143)] = 3140,
  [SMALL_STATE(144)] = 3155,
  [SMALL_STATE(145)] = 3170,
  [SMALL_STATE(146)] = 3181,
  [SMALL_STATE(147)] = 3196,
  [SMALL_STATE(148)] = 3213,
  [SMALL_STATE(149)] = 3226,
  [SMALL_STATE(150)] = 3239,
  [SMALL_STATE(151)] = 3256,
  [SMALL_STATE(152)] = 3271,
  [SMALL_STATE(153)] = 3284,
  [SMALL_STATE(154)] = 3299,
  [SMALL_STATE(155)] = 3312,
  [SMALL_STATE(156)] = 3327,
  [SMALL_STATE(157)] = 3342,
  [SMALL_STATE(158)] = 3355,
  [SMALL_STATE(159)] = 3370,
  [SMALL_STATE(160)] = 3383,
  [SMALL_STATE(161)] = 3396,
  [SMALL_STATE(162)] = 3413,
  [SMALL_STATE(163)] = 3428,
  [SMALL_STATE(164)] = 3441,
  [SMALL_STATE(165)] = 3453,
  [SMALL_STATE(166)] = 3463,
  [SMALL_STATE(167)] = 3477,
  [SMALL_STATE(168)] = 3491,
  [SMALL_STATE(169)] = 3501,
  [SMALL_STATE(170)] = 3515,
  [SMALL_STATE(171)] = 3527,
  [SMALL_STATE(172)] = 3541,
  [SMALL_STATE(173)] = 3555,
  [SMALL_STATE(174)] = 3569,
  [SMALL_STATE(175)] = 3583,
  [SMALL_STATE(176)] = 3597,
  [SMALL_STATE(177)] = 3611,
  [SMALL_STATE(178)] = 3625,
  [SMALL_STATE(179)] = 3639,
  [SMALL_STATE(180)] = 3653,
  [SMALL_STATE(181)] = 3667,
  [SMALL_STATE(182)] = 3681,
  [SMALL_STATE(183)] = 3695,
  [SMALL_STATE(184)] = 3709,
  [SMALL_STATE(185)] = 3723,
  [SMALL_STATE(186)] = 3737,
  [SMALL_STATE(187)] = 3751,
  [SMALL_STATE(188)] = 3765,
  [SMALL_STATE(189)] = 3779,
  [SMALL_STATE(190)] = 3793,
  [SMALL_STATE(191)] = 3807,
  [SMALL_STATE(192)] = 3821,
  [SMALL_STATE(193)] = 3835,
  [SMALL_STATE(194)] = 3849,
  [SMALL_STATE(195)] = 3863,
  [SMALL_STATE(196)] = 3875,
  [SMALL_STATE(197)] = 3889,
  [SMALL_STATE(198)] = 3903,
  [SMALL_STATE(199)] = 3915,
  [SMALL_STATE(200)] = 3929,
  [SMALL_STATE(201)] = 3939,
  [SMALL_STATE(202)] = 3953,
  [SMALL_STATE(203)] = 3963,
  [SMALL_STATE(204)] = 3973,
  [SMALL_STATE(205)] = 3987,
  [SMALL_STATE(206)] = 4001,
  [SMALL_STATE(207)] = 4015,
  [SMALL_STATE(208)] = 4025,
  [SMALL_STATE(209)] = 4037,
  [SMALL_STATE(210)] = 4047,
  [SMALL_STATE(211)] = 4059,
  [SMALL_STATE(212)] = 4073,
  [SMALL_STATE(213)] = 4085,
  [SMALL_STATE(214)] = 4097,
  [SMALL_STATE(215)] = 4111,
  [SMALL_STATE(216)] = 4125,
  [SMALL_STATE(217)] = 4137,
  [SMALL_STATE(218)] = 4149,
  [SMALL_STATE(219)] = 4163,
  [SMALL_STATE(220)] = 4175,
  [SMALL_STATE(221)] = 4187,
  [SMALL_STATE(222)] = 4203,
  [SMALL_STATE(223)] = 4214,
  [SMALL_STATE(224)] = 4225,
  [SMALL_STATE(225)] = 4236,
  [SMALL_STATE(226)] = 4247,
  [SMALL_STATE(227)] = 4258,
  [SMALL_STATE(228)] = 4271,
  [SMALL_STATE(229)] = 4282,
  [SMALL_STATE(230)] = 4293,
  [SMALL_STATE(231)] = 4302,
  [SMALL_STATE(232)] = 4311,
  [SMALL_STATE(233)] = 4322,
  [SMALL_STATE(234)] = 4331,
  [SMALL_STATE(235)] = 4342,
  [SMALL_STATE(236)] = 4351,
  [SMALL_STATE(237)] = 4360,
  [SMALL_STATE(238)] = 4369,
  [SMALL_STATE(239)] = 4378,
  [SMALL_STATE(240)] = 4387,
  [SMALL_STATE(241)] = 4398,
  [SMALL_STATE(242)] = 4409,
  [SMALL_STATE(243)] = 4422,
  [SMALL_STATE(244)] = 4433,
  [SMALL_STATE(245)] = 4442,
  [SMALL_STATE(246)] = 4453,
  [SMALL_STATE(247)] = 4464,
  [SMALL_STATE(248)] = 4473,
  [SMALL_STATE(249)] = 4484,
  [SMALL_STATE(250)] = 4495,
  [SMALL_STATE(251)] = 4506,
  [SMALL_STATE(252)] = 4519,
  [SMALL_STATE(253)] = 4527,
  [SMALL_STATE(254)] = 4535,
  [SMALL_STATE(255)] = 4543,
  [SMALL_STATE(256)] = 4551,
  [SMALL_STATE(257)] = 4559,
  [SMALL_STATE(258)] = 4567,
  [SMALL_STATE(259)] = 4575,
  [SMALL_STATE(260)] = 4583,
  [SMALL_STATE(261)] = 4591,
  [SMALL_STATE(262)] = 4599,
  [SMALL_STATE(263)] = 4607,
  [SMALL_STATE(264)] = 4617,
  [SMALL_STATE(265)] = 4625,
  [SMALL_STATE(266)] = 4633,
  [SMALL_STATE(267)] = 4641,
  [SMALL_STATE(268)] = 4649,
  [SMALL_STATE(269)] = 4657,
  [SMALL_STATE(270)] = 4665,
  [SMALL_STATE(271)] = 4673,
  [SMALL_STATE(272)] = 4681,
  [SMALL_STATE(273)] = 4689,
  [SMALL_STATE(274)] = 4699,
  [SMALL_STATE(275)] = 4707,
  [SMALL_STATE(276)] = 4715,
  [SMALL_STATE(277)] = 4723,
  [SMALL_STATE(278)] = 4731,
  [SMALL_STATE(279)] = 4739,
  [SMALL_STATE(280)] = 4747,
  [SMALL_STATE(281)] = 4755,
  [SMALL_STATE(282)] = 4763,
  [SMALL_STATE(283)] = 4771,
  [SMALL_STATE(284)] = 4781,
  [SMALL_STATE(285)] = 4791,
  [SMALL_STATE(286)] = 4799,
  [SMALL_STATE(287)] = 4807,
  [SMALL_STATE(288)] = 4817,
  [SMALL_STATE(289)] = 4825,
  [SMALL_STATE(290)] = 4833,
  [SMALL_STATE(291)] = 4841,
  [SMALL_STATE(292)] = 4849,
  [SMALL_STATE(293)] = 4857,
  [SMALL_STATE(294)] = 4865,
  [SMALL_STATE(295)] = 4873,
  [SMALL_STATE(296)] = 4881,
  [SMALL_STATE(297)] = 4889,
  [SMALL_STATE(298)] = 4897,
  [SMALL_STATE(299)] = 4905,
  [SMALL_STATE(300)] = 4913,
  [SMALL_STATE(301)] = 4921,
  [SMALL_STATE(302)] = 4929,
  [SMALL_STATE(303)] = 4937,
  [SMALL_STATE(304)] = 4945,
  [SMALL_STATE(305)] = 4953,
  [SMALL_STATE(306)] = 4961,
  [SMALL_STATE(307)] = 4969,
  [SMALL_STATE(308)] = 4977,
  [SMALL_STATE(309)] = 4985,
  [SMALL_STATE(310)] = 4993,
  [SMALL_STATE(311)] = 5001,
  [SMALL_STATE(312)] = 5009,
  [SMALL_STATE(313)] = 5017,
  [SMALL_STATE(314)] = 5025,
  [SMALL_STATE(315)] = 5033,
  [SMALL_STATE(316)] = 5041,
  [SMALL_STATE(317)] = 5049,
  [SMALL_STATE(318)] = 5057,
  [SMALL_STATE(319)] = 5065,
  [SMALL_STATE(320)] = 5073,
  [SMALL_STATE(321)] = 5081,
  [SMALL_STATE(322)] = 5089,
  [SMALL_STATE(323)] = 5097,
  [SMALL_STATE(324)] = 5105,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(288),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(172),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(12),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(222),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(242),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(24),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(265),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(218),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(28),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(31),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(267),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(176),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(32),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(33),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(184),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(261),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(39),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(102),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 2, .production_id = 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(171),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(47),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(51),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(169),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(199),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(53),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(53),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(174),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(58),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(168),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(184),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(80),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(80),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(188),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(258),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(266),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(74),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(187),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(197),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(100),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(79),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(179),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(82),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(189),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(83),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(182),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(167),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(84),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(252),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(110),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(110),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2), SHIFT_REPEAT(211),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(72),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(150),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(150),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(277),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(117),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(246),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2), SHIFT_REPEAT(275),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(65),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 3),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [975] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
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
