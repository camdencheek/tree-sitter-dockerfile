#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 337
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 6
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
  sym__eof_instruction_end = 87,
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
  sym__spaced_env_value = 122,
  sym__env_key = 123,
  sym_expose_port = 124,
  sym_label_pair = 125,
  sym_image_spec = 126,
  sym_image_name = 127,
  sym_image_tag = 128,
  sym_image_digest = 129,
  sym_param = 130,
  sym_mount_param = 131,
  sym_mount_param_param = 132,
  sym_image_alias = 133,
  sym_shell_command = 134,
  sym_shell_fragment = 135,
  sym_json_string_array = 136,
  sym_json_string = 137,
  sym_double_quoted_string = 138,
  sym_single_quoted_string = 139,
  sym_unquoted_string = 140,
  aux_sym_source_file_repeat1 = 141,
  aux_sym_run_instruction_repeat1 = 142,
  aux_sym_run_instruction_repeat2 = 143,
  aux_sym_label_instruction_repeat1 = 144,
  aux_sym_expose_instruction_repeat1 = 145,
  aux_sym_env_instruction_repeat1 = 146,
  aux_sym_add_instruction_repeat1 = 147,
  aux_sym_add_instruction_repeat2 = 148,
  aux_sym_volume_instruction_repeat1 = 149,
  aux_sym__user_name_or_group_repeat1 = 150,
  aux_sym__stopsignal_value_repeat1 = 151,
  aux_sym_heredoc_block_repeat1 = 152,
  aux_sym_path_repeat1 = 153,
  aux_sym__spaced_env_value_repeat1 = 154,
  aux_sym_image_name_repeat1 = 155,
  aux_sym_image_tag_repeat1 = 156,
  aux_sym_image_digest_repeat1 = 157,
  aux_sym_mount_param_repeat1 = 158,
  aux_sym_image_alias_repeat1 = 159,
  aux_sym_shell_command_repeat1 = 160,
  aux_sym_shell_fragment_repeat1 = 161,
  aux_sym_json_string_array_repeat1 = 162,
  aux_sym_json_string_repeat1 = 163,
  aux_sym_double_quoted_string_repeat1 = 164,
  aux_sym_single_quoted_string_repeat1 = 165,
  aux_sym_unquoted_string_repeat1 = 166,
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
  [sym__eof_instruction_end] = "_eof_instruction_end",
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
  [sym__eof_instruction_end] = sym__eof_instruction_end,
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
  [sym__eof_instruction_end] = {
    .visible = false,
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
  [36] = 22,
  [37] = 37,
  [38] = 38,
  [39] = 14,
  [40] = 40,
  [41] = 12,
  [42] = 13,
  [43] = 12,
  [44] = 13,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 28,
  [61] = 45,
  [62] = 62,
  [63] = 47,
  [64] = 49,
  [65] = 65,
  [66] = 46,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 62,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 56,
  [82] = 82,
  [83] = 83,
  [84] = 51,
  [85] = 85,
  [86] = 86,
  [87] = 45,
  [88] = 83,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 40,
  [97] = 97,
  [98] = 98,
  [99] = 37,
  [100] = 82,
  [101] = 46,
  [102] = 62,
  [103] = 46,
  [104] = 62,
  [105] = 46,
  [106] = 106,
  [107] = 46,
  [108] = 45,
  [109] = 62,
  [110] = 62,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 62,
  [115] = 115,
  [116] = 116,
  [117] = 46,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 86,
  [127] = 127,
  [128] = 82,
  [129] = 46,
  [130] = 130,
  [131] = 62,
  [132] = 82,
  [133] = 46,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 62,
  [138] = 46,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 148,
  [151] = 151,
  [152] = 147,
  [153] = 153,
  [154] = 148,
  [155] = 155,
  [156] = 147,
  [157] = 62,
  [158] = 82,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 124,
  [167] = 167,
  [168] = 168,
  [169] = 140,
  [170] = 170,
  [171] = 73,
  [172] = 142,
  [173] = 173,
  [174] = 62,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 82,
  [180] = 46,
  [181] = 62,
  [182] = 82,
  [183] = 46,
  [184] = 62,
  [185] = 82,
  [186] = 62,
  [187] = 187,
  [188] = 46,
  [189] = 189,
  [190] = 190,
  [191] = 62,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 187,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 192,
  [200] = 82,
  [201] = 153,
  [202] = 155,
  [203] = 46,
  [204] = 119,
  [205] = 120,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 192,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 198,
  [220] = 209,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 192,
  [225] = 198,
  [226] = 226,
  [227] = 222,
  [228] = 228,
  [229] = 192,
  [230] = 198,
  [231] = 192,
  [232] = 198,
  [233] = 192,
  [234] = 198,
  [235] = 192,
  [236] = 198,
  [237] = 192,
  [238] = 198,
  [239] = 192,
  [240] = 198,
  [241] = 192,
  [242] = 192,
  [243] = 192,
  [244] = 192,
  [245] = 223,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 86,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 86,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 193,
  [264] = 226,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 211,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 285,
  [290] = 286,
  [291] = 155,
  [292] = 119,
  [293] = 285,
  [294] = 286,
  [295] = 153,
  [296] = 285,
  [297] = 120,
  [298] = 298,
  [299] = 285,
  [300] = 284,
  [301] = 168,
  [302] = 285,
  [303] = 303,
  [304] = 278,
  [305] = 285,
  [306] = 285,
  [307] = 285,
  [308] = 308,
  [309] = 285,
  [310] = 310,
  [311] = 285,
  [312] = 285,
  [313] = 285,
  [314] = 286,
  [315] = 285,
  [316] = 285,
  [317] = 278,
  [318] = 308,
  [319] = 278,
  [320] = 308,
  [321] = 278,
  [322] = 308,
  [323] = 278,
  [324] = 278,
  [325] = 278,
  [326] = 326,
  [327] = 278,
  [328] = 278,
  [329] = 278,
  [330] = 278,
  [331] = 278,
  [332] = 278,
  [333] = 278,
  [334] = 281,
  [335] = 281,
  [336] = 336,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(170);
      ADVANCE_MAP(
        '"', 278,
        '#', 210,
        '$', 218,
        '\'', 289,
        ',', 258,
        '-', 266,
        ':', 185,
        '<', 234,
        '=', 194,
        '@', 245,
        '[', 275,
        '\\', 286,
        ']', 277,
        '_', 226,
        '{', 219,
        '}', 225,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(4);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 273,
        '\r', 2,
        'u', 164,
        '\t', 4,
        ' ', 4,
        '"', 282,
        '/', 282,
        '\\', 282,
        'b', 282,
        'f', 282,
        'n', 282,
        'r', 282,
        't', 282,
      );
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(269);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(198);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 171,
        '#', 301,
        '$', 217,
        '/', 70,
        ':', 185,
        '@', 245,
        '\\', 4,
        'A', 145,
        'a', 145,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(19);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(19);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'') ADVANCE(296);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\n', 171,
        '#', 239,
        '$', 218,
        ':', 185,
        '@', 245,
        '\\', 237,
        'A', 238,
        'a', 238,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '@') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(241);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(19);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(265);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(269);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(32);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(44);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '<') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(208);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(209);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(208);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(197);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == ',') ADVANCE(258);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '=') ADVANCE(265);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(265);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(265);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '{') ADVANCE(219);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(51);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(244);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(51);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(261);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(224);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(200);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 95:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 96:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 97:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      END_STATE();
    case 108:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 117:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 118:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(83);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 119:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 136:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 137:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 158:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 159:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
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
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(216);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(211);
      END_STATE();
    case 167:
      if (eof) ADVANCE(170);
      ADVANCE_MAP(
        '"', 278,
        '#', 210,
        '$', 217,
        '\'', 289,
        ',', 276,
        '-', 266,
        '<', 234,
        '=', 208,
        '[', 275,
        '\\', 286,
        ']', 277,
        ':', 208,
        '@', 208,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(167);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 168:
      if (eof) ADVANCE(170);
      ADVANCE_MAP(
        '"', 278,
        '#', 301,
        '$', 217,
        ',', 276,
        '-', 61,
        '=', 194,
        'N', 64,
        '[', 275,
        '\\', 4,
        ']', 277,
        '}', 225,
        'A', 81,
        'a', 81,
        'C', 118,
        'c', 118,
        'E', 120,
        'e', 120,
        'F', 143,
        'f', 143,
        'H', 90,
        'h', 90,
        'L', 71,
        'l', 71,
        'M', 72,
        'm', 72,
        'O', 122,
        'o', 122,
        'R', 154,
        'r', 154,
        'S', 98,
        's', 98,
        'U', 146,
        'u', 146,
        'V', 127,
        'v', 127,
        'W', 129,
        'w', 129,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 169:
      if (eof) ADVANCE(170);
      ADVANCE_MAP(
        '"', 278,
        '#', 301,
        '$', 217,
        ',', 276,
        '-', 61,
        'N', 64,
        '[', 275,
        '\\', 4,
        ']', 277,
        'A', 81,
        'a', 81,
        'C', 118,
        'c', 118,
        'E', 120,
        'e', 120,
        'F', 143,
        'f', 143,
        'H', 90,
        'h', 90,
        'L', 71,
        'l', 71,
        'M', 72,
        'm', 72,
        'O', 122,
        'o', 122,
        'R', 154,
        'r', 154,
        'S', 98,
        's', 98,
        'U', 146,
        'u', 146,
        'V', 127,
        'v', 127,
        'W', 129,
        'w', 129,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(27);
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
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(204);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(301);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_path_with_heredoc_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(224);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '}') ADVANCE(301);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(301);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(212);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_required_line_continuation);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(301);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '#') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(298);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(299);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(301);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 168},
  [2] = {.lex_state = 168},
  [3] = {.lex_state = 168},
  [4] = {.lex_state = 168},
  [5] = {.lex_state = 168},
  [6] = {.lex_state = 46, .external_lex_state = 2},
  [7] = {.lex_state = 46, .external_lex_state = 2},
  [8] = {.lex_state = 9, .external_lex_state = 3},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 10, .external_lex_state = 3},
  [13] = {.lex_state = 10, .external_lex_state = 3},
  [14] = {.lex_state = 26, .external_lex_state = 4},
  [15] = {.lex_state = 47, .external_lex_state = 2},
  [16] = {.lex_state = 47, .external_lex_state = 2},
  [17] = {.lex_state = 22, .external_lex_state = 3},
  [18] = {.lex_state = 22, .external_lex_state = 3},
  [19] = {.lex_state = 46, .external_lex_state = 2},
  [20] = {.lex_state = 35, .external_lex_state = 2},
  [21] = {.lex_state = 22, .external_lex_state = 3},
  [22] = {.lex_state = 26, .external_lex_state = 4},
  [23] = {.lex_state = 35, .external_lex_state = 2},
  [24] = {.lex_state = 35, .external_lex_state = 2},
  [25] = {.lex_state = 35, .external_lex_state = 2},
  [26] = {.lex_state = 6, .external_lex_state = 3},
  [27] = {.lex_state = 11, .external_lex_state = 3},
  [28] = {.lex_state = 26, .external_lex_state = 4},
  [29] = {.lex_state = 6, .external_lex_state = 3},
  [30] = {.lex_state = 23, .external_lex_state = 3},
  [31] = {.lex_state = 11, .external_lex_state = 3},
  [32] = {.lex_state = 23, .external_lex_state = 3},
  [33] = {.lex_state = 45, .external_lex_state = 2},
  [34] = {.lex_state = 45, .external_lex_state = 2},
  [35] = {.lex_state = 45, .external_lex_state = 2},
  [36] = {.lex_state = 26, .external_lex_state = 5},
  [37] = {.lex_state = 24, .external_lex_state = 6},
  [38] = {.lex_state = 11, .external_lex_state = 3},
  [39] = {.lex_state = 26, .external_lex_state = 5},
  [40] = {.lex_state = 24, .external_lex_state = 6},
  [41] = {.lex_state = 9, .external_lex_state = 3},
  [42] = {.lex_state = 9, .external_lex_state = 3},
  [43] = {.lex_state = 21, .external_lex_state = 3},
  [44] = {.lex_state = 21, .external_lex_state = 3},
  [45] = {.lex_state = 24, .external_lex_state = 6},
  [46] = {.lex_state = 10, .external_lex_state = 3},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 24, .external_lex_state = 3},
  [52] = {.lex_state = 12, .external_lex_state = 3},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 11, .external_lex_state = 3},
  [55] = {.lex_state = 12, .external_lex_state = 3},
  [56] = {.lex_state = 24, .external_lex_state = 3},
  [57] = {.lex_state = 11, .external_lex_state = 3},
  [58] = {.lex_state = 45, .external_lex_state = 2},
  [59] = {.lex_state = 45, .external_lex_state = 2},
  [60] = {.lex_state = 26, .external_lex_state = 5},
  [61] = {.lex_state = 24, .external_lex_state = 3},
  [62] = {.lex_state = 10, .external_lex_state = 3},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 15, .external_lex_state = 3},
  [66] = {.lex_state = 22, .external_lex_state = 3},
  [67] = {.lex_state = 14, .external_lex_state = 3},
  [68] = {.lex_state = 35, .external_lex_state = 2},
  [69] = {.lex_state = 13, .external_lex_state = 3},
  [70] = {.lex_state = 22, .external_lex_state = 3},
  [71] = {.lex_state = 14, .external_lex_state = 3},
  [72] = {.lex_state = 35, .external_lex_state = 2},
  [73] = {.lex_state = 35, .external_lex_state = 2},
  [74] = {.lex_state = 35, .external_lex_state = 2},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 14, .external_lex_state = 3},
  [77] = {.lex_state = 13, .external_lex_state = 3},
  [78] = {.lex_state = 35, .external_lex_state = 2},
  [79] = {.lex_state = 35, .external_lex_state = 2},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 25, .external_lex_state = 3},
  [82] = {.lex_state = 22, .external_lex_state = 3},
  [83] = {.lex_state = 47, .external_lex_state = 2},
  [84] = {.lex_state = 25, .external_lex_state = 3},
  [85] = {.lex_state = 31},
  [86] = {.lex_state = 46, .external_lex_state = 2},
  [87] = {.lex_state = 25, .external_lex_state = 3},
  [88] = {.lex_state = 47, .external_lex_state = 2},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 15, .external_lex_state = 3},
  [91] = {.lex_state = 13, .external_lex_state = 3},
  [92] = {.lex_state = 15, .external_lex_state = 3},
  [93] = {.lex_state = 17, .external_lex_state = 6},
  [94] = {.lex_state = 17, .external_lex_state = 6},
  [95] = {.lex_state = 17, .external_lex_state = 6},
  [96] = {.lex_state = 56},
  [97] = {.lex_state = 168},
  [98] = {.lex_state = 15, .external_lex_state = 3},
  [99] = {.lex_state = 56},
  [100] = {.lex_state = 24, .external_lex_state = 6},
  [101] = {.lex_state = 23, .external_lex_state = 3},
  [102] = {.lex_state = 24, .external_lex_state = 6},
  [103] = {.lex_state = 9, .external_lex_state = 3},
  [104] = {.lex_state = 23, .external_lex_state = 3},
  [105] = {.lex_state = 21, .external_lex_state = 3},
  [106] = {.lex_state = 20, .external_lex_state = 3},
  [107] = {.lex_state = 24, .external_lex_state = 6},
  [108] = {.lex_state = 56},
  [109] = {.lex_state = 9, .external_lex_state = 3},
  [110] = {.lex_state = 21, .external_lex_state = 3},
  [111] = {.lex_state = 38},
  [112] = {.lex_state = 20, .external_lex_state = 3},
  [113] = {.lex_state = 17, .external_lex_state = 6},
  [114] = {.lex_state = 12, .external_lex_state = 3},
  [115] = {.lex_state = 55},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 39},
  [119] = {.lex_state = 6, .external_lex_state = 3},
  [120] = {.lex_state = 6, .external_lex_state = 3},
  [121] = {.lex_state = 53},
  [122] = {.lex_state = 37},
  [123] = {.lex_state = 15, .external_lex_state = 3},
  [124] = {.lex_state = 26, .external_lex_state = 6},
  [125] = {.lex_state = 6, .external_lex_state = 6},
  [126] = {.lex_state = 35, .external_lex_state = 2},
  [127] = {.lex_state = 6, .external_lex_state = 6},
  [128] = {.lex_state = 24, .external_lex_state = 3},
  [129] = {.lex_state = 24, .external_lex_state = 3},
  [130] = {.lex_state = 6, .external_lex_state = 6},
  [131] = {.lex_state = 24, .external_lex_state = 3},
  [132] = {.lex_state = 11, .external_lex_state = 3},
  [133] = {.lex_state = 11, .external_lex_state = 3},
  [134] = {.lex_state = 6, .external_lex_state = 6},
  [135] = {.lex_state = 6, .external_lex_state = 6},
  [136] = {.lex_state = 6, .external_lex_state = 6},
  [137] = {.lex_state = 28},
  [138] = {.lex_state = 12, .external_lex_state = 3},
  [139] = {.lex_state = 6, .external_lex_state = 6},
  [140] = {.lex_state = 26, .external_lex_state = 6},
  [141] = {.lex_state = 168},
  [142] = {.lex_state = 26, .external_lex_state = 6},
  [143] = {.lex_state = 168},
  [144] = {.lex_state = 6, .external_lex_state = 6},
  [145] = {.lex_state = 57},
  [146] = {.lex_state = 6, .external_lex_state = 3},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 29},
  [149] = {.lex_state = 29},
  [150] = {.lex_state = 29},
  [151] = {.lex_state = 6, .external_lex_state = 6},
  [152] = {.lex_state = 29},
  [153] = {.lex_state = 6, .external_lex_state = 3},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 6, .external_lex_state = 3},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 11, .external_lex_state = 3},
  [158] = {.lex_state = 15, .external_lex_state = 3},
  [159] = {.lex_state = 17, .external_lex_state = 3},
  [160] = {.lex_state = 11, .external_lex_state = 3},
  [161] = {.lex_state = 34},
  [162] = {.lex_state = 17, .external_lex_state = 3},
  [163] = {.lex_state = 15, .external_lex_state = 3},
  [164] = {.lex_state = 17, .external_lex_state = 3},
  [165] = {.lex_state = 17, .external_lex_state = 3},
  [166] = {.lex_state = 26, .external_lex_state = 3},
  [167] = {.lex_state = 35, .external_lex_state = 2},
  [168] = {.lex_state = 17, .external_lex_state = 6},
  [169] = {.lex_state = 26, .external_lex_state = 3},
  [170] = {.lex_state = 17, .external_lex_state = 3},
  [171] = {.lex_state = 168},
  [172] = {.lex_state = 26, .external_lex_state = 3},
  [173] = {.lex_state = 43},
  [174] = {.lex_state = 15, .external_lex_state = 3},
  [175] = {.lex_state = 40},
  [176] = {.lex_state = 42},
  [177] = {.lex_state = 42},
  [178] = {.lex_state = 34},
  [179] = {.lex_state = 25, .external_lex_state = 3},
  [180] = {.lex_state = 25, .external_lex_state = 3},
  [181] = {.lex_state = 25, .external_lex_state = 3},
  [182] = {.lex_state = 13, .external_lex_state = 3},
  [183] = {.lex_state = 13, .external_lex_state = 3},
  [184] = {.lex_state = 13, .external_lex_state = 3},
  [185] = {.lex_state = 14, .external_lex_state = 3},
  [186] = {.lex_state = 14, .external_lex_state = 3},
  [187] = {.lex_state = 26, .external_lex_state = 6},
  [188] = {.lex_state = 14, .external_lex_state = 3},
  [189] = {.lex_state = 17, .external_lex_state = 3},
  [190] = {.lex_state = 34},
  [191] = {.lex_state = 56},
  [192] = {.lex_state = 49},
  [193] = {.lex_state = 6, .external_lex_state = 6},
  [194] = {.lex_state = 168},
  [195] = {.lex_state = 26, .external_lex_state = 3},
  [196] = {.lex_state = 6, .external_lex_state = 6},
  [197] = {.lex_state = 168, .external_lex_state = 7},
  [198] = {.lex_state = 49},
  [199] = {.lex_state = 49},
  [200] = {.lex_state = 56},
  [201] = {.lex_state = 20, .external_lex_state = 3},
  [202] = {.lex_state = 20, .external_lex_state = 3},
  [203] = {.lex_state = 56},
  [204] = {.lex_state = 20, .external_lex_state = 3},
  [205] = {.lex_state = 20, .external_lex_state = 3},
  [206] = {.lex_state = 17, .external_lex_state = 3},
  [207] = {.lex_state = 15, .external_lex_state = 3},
  [208] = {.lex_state = 17, .external_lex_state = 3},
  [209] = {.lex_state = 168},
  [210] = {.lex_state = 6, .external_lex_state = 3},
  [211] = {.lex_state = 6, .external_lex_state = 6},
  [212] = {.lex_state = 49},
  [213] = {.lex_state = 6, .external_lex_state = 6},
  [214] = {.lex_state = 168, .external_lex_state = 7},
  [215] = {.lex_state = 15, .external_lex_state = 3},
  [216] = {.lex_state = 15, .external_lex_state = 3},
  [217] = {.lex_state = 15, .external_lex_state = 3},
  [218] = {.lex_state = 6, .external_lex_state = 3},
  [219] = {.lex_state = 49},
  [220] = {.lex_state = 168},
  [221] = {.lex_state = 20, .external_lex_state = 3},
  [222] = {.lex_state = 168},
  [223] = {.lex_state = 168},
  [224] = {.lex_state = 49},
  [225] = {.lex_state = 49},
  [226] = {.lex_state = 6, .external_lex_state = 6},
  [227] = {.lex_state = 168},
  [228] = {.lex_state = 168, .external_lex_state = 7},
  [229] = {.lex_state = 49},
  [230] = {.lex_state = 49},
  [231] = {.lex_state = 49},
  [232] = {.lex_state = 49},
  [233] = {.lex_state = 49},
  [234] = {.lex_state = 49},
  [235] = {.lex_state = 49},
  [236] = {.lex_state = 49},
  [237] = {.lex_state = 49},
  [238] = {.lex_state = 49},
  [239] = {.lex_state = 49},
  [240] = {.lex_state = 49},
  [241] = {.lex_state = 49},
  [242] = {.lex_state = 49},
  [243] = {.lex_state = 49},
  [244] = {.lex_state = 49},
  [245] = {.lex_state = 168},
  [246] = {.lex_state = 6, .external_lex_state = 3},
  [247] = {.lex_state = 48},
  [248] = {.lex_state = 6, .external_lex_state = 3},
  [249] = {.lex_state = 6, .external_lex_state = 3},
  [250] = {.lex_state = 6, .external_lex_state = 3},
  [251] = {.lex_state = 57},
  [252] = {.lex_state = 6, .external_lex_state = 3},
  [253] = {.lex_state = 6, .external_lex_state = 3},
  [254] = {.lex_state = 58},
  [255] = {.lex_state = 168},
  [256] = {.lex_state = 168},
  [257] = {.lex_state = 40},
  [258] = {.lex_state = 6, .external_lex_state = 3},
  [259] = {.lex_state = 168},
  [260] = {.lex_state = 6, .external_lex_state = 3},
  [261] = {.lex_state = 58},
  [262] = {.lex_state = 6, .external_lex_state = 3},
  [263] = {.lex_state = 6, .external_lex_state = 3},
  [264] = {.lex_state = 6, .external_lex_state = 3},
  [265] = {.lex_state = 6, .external_lex_state = 3},
  [266] = {.lex_state = 6, .external_lex_state = 3},
  [267] = {.lex_state = 6, .external_lex_state = 3},
  [268] = {.lex_state = 6, .external_lex_state = 3},
  [269] = {.lex_state = 6, .external_lex_state = 3},
  [270] = {.lex_state = 168},
  [271] = {.lex_state = 168},
  [272] = {.lex_state = 168},
  [273] = {.lex_state = 168, .external_lex_state = 7},
  [274] = {.lex_state = 6, .external_lex_state = 3},
  [275] = {.lex_state = 6, .external_lex_state = 3},
  [276] = {.lex_state = 6, .external_lex_state = 3},
  [277] = {.lex_state = 6, .external_lex_state = 3},
  [278] = {.lex_state = 59},
  [279] = {.lex_state = 168},
  [280] = {.lex_state = 205},
  [281] = {.lex_state = 52},
  [282] = {.lex_state = 50},
  [283] = {.lex_state = 58},
  [284] = {.lex_state = 264},
  [285] = {.lex_state = 168},
  [286] = {.lex_state = 60},
  [287] = {.lex_state = 168},
  [288] = {.lex_state = 168},
  [289] = {.lex_state = 168},
  [290] = {.lex_state = 60},
  [291] = {.lex_state = 168},
  [292] = {.lex_state = 168},
  [293] = {.lex_state = 168},
  [294] = {.lex_state = 60},
  [295] = {.lex_state = 168},
  [296] = {.lex_state = 168},
  [297] = {.lex_state = 168},
  [298] = {.lex_state = 168},
  [299] = {.lex_state = 168},
  [300] = {.lex_state = 264},
  [301] = {.lex_state = 50},
  [302] = {.lex_state = 168},
  [303] = {.lex_state = 168},
  [304] = {.lex_state = 59},
  [305] = {.lex_state = 168},
  [306] = {.lex_state = 168},
  [307] = {.lex_state = 168},
  [308] = {.lex_state = 168},
  [309] = {.lex_state = 168},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 168},
  [312] = {.lex_state = 168},
  [313] = {.lex_state = 168},
  [314] = {.lex_state = 60},
  [315] = {.lex_state = 168},
  [316] = {.lex_state = 168},
  [317] = {.lex_state = 59},
  [318] = {.lex_state = 168},
  [319] = {.lex_state = 59},
  [320] = {.lex_state = 168},
  [321] = {.lex_state = 59},
  [322] = {.lex_state = 168},
  [323] = {.lex_state = 59},
  [324] = {.lex_state = 59},
  [325] = {.lex_state = 59},
  [326] = {.lex_state = 54},
  [327] = {.lex_state = 59},
  [328] = {.lex_state = 59},
  [329] = {.lex_state = 59},
  [330] = {.lex_state = 59},
  [331] = {.lex_state = 59},
  [332] = {.lex_state = 59},
  [333] = {.lex_state = 59},
  [334] = {.lex_state = 52},
  [335] = {.lex_state = 52},
  [336] = {.lex_state = 205},
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
    [sym__eof_instruction_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(287),
    [sym__instruction] = STATE(258),
    [sym_from_instruction] = STATE(258),
    [sym_run_instruction] = STATE(258),
    [sym_cmd_instruction] = STATE(258),
    [sym_label_instruction] = STATE(258),
    [sym_expose_instruction] = STATE(258),
    [sym_env_instruction] = STATE(258),
    [sym_add_instruction] = STATE(258),
    [sym_copy_instruction] = STATE(258),
    [sym_entrypoint_instruction] = STATE(258),
    [sym_volume_instruction] = STATE(258),
    [sym_user_instruction] = STATE(258),
    [sym_workdir_instruction] = STATE(258),
    [sym_arg_instruction] = STATE(258),
    [sym_onbuild_instruction] = STATE(258),
    [sym_stopsignal_instruction] = STATE(258),
    [sym_healthcheck_instruction] = STATE(258),
    [sym_shell_instruction] = STATE(258),
    [sym_maintainer_instruction] = STATE(258),
    [sym_cross_build_instruction] = STATE(258),
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
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
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
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(258), 20,
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
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(258), 20,
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
    STATE(253), 20,
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
    ACTIONS(47), 20,
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
    STATE(124), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(151), 2,
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
    STATE(22), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(124), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(134), 2,
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
  [361] = 9,
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
    ACTIONS(116), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(41), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(221), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [396] = 9,
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
    STATE(189), 1,
      sym_unquoted_string,
    ACTIONS(134), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(43), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(252), 3,
      sym__spaced_env_value,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [429] = 8,
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
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(146), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [459] = 8,
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
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(249), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [489] = 6,
    ACTIONS(136), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(140), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(144), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(142), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(13), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [515] = 6,
    ACTIONS(148), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(146), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(153), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(151), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(13), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [541] = 6,
    ACTIONS(161), 1,
      sym_heredoc_marker,
    STATE(14), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_LF,
      sym_required_line_continuation,
    ACTIONS(164), 2,
      sym_heredoc_nl,
      sym__eof_instruction_end,
    ACTIONS(158), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [566] = 8,
    ACTIONS(168), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      sym_heredoc_marker,
    STATE(36), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(166), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(276), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(166), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [595] = 8,
    ACTIONS(168), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      sym_heredoc_marker,
    STATE(36), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(166), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(275), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(166), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [624] = 6,
    ACTIONS(176), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(178), 1,
      anon_sym_DOLLAR2,
    ACTIONS(180), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(21), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(174), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [649] = 6,
    ACTIONS(178), 1,
      anon_sym_DOLLAR2,
    ACTIONS(184), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(186), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(17), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(182), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [674] = 5,
    ACTIONS(190), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(193), 2,
      sym_heredoc_marker,
      anon_sym_LBRACK,
    STATE(19), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(188), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [697] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_path_token1,
    ACTIONS(197), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DASH_DASH,
    ACTIONS(203), 1,
      sym_heredoc_marker,
    STATE(68), 1,
      aux_sym_add_instruction_repeat2,
    STATE(99), 1,
      sym_expansion,
    STATE(282), 1,
      sym_path_with_heredoc,
    STATE(24), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [732] = 6,
    ACTIONS(207), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(209), 1,
      anon_sym_DOLLAR2,
    ACTIONS(212), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(21), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(205), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [757] = 6,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    STATE(14), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_LF,
      sym_required_line_continuation,
    ACTIONS(219), 2,
      sym_heredoc_nl,
      sym__eof_instruction_end,
    ACTIONS(217), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [782] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_path_token1,
    ACTIONS(197), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DASH_DASH,
    ACTIONS(203), 1,
      sym_heredoc_marker,
    STATE(72), 1,
      aux_sym_add_instruction_repeat2,
    STATE(99), 1,
      sym_expansion,
    STATE(282), 1,
      sym_path_with_heredoc,
    STATE(25), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [817] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_path_token1,
    ACTIONS(197), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DASH_DASH,
    ACTIONS(203), 1,
      sym_heredoc_marker,
    STATE(74), 1,
      aux_sym_add_instruction_repeat2,
    STATE(99), 1,
      sym_expansion,
    STATE(282), 1,
      sym_path_with_heredoc,
    STATE(73), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [852] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_path_token1,
    ACTIONS(197), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_DASH_DASH,
    ACTIONS(203), 1,
      sym_heredoc_marker,
    STATE(79), 1,
      aux_sym_add_instruction_repeat2,
    STATE(99), 1,
      sym_expansion,
    STATE(282), 1,
      sym_path_with_heredoc,
    STATE(73), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [887] = 7,
    ACTIONS(223), 1,
      aux_sym_label_pair_token1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(221), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(26), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(288), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [913] = 5,
    ACTIONS(234), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(236), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(232), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(31), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [935] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(164), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      sym__eof_instruction_end,
    ACTIONS(156), 6,
      anon_sym_LF,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [953] = 7,
    ACTIONS(240), 1,
      aux_sym_label_pair_token1,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(238), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(26), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(288), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [979] = 6,
    ACTIONS(248), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(252), 1,
      aux_sym_image_tag_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(246), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_AT,
    STATE(32), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1003] = 5,
    ACTIONS(256), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(259), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(254), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(31), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1025] = 6,
    ACTIONS(264), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(266), 1,
      anon_sym_DOLLAR2,
    ACTIONS(269), 1,
      aux_sym_image_tag_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(262), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_AT,
    STATE(32), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1049] = 5,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(274), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(272), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1071] = 5,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(280), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(278), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1093] = 5,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(284), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(282), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1115] = 6,
    ACTIONS(172), 1,
      sym_heredoc_marker,
    ACTIONS(219), 1,
      sym__eof_instruction_end,
    STATE(39), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_LF,
      sym_required_line_continuation,
    ACTIONS(289), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1139] = 6,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 1,
      aux_sym_path_token3,
    ACTIONS(295), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(297), 3,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1163] = 5,
    ACTIONS(236), 1,
      anon_sym_DOLLAR2,
    ACTIONS(301), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(299), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(27), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1185] = 6,
    ACTIONS(164), 1,
      sym__eof_instruction_end,
    ACTIONS(306), 1,
      sym_heredoc_marker,
    STATE(39), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(156), 2,
      anon_sym_LF,
      sym_required_line_continuation,
    ACTIONS(303), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1209] = 6,
    ACTIONS(295), 1,
      anon_sym_DOLLAR2,
    ACTIONS(309), 1,
      anon_sym_LF,
    ACTIONS(311), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(313), 3,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
    STATE(45), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1233] = 6,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(142), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(140), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(315), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(42), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1257] = 6,
    ACTIONS(151), 1,
      aux_sym__env_key_token1,
    ACTIONS(317), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(146), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(320), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(42), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1281] = 6,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(140), 2,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
    ACTIONS(323), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(44), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1305] = 6,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(325), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(146), 2,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
    ACTIONS(328), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(44), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1329] = 6,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(333), 1,
      aux_sym_path_token3,
    ACTIONS(336), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 3,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
    STATE(45), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1353] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(343), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1370] = 6,
    ACTIONS(345), 1,
      anon_sym_DOLLAR2,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(50), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1393] = 6,
    ACTIONS(345), 1,
      anon_sym_DOLLAR2,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(355), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(49), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1416] = 6,
    ACTIONS(345), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(361), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1439] = 6,
    ACTIONS(345), 1,
      anon_sym_DOLLAR2,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(361), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1462] = 6,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(369), 1,
      aux_sym_path_token3,
    ACTIONS(371), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(373), 2,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
    STATE(61), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1485] = 6,
    ACTIONS(377), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(379), 1,
      anon_sym_DOLLAR2,
    ACTIONS(381), 1,
      aux_sym_image_digest_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(375), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(55), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1508] = 6,
    ACTIONS(383), 1,
      anon_sym_DOLLAR2,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(388), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1531] = 6,
    ACTIONS(236), 1,
      anon_sym_DOLLAR2,
    ACTIONS(396), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(57), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(394), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(160), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1554] = 6,
    ACTIONS(400), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(402), 1,
      anon_sym_DOLLAR2,
    ACTIONS(405), 1,
      aux_sym_image_digest_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(398), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(55), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1577] = 6,
    ACTIONS(371), 1,
      anon_sym_DOLLAR2,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(410), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(412), 2,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
    STATE(51), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1600] = 6,
    ACTIONS(416), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(419), 1,
      anon_sym_DOLLAR2,
    STATE(57), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(414), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(160), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1623] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(422), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(424), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [1640] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(282), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
    ACTIONS(284), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [1657] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(164), 2,
      sym_heredoc_marker,
      sym__eof_instruction_end,
    ACTIONS(156), 6,
      anon_sym_LF,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1674] = 6,
    ACTIONS(331), 1,
      anon_sym_LF,
    ACTIONS(426), 1,
      aux_sym_path_token3,
    ACTIONS(429), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
    STATE(61), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1697] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(434), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1714] = 6,
    ACTIONS(345), 1,
      anon_sym_DOLLAR2,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
    ACTIONS(440), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(64), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1737] = 6,
    ACTIONS(345), 1,
      anon_sym_DOLLAR2,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(361), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1760] = 5,
    ACTIONS(446), 1,
      anon_sym_DOLLAR,
    ACTIONS(449), 1,
      aux_sym_expose_port_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(65), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [1780] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(341), 5,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1796] = 5,
    ACTIONS(454), 1,
      anon_sym_DOLLAR2,
    ACTIONS(456), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(452), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(71), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [1816] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym_path_token1,
    ACTIONS(460), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(462), 1,
      anon_sym_DOLLAR,
    ACTIONS(464), 1,
      sym_heredoc_marker,
    STATE(37), 1,
      sym_expansion,
    STATE(78), 1,
      aux_sym_add_instruction_repeat2,
    STATE(95), 1,
      sym_path_with_heredoc,
  [1844] = 5,
    ACTIONS(468), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(471), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(466), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(69), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [1864] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(434), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(432), 5,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1880] = 5,
    ACTIONS(454), 1,
      anon_sym_DOLLAR2,
    ACTIONS(476), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(474), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(76), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [1900] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym_path_token1,
    ACTIONS(460), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(462), 1,
      anon_sym_DOLLAR,
    ACTIONS(464), 1,
      sym_heredoc_marker,
    STATE(37), 1,
      sym_expansion,
    STATE(78), 1,
      aux_sym_add_instruction_repeat2,
    STATE(93), 1,
      sym_path_with_heredoc,
  [1928] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(478), 1,
      aux_sym_path_token1,
    ACTIONS(482), 1,
      anon_sym_DASH_DASH,
    STATE(73), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
    ACTIONS(480), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [1950] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym_path_token1,
    ACTIONS(460), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(462), 1,
      anon_sym_DOLLAR,
    ACTIONS(464), 1,
      sym_heredoc_marker,
    STATE(37), 1,
      sym_expansion,
    STATE(78), 1,
      aux_sym_add_instruction_repeat2,
    STATE(113), 1,
      sym_path_with_heredoc,
  [1978] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    STATE(208), 1,
      sym_unquoted_string,
    ACTIONS(134), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(43), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [2000] = 5,
    ACTIONS(487), 1,
      anon_sym_DOLLAR2,
    ACTIONS(490), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(485), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(76), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2020] = 5,
    ACTIONS(495), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(497), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(493), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(91), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2040] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
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
    STATE(99), 1,
      sym_expansion,
    STATE(282), 1,
      sym_path_with_heredoc,
  [2068] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym_path_token1,
    ACTIONS(460), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(462), 1,
      anon_sym_DOLLAR,
    ACTIONS(464), 1,
      sym_heredoc_marker,
    STATE(37), 1,
      sym_expansion,
    STATE(78), 1,
      aux_sym_add_instruction_repeat2,
    STATE(94), 1,
      sym_path_with_heredoc,
  [2096] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    ACTIONS(511), 1,
      aux_sym_path_token1,
    ACTIONS(513), 1,
      aux_sym_path_token2,
    ACTIONS(515), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_expansion,
    STATE(164), 1,
      sym_path,
    STATE(260), 1,
      sym_json_string_array,
  [2124] = 5,
    ACTIONS(517), 1,
      aux_sym_path_token3,
    ACTIONS(519), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(412), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(84), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2144] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(523), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(521), 5,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2160] = 6,
    ACTIONS(168), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(172), 1,
      sym_heredoc_marker,
    STATE(36), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(195), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(166), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [2182] = 5,
    ACTIONS(519), 1,
      anon_sym_DOLLAR2,
    ACTIONS(525), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(373), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(87), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2202] = 6,
    ACTIONS(527), 1,
      aux_sym_label_pair_token1,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(29), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(288), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2224] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(535), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(533), 4,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [2240] = 5,
    ACTIONS(537), 1,
      aux_sym_path_token3,
    ACTIONS(540), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(339), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(87), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2260] = 6,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    ACTIONS(543), 1,
      aux_sym_shell_fragment_token2,
    STATE(22), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(187), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(108), 3,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [2282] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOLLAR,
    ACTIONS(547), 1,
      aux_sym_image_name_token1,
    ACTIONS(549), 1,
      anon_sym_DASH_DASH,
    STATE(18), 1,
      sym_expansion,
    STATE(92), 1,
      sym_image_name,
    STATE(145), 1,
      sym_param,
    STATE(215), 1,
      sym_image_spec,
  [2310] = 5,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(555), 1,
      aux_sym_expose_port_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(551), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(65), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2330] = 5,
    ACTIONS(497), 1,
      anon_sym_DOLLAR2,
    ACTIONS(559), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(557), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(69), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2350] = 7,
    ACTIONS(563), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(565), 1,
      anon_sym_COLON,
    ACTIONS(567), 1,
      anon_sym_AT,
    STATE(123), 1,
      sym_image_tag,
    STATE(216), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(561), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [2374] = 6,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      sym__non_newline_whitespace,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(575), 1,
      sym__eof_instruction_end,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(139), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2395] = 6,
    ACTIONS(571), 1,
      sym__non_newline_whitespace,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      sym__eof_instruction_end,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(130), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2416] = 6,
    ACTIONS(571), 1,
      sym__non_newline_whitespace,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(581), 1,
      anon_sym_LF,
    ACTIONS(583), 1,
      sym__eof_instruction_end,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(135), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2437] = 5,
    ACTIONS(313), 1,
      sym__non_newline_whitespace,
    ACTIONS(585), 1,
      aux_sym_path_token3,
    ACTIONS(587), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(108), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2456] = 6,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(589), 1,
      anon_sym_NONE,
    ACTIONS(591), 1,
      anon_sym_DASH_DASH,
    STATE(266), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(143), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2477] = 4,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(593), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(595), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(597), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2494] = 5,
    ACTIONS(297), 1,
      sym__non_newline_whitespace,
    ACTIONS(587), 1,
      anon_sym_DOLLAR2,
    ACTIONS(599), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(96), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2513] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(521), 4,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2528] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(341), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2543] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(432), 4,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2558] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(343), 3,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2573] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(434), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(432), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2588] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 3,
      sym__eof_instruction_end,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(343), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2603] = 5,
    ACTIONS(603), 1,
      aux_sym__env_key_token1,
    STATE(298), 1,
      sym__env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(601), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(106), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2622] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(341), 4,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2637] = 5,
    ACTIONS(339), 1,
      sym__non_newline_whitespace,
    ACTIONS(606), 1,
      aux_sym_path_token3,
    ACTIONS(609), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(108), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2656] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(434), 3,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2671] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 3,
      sym__eof_instruction_end,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(434), 3,
      anon_sym_LF,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2686] = 5,
    ACTIONS(236), 1,
      anon_sym_DOLLAR2,
    ACTIONS(396), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(54), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(160), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [2705] = 5,
    ACTIONS(614), 1,
      aux_sym__env_key_token1,
    STATE(298), 1,
      sym__env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(612), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(106), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2724] = 6,
    ACTIONS(571), 1,
      sym__non_newline_whitespace,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      sym__eof_instruction_end,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(125), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2745] = 3,
    ACTIONS(434), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2759] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_DOLLAR2,
    ACTIONS(620), 1,
      aux_sym_image_tag_token1,
    STATE(30), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2777] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(511), 1,
      aux_sym_path_token1,
    ACTIONS(513), 1,
      aux_sym_path_token2,
    ACTIONS(515), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_expansion,
    STATE(206), 1,
      sym_path,
  [2799] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(343), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [2813] = 4,
    ACTIONS(379), 1,
      anon_sym_DOLLAR2,
    ACTIONS(622), 1,
      aux_sym_image_digest_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(52), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2829] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(624), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(626), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2843] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(628), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(630), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2857] = 5,
    ACTIONS(632), 1,
      aux_sym__env_key_token1,
    STATE(247), 1,
      sym__env_key,
    STATE(274), 1,
      sym__spaced_env_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(112), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2875] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(634), 1,
      aux_sym_path_token1,
    ACTIONS(636), 1,
      aux_sym_path_token2,
    ACTIONS(638), 1,
      anon_sym_DOLLAR,
    STATE(81), 1,
      sym_expansion,
    STATE(265), 1,
      sym_path,
  [2897] = 5,
    ACTIONS(567), 1,
      anon_sym_AT,
    ACTIONS(642), 1,
      aux_sym_from_instruction_token2,
    STATE(207), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(640), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [2915] = 5,
    ACTIONS(644), 1,
      anon_sym_LF,
    ACTIONS(646), 1,
      sym_required_line_continuation,
    STATE(140), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(648), 2,
      sym_heredoc_nl,
      sym__eof_instruction_end,
  [2933] = 4,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(650), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(136), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2949] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_path_token1,
    ACTIONS(535), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [2965] = 4,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(652), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(136), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2981] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(521), 3,
      sym__eof_instruction_end,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2995] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(341), 3,
      sym__eof_instruction_end,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3009] = 4,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(654), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(136), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3025] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(432), 3,
      sym__eof_instruction_end,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3039] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(521), 5,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3051] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 5,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3063] = 4,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(652), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(144), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3079] = 4,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(618), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(136), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3095] = 4,
    ACTIONS(658), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(656), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(136), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3111] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(434), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [3125] = 3,
    ACTIONS(343), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3139] = 4,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(579), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(136), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3155] = 5,
    ACTIONS(646), 1,
      sym_required_line_continuation,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(142), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(663), 2,
      sym_heredoc_nl,
      sym__eof_instruction_end,
  [3173] = 4,
    ACTIONS(665), 1,
      anon_sym_DOLLAR,
    ACTIONS(667), 1,
      aux_sym_expose_port_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(90), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [3189] = 5,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(671), 1,
      sym_required_line_continuation,
    STATE(142), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(674), 2,
      sym_heredoc_nl,
      sym__eof_instruction_end,
  [3207] = 5,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(591), 1,
      anon_sym_DASH_DASH,
    STATE(277), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(171), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [3225] = 4,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(676), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(136), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3241] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DOLLAR,
    ACTIONS(547), 1,
      aux_sym_image_name_token1,
    STATE(18), 1,
      sym_expansion,
    STATE(92), 1,
      sym_image_name,
    STATE(217), 1,
      sym_image_spec,
  [3263] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(678), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(680), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3277] = 5,
    ACTIONS(684), 1,
      anon_sym_SQUOTE,
    ACTIONS(686), 1,
      sym_single_quoted_escape_sequence,
    STATE(149), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [3295] = 5,
    ACTIONS(690), 1,
      anon_sym_SQUOTE,
    ACTIONS(692), 1,
      sym_single_quoted_escape_sequence,
    STATE(147), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [3313] = 5,
    ACTIONS(697), 1,
      anon_sym_SQUOTE,
    ACTIONS(699), 1,
      sym_single_quoted_escape_sequence,
    STATE(149), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [3331] = 5,
    ACTIONS(704), 1,
      anon_sym_SQUOTE,
    ACTIONS(706), 1,
      sym_single_quoted_escape_sequence,
    STATE(152), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [3349] = 4,
    ACTIONS(573), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(708), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    STATE(127), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3365] = 5,
    ACTIONS(686), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(710), 1,
      anon_sym_SQUOTE,
    STATE(149), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [3383] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(712), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(714), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3397] = 5,
    ACTIONS(718), 1,
      anon_sym_SQUOTE,
    ACTIONS(720), 1,
      sym_single_quoted_escape_sequence,
    STATE(156), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [3415] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(722), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(724), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3429] = 5,
    ACTIONS(686), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(726), 1,
      anon_sym_SQUOTE,
    STATE(149), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [3447] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 5,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3459] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(521), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(523), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3472] = 5,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(730), 1,
      sym__non_newline_whitespace,
    ACTIONS(733), 1,
      sym__eof_instruction_end,
    STATE(159), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3489] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(735), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3500] = 5,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      aux_sym_json_string_token1,
    ACTIONS(742), 1,
      sym_json_escape_sequence,
    STATE(161), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3517] = 5,
    ACTIONS(745), 1,
      anon_sym_LF,
    ACTIONS(747), 1,
      sym__non_newline_whitespace,
    ACTIONS(749), 1,
      sym__eof_instruction_end,
    STATE(165), 1,
      aux_sym__spaced_env_value_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3534] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(751), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(753), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3547] = 5,
    ACTIONS(755), 1,
      anon_sym_LF,
    ACTIONS(757), 1,
      sym__non_newline_whitespace,
    ACTIONS(759), 1,
      sym__eof_instruction_end,
    STATE(170), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3564] = 5,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(763), 1,
      sym__non_newline_whitespace,
    ACTIONS(766), 1,
      sym__eof_instruction_end,
    STATE(165), 1,
      aux_sym__spaced_env_value_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3581] = 5,
    ACTIONS(644), 1,
      anon_sym_LF,
    ACTIONS(648), 1,
      sym__eof_instruction_end,
    ACTIONS(768), 1,
      sym_required_line_continuation,
    STATE(169), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3598] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(770), 1,
      aux_sym_path_token1,
    ACTIONS(772), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [3613] = 3,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(297), 3,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
  [3626] = 5,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 1,
      sym__eof_instruction_end,
    ACTIONS(768), 1,
      sym_required_line_continuation,
    STATE(172), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3643] = 5,
    ACTIONS(757), 1,
      sym__non_newline_whitespace,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(776), 1,
      sym__eof_instruction_end,
    STATE(159), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3660] = 4,
    ACTIONS(480), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(778), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(171), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [3675] = 5,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(674), 1,
      sym__eof_instruction_end,
    ACTIONS(781), 1,
      sym_required_line_continuation,
    STATE(172), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3692] = 5,
    ACTIONS(784), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(786), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_expansion,
    STATE(210), 1,
      sym__user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3709] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
    ACTIONS(434), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3722] = 5,
    ACTIONS(788), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(790), 1,
      anon_sym_DOLLAR,
    STATE(77), 1,
      sym_expansion,
    STATE(246), 1,
      sym__stopsignal_value,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3739] = 5,
    ACTIONS(792), 1,
      anon_sym_DOLLAR,
    ACTIONS(794), 1,
      aux_sym_image_alias_token1,
    STATE(67), 1,
      sym_expansion,
    STATE(248), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3756] = 5,
    ACTIONS(792), 1,
      anon_sym_DOLLAR,
    ACTIONS(794), 1,
      aux_sym_image_alias_token1,
    STATE(67), 1,
      sym_expansion,
    STATE(268), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3773] = 5,
    ACTIONS(796), 1,
      anon_sym_DQUOTE,
    ACTIONS(798), 1,
      aux_sym_json_string_token1,
    ACTIONS(800), 1,
      sym_json_escape_sequence,
    STATE(161), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3790] = 3,
    ACTIONS(523), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(521), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3803] = 3,
    ACTIONS(343), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3816] = 3,
    ACTIONS(434), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 3,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3829] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(521), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3840] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3851] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3862] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(521), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3873] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3884] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(669), 2,
      anon_sym_LF,
      sym_required_line_continuation,
    ACTIONS(674), 2,
      sym_heredoc_nl,
      sym__eof_instruction_end,
  [3897] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 4,
      sym__eof_instruction_end,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3908] = 5,
    ACTIONS(747), 1,
      sym__non_newline_whitespace,
    ACTIONS(802), 1,
      anon_sym_LF,
    ACTIONS(804), 1,
      sym__eof_instruction_end,
    STATE(162), 1,
      aux_sym__spaced_env_value_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3925] = 5,
    ACTIONS(806), 1,
      anon_sym_DQUOTE,
    ACTIONS(808), 1,
      aux_sym_json_string_token1,
    ACTIONS(810), 1,
      sym_json_escape_sequence,
    STATE(178), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3942] = 3,
    ACTIONS(434), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3954] = 4,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      sym_variable,
    STATE(188), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3968] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(816), 3,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      anon_sym_LF,
  [3978] = 4,
    ACTIONS(818), 1,
      anon_sym_COMMA2,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3992] = 3,
    ACTIONS(674), 1,
      sym__eof_instruction_end,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(669), 2,
      anon_sym_LF,
      sym_required_line_continuation,
  [4004] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(823), 3,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4014] = 4,
    ACTIONS(825), 1,
      sym_heredoc_line,
    ACTIONS(828), 1,
      sym_heredoc_end,
    STATE(197), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4028] = 4,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      sym_variable,
    STATE(82), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4042] = 4,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(834), 1,
      sym_variable,
    STATE(66), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4056] = 3,
    ACTIONS(523), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4068] = 3,
    ACTIONS(714), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(712), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4080] = 3,
    ACTIONS(724), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(722), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4092] = 3,
    ACTIONS(343), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4104] = 3,
    ACTIONS(626), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(624), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4116] = 3,
    ACTIONS(630), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(628), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4128] = 3,
    ACTIONS(728), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(733), 2,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
  [4140] = 3,
    ACTIONS(838), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(836), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4152] = 3,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(766), 2,
      sym__eof_instruction_end,
      sym__non_newline_whitespace,
  [4164] = 4,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    ACTIONS(842), 1,
      anon_sym_DQUOTE,
    STATE(227), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4178] = 3,
    ACTIONS(846), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(844), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4190] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(848), 3,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4200] = 4,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    ACTIONS(852), 1,
      sym_variable,
    STATE(117), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4214] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(854), 3,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4224] = 4,
    ACTIONS(856), 1,
      sym_heredoc_line,
    ACTIONS(858), 1,
      sym_heredoc_end,
    STATE(197), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4238] = 3,
    ACTIONS(862), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(860), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4250] = 3,
    ACTIONS(866), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(864), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4262] = 3,
    ACTIONS(870), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(868), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4274] = 3,
    ACTIONS(874), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(872), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4286] = 4,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    ACTIONS(878), 1,
      sym_variable,
    STATE(158), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4300] = 4,
    ACTIONS(842), 1,
      anon_sym_DQUOTE,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4314] = 3,
    ACTIONS(884), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(882), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4326] = 4,
    ACTIONS(886), 1,
      anon_sym_COMMA2,
    ACTIONS(888), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4340] = 4,
    ACTIONS(886), 1,
      anon_sym_COMMA2,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4354] = 4,
    ACTIONS(892), 1,
      anon_sym_LBRACE,
    ACTIONS(894), 1,
      sym_variable,
    STATE(203), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4368] = 4,
    ACTIONS(892), 1,
      anon_sym_LBRACE,
    ACTIONS(896), 1,
      sym_variable,
    STATE(200), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4382] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(898), 3,
      sym_heredoc_nl,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4392] = 4,
    ACTIONS(886), 1,
      anon_sym_COMMA2,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(245), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4406] = 4,
    ACTIONS(856), 1,
      sym_heredoc_line,
    ACTIONS(902), 1,
      sym_heredoc_end,
    STATE(214), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4420] = 4,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      sym_variable,
    STATE(129), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4434] = 4,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    ACTIONS(908), 1,
      sym_variable,
    STATE(128), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4448] = 4,
    ACTIONS(910), 1,
      anon_sym_LBRACE,
    ACTIONS(912), 1,
      sym_variable,
    STATE(133), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4462] = 4,
    ACTIONS(910), 1,
      anon_sym_LBRACE,
    ACTIONS(914), 1,
      sym_variable,
    STATE(132), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4476] = 4,
    ACTIONS(916), 1,
      anon_sym_LBRACE,
    ACTIONS(918), 1,
      sym_variable,
    STATE(180), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4490] = 4,
    ACTIONS(916), 1,
      anon_sym_LBRACE,
    ACTIONS(920), 1,
      sym_variable,
    STATE(179), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4504] = 4,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
    ACTIONS(924), 1,
      sym_variable,
    STATE(183), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4518] = 4,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
    ACTIONS(926), 1,
      sym_variable,
    STATE(182), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4532] = 4,
    ACTIONS(928), 1,
      anon_sym_LBRACE,
    ACTIONS(930), 1,
      sym_variable,
    STATE(101), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4546] = 4,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(934), 1,
      sym_variable,
    STATE(100), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4560] = 4,
    ACTIONS(936), 1,
      anon_sym_LBRACE,
    ACTIONS(938), 1,
      sym_variable,
    STATE(138), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4574] = 4,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    ACTIONS(940), 1,
      sym_variable,
    STATE(185), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4588] = 4,
    ACTIONS(942), 1,
      anon_sym_LBRACE,
    ACTIONS(944), 1,
      sym_variable,
    STATE(46), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4602] = 4,
    ACTIONS(946), 1,
      anon_sym_LBRACE,
    ACTIONS(948), 1,
      sym_variable,
    STATE(103), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4616] = 4,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      sym_variable,
    STATE(105), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4630] = 4,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(954), 1,
      sym_variable,
    STATE(107), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4644] = 4,
    ACTIONS(886), 1,
      anon_sym_COMMA2,
    ACTIONS(956), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4658] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(958), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4667] = 3,
    ACTIONS(960), 1,
      anon_sym_EQ,
    ACTIONS(962), 1,
      aux_sym__spaced_env_pair_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4678] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(964), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4687] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(966), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4696] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(968), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4705] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym_image_name_token1,
    ACTIONS(535), 1,
      anon_sym_DOLLAR,
  [4718] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(804), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4727] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(970), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4736] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(972), 1,
      aux_sym_mount_param_param_token1,
    STATE(33), 1,
      sym_mount_param_param,
  [4749] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(535), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4758] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4767] = 3,
    ACTIONS(976), 1,
      aux_sym_param_token1,
    ACTIONS(978), 1,
      anon_sym_mount,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4778] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(980), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4787] = 3,
    ACTIONS(842), 1,
      anon_sym_DQUOTE,
    STATE(270), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4798] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(759), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4807] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(972), 1,
      aux_sym_mount_param_param_token1,
    STATE(59), 1,
      sym_mount_param_param,
  [4820] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(982), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4829] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(816), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4838] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(898), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4847] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(984), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4856] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(986), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4865] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(988), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4874] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(990), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4883] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(848), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4892] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(821), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4901] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(992), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4910] = 3,
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    STATE(250), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4921] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(828), 2,
      sym_heredoc_line,
      sym_heredoc_end,
  [4930] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(994), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4939] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(996), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4948] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(998), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4957] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1000), 2,
      sym__eof_instruction_end,
      anon_sym_LF,
  [4966] = 2,
    ACTIONS(1002), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4974] = 2,
    ACTIONS(1004), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4982] = 2,
    ACTIONS(1006), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4990] = 2,
    ACTIONS(1008), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4998] = 2,
    ACTIONS(571), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5006] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1010), 1,
      aux_sym_mount_param_param_token1,
  [5016] = 2,
    ACTIONS(1012), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5024] = 2,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5032] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1016), 1,
      aux_sym_param_token2,
  [5042] = 2,
    ACTIONS(1018), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5050] = 2,
    ACTIONS(1020), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5058] = 2,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5066] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1024), 1,
      aux_sym_param_token2,
  [5076] = 2,
    ACTIONS(722), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5084] = 2,
    ACTIONS(624), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5092] = 2,
    ACTIONS(1026), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5100] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1028), 1,
      aux_sym_param_token2,
  [5110] = 2,
    ACTIONS(712), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5118] = 2,
    ACTIONS(1030), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5126] = 2,
    ACTIONS(628), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5134] = 2,
    ACTIONS(960), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5142] = 2,
    ACTIONS(1032), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5150] = 2,
    ACTIONS(1034), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5158] = 2,
    ACTIONS(297), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5166] = 2,
    ACTIONS(1036), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5174] = 2,
    ACTIONS(1038), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5182] = 2,
    ACTIONS(1040), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5190] = 2,
    ACTIONS(1042), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5198] = 2,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5206] = 2,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5214] = 2,
    ACTIONS(1048), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5222] = 2,
    ACTIONS(1050), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5230] = 2,
    ACTIONS(1052), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5238] = 2,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5246] = 2,
    ACTIONS(1056), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5254] = 2,
    ACTIONS(1058), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5262] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1060), 1,
      aux_sym_param_token2,
  [5272] = 2,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5280] = 2,
    ACTIONS(1064), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5288] = 2,
    ACTIONS(1066), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5296] = 2,
    ACTIONS(1068), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5304] = 2,
    ACTIONS(1070), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5312] = 2,
    ACTIONS(1072), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5320] = 2,
    ACTIONS(1074), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5328] = 2,
    ACTIONS(1076), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5336] = 2,
    ACTIONS(1078), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5344] = 2,
    ACTIONS(1080), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5352] = 2,
    ACTIONS(1082), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5360] = 2,
    ACTIONS(1084), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5368] = 2,
    ACTIONS(1086), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5376] = 2,
    ACTIONS(1088), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5384] = 2,
    ACTIONS(1090), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5392] = 2,
    ACTIONS(1092), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5400] = 2,
    ACTIONS(1094), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5408] = 2,
    ACTIONS(1096), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5416] = 2,
    ACTIONS(1098), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5424] = 2,
    ACTIONS(1100), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5432] = 2,
    ACTIONS(1102), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5440] = 2,
    ACTIONS(1104), 1,
      aux_sym_maintainer_instruction_token2,
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
  [SMALL_STATE(9)] = 396,
  [SMALL_STATE(10)] = 429,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 489,
  [SMALL_STATE(13)] = 515,
  [SMALL_STATE(14)] = 541,
  [SMALL_STATE(15)] = 566,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 624,
  [SMALL_STATE(18)] = 649,
  [SMALL_STATE(19)] = 674,
  [SMALL_STATE(20)] = 697,
  [SMALL_STATE(21)] = 732,
  [SMALL_STATE(22)] = 757,
  [SMALL_STATE(23)] = 782,
  [SMALL_STATE(24)] = 817,
  [SMALL_STATE(25)] = 852,
  [SMALL_STATE(26)] = 887,
  [SMALL_STATE(27)] = 913,
  [SMALL_STATE(28)] = 935,
  [SMALL_STATE(29)] = 953,
  [SMALL_STATE(30)] = 979,
  [SMALL_STATE(31)] = 1003,
  [SMALL_STATE(32)] = 1025,
  [SMALL_STATE(33)] = 1049,
  [SMALL_STATE(34)] = 1071,
  [SMALL_STATE(35)] = 1093,
  [SMALL_STATE(36)] = 1115,
  [SMALL_STATE(37)] = 1139,
  [SMALL_STATE(38)] = 1163,
  [SMALL_STATE(39)] = 1185,
  [SMALL_STATE(40)] = 1209,
  [SMALL_STATE(41)] = 1233,
  [SMALL_STATE(42)] = 1257,
  [SMALL_STATE(43)] = 1281,
  [SMALL_STATE(44)] = 1305,
  [SMALL_STATE(45)] = 1329,
  [SMALL_STATE(46)] = 1353,
  [SMALL_STATE(47)] = 1370,
  [SMALL_STATE(48)] = 1393,
  [SMALL_STATE(49)] = 1416,
  [SMALL_STATE(50)] = 1439,
  [SMALL_STATE(51)] = 1462,
  [SMALL_STATE(52)] = 1485,
  [SMALL_STATE(53)] = 1508,
  [SMALL_STATE(54)] = 1531,
  [SMALL_STATE(55)] = 1554,
  [SMALL_STATE(56)] = 1577,
  [SMALL_STATE(57)] = 1600,
  [SMALL_STATE(58)] = 1623,
  [SMALL_STATE(59)] = 1640,
  [SMALL_STATE(60)] = 1657,
  [SMALL_STATE(61)] = 1674,
  [SMALL_STATE(62)] = 1697,
  [SMALL_STATE(63)] = 1714,
  [SMALL_STATE(64)] = 1737,
  [SMALL_STATE(65)] = 1760,
  [SMALL_STATE(66)] = 1780,
  [SMALL_STATE(67)] = 1796,
  [SMALL_STATE(68)] = 1816,
  [SMALL_STATE(69)] = 1844,
  [SMALL_STATE(70)] = 1864,
  [SMALL_STATE(71)] = 1880,
  [SMALL_STATE(72)] = 1900,
  [SMALL_STATE(73)] = 1928,
  [SMALL_STATE(74)] = 1950,
  [SMALL_STATE(75)] = 1978,
  [SMALL_STATE(76)] = 2000,
  [SMALL_STATE(77)] = 2020,
  [SMALL_STATE(78)] = 2040,
  [SMALL_STATE(79)] = 2068,
  [SMALL_STATE(80)] = 2096,
  [SMALL_STATE(81)] = 2124,
  [SMALL_STATE(82)] = 2144,
  [SMALL_STATE(83)] = 2160,
  [SMALL_STATE(84)] = 2182,
  [SMALL_STATE(85)] = 2202,
  [SMALL_STATE(86)] = 2224,
  [SMALL_STATE(87)] = 2240,
  [SMALL_STATE(88)] = 2260,
  [SMALL_STATE(89)] = 2282,
  [SMALL_STATE(90)] = 2310,
  [SMALL_STATE(91)] = 2330,
  [SMALL_STATE(92)] = 2350,
  [SMALL_STATE(93)] = 2374,
  [SMALL_STATE(94)] = 2395,
  [SMALL_STATE(95)] = 2416,
  [SMALL_STATE(96)] = 2437,
  [SMALL_STATE(97)] = 2456,
  [SMALL_STATE(98)] = 2477,
  [SMALL_STATE(99)] = 2494,
  [SMALL_STATE(100)] = 2513,
  [SMALL_STATE(101)] = 2528,
  [SMALL_STATE(102)] = 2543,
  [SMALL_STATE(103)] = 2558,
  [SMALL_STATE(104)] = 2573,
  [SMALL_STATE(105)] = 2588,
  [SMALL_STATE(106)] = 2603,
  [SMALL_STATE(107)] = 2622,
  [SMALL_STATE(108)] = 2637,
  [SMALL_STATE(109)] = 2656,
  [SMALL_STATE(110)] = 2671,
  [SMALL_STATE(111)] = 2686,
  [SMALL_STATE(112)] = 2705,
  [SMALL_STATE(113)] = 2724,
  [SMALL_STATE(114)] = 2745,
  [SMALL_STATE(115)] = 2759,
  [SMALL_STATE(116)] = 2777,
  [SMALL_STATE(117)] = 2799,
  [SMALL_STATE(118)] = 2813,
  [SMALL_STATE(119)] = 2829,
  [SMALL_STATE(120)] = 2843,
  [SMALL_STATE(121)] = 2857,
  [SMALL_STATE(122)] = 2875,
  [SMALL_STATE(123)] = 2897,
  [SMALL_STATE(124)] = 2915,
  [SMALL_STATE(125)] = 2933,
  [SMALL_STATE(126)] = 2949,
  [SMALL_STATE(127)] = 2965,
  [SMALL_STATE(128)] = 2981,
  [SMALL_STATE(129)] = 2995,
  [SMALL_STATE(130)] = 3009,
  [SMALL_STATE(131)] = 3025,
  [SMALL_STATE(132)] = 3039,
  [SMALL_STATE(133)] = 3051,
  [SMALL_STATE(134)] = 3063,
  [SMALL_STATE(135)] = 3079,
  [SMALL_STATE(136)] = 3095,
  [SMALL_STATE(137)] = 3111,
  [SMALL_STATE(138)] = 3125,
  [SMALL_STATE(139)] = 3139,
  [SMALL_STATE(140)] = 3155,
  [SMALL_STATE(141)] = 3173,
  [SMALL_STATE(142)] = 3189,
  [SMALL_STATE(143)] = 3207,
  [SMALL_STATE(144)] = 3225,
  [SMALL_STATE(145)] = 3241,
  [SMALL_STATE(146)] = 3263,
  [SMALL_STATE(147)] = 3277,
  [SMALL_STATE(148)] = 3295,
  [SMALL_STATE(149)] = 3313,
  [SMALL_STATE(150)] = 3331,
  [SMALL_STATE(151)] = 3349,
  [SMALL_STATE(152)] = 3365,
  [SMALL_STATE(153)] = 3383,
  [SMALL_STATE(154)] = 3397,
  [SMALL_STATE(155)] = 3415,
  [SMALL_STATE(156)] = 3429,
  [SMALL_STATE(157)] = 3447,
  [SMALL_STATE(158)] = 3459,
  [SMALL_STATE(159)] = 3472,
  [SMALL_STATE(160)] = 3489,
  [SMALL_STATE(161)] = 3500,
  [SMALL_STATE(162)] = 3517,
  [SMALL_STATE(163)] = 3534,
  [SMALL_STATE(164)] = 3547,
  [SMALL_STATE(165)] = 3564,
  [SMALL_STATE(166)] = 3581,
  [SMALL_STATE(167)] = 3598,
  [SMALL_STATE(168)] = 3613,
  [SMALL_STATE(169)] = 3626,
  [SMALL_STATE(170)] = 3643,
  [SMALL_STATE(171)] = 3660,
  [SMALL_STATE(172)] = 3675,
  [SMALL_STATE(173)] = 3692,
  [SMALL_STATE(174)] = 3709,
  [SMALL_STATE(175)] = 3722,
  [SMALL_STATE(176)] = 3739,
  [SMALL_STATE(177)] = 3756,
  [SMALL_STATE(178)] = 3773,
  [SMALL_STATE(179)] = 3790,
  [SMALL_STATE(180)] = 3803,
  [SMALL_STATE(181)] = 3816,
  [SMALL_STATE(182)] = 3829,
  [SMALL_STATE(183)] = 3840,
  [SMALL_STATE(184)] = 3851,
  [SMALL_STATE(185)] = 3862,
  [SMALL_STATE(186)] = 3873,
  [SMALL_STATE(187)] = 3884,
  [SMALL_STATE(188)] = 3897,
  [SMALL_STATE(189)] = 3908,
  [SMALL_STATE(190)] = 3925,
  [SMALL_STATE(191)] = 3942,
  [SMALL_STATE(192)] = 3954,
  [SMALL_STATE(193)] = 3968,
  [SMALL_STATE(194)] = 3978,
  [SMALL_STATE(195)] = 3992,
  [SMALL_STATE(196)] = 4004,
  [SMALL_STATE(197)] = 4014,
  [SMALL_STATE(198)] = 4028,
  [SMALL_STATE(199)] = 4042,
  [SMALL_STATE(200)] = 4056,
  [SMALL_STATE(201)] = 4068,
  [SMALL_STATE(202)] = 4080,
  [SMALL_STATE(203)] = 4092,
  [SMALL_STATE(204)] = 4104,
  [SMALL_STATE(205)] = 4116,
  [SMALL_STATE(206)] = 4128,
  [SMALL_STATE(207)] = 4140,
  [SMALL_STATE(208)] = 4152,
  [SMALL_STATE(209)] = 4164,
  [SMALL_STATE(210)] = 4178,
  [SMALL_STATE(211)] = 4190,
  [SMALL_STATE(212)] = 4200,
  [SMALL_STATE(213)] = 4214,
  [SMALL_STATE(214)] = 4224,
  [SMALL_STATE(215)] = 4238,
  [SMALL_STATE(216)] = 4250,
  [SMALL_STATE(217)] = 4262,
  [SMALL_STATE(218)] = 4274,
  [SMALL_STATE(219)] = 4286,
  [SMALL_STATE(220)] = 4300,
  [SMALL_STATE(221)] = 4314,
  [SMALL_STATE(222)] = 4326,
  [SMALL_STATE(223)] = 4340,
  [SMALL_STATE(224)] = 4354,
  [SMALL_STATE(225)] = 4368,
  [SMALL_STATE(226)] = 4382,
  [SMALL_STATE(227)] = 4392,
  [SMALL_STATE(228)] = 4406,
  [SMALL_STATE(229)] = 4420,
  [SMALL_STATE(230)] = 4434,
  [SMALL_STATE(231)] = 4448,
  [SMALL_STATE(232)] = 4462,
  [SMALL_STATE(233)] = 4476,
  [SMALL_STATE(234)] = 4490,
  [SMALL_STATE(235)] = 4504,
  [SMALL_STATE(236)] = 4518,
  [SMALL_STATE(237)] = 4532,
  [SMALL_STATE(238)] = 4546,
  [SMALL_STATE(239)] = 4560,
  [SMALL_STATE(240)] = 4574,
  [SMALL_STATE(241)] = 4588,
  [SMALL_STATE(242)] = 4602,
  [SMALL_STATE(243)] = 4616,
  [SMALL_STATE(244)] = 4630,
  [SMALL_STATE(245)] = 4644,
  [SMALL_STATE(246)] = 4658,
  [SMALL_STATE(247)] = 4667,
  [SMALL_STATE(248)] = 4678,
  [SMALL_STATE(249)] = 4687,
  [SMALL_STATE(250)] = 4696,
  [SMALL_STATE(251)] = 4705,
  [SMALL_STATE(252)] = 4718,
  [SMALL_STATE(253)] = 4727,
  [SMALL_STATE(254)] = 4736,
  [SMALL_STATE(255)] = 4749,
  [SMALL_STATE(256)] = 4758,
  [SMALL_STATE(257)] = 4767,
  [SMALL_STATE(258)] = 4778,
  [SMALL_STATE(259)] = 4787,
  [SMALL_STATE(260)] = 4798,
  [SMALL_STATE(261)] = 4807,
  [SMALL_STATE(262)] = 4820,
  [SMALL_STATE(263)] = 4829,
  [SMALL_STATE(264)] = 4838,
  [SMALL_STATE(265)] = 4847,
  [SMALL_STATE(266)] = 4856,
  [SMALL_STATE(267)] = 4865,
  [SMALL_STATE(268)] = 4874,
  [SMALL_STATE(269)] = 4883,
  [SMALL_STATE(270)] = 4892,
  [SMALL_STATE(271)] = 4901,
  [SMALL_STATE(272)] = 4910,
  [SMALL_STATE(273)] = 4921,
  [SMALL_STATE(274)] = 4930,
  [SMALL_STATE(275)] = 4939,
  [SMALL_STATE(276)] = 4948,
  [SMALL_STATE(277)] = 4957,
  [SMALL_STATE(278)] = 4966,
  [SMALL_STATE(279)] = 4974,
  [SMALL_STATE(280)] = 4982,
  [SMALL_STATE(281)] = 4990,
  [SMALL_STATE(282)] = 4998,
  [SMALL_STATE(283)] = 5006,
  [SMALL_STATE(284)] = 5016,
  [SMALL_STATE(285)] = 5024,
  [SMALL_STATE(286)] = 5032,
  [SMALL_STATE(287)] = 5042,
  [SMALL_STATE(288)] = 5050,
  [SMALL_STATE(289)] = 5058,
  [SMALL_STATE(290)] = 5066,
  [SMALL_STATE(291)] = 5076,
  [SMALL_STATE(292)] = 5084,
  [SMALL_STATE(293)] = 5092,
  [SMALL_STATE(294)] = 5100,
  [SMALL_STATE(295)] = 5110,
  [SMALL_STATE(296)] = 5118,
  [SMALL_STATE(297)] = 5126,
  [SMALL_STATE(298)] = 5134,
  [SMALL_STATE(299)] = 5142,
  [SMALL_STATE(300)] = 5150,
  [SMALL_STATE(301)] = 5158,
  [SMALL_STATE(302)] = 5166,
  [SMALL_STATE(303)] = 5174,
  [SMALL_STATE(304)] = 5182,
  [SMALL_STATE(305)] = 5190,
  [SMALL_STATE(306)] = 5198,
  [SMALL_STATE(307)] = 5206,
  [SMALL_STATE(308)] = 5214,
  [SMALL_STATE(309)] = 5222,
  [SMALL_STATE(310)] = 5230,
  [SMALL_STATE(311)] = 5238,
  [SMALL_STATE(312)] = 5246,
  [SMALL_STATE(313)] = 5254,
  [SMALL_STATE(314)] = 5262,
  [SMALL_STATE(315)] = 5272,
  [SMALL_STATE(316)] = 5280,
  [SMALL_STATE(317)] = 5288,
  [SMALL_STATE(318)] = 5296,
  [SMALL_STATE(319)] = 5304,
  [SMALL_STATE(320)] = 5312,
  [SMALL_STATE(321)] = 5320,
  [SMALL_STATE(322)] = 5328,
  [SMALL_STATE(323)] = 5336,
  [SMALL_STATE(324)] = 5344,
  [SMALL_STATE(325)] = 5352,
  [SMALL_STATE(326)] = 5360,
  [SMALL_STATE(327)] = 5368,
  [SMALL_STATE(328)] = 5376,
  [SMALL_STATE(329)] = 5384,
  [SMALL_STATE(330)] = 5392,
  [SMALL_STATE(331)] = 5400,
  [SMALL_STATE(332)] = 5408,
  [SMALL_STATE(333)] = 5416,
  [SMALL_STATE(334)] = 5424,
  [SMALL_STATE(335)] = 5432,
  [SMALL_STATE(336)] = 5440,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(336),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, 0, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, 0, 13),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, 0, 13),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, 0, 15),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, 0, 15),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, 0, 11),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0), SHIFT_REPEAT(160),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0), SHIFT_REPEAT(231),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, 0, 0),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(334),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(99),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(99),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(225),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(301),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, 0, 13),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 13),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, 0, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, 0, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 3, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 3, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 5),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 5),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_command, 1, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(228),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_command, 2, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 9),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 9),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spaced_env_value, 2, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_value, 2, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__spaced_env_value_repeat1, 2, 0, 0),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__spaced_env_value_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__spaced_env_value_repeat1, 2, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3, 0, 0),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(335),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__spaced_env_pair, 3, 0, 10),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, 0, 10),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4, 0, 0),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(259),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 3, 0, 0),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, 0, 8),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, 0, 8),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, 0, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 6),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 6),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, 0, 10),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, 0, 10),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, 0, 7),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 12),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, 0, 0),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, 0, 0),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, 0, 0),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, 0, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, 0, 14),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1018] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_heredoc_marker = 0,
  ts_external_token_heredoc_line = 1,
  ts_external_token_heredoc_end = 2,
  ts_external_token_heredoc_nl = 3,
  ts_external_token_error_sentinel = 4,
  ts_external_token__eof_instruction_end = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc_marker] = sym_heredoc_marker,
  [ts_external_token_heredoc_line] = sym_heredoc_line,
  [ts_external_token_heredoc_end] = sym_heredoc_end,
  [ts_external_token_heredoc_nl] = sym_heredoc_nl,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
  [ts_external_token__eof_instruction_end] = sym__eof_instruction_end,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
    [ts_external_token_heredoc_nl] = true,
    [ts_external_token_error_sentinel] = true,
    [ts_external_token__eof_instruction_end] = true,
  },
  [2] = {
    [ts_external_token_heredoc_marker] = true,
  },
  [3] = {
    [ts_external_token__eof_instruction_end] = true,
  },
  [4] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_nl] = true,
    [ts_external_token__eof_instruction_end] = true,
  },
  [5] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token__eof_instruction_end] = true,
  },
  [6] = {
    [ts_external_token_heredoc_nl] = true,
    [ts_external_token__eof_instruction_end] = true,
  },
  [7] = {
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
