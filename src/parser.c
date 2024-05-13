#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 323
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
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
  aux_sym__shell_fragment_token1 = 60,
  aux_sym__shell_fragment_token2 = 61,
  aux_sym__shell_fragment_token3 = 62,
  aux_sym__shell_fragment_token4 = 63,
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
  sym__heredoc_line = 83,
  sym_heredoc_end = 84,
  sym__heredoc_nl = 85,
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
  aux_sym__shell_fragment = 133,
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
  aux_sym_json_string_array_repeat1 = 158,
  aux_sym_json_string_repeat1 = 159,
  aux_sym_double_quoted_string_repeat1 = 160,
  aux_sym_single_quoted_string_repeat1 = 161,
  aux_sym_unquoted_string_repeat1 = 162,
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
  [aux_sym__shell_fragment_token1] = "_shell_fragment_token1",
  [aux_sym__shell_fragment_token2] = "_shell_fragment_token2",
  [aux_sym__shell_fragment_token3] = "_shell_fragment_token3",
  [aux_sym__shell_fragment_token4] = "_shell_fragment_token4",
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
  [sym__heredoc_line] = "_heredoc_line",
  [sym_heredoc_end] = "heredoc_end",
  [sym__heredoc_nl] = "_heredoc_nl",
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
  [aux_sym__shell_fragment] = "_shell_fragment",
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
  [aux_sym__shell_fragment_token1] = aux_sym__shell_fragment_token1,
  [aux_sym__shell_fragment_token2] = aux_sym__shell_fragment_token2,
  [aux_sym__shell_fragment_token3] = aux_sym__shell_fragment_token3,
  [aux_sym__shell_fragment_token4] = aux_sym__shell_fragment_token4,
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
  [sym__heredoc_line] = sym__heredoc_line,
  [sym_heredoc_end] = sym_heredoc_end,
  [sym__heredoc_nl] = sym__heredoc_nl,
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
  [aux_sym__shell_fragment] = aux_sym__shell_fragment,
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
  [aux_sym__shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__shell_fragment_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__shell_fragment_token4] = {
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
  [sym__heredoc_line] = {
    .visible = false,
    .named = true,
  },
  [sym_heredoc_end] = {
    .visible = true,
    .named = true,
  },
  [sym__heredoc_nl] = {
    .visible = false,
    .named = true,
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
  [aux_sym__shell_fragment] = {
    .visible = false,
    .named = false,
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
  [25] = 18,
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
  [39] = 24,
  [40] = 40,
  [41] = 34,
  [42] = 42,
  [43] = 43,
  [44] = 19,
  [45] = 45,
  [46] = 37,
  [47] = 20,
  [48] = 48,
  [49] = 17,
  [50] = 37,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 34,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 45,
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
  [72] = 72,
  [73] = 73,
  [74] = 52,
  [75] = 69,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 52,
  [80] = 53,
  [81] = 81,
  [82] = 82,
  [83] = 76,
  [84] = 84,
  [85] = 85,
  [86] = 60,
  [87] = 87,
  [88] = 88,
  [89] = 52,
  [90] = 90,
  [91] = 64,
  [92] = 92,
  [93] = 93,
  [94] = 72,
  [95] = 95,
  [96] = 36,
  [97] = 97,
  [98] = 60,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 64,
  [103] = 97,
  [104] = 101,
  [105] = 105,
  [106] = 97,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 60,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 64,
  [119] = 73,
  [120] = 60,
  [121] = 121,
  [122] = 64,
  [123] = 123,
  [124] = 60,
  [125] = 125,
  [126] = 101,
  [127] = 85,
  [128] = 64,
  [129] = 64,
  [130] = 60,
  [131] = 131,
  [132] = 60,
  [133] = 64,
  [134] = 134,
  [135] = 85,
  [136] = 60,
  [137] = 64,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 85,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 70,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 85,
  [164] = 60,
  [165] = 165,
  [166] = 165,
  [167] = 165,
  [168] = 168,
  [169] = 165,
  [170] = 170,
  [171] = 165,
  [172] = 170,
  [173] = 165,
  [174] = 174,
  [175] = 170,
  [176] = 165,
  [177] = 177,
  [178] = 170,
  [179] = 165,
  [180] = 180,
  [181] = 170,
  [182] = 165,
  [183] = 183,
  [184] = 170,
  [185] = 165,
  [186] = 170,
  [187] = 165,
  [188] = 188,
  [189] = 188,
  [190] = 170,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 170,
  [195] = 64,
  [196] = 85,
  [197] = 165,
  [198] = 192,
  [199] = 60,
  [200] = 85,
  [201] = 201,
  [202] = 152,
  [203] = 203,
  [204] = 64,
  [205] = 205,
  [206] = 60,
  [207] = 64,
  [208] = 208,
  [209] = 85,
  [210] = 191,
  [211] = 143,
  [212] = 60,
  [213] = 64,
  [214] = 85,
  [215] = 165,
  [216] = 60,
  [217] = 217,
  [218] = 73,
  [219] = 219,
  [220] = 220,
  [221] = 156,
  [222] = 161,
  [223] = 223,
  [224] = 150,
  [225] = 149,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 73,
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
  [251] = 193,
  [252] = 227,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 258,
  [260] = 230,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 249,
  [267] = 256,
  [268] = 161,
  [269] = 156,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 238,
  [275] = 249,
  [276] = 256,
  [277] = 277,
  [278] = 278,
  [279] = 249,
  [280] = 256,
  [281] = 281,
  [282] = 282,
  [283] = 249,
  [284] = 284,
  [285] = 285,
  [286] = 249,
  [287] = 287,
  [288] = 288,
  [289] = 249,
  [290] = 290,
  [291] = 291,
  [292] = 249,
  [293] = 293,
  [294] = 294,
  [295] = 249,
  [296] = 150,
  [297] = 249,
  [298] = 298,
  [299] = 249,
  [300] = 300,
  [301] = 249,
  [302] = 149,
  [303] = 249,
  [304] = 249,
  [305] = 298,
  [306] = 261,
  [307] = 298,
  [308] = 261,
  [309] = 298,
  [310] = 261,
  [311] = 298,
  [312] = 298,
  [313] = 298,
  [314] = 298,
  [315] = 298,
  [316] = 298,
  [317] = 298,
  [318] = 298,
  [319] = 298,
  [320] = 298,
  [321] = 262,
  [322] = 262,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(167);
      ADVANCE_MAP(
        '"', 270,
        '#', 205,
        '$', 213,
        '\'', 281,
        ',', 252,
        '-', 260,
        ':', 181,
        '<', 228,
        '=', 190,
        '@', 239,
        '[', 267,
        '\\', 278,
        ']', 269,
        '_', 220,
        '{', 214,
        '}', 219,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 265,
        'u', 161,
        '\t', 3,
        ' ', 3,
        '"', 274,
        '/', 274,
        '\\', 274,
        'b', 274,
        'f', 274,
        'n', 274,
        'r', 274,
        't', 274,
      );
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(263);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 168,
        '#', 293,
        '$', 212,
        '/', 67,
        ':', 181,
        '@', 239,
        '\\', 3,
        'A', 142,
        'a', 142,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(18);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\n', 168,
        '#', 233,
        '$', 213,
        ':', 181,
        '@', 239,
        '\\', 231,
        'A', 232,
        'a', 232,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(235);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(18);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(263);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(278);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(204);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(204);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(203);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(204);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(203);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(244);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(278);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(259);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(48);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(48);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '$') ADVANCE(212);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(229);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(228);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(253);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(255);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(242);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 76:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 81:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 82:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 95:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(195);
      END_STATE();
    case 105:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 110:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 114:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 115:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 116:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 131:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 155:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 156:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
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
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(211);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(206);
      END_STATE();
    case 164:
      if (eof) ADVANCE(167);
      ADVANCE_MAP(
        '"', 270,
        '#', 205,
        '$', 212,
        '\'', 281,
        ',', 268,
        '-', 260,
        '<', 228,
        '=', 203,
        '[', 267,
        '\\', 278,
        ']', 269,
        ':', 203,
        '@', 203,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 165:
      if (eof) ADVANCE(167);
      ADVANCE_MAP(
        '"', 270,
        '#', 293,
        '$', 212,
        ',', 268,
        '-', 58,
        '=', 190,
        'N', 61,
        '[', 267,
        '\\', 3,
        ']', 269,
        '}', 219,
        'A', 78,
        'a', 78,
        'C', 115,
        'c', 115,
        'E', 117,
        'e', 117,
        'F', 140,
        'f', 140,
        'H', 87,
        'h', 87,
        'L', 68,
        'l', 68,
        'M', 69,
        'm', 69,
        'O', 119,
        'o', 119,
        'R', 151,
        'r', 151,
        'S', 95,
        's', 95,
        'U', 143,
        'u', 143,
        'V', 124,
        'v', 124,
        'W', 126,
        'w', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      ADVANCE_MAP(
        '"', 270,
        '#', 293,
        '$', 212,
        ',', 268,
        '-', 58,
        'N', 61,
        '[', 267,
        '\\', 3,
        ']', 269,
        'A', 78,
        'a', 78,
        'C', 115,
        'c', 115,
        'E', 117,
        'e', 117,
        'F', 140,
        'f', 140,
        'H', 87,
        'h', 87,
        'L', 68,
        'l', 68,
        'M', 69,
        'm', 69,
        'O', 119,
        'o', 119,
        'R', 151,
        'r', 151,
        'S', 95,
        's', 95,
        'U', 143,
        'u', 143,
        'V', 124,
        'v', 124,
        'W', 126,
        'w', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_with_heredoc_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (lookahead == '-') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token2);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token2);
      if (lookahead == '-') ADVANCE(242);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(207);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token4);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_required_line_continuation);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(293);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '#') ADVANCE(271);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(290);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(291);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 165},
  [6] = {.lex_state = 43, .external_lex_state = 2},
  [7] = {.lex_state = 43, .external_lex_state = 2},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 32, .external_lex_state = 2},
  [13] = {.lex_state = 32, .external_lex_state = 2},
  [14] = {.lex_state = 43, .external_lex_state = 2},
  [15] = {.lex_state = 32, .external_lex_state = 2},
  [16] = {.lex_state = 32, .external_lex_state = 2},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 15, .external_lex_state = 3},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 15, .external_lex_state = 3},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 44, .external_lex_state = 2},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 15, .external_lex_state = 3},
  [25] = {.lex_state = 15, .external_lex_state = 2},
  [26] = {.lex_state = 42, .external_lex_state = 2},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 44, .external_lex_state = 2},
  [29] = {.lex_state = 42, .external_lex_state = 2},
  [30] = {.lex_state = 42, .external_lex_state = 2},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 22, .external_lex_state = 4},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 15, .external_lex_state = 2},
  [40] = {.lex_state = 42, .external_lex_state = 2},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 42, .external_lex_state = 2},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 15, .external_lex_state = 3},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 15, .external_lex_state = 2},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 22, .external_lex_state = 4},
  [53] = {.lex_state = 22, .external_lex_state = 4},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 32, .external_lex_state = 2},
  [56] = {.lex_state = 54},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 15, .external_lex_state = 2},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 32, .external_lex_state = 2},
  [67] = {.lex_state = 32, .external_lex_state = 2},
  [68] = {.lex_state = 32, .external_lex_state = 2},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 32, .external_lex_state = 2},
  [71] = {.lex_state = 32, .external_lex_state = 2},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 43, .external_lex_state = 2},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 44, .external_lex_state = 2},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 165},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 53},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 44, .external_lex_state = 2},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 53},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 53},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 50},
  [100] = {.lex_state = 34},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 26},
  [107] = {.lex_state = 16, .external_lex_state = 4},
  [108] = {.lex_state = 16, .external_lex_state = 4},
  [109] = {.lex_state = 165},
  [110] = {.lex_state = 16, .external_lex_state = 4},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 16, .external_lex_state = 4},
  [114] = {.lex_state = 54},
  [115] = {.lex_state = 34},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 52},
  [118] = {.lex_state = 22, .external_lex_state = 4},
  [119] = {.lex_state = 32, .external_lex_state = 2},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 165},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 22, .external_lex_state = 4},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 22, .external_lex_state = 4},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 38},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 22},
  [138] = {.lex_state = 9, .external_lex_state = 4},
  [139] = {.lex_state = 9, .external_lex_state = 4},
  [140] = {.lex_state = 9, .external_lex_state = 4},
  [141] = {.lex_state = 9, .external_lex_state = 4},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 15, .external_lex_state = 4},
  [144] = {.lex_state = 9, .external_lex_state = 4},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 9, .external_lex_state = 4},
  [147] = {.lex_state = 38},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 9, .external_lex_state = 4},
  [152] = {.lex_state = 15, .external_lex_state = 4},
  [153] = {.lex_state = 9, .external_lex_state = 4},
  [154] = {.lex_state = 32, .external_lex_state = 2},
  [155] = {.lex_state = 31},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 37},
  [158] = {.lex_state = 165},
  [159] = {.lex_state = 9, .external_lex_state = 4},
  [160] = {.lex_state = 40},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 31},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 46},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 46},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 46},
  [170] = {.lex_state = 46},
  [171] = {.lex_state = 46},
  [172] = {.lex_state = 46},
  [173] = {.lex_state = 46},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 46},
  [176] = {.lex_state = 46},
  [177] = {.lex_state = 165},
  [178] = {.lex_state = 46},
  [179] = {.lex_state = 46},
  [180] = {.lex_state = 165, .external_lex_state = 5},
  [181] = {.lex_state = 46},
  [182] = {.lex_state = 46},
  [183] = {.lex_state = 165, .external_lex_state = 5},
  [184] = {.lex_state = 46},
  [185] = {.lex_state = 46},
  [186] = {.lex_state = 46},
  [187] = {.lex_state = 46},
  [188] = {.lex_state = 165},
  [189] = {.lex_state = 165},
  [190] = {.lex_state = 46},
  [191] = {.lex_state = 165},
  [192] = {.lex_state = 165},
  [193] = {.lex_state = 16, .external_lex_state = 4},
  [194] = {.lex_state = 46},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 46},
  [198] = {.lex_state = 165},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 13},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 165, .external_lex_state = 5},
  [209] = {.lex_state = 23},
  [210] = {.lex_state = 165},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 53},
  [213] = {.lex_state = 53},
  [214] = {.lex_state = 53},
  [215] = {.lex_state = 46},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 45},
  [218] = {.lex_state = 54},
  [219] = {.lex_state = 13},
  [220] = {.lex_state = 13},
  [221] = {.lex_state = 19},
  [222] = {.lex_state = 19},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 19},
  [225] = {.lex_state = 19},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 9, .external_lex_state = 4},
  [228] = {.lex_state = 165},
  [229] = {.lex_state = 165},
  [230] = {.lex_state = 9, .external_lex_state = 4},
  [231] = {.lex_state = 165, .external_lex_state = 5},
  [232] = {.lex_state = 9, .external_lex_state = 4},
  [233] = {.lex_state = 165},
  [234] = {.lex_state = 9, .external_lex_state = 4},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 165},
  [237] = {.lex_state = 55},
  [238] = {.lex_state = 9, .external_lex_state = 4},
  [239] = {.lex_state = 165},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 165},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 55},
  [244] = {.lex_state = 37},
  [245] = {.lex_state = 13},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 165},
  [250] = {.lex_state = 47},
  [251] = {.lex_state = 47},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 165},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 56},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 258},
  [259] = {.lex_state = 258},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 165},
  [262] = {.lex_state = 49},
  [263] = {.lex_state = 9},
  [264] = {.lex_state = 165},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 165},
  [267] = {.lex_state = 56},
  [268] = {.lex_state = 165},
  [269] = {.lex_state = 165},
  [270] = {.lex_state = 55},
  [271] = {.lex_state = 165},
  [272] = {.lex_state = 200},
  [273] = {.lex_state = 200},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 165},
  [276] = {.lex_state = 56},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 9},
  [279] = {.lex_state = 165},
  [280] = {.lex_state = 56},
  [281] = {.lex_state = 51},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 165},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 165},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 165},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 165},
  [293] = {.lex_state = 165},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 165},
  [296] = {.lex_state = 165},
  [297] = {.lex_state = 165},
  [298] = {.lex_state = 57},
  [299] = {.lex_state = 165},
  [300] = {.lex_state = 165},
  [301] = {.lex_state = 165},
  [302] = {.lex_state = 165},
  [303] = {.lex_state = 165},
  [304] = {.lex_state = 165},
  [305] = {.lex_state = 57},
  [306] = {.lex_state = 165},
  [307] = {.lex_state = 57},
  [308] = {.lex_state = 165},
  [309] = {.lex_state = 57},
  [310] = {.lex_state = 165},
  [311] = {.lex_state = 57},
  [312] = {.lex_state = 57},
  [313] = {.lex_state = 57},
  [314] = {.lex_state = 57},
  [315] = {.lex_state = 57},
  [316] = {.lex_state = 57},
  [317] = {.lex_state = 57},
  [318] = {.lex_state = 57},
  [319] = {.lex_state = 57},
  [320] = {.lex_state = 57},
  [321] = {.lex_state = 49},
  [322] = {.lex_state = 49},
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
    [aux_sym__shell_fragment_token2] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym_heredoc_marker] = ACTIONS(1),
    [sym__heredoc_line] = ACTIONS(1),
    [sym_heredoc_end] = ACTIONS(1),
    [sym__heredoc_nl] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(271),
    [sym__instruction] = STATE(265),
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
    STATE(265), 20,
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
    STATE(265), 20,
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
    STATE(284), 20,
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
  [291] = 8,
    ACTIONS(110), 1,
      anon_sym_DASH_DASH,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    STATE(18), 1,
      aux_sym__shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(146), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(14), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(108), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [323] = 8,
    ACTIONS(110), 1,
      anon_sym_DASH_DASH,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    STATE(18), 1,
      aux_sym__shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(138), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(6), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(108), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [355] = 9,
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
    STATE(226), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [389] = 8,
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
    STATE(19), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(145), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [419] = 8,
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
    STATE(19), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(263), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [449] = 8,
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
    STATE(19), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(282), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [479] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_path_token1,
    ACTIONS(138), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(140), 1,
      anon_sym_DOLLAR,
    ACTIONS(142), 1,
      anon_sym_DASH_DASH,
    ACTIONS(144), 1,
      sym_heredoc_marker,
    STATE(68), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(250), 1,
      sym_path_with_heredoc,
    STATE(70), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [514] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_path_token1,
    ACTIONS(138), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(140), 1,
      anon_sym_DOLLAR,
    ACTIONS(142), 1,
      anon_sym_DASH_DASH,
    ACTIONS(144), 1,
      sym_heredoc_marker,
    STATE(71), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(250), 1,
      sym_path_with_heredoc,
    STATE(16), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [549] = 5,
    ACTIONS(148), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(151), 2,
      sym_heredoc_marker,
      anon_sym_LBRACK,
    STATE(14), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(146), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [572] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_path_token1,
    ACTIONS(138), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(140), 1,
      anon_sym_DOLLAR,
    ACTIONS(142), 1,
      anon_sym_DASH_DASH,
    ACTIONS(144), 1,
      sym_heredoc_marker,
    STATE(66), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(250), 1,
      sym_path_with_heredoc,
    STATE(12), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [607] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_path_token1,
    ACTIONS(138), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(140), 1,
      anon_sym_DOLLAR,
    ACTIONS(142), 1,
      anon_sym_DASH_DASH,
    ACTIONS(144), 1,
      sym_heredoc_marker,
    STATE(67), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(250), 1,
      sym_path_with_heredoc,
    STATE(70), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [642] = 6,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
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
    STATE(17), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [667] = 7,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    ACTIONS(167), 1,
      sym_required_line_continuation,
    STATE(20), 1,
      aux_sym__shell_fragment,
    STATE(152), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(163), 2,
      sym__heredoc_nl,
      anon_sym_LF,
    ACTIONS(165), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [694] = 6,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(173), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(171), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(17), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [719] = 6,
    ACTIONS(180), 1,
      sym_required_line_continuation,
    ACTIONS(182), 1,
      sym_heredoc_marker,
    STATE(20), 1,
      aux_sym__shell_fragment,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(175), 2,
      sym__heredoc_nl,
      anon_sym_LF,
    ACTIONS(177), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [743] = 6,
    ACTIONS(187), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(189), 1,
      anon_sym_DOLLAR2,
    ACTIONS(191), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(23), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [767] = 7,
    ACTIONS(195), 1,
      aux_sym__shell_fragment_token2,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_heredoc_marker,
    STATE(25), 1,
      aux_sym__shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(248), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(193), 3,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [793] = 6,
    ACTIONS(203), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(205), 1,
      anon_sym_DOLLAR2,
    ACTIONS(208), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(23), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [817] = 6,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    ACTIONS(213), 1,
      sym_required_line_continuation,
    STATE(20), 1,
      aux_sym__shell_fragment,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(211), 2,
      sym__heredoc_nl,
      anon_sym_LF,
    ACTIONS(165), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [841] = 7,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(199), 1,
      sym_heredoc_marker,
    ACTIONS(217), 1,
      sym_required_line_continuation,
    STATE(47), 1,
      aux_sym__shell_fragment,
    STATE(202), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(215), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [867] = 5,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(221), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(219), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [889] = 6,
    ACTIONS(189), 1,
      anon_sym_DOLLAR2,
    ACTIONS(227), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(229), 1,
      aux_sym_image_name_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(21), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [913] = 7,
    ACTIONS(195), 1,
      aux_sym__shell_fragment_token2,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_heredoc_marker,
    STATE(25), 1,
      aux_sym__shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(255), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(193), 3,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [939] = 5,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(30), 1,
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
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [961] = 5,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(237), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(235), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [983] = 6,
    ACTIONS(244), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(248), 1,
      aux_sym_image_tag_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(38), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1006] = 5,
    ACTIONS(252), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(254), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(48), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1027] = 7,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      aux_sym_label_pair_token1,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(33), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(254), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1052] = 6,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(271), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(46), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1075] = 6,
    ACTIONS(275), 1,
      anon_sym_DOLLAR2,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(280), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(35), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1098] = 6,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(288), 1,
      aux_sym_path_token3,
    ACTIONS(290), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(292), 2,
      sym__heredoc_nl,
      sym__non_newline_whitespace,
    STATE(52), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1121] = 6,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(296), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(35), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1144] = 6,
    ACTIONS(302), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(304), 1,
      anon_sym_DOLLAR2,
    ACTIONS(307), 1,
      aux_sym_image_tag_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(38), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [1167] = 6,
    ACTIONS(199), 1,
      sym_heredoc_marker,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(213), 1,
      sym_required_line_continuation,
    STATE(47), 1,
      aux_sym__shell_fragment,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(215), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [1190] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(310), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
    ACTIONS(312), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [1207] = 6,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(316), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(37), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1230] = 7,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(322), 1,
      aux_sym_label_pair_token1,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(33), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(254), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1255] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(235), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
    ACTIONS(237), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [1272] = 6,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(328), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(49), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1295] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(175), 3,
      sym_heredoc_marker,
      sym__heredoc_nl,
      anon_sym_LF,
    ACTIONS(180), 5,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
      sym_required_line_continuation,
  [1312] = 6,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(298), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(296), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(35), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1335] = 6,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      sym_required_line_continuation,
    ACTIONS(335), 1,
      sym_heredoc_marker,
    STATE(47), 1,
      aux_sym__shell_fragment,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(332), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [1358] = 5,
    ACTIONS(254), 1,
      anon_sym_DOLLAR2,
    ACTIONS(340), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(51), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1379] = 6,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      aux_sym__env_key_token1,
    ACTIONS(342), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(345), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(49), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1402] = 6,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(298), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(296), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(35), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1425] = 5,
    ACTIONS(352), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(51), 4,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__user_name_or_group_repeat1,
  [1446] = 6,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(360), 1,
      aux_sym_path_token3,
    ACTIONS(363), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(366), 2,
      sym__heredoc_nl,
      sym__non_newline_whitespace,
    STATE(52), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1469] = 6,
    ACTIONS(290), 1,
      anon_sym_DOLLAR2,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(370), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(372), 2,
      sym__heredoc_nl,
      sym__non_newline_whitespace,
    STATE(36), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1492] = 6,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(376), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
    STATE(50), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1515] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_path_token1,
    ACTIONS(383), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(386), 1,
      anon_sym_DOLLAR,
    ACTIONS(389), 1,
      sym_heredoc_marker,
    STATE(55), 1,
      aux_sym_add_instruction_repeat2,
    STATE(80), 1,
      sym_expansion,
    STATE(250), 1,
      sym_path_with_heredoc,
  [1543] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOLLAR,
    ACTIONS(394), 1,
      aux_sym_image_name_token1,
    ACTIONS(396), 1,
      anon_sym_DASH_DASH,
    STATE(27), 1,
      sym_expansion,
    STATE(92), 1,
      sym_image_name,
    STATE(114), 1,
      sym_param,
    STATE(242), 1,
      sym_image_spec,
  [1571] = 6,
    ACTIONS(398), 1,
      aux_sym_label_pair_token1,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(42), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(254), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1593] = 6,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(406), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(408), 1,
      anon_sym_DOLLAR2,
    ACTIONS(411), 1,
      aux_sym_image_digest_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(58), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1615] = 6,
    ACTIONS(254), 1,
      anon_sym_DOLLAR2,
    ACTIONS(414), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(62), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(174), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1637] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(420), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1653] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(175), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(180), 5,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
      sym_required_line_continuation,
  [1669] = 6,
    ACTIONS(422), 1,
      anon_sym_LF,
    ACTIONS(424), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    STATE(62), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(174), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [1691] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      aux_sym_path_token1,
    ACTIONS(432), 1,
      aux_sym_path_token2,
    ACTIONS(434), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    STATE(201), 1,
      sym_path,
    STATE(246), 1,
      sym_json_string_array,
  [1719] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(438), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1735] = 6,
    ACTIONS(440), 1,
      anon_sym_LF,
    ACTIONS(442), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(444), 1,
      anon_sym_DOLLAR2,
    ACTIONS(446), 1,
      aux_sym_image_digest_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(58), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1757] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_path_token1,
    ACTIONS(450), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(454), 1,
      sym_heredoc_marker,
    STATE(53), 1,
      sym_expansion,
    STATE(55), 1,
      aux_sym_add_instruction_repeat2,
    STATE(113), 1,
      sym_path_with_heredoc,
  [1785] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_path_token1,
    ACTIONS(450), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(454), 1,
      sym_heredoc_marker,
    STATE(53), 1,
      sym_expansion,
    STATE(55), 1,
      aux_sym_add_instruction_repeat2,
    STATE(108), 1,
      sym_path_with_heredoc,
  [1813] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_path_token1,
    ACTIONS(450), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(454), 1,
      sym_heredoc_marker,
    STATE(53), 1,
      sym_expansion,
    STATE(55), 1,
      aux_sym_add_instruction_repeat2,
    STATE(107), 1,
      sym_path_with_heredoc,
  [1841] = 6,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      aux_sym_path_token3,
    ACTIONS(460), 1,
      anon_sym_DOLLAR2,
    ACTIONS(462), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(74), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1863] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(464), 1,
      aux_sym_path_token1,
    ACTIONS(468), 1,
      anon_sym_DASH_DASH,
    STATE(70), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
    ACTIONS(466), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [1885] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_path_token1,
    ACTIONS(450), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(452), 1,
      anon_sym_DOLLAR,
    ACTIONS(454), 1,
      sym_heredoc_marker,
    STATE(53), 1,
      sym_expansion,
    STATE(55), 1,
      aux_sym_add_instruction_repeat2,
    STATE(110), 1,
      sym_path_with_heredoc,
  [1913] = 6,
    ACTIONS(460), 1,
      anon_sym_DOLLAR2,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      aux_sym_path_token3,
    ACTIONS(475), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(69), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1935] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(477), 4,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [1951] = 6,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(366), 1,
      sym__non_newline_whitespace,
    ACTIONS(481), 1,
      aux_sym_path_token3,
    ACTIONS(484), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(74), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1973] = 5,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(487), 1,
      aux_sym_path_token3,
    ACTIONS(489), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(79), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [1992] = 5,
    ACTIONS(114), 1,
      sym_heredoc_marker,
    ACTIONS(493), 1,
      aux_sym__shell_fragment_token2,
    STATE(24), 1,
      aux_sym__shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(491), 3,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [2011] = 5,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(500), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(77), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2030] = 6,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(503), 1,
      anon_sym_NONE,
    ACTIONS(505), 1,
      anon_sym_DASH_DASH,
    STATE(287), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(121), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2051] = 5,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      aux_sym_path_token3,
    ACTIONS(510), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(79), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2070] = 5,
    ACTIONS(372), 1,
      sym__non_newline_whitespace,
    ACTIONS(513), 1,
      aux_sym_path_token3,
    ACTIONS(515), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(96), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2089] = 5,
    ACTIONS(254), 1,
      anon_sym_DOLLAR2,
    ACTIONS(416), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    STATE(59), 1,
      aux_sym__immediate_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(174), 3,
      sym__immediate_user_name_or_group_fragment,
      sym__immediate_expansion,
      sym__imm_expansion,
  [2108] = 5,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(521), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(77), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2127] = 5,
    ACTIONS(199), 1,
      sym_heredoc_marker,
    ACTIONS(525), 1,
      aux_sym__shell_fragment_token2,
    STATE(39), 1,
      aux_sym__shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(523), 3,
      aux_sym_path_token2,
      aux_sym__shell_fragment_token3,
      aux_sym__shell_fragment_token4,
  [2146] = 5,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 1,
      anon_sym_DOLLAR2,
    ACTIONS(531), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(88), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2165] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(535), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(533), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2180] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(420), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(418), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2195] = 5,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(539), 1,
      anon_sym_DOLLAR,
    ACTIONS(541), 1,
      aux_sym_expose_port_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(93), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2214] = 5,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      anon_sym_DOLLAR2,
    ACTIONS(548), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(88), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2233] = 5,
    ACTIONS(366), 1,
      sym__non_newline_whitespace,
    ACTIONS(551), 1,
      aux_sym_path_token3,
    ACTIONS(554), 1,
      anon_sym_DOLLAR2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(89), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2252] = 5,
    ACTIONS(521), 1,
      anon_sym_DOLLAR2,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(82), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym__stopsignal_value_repeat1,
  [2271] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(436), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2286] = 7,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(565), 1,
      anon_sym_COLON,
    ACTIONS(567), 1,
      anon_sym_AT,
    STATE(148), 1,
      sym_image_tag,
    STATE(219), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [2309] = 5,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      anon_sym_DOLLAR,
    ACTIONS(574), 1,
      aux_sym_expose_port_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(93), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2328] = 5,
    ACTIONS(475), 1,
      anon_sym_LF,
    ACTIONS(489), 1,
      anon_sym_DOLLAR2,
    ACTIONS(577), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(75), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2347] = 5,
    ACTIONS(529), 1,
      anon_sym_DOLLAR2,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 1,
      aux_sym_image_alias_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(84), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_alias_repeat1,
  [2366] = 5,
    ACTIONS(292), 1,
      sym__non_newline_whitespace,
    ACTIONS(515), 1,
      anon_sym_DOLLAR2,
    ACTIONS(583), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(89), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_path_repeat1,
  [2385] = 5,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      sym_single_quoted_escape_sequence,
    STATE(126), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2403] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(420), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [2417] = 5,
    ACTIONS(591), 1,
      aux_sym__env_key_token1,
    STATE(217), 1,
      sym__env_key,
    STATE(253), 1,
      sym__spaced_env_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(125), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2435] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(593), 1,
      aux_sym_path_token1,
    ACTIONS(595), 1,
      aux_sym_path_token2,
    ACTIONS(597), 1,
      anon_sym_DOLLAR,
    STATE(94), 1,
      sym_expansion,
    STATE(278), 1,
      sym_path,
  [2457] = 5,
    ACTIONS(601), 1,
      anon_sym_SQUOTE,
    ACTIONS(603), 1,
      sym_single_quoted_escape_sequence,
    STATE(112), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2475] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(438), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [2489] = 5,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      sym_single_quoted_escape_sequence,
    STATE(101), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2507] = 5,
    ACTIONS(603), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(611), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2525] = 5,
    ACTIONS(613), 1,
      anon_sym_LF,
    ACTIONS(615), 1,
      aux_sym__env_key_token1,
    STATE(264), 1,
      sym__env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(105), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2543] = 5,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      sym_single_quoted_escape_sequence,
    STATE(104), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2561] = 5,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(626), 1,
      sym__non_newline_whitespace,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(139), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2579] = 5,
    ACTIONS(626), 1,
      sym__non_newline_whitespace,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(140), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2597] = 4,
    ACTIONS(632), 1,
      anon_sym_DOLLAR,
    ACTIONS(634), 1,
      aux_sym_expose_port_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(87), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2613] = 5,
    ACTIONS(626), 1,
      sym__non_newline_whitespace,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(151), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2631] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(420), 3,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2645] = 5,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      sym_single_quoted_escape_sequence,
    STATE(112), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(638), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2663] = 5,
    ACTIONS(626), 1,
      sym__non_newline_whitespace,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(646), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(153), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [2681] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOLLAR,
    ACTIONS(394), 1,
      aux_sym_image_name_token1,
    STATE(27), 1,
      sym_expansion,
    STATE(92), 1,
      sym_image_name,
    STATE(220), 1,
      sym_image_spec,
  [2703] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_path_token1,
    ACTIONS(432), 1,
      aux_sym_path_token2,
    ACTIONS(434), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    STATE(223), 1,
      sym_path,
  [2725] = 4,
    ACTIONS(444), 1,
      anon_sym_DOLLAR2,
    ACTIONS(648), 1,
      aux_sym_image_digest_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(65), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2741] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DOLLAR2,
    ACTIONS(650), 1,
      aux_sym_image_tag_token1,
    STATE(31), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2759] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(436), 3,
      sym__heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2773] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_path_token1,
    ACTIONS(479), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [2789] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(420), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(418), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2803] = 5,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(505), 1,
      anon_sym_DASH_DASH,
    STATE(285), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(158), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2821] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(438), 3,
      aux_sym__env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2835] = 4,
    ACTIONS(652), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(656), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2851] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(418), 3,
      sym__heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2865] = 5,
    ACTIONS(658), 1,
      anon_sym_LF,
    ACTIONS(660), 1,
      aux_sym__env_key_token1,
    STATE(264), 1,
      sym__env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(105), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2883] = 5,
    ACTIONS(603), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_BSLASH,
      aux_sym_single_quoted_string_token1,
  [2901] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(533), 3,
      sym__heredoc_nl,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [2915] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(438), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2929] = 3,
    ACTIONS(438), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2942] = 3,
    ACTIONS(420), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [2955] = 5,
    ACTIONS(664), 1,
      anon_sym_DOLLAR,
    ACTIONS(666), 1,
      aux_sym_image_alias_token1,
    STATE(95), 1,
      sym_expansion,
    STATE(294), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2972] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2983] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2994] = 5,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      aux_sym_json_string_token1,
    ACTIONS(672), 1,
      sym_json_escape_sequence,
    STATE(162), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3011] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(533), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3022] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(420), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3035] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(438), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3048] = 4,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(159), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3063] = 4,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(676), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(141), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3078] = 4,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(141), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3093] = 4,
    ACTIONS(680), 1,
      anon_sym_LF,
    ACTIONS(682), 1,
      sym__heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(141), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3108] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(535), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3121] = 4,
    ACTIONS(685), 1,
      sym_required_line_continuation,
    STATE(143), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(211), 2,
      sym__heredoc_nl,
      anon_sym_LF,
  [3136] = 4,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(141), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3151] = 3,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(692), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3164] = 4,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(144), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3179] = 5,
    ACTIONS(664), 1,
      anon_sym_DOLLAR,
    ACTIONS(666), 1,
      aux_sym_image_alias_token1,
    STATE(95), 1,
      sym_expansion,
    STATE(257), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3196] = 5,
    ACTIONS(567), 1,
      anon_sym_AT,
    ACTIONS(696), 1,
      anon_sym_LF,
    ACTIONS(698), 1,
      aux_sym_from_instruction_token2,
    STATE(245), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3213] = 3,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(702), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3226] = 3,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(706), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3239] = 4,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(141), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3254] = 4,
    ACTIONS(167), 1,
      sym_required_line_continuation,
    STATE(143), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(710), 2,
      sym__heredoc_nl,
      anon_sym_LF,
  [3269] = 4,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(712), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(141), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3284] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(714), 1,
      aux_sym_path_token1,
    ACTIONS(716), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [3299] = 5,
    ACTIONS(718), 1,
      anon_sym_DQUOTE,
    ACTIONS(720), 1,
      aux_sym_json_string_token1,
    ACTIONS(722), 1,
      sym_json_escape_sequence,
    STATE(134), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3316] = 3,
    ACTIONS(724), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(726), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3329] = 5,
    ACTIONS(728), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(730), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_expansion,
    STATE(247), 1,
      sym__stopsignal_value,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3346] = 4,
    ACTIONS(466), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(732), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(158), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [3361] = 4,
    ACTIONS(628), 1,
      sym__heredoc_nl,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(141), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3376] = 5,
    ACTIONS(735), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(737), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      sym_expansion,
    STATE(240), 1,
      sym__user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3393] = 3,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(741), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3406] = 5,
    ACTIONS(743), 1,
      anon_sym_DQUOTE,
    ACTIONS(745), 1,
      aux_sym_json_string_token1,
    ACTIONS(748), 1,
      sym_json_escape_sequence,
    STATE(162), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3423] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(533), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3433] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3443] = 4,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
    ACTIONS(753), 1,
      sym_variable,
    STATE(195), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3457] = 4,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
    ACTIONS(757), 1,
      sym_variable,
    STATE(118), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3471] = 4,
    ACTIONS(759), 1,
      anon_sym_LBRACE,
    ACTIONS(761), 1,
      sym_variable,
    STATE(122), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3485] = 4,
    ACTIONS(763), 1,
      anon_sym_LF,
    ACTIONS(765), 1,
      sym__non_newline_whitespace,
    STATE(168), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3499] = 4,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(770), 1,
      sym_variable,
    STATE(64), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3513] = 4,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
    ACTIONS(772), 1,
      sym_variable,
    STATE(200), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3527] = 4,
    ACTIONS(774), 1,
      anon_sym_LBRACE,
    ACTIONS(776), 1,
      sym_variable,
    STATE(129), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3541] = 4,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      sym_variable,
    STATE(127), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3555] = 4,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      sym_variable,
    STATE(128), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3569] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(784), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3579] = 4,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(788), 1,
      sym_variable,
    STATE(163), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3593] = 4,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    ACTIONS(790), 1,
      sym_variable,
    STATE(204), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3607] = 4,
    ACTIONS(792), 1,
      anon_sym_COMMA2,
    ACTIONS(795), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3621] = 4,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    ACTIONS(799), 1,
      sym_variable,
    STATE(209), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3635] = 4,
    ACTIONS(797), 1,
      anon_sym_LBRACE,
    ACTIONS(801), 1,
      sym_variable,
    STATE(207), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3649] = 4,
    ACTIONS(803), 1,
      sym__heredoc_line,
    ACTIONS(806), 1,
      sym_heredoc_end,
    STATE(180), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3663] = 4,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      sym_variable,
    STATE(135), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3677] = 4,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    ACTIONS(812), 1,
      sym_variable,
    STATE(133), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3691] = 4,
    ACTIONS(814), 1,
      sym__heredoc_line,
    ACTIONS(816), 1,
      sym_heredoc_end,
    STATE(180), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3705] = 4,
    ACTIONS(818), 1,
      anon_sym_LBRACE,
    ACTIONS(820), 1,
      sym_variable,
    STATE(142), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3719] = 4,
    ACTIONS(818), 1,
      anon_sym_LBRACE,
    ACTIONS(822), 1,
      sym_variable,
    STATE(137), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3733] = 4,
    ACTIONS(824), 1,
      anon_sym_LBRACE,
    ACTIONS(826), 1,
      sym_variable,
    STATE(214), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3747] = 4,
    ACTIONS(824), 1,
      anon_sym_LBRACE,
    ACTIONS(828), 1,
      sym_variable,
    STATE(213), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3761] = 4,
    ACTIONS(830), 1,
      anon_sym_COMMA2,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3775] = 4,
    ACTIONS(830), 1,
      anon_sym_COMMA2,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3789] = 4,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(838), 1,
      sym_variable,
    STATE(85), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3803] = 4,
    ACTIONS(830), 1,
      anon_sym_COMMA2,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3817] = 4,
    ACTIONS(842), 1,
      anon_sym_RBRACK,
    ACTIONS(844), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3831] = 3,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(372), 2,
      sym__heredoc_nl,
      sym__non_newline_whitespace,
  [3843] = 4,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      sym_variable,
    STATE(196), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3857] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3867] = 3,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3879] = 4,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    ACTIONS(852), 1,
      sym_variable,
    STATE(102), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3893] = 4,
    ACTIONS(844), 1,
      anon_sym_DQUOTE,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
    STATE(210), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [3907] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3917] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(533), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3927] = 4,
    ACTIONS(856), 1,
      anon_sym_LF,
    ACTIONS(858), 1,
      sym__non_newline_whitespace,
    STATE(203), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3941] = 4,
    ACTIONS(217), 1,
      sym_required_line_continuation,
    ACTIONS(710), 1,
      anon_sym_LF,
    STATE(211), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3955] = 4,
    ACTIONS(858), 1,
      sym__non_newline_whitespace,
    ACTIONS(860), 1,
      anon_sym_LF,
    STATE(168), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3969] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3979] = 3,
    ACTIONS(862), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(864), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3991] = 3,
    ACTIONS(420), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4003] = 3,
    ACTIONS(438), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4015] = 4,
    ACTIONS(814), 1,
      sym__heredoc_line,
    ACTIONS(866), 1,
      sym_heredoc_end,
    STATE(183), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4029] = 3,
    ACTIONS(535), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4041] = 4,
    ACTIONS(830), 1,
      anon_sym_COMMA2,
    ACTIONS(868), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4055] = 4,
    ACTIONS(211), 1,
      anon_sym_LF,
    ACTIONS(870), 1,
      sym_required_line_continuation,
    STATE(211), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4069] = 3,
    ACTIONS(420), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4081] = 3,
    ACTIONS(438), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4093] = 3,
    ACTIONS(535), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4105] = 4,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    ACTIONS(873), 1,
      sym_variable,
    STATE(91), 1,
      sym__expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4119] = 3,
    ACTIONS(418), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4131] = 3,
    ACTIONS(875), 1,
      anon_sym_EQ,
    ACTIONS(877), 1,
      aux_sym__spaced_env_pair_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4142] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_image_name_token1,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
  [4155] = 3,
    ACTIONS(879), 1,
      anon_sym_LF,
    ACTIONS(881), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4166] = 3,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(885), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4177] = 3,
    ACTIONS(724), 1,
      anon_sym_LF,
    ACTIONS(726), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4188] = 3,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(741), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4199] = 3,
    ACTIONS(763), 1,
      anon_sym_LF,
    ACTIONS(887), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4210] = 3,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4221] = 3,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(702), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4232] = 3,
    ACTIONS(889), 1,
      anon_sym_LF,
    ACTIONS(891), 1,
      aux_sym__env_key_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4243] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(893), 2,
      sym__heredoc_nl,
      anon_sym_LF,
  [4252] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(895), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4261] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(795), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4270] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(897), 2,
      sym__heredoc_nl,
      anon_sym_LF,
  [4279] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(806), 2,
      sym__heredoc_line,
      sym_heredoc_end,
  [4288] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(899), 2,
      sym__heredoc_nl,
      anon_sym_LF,
  [4297] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(479), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4306] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(901), 2,
      sym__heredoc_nl,
      anon_sym_LF,
  [4315] = 3,
    ACTIONS(903), 1,
      anon_sym_LF,
    ACTIONS(905), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4326] = 3,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    STATE(288), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4337] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(907), 1,
      aux_sym_mount_param_param_token1,
    STATE(43), 1,
      sym_mount_param_param,
  [4350] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(909), 2,
      sym__heredoc_nl,
      anon_sym_LF,
  [4359] = 3,
    ACTIONS(844), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4370] = 3,
    ACTIONS(911), 1,
      anon_sym_LF,
    ACTIONS(913), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4381] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(915), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4390] = 3,
    ACTIONS(917), 1,
      anon_sym_LF,
    ACTIONS(919), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4401] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(907), 1,
      aux_sym_mount_param_param_token1,
    STATE(26), 1,
      sym_mount_param_param,
  [4414] = 3,
    ACTIONS(921), 1,
      aux_sym_param_token1,
    ACTIONS(923), 1,
      anon_sym_mount,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4425] = 3,
    ACTIONS(925), 1,
      anon_sym_LF,
    ACTIONS(927), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4436] = 2,
    ACTIONS(929), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4444] = 2,
    ACTIONS(931), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4452] = 2,
    ACTIONS(933), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4460] = 2,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4468] = 2,
    ACTIONS(626), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4476] = 2,
    ACTIONS(372), 1,
      sym__non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4484] = 2,
    ACTIONS(893), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4492] = 2,
    ACTIONS(937), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4500] = 2,
    ACTIONS(939), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4508] = 2,
    ACTIONS(941), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4516] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_param_token2,
  [4526] = 2,
    ACTIONS(945), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4534] = 2,
    ACTIONS(947), 1,
      aux_sym__shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4542] = 2,
    ACTIONS(949), 1,
      aux_sym__shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4550] = 2,
    ACTIONS(897), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4558] = 2,
    ACTIONS(951), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4566] = 2,
    ACTIONS(953), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4574] = 2,
    ACTIONS(955), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4582] = 2,
    ACTIONS(875), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4590] = 2,
    ACTIONS(957), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4598] = 2,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(961), 1,
      aux_sym_param_token2,
  [4616] = 2,
    ACTIONS(739), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4624] = 2,
    ACTIONS(724), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4632] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(963), 1,
      aux_sym_mount_param_param_token1,
  [4642] = 2,
    ACTIONS(965), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4650] = 2,
    ACTIONS(967), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4658] = 2,
    ACTIONS(969), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4666] = 2,
    ACTIONS(909), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4674] = 2,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4682] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(973), 1,
      aux_sym_param_token2,
  [4692] = 2,
    ACTIONS(975), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4700] = 2,
    ACTIONS(977), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4708] = 2,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4716] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(981), 1,
      aux_sym_param_token2,
  [4726] = 2,
    ACTIONS(983), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4734] = 2,
    ACTIONS(985), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4742] = 2,
    ACTIONS(987), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4750] = 2,
    ACTIONS(989), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4758] = 2,
    ACTIONS(991), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4766] = 2,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4774] = 2,
    ACTIONS(995), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4782] = 2,
    ACTIONS(997), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4790] = 2,
    ACTIONS(999), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4798] = 2,
    ACTIONS(1001), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4806] = 2,
    ACTIONS(1003), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4814] = 2,
    ACTIONS(1005), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4822] = 2,
    ACTIONS(1007), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4830] = 2,
    ACTIONS(1009), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4838] = 2,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4846] = 2,
    ACTIONS(704), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4854] = 2,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4862] = 2,
    ACTIONS(1015), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4870] = 2,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4878] = 2,
    ACTIONS(1019), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4886] = 2,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4894] = 2,
    ACTIONS(700), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4902] = 2,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4910] = 2,
    ACTIONS(1025), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4918] = 2,
    ACTIONS(1027), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4926] = 2,
    ACTIONS(1029), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4934] = 2,
    ACTIONS(1031), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4942] = 2,
    ACTIONS(1033), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4950] = 2,
    ACTIONS(1035), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4958] = 2,
    ACTIONS(1037), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4966] = 2,
    ACTIONS(1039), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4974] = 2,
    ACTIONS(1041), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4982] = 2,
    ACTIONS(1043), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4990] = 2,
    ACTIONS(1045), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4998] = 2,
    ACTIONS(1047), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5006] = 2,
    ACTIONS(1049), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5014] = 2,
    ACTIONS(1051), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5022] = 2,
    ACTIONS(1053), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5030] = 2,
    ACTIONS(1055), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5038] = 2,
    ACTIONS(1057), 1,
      aux_sym__expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5046] = 2,
    ACTIONS(1059), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5054] = 2,
    ACTIONS(1061), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 264,
  [SMALL_STATE(6)] = 291,
  [SMALL_STATE(7)] = 323,
  [SMALL_STATE(8)] = 355,
  [SMALL_STATE(9)] = 389,
  [SMALL_STATE(10)] = 419,
  [SMALL_STATE(11)] = 449,
  [SMALL_STATE(12)] = 479,
  [SMALL_STATE(13)] = 514,
  [SMALL_STATE(14)] = 549,
  [SMALL_STATE(15)] = 572,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 642,
  [SMALL_STATE(18)] = 667,
  [SMALL_STATE(19)] = 694,
  [SMALL_STATE(20)] = 719,
  [SMALL_STATE(21)] = 743,
  [SMALL_STATE(22)] = 767,
  [SMALL_STATE(23)] = 793,
  [SMALL_STATE(24)] = 817,
  [SMALL_STATE(25)] = 841,
  [SMALL_STATE(26)] = 867,
  [SMALL_STATE(27)] = 889,
  [SMALL_STATE(28)] = 913,
  [SMALL_STATE(29)] = 939,
  [SMALL_STATE(30)] = 961,
  [SMALL_STATE(31)] = 983,
  [SMALL_STATE(32)] = 1006,
  [SMALL_STATE(33)] = 1027,
  [SMALL_STATE(34)] = 1052,
  [SMALL_STATE(35)] = 1075,
  [SMALL_STATE(36)] = 1098,
  [SMALL_STATE(37)] = 1121,
  [SMALL_STATE(38)] = 1144,
  [SMALL_STATE(39)] = 1167,
  [SMALL_STATE(40)] = 1190,
  [SMALL_STATE(41)] = 1207,
  [SMALL_STATE(42)] = 1230,
  [SMALL_STATE(43)] = 1255,
  [SMALL_STATE(44)] = 1272,
  [SMALL_STATE(45)] = 1295,
  [SMALL_STATE(46)] = 1312,
  [SMALL_STATE(47)] = 1335,
  [SMALL_STATE(48)] = 1358,
  [SMALL_STATE(49)] = 1379,
  [SMALL_STATE(50)] = 1402,
  [SMALL_STATE(51)] = 1425,
  [SMALL_STATE(52)] = 1446,
  [SMALL_STATE(53)] = 1469,
  [SMALL_STATE(54)] = 1492,
  [SMALL_STATE(55)] = 1515,
  [SMALL_STATE(56)] = 1543,
  [SMALL_STATE(57)] = 1571,
  [SMALL_STATE(58)] = 1593,
  [SMALL_STATE(59)] = 1615,
  [SMALL_STATE(60)] = 1637,
  [SMALL_STATE(61)] = 1653,
  [SMALL_STATE(62)] = 1669,
  [SMALL_STATE(63)] = 1691,
  [SMALL_STATE(64)] = 1719,
  [SMALL_STATE(65)] = 1735,
  [SMALL_STATE(66)] = 1757,
  [SMALL_STATE(67)] = 1785,
  [SMALL_STATE(68)] = 1813,
  [SMALL_STATE(69)] = 1841,
  [SMALL_STATE(70)] = 1863,
  [SMALL_STATE(71)] = 1885,
  [SMALL_STATE(72)] = 1913,
  [SMALL_STATE(73)] = 1935,
  [SMALL_STATE(74)] = 1951,
  [SMALL_STATE(75)] = 1973,
  [SMALL_STATE(76)] = 1992,
  [SMALL_STATE(77)] = 2011,
  [SMALL_STATE(78)] = 2030,
  [SMALL_STATE(79)] = 2051,
  [SMALL_STATE(80)] = 2070,
  [SMALL_STATE(81)] = 2089,
  [SMALL_STATE(82)] = 2108,
  [SMALL_STATE(83)] = 2127,
  [SMALL_STATE(84)] = 2146,
  [SMALL_STATE(85)] = 2165,
  [SMALL_STATE(86)] = 2180,
  [SMALL_STATE(87)] = 2195,
  [SMALL_STATE(88)] = 2214,
  [SMALL_STATE(89)] = 2233,
  [SMALL_STATE(90)] = 2252,
  [SMALL_STATE(91)] = 2271,
  [SMALL_STATE(92)] = 2286,
  [SMALL_STATE(93)] = 2309,
  [SMALL_STATE(94)] = 2328,
  [SMALL_STATE(95)] = 2347,
  [SMALL_STATE(96)] = 2366,
  [SMALL_STATE(97)] = 2385,
  [SMALL_STATE(98)] = 2403,
  [SMALL_STATE(99)] = 2417,
  [SMALL_STATE(100)] = 2435,
  [SMALL_STATE(101)] = 2457,
  [SMALL_STATE(102)] = 2475,
  [SMALL_STATE(103)] = 2489,
  [SMALL_STATE(104)] = 2507,
  [SMALL_STATE(105)] = 2525,
  [SMALL_STATE(106)] = 2543,
  [SMALL_STATE(107)] = 2561,
  [SMALL_STATE(108)] = 2579,
  [SMALL_STATE(109)] = 2597,
  [SMALL_STATE(110)] = 2613,
  [SMALL_STATE(111)] = 2631,
  [SMALL_STATE(112)] = 2645,
  [SMALL_STATE(113)] = 2663,
  [SMALL_STATE(114)] = 2681,
  [SMALL_STATE(115)] = 2703,
  [SMALL_STATE(116)] = 2725,
  [SMALL_STATE(117)] = 2741,
  [SMALL_STATE(118)] = 2759,
  [SMALL_STATE(119)] = 2773,
  [SMALL_STATE(120)] = 2789,
  [SMALL_STATE(121)] = 2803,
  [SMALL_STATE(122)] = 2821,
  [SMALL_STATE(123)] = 2835,
  [SMALL_STATE(124)] = 2851,
  [SMALL_STATE(125)] = 2865,
  [SMALL_STATE(126)] = 2883,
  [SMALL_STATE(127)] = 2901,
  [SMALL_STATE(128)] = 2915,
  [SMALL_STATE(129)] = 2929,
  [SMALL_STATE(130)] = 2942,
  [SMALL_STATE(131)] = 2955,
  [SMALL_STATE(132)] = 2972,
  [SMALL_STATE(133)] = 2983,
  [SMALL_STATE(134)] = 2994,
  [SMALL_STATE(135)] = 3011,
  [SMALL_STATE(136)] = 3022,
  [SMALL_STATE(137)] = 3035,
  [SMALL_STATE(138)] = 3048,
  [SMALL_STATE(139)] = 3063,
  [SMALL_STATE(140)] = 3078,
  [SMALL_STATE(141)] = 3093,
  [SMALL_STATE(142)] = 3108,
  [SMALL_STATE(143)] = 3121,
  [SMALL_STATE(144)] = 3136,
  [SMALL_STATE(145)] = 3151,
  [SMALL_STATE(146)] = 3164,
  [SMALL_STATE(147)] = 3179,
  [SMALL_STATE(148)] = 3196,
  [SMALL_STATE(149)] = 3213,
  [SMALL_STATE(150)] = 3226,
  [SMALL_STATE(151)] = 3239,
  [SMALL_STATE(152)] = 3254,
  [SMALL_STATE(153)] = 3269,
  [SMALL_STATE(154)] = 3284,
  [SMALL_STATE(155)] = 3299,
  [SMALL_STATE(156)] = 3316,
  [SMALL_STATE(157)] = 3329,
  [SMALL_STATE(158)] = 3346,
  [SMALL_STATE(159)] = 3361,
  [SMALL_STATE(160)] = 3376,
  [SMALL_STATE(161)] = 3393,
  [SMALL_STATE(162)] = 3406,
  [SMALL_STATE(163)] = 3423,
  [SMALL_STATE(164)] = 3433,
  [SMALL_STATE(165)] = 3443,
  [SMALL_STATE(166)] = 3457,
  [SMALL_STATE(167)] = 3471,
  [SMALL_STATE(168)] = 3485,
  [SMALL_STATE(169)] = 3499,
  [SMALL_STATE(170)] = 3513,
  [SMALL_STATE(171)] = 3527,
  [SMALL_STATE(172)] = 3541,
  [SMALL_STATE(173)] = 3555,
  [SMALL_STATE(174)] = 3569,
  [SMALL_STATE(175)] = 3579,
  [SMALL_STATE(176)] = 3593,
  [SMALL_STATE(177)] = 3607,
  [SMALL_STATE(178)] = 3621,
  [SMALL_STATE(179)] = 3635,
  [SMALL_STATE(180)] = 3649,
  [SMALL_STATE(181)] = 3663,
  [SMALL_STATE(182)] = 3677,
  [SMALL_STATE(183)] = 3691,
  [SMALL_STATE(184)] = 3705,
  [SMALL_STATE(185)] = 3719,
  [SMALL_STATE(186)] = 3733,
  [SMALL_STATE(187)] = 3747,
  [SMALL_STATE(188)] = 3761,
  [SMALL_STATE(189)] = 3775,
  [SMALL_STATE(190)] = 3789,
  [SMALL_STATE(191)] = 3803,
  [SMALL_STATE(192)] = 3817,
  [SMALL_STATE(193)] = 3831,
  [SMALL_STATE(194)] = 3843,
  [SMALL_STATE(195)] = 3857,
  [SMALL_STATE(196)] = 3867,
  [SMALL_STATE(197)] = 3879,
  [SMALL_STATE(198)] = 3893,
  [SMALL_STATE(199)] = 3907,
  [SMALL_STATE(200)] = 3917,
  [SMALL_STATE(201)] = 3927,
  [SMALL_STATE(202)] = 3941,
  [SMALL_STATE(203)] = 3955,
  [SMALL_STATE(204)] = 3969,
  [SMALL_STATE(205)] = 3979,
  [SMALL_STATE(206)] = 3991,
  [SMALL_STATE(207)] = 4003,
  [SMALL_STATE(208)] = 4015,
  [SMALL_STATE(209)] = 4029,
  [SMALL_STATE(210)] = 4041,
  [SMALL_STATE(211)] = 4055,
  [SMALL_STATE(212)] = 4069,
  [SMALL_STATE(213)] = 4081,
  [SMALL_STATE(214)] = 4093,
  [SMALL_STATE(215)] = 4105,
  [SMALL_STATE(216)] = 4119,
  [SMALL_STATE(217)] = 4131,
  [SMALL_STATE(218)] = 4142,
  [SMALL_STATE(219)] = 4155,
  [SMALL_STATE(220)] = 4166,
  [SMALL_STATE(221)] = 4177,
  [SMALL_STATE(222)] = 4188,
  [SMALL_STATE(223)] = 4199,
  [SMALL_STATE(224)] = 4210,
  [SMALL_STATE(225)] = 4221,
  [SMALL_STATE(226)] = 4232,
  [SMALL_STATE(227)] = 4243,
  [SMALL_STATE(228)] = 4252,
  [SMALL_STATE(229)] = 4261,
  [SMALL_STATE(230)] = 4270,
  [SMALL_STATE(231)] = 4279,
  [SMALL_STATE(232)] = 4288,
  [SMALL_STATE(233)] = 4297,
  [SMALL_STATE(234)] = 4306,
  [SMALL_STATE(235)] = 4315,
  [SMALL_STATE(236)] = 4326,
  [SMALL_STATE(237)] = 4337,
  [SMALL_STATE(238)] = 4350,
  [SMALL_STATE(239)] = 4359,
  [SMALL_STATE(240)] = 4370,
  [SMALL_STATE(241)] = 4381,
  [SMALL_STATE(242)] = 4390,
  [SMALL_STATE(243)] = 4401,
  [SMALL_STATE(244)] = 4414,
  [SMALL_STATE(245)] = 4425,
  [SMALL_STATE(246)] = 4436,
  [SMALL_STATE(247)] = 4444,
  [SMALL_STATE(248)] = 4452,
  [SMALL_STATE(249)] = 4460,
  [SMALL_STATE(250)] = 4468,
  [SMALL_STATE(251)] = 4476,
  [SMALL_STATE(252)] = 4484,
  [SMALL_STATE(253)] = 4492,
  [SMALL_STATE(254)] = 4500,
  [SMALL_STATE(255)] = 4508,
  [SMALL_STATE(256)] = 4516,
  [SMALL_STATE(257)] = 4526,
  [SMALL_STATE(258)] = 4534,
  [SMALL_STATE(259)] = 4542,
  [SMALL_STATE(260)] = 4550,
  [SMALL_STATE(261)] = 4558,
  [SMALL_STATE(262)] = 4566,
  [SMALL_STATE(263)] = 4574,
  [SMALL_STATE(264)] = 4582,
  [SMALL_STATE(265)] = 4590,
  [SMALL_STATE(266)] = 4598,
  [SMALL_STATE(267)] = 4606,
  [SMALL_STATE(268)] = 4616,
  [SMALL_STATE(269)] = 4624,
  [SMALL_STATE(270)] = 4632,
  [SMALL_STATE(271)] = 4642,
  [SMALL_STATE(272)] = 4650,
  [SMALL_STATE(273)] = 4658,
  [SMALL_STATE(274)] = 4666,
  [SMALL_STATE(275)] = 4674,
  [SMALL_STATE(276)] = 4682,
  [SMALL_STATE(277)] = 4692,
  [SMALL_STATE(278)] = 4700,
  [SMALL_STATE(279)] = 4708,
  [SMALL_STATE(280)] = 4716,
  [SMALL_STATE(281)] = 4726,
  [SMALL_STATE(282)] = 4734,
  [SMALL_STATE(283)] = 4742,
  [SMALL_STATE(284)] = 4750,
  [SMALL_STATE(285)] = 4758,
  [SMALL_STATE(286)] = 4766,
  [SMALL_STATE(287)] = 4774,
  [SMALL_STATE(288)] = 4782,
  [SMALL_STATE(289)] = 4790,
  [SMALL_STATE(290)] = 4798,
  [SMALL_STATE(291)] = 4806,
  [SMALL_STATE(292)] = 4814,
  [SMALL_STATE(293)] = 4822,
  [SMALL_STATE(294)] = 4830,
  [SMALL_STATE(295)] = 4838,
  [SMALL_STATE(296)] = 4846,
  [SMALL_STATE(297)] = 4854,
  [SMALL_STATE(298)] = 4862,
  [SMALL_STATE(299)] = 4870,
  [SMALL_STATE(300)] = 4878,
  [SMALL_STATE(301)] = 4886,
  [SMALL_STATE(302)] = 4894,
  [SMALL_STATE(303)] = 4902,
  [SMALL_STATE(304)] = 4910,
  [SMALL_STATE(305)] = 4918,
  [SMALL_STATE(306)] = 4926,
  [SMALL_STATE(307)] = 4934,
  [SMALL_STATE(308)] = 4942,
  [SMALL_STATE(309)] = 4950,
  [SMALL_STATE(310)] = 4958,
  [SMALL_STATE(311)] = 4966,
  [SMALL_STATE(312)] = 4974,
  [SMALL_STATE(313)] = 4982,
  [SMALL_STATE(314)] = 4990,
  [SMALL_STATE(315)] = 4998,
  [SMALL_STATE(316)] = 5006,
  [SMALL_STATE(317)] = 5014,
  [SMALL_STATE(318)] = 5022,
  [SMALL_STATE(319)] = 5030,
  [SMALL_STATE(320)] = 5038,
  [SMALL_STATE(321)] = 5046,
  [SMALL_STATE(322)] = 5054,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, 0, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__shell_fragment, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_fragment, 2, 0, 0), SHIFT_REPEAT(20),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__shell_fragment, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shell_fragment, 2, 0, 0), SHIFT_REPEAT(258),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, 0, 13),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, 0, 13),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, 0, 15),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, 0, 15),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__shell_fragment, 2, 0, 0), SHIFT_REPEAT(47),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__shell_fragment, 2, 0, 0), SHIFT_REPEAT(259),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(186),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(251),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, 0, 11),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0), SHIFT_REPEAT(174),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2, 0, 0), SHIFT_REPEAT(182),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, 0, 13),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 13),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, 0, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, 0, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, 0, 0),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, 0, 0),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(208),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, 0, 9),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, 0, 9),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 5),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, 0, 0),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [870] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, 0, 6),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, 0, 6),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, 0, 10),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, 0, 10),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 3, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, 0, 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3, 0, 0),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, 0, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, 0, 0),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, 0, 8),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, 0, 8),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, 0, 0),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, 0, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, 0, 0),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, 0, 7),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, 0, 10),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [965] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, 0, 12),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, 0, 0),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, 0, 14),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_heredoc_marker = 0,
  ts_external_token__heredoc_line = 1,
  ts_external_token_heredoc_end = 2,
  ts_external_token__heredoc_nl = 3,
  ts_external_token_error_sentinel = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc_marker] = sym_heredoc_marker,
  [ts_external_token__heredoc_line] = sym__heredoc_line,
  [ts_external_token_heredoc_end] = sym_heredoc_end,
  [ts_external_token__heredoc_nl] = sym__heredoc_nl,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token__heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
    [ts_external_token__heredoc_nl] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_heredoc_marker] = true,
  },
  [3] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token__heredoc_nl] = true,
  },
  [4] = {
    [ts_external_token__heredoc_nl] = true,
  },
  [5] = {
    [ts_external_token__heredoc_line] = true,
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
