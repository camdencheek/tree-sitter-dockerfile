#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 354
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 4
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
  aux_sym_path_token3 = 33,
  anon_sym_DOLLAR = 34,
  anon_sym_DOLLAR2 = 35,
  anon_sym_LBRACE = 36,
  aux_sym__expansion_body_token1 = 37,
  anon_sym_RBRACE = 38,
  sym_variable = 39,
  aux_sym__spaced_env_pair_token1 = 40,
  aux_sym__env_key_token1 = 41,
  aux_sym_expose_port_token1 = 42,
  anon_sym_SLASHtcp = 43,
  anon_sym_SLASHudp = 44,
  aux_sym_label_pair_token1 = 45,
  aux_sym_image_name_token1 = 46,
  aux_sym_image_name_token2 = 47,
  aux_sym_image_tag_token1 = 48,
  anon_sym_AT = 49,
  aux_sym_image_digest_token1 = 50,
  anon_sym_DASH_DASH = 51,
  aux_sym_param_token1 = 52,
  aux_sym_param_token2 = 53,
  anon_sym_mount = 54,
  anon_sym_COMMA = 55,
  aux_sym_mount_param_param_token1 = 56,
  aux_sym_image_alias_token1 = 57,
  aux_sym_image_alias_token2 = 58,
  aux_sym_shell_fragment_token1 = 59,
  aux_sym_shell_fragment_token2 = 60,
  aux_sym_shell_fragment_token3 = 61,
  aux_sym_shell_fragment_token4 = 62,
  anon_sym_BSLASH_LF = 63,
  anon_sym_POUND = 64,
  anon_sym_LBRACK = 65,
  anon_sym_COMMA2 = 66,
  anon_sym_RBRACK = 67,
  anon_sym_DQUOTE = 68,
  aux_sym_json_string_token1 = 69,
  sym_json_escape_sequence = 70,
  aux_sym_double_quoted_string_token1 = 71,
  anon_sym_BSLASH = 72,
  anon_sym_SQUOTE = 73,
  aux_sym_single_quoted_string_token1 = 74,
  aux_sym_unquoted_string_token1 = 75,
  anon_sym_BSLASH2 = 76,
  sym_double_quoted_escape_sequence = 77,
  sym_single_quoted_escape_sequence = 78,
  sym__non_newline_whitespace = 79,
  sym_comment = 80,
  sym_heredoc_marker = 81,
  sym_heredoc_content = 82,
  sym_heredoc_end = 83,
  sym_error_sentinel = 84,
  sym_source_file = 85,
  sym__instruction = 86,
  sym_from_instruction = 87,
  sym_run_instruction = 88,
  sym_cmd_instruction = 89,
  sym_label_instruction = 90,
  sym_expose_instruction = 91,
  sym_env_instruction = 92,
  sym_add_instruction = 93,
  sym_copy_instruction = 94,
  sym_entrypoint_instruction = 95,
  sym_volume_instruction = 96,
  sym_user_instruction = 97,
  sym__user_name_or_group = 98,
  aux_sym__immediate_user_name_or_group = 99,
  sym__immediate_user_name_or_group_fragment = 100,
  sym_workdir_instruction = 101,
  sym_arg_instruction = 102,
  sym_onbuild_instruction = 103,
  sym_stopsignal_instruction = 104,
  sym__stopsignal_value = 105,
  sym_healthcheck_instruction = 106,
  sym_shell_instruction = 107,
  sym_maintainer_instruction = 108,
  sym_cross_build_instruction = 109,
  sym_heredoc_block = 110,
  sym_path = 111,
  sym_path_with_heredoc = 112,
  sym_expansion = 113,
  sym__immediate_expansion = 114,
  sym__imm_expansion = 115,
  sym__expansion_body = 116,
  sym_env_pair = 117,
  sym__spaced_env_pair = 118,
  sym__env_key = 119,
  sym_expose_port = 120,
  sym_label_pair = 121,
  sym_image_spec = 122,
  sym_image_name = 123,
  sym_image_tag = 124,
  sym_image_digest = 125,
  sym_param = 126,
  sym_mount_param = 127,
  sym_mount_param_param = 128,
  sym_image_alias = 129,
  sym_shell_command = 130,
  sym_shell_fragment = 131,
  sym_line_continuation = 132,
  sym_required_line_continuation = 133,
  sym__comment_line = 134,
  sym__anon_comment = 135,
  sym_json_string_array = 136,
  sym_json_string = 137,
  sym_double_quoted_string = 138,
  sym_single_quoted_string = 139,
  sym_unquoted_string = 140,
  aux_sym_source_file_repeat1 = 141,
  aux_sym_run_instruction_repeat1 = 142,
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
  aux_sym_image_name_repeat1 = 153,
  aux_sym_image_tag_repeat1 = 154,
  aux_sym_image_digest_repeat1 = 155,
  aux_sym_mount_param_repeat1 = 156,
  aux_sym_image_alias_repeat1 = 157,
  aux_sym_shell_command_repeat1 = 158,
  aux_sym_shell_command_repeat2 = 159,
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
  [sym_heredoc_marker] = "heredoc_marker",
  [sym_heredoc_content] = "heredoc_content",
  [sym_heredoc_end] = "heredoc_end",
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
  [sym_heredoc_marker] = sym_heredoc_marker,
  [sym_heredoc_content] = sym_heredoc_content,
  [sym_heredoc_end] = sym_heredoc_end,
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
  [sym_heredoc_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_content] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_end] = {
    .visible = true,
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 24,
  [34] = 34,
  [35] = 35,
  [36] = 23,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 34,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 45,
  [49] = 34,
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
  [74] = 74,
  [75] = 75,
  [76] = 64,
  [77] = 63,
  [78] = 78,
  [79] = 74,
  [80] = 80,
  [81] = 51,
  [82] = 82,
  [83] = 83,
  [84] = 62,
  [85] = 85,
  [86] = 86,
  [87] = 60,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 69,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 74,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 72,
  [101] = 66,
  [102] = 60,
  [103] = 69,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 51,
  [109] = 69,
  [110] = 110,
  [111] = 62,
  [112] = 106,
  [113] = 60,
  [114] = 114,
  [115] = 41,
  [116] = 116,
  [117] = 117,
  [118] = 60,
  [119] = 119,
  [120] = 69,
  [121] = 121,
  [122] = 122,
  [123] = 106,
  [124] = 124,
  [125] = 62,
  [126] = 107,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 51,
  [132] = 107,
  [133] = 62,
  [134] = 51,
  [135] = 135,
  [136] = 75,
  [137] = 137,
  [138] = 92,
  [139] = 139,
  [140] = 69,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 69,
  [146] = 146,
  [147] = 147,
  [148] = 60,
  [149] = 149,
  [150] = 150,
  [151] = 51,
  [152] = 62,
  [153] = 60,
  [154] = 62,
  [155] = 60,
  [156] = 62,
  [157] = 157,
  [158] = 51,
  [159] = 159,
  [160] = 160,
  [161] = 51,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 69,
  [166] = 166,
  [167] = 55,
  [168] = 92,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 69,
  [173] = 69,
  [174] = 174,
  [175] = 175,
  [176] = 174,
  [177] = 177,
  [178] = 178,
  [179] = 174,
  [180] = 174,
  [181] = 51,
  [182] = 182,
  [183] = 163,
  [184] = 62,
  [185] = 60,
  [186] = 92,
  [187] = 187,
  [188] = 188,
  [189] = 69,
  [190] = 190,
  [191] = 174,
  [192] = 51,
  [193] = 62,
  [194] = 60,
  [195] = 195,
  [196] = 182,
  [197] = 174,
  [198] = 182,
  [199] = 174,
  [200] = 182,
  [201] = 174,
  [202] = 92,
  [203] = 203,
  [204] = 204,
  [205] = 182,
  [206] = 206,
  [207] = 174,
  [208] = 208,
  [209] = 51,
  [210] = 210,
  [211] = 62,
  [212] = 163,
  [213] = 182,
  [214] = 174,
  [215] = 215,
  [216] = 182,
  [217] = 217,
  [218] = 60,
  [219] = 92,
  [220] = 69,
  [221] = 221,
  [222] = 92,
  [223] = 92,
  [224] = 174,
  [225] = 62,
  [226] = 226,
  [227] = 227,
  [228] = 60,
  [229] = 182,
  [230] = 69,
  [231] = 51,
  [232] = 51,
  [233] = 233,
  [234] = 174,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 124,
  [242] = 242,
  [243] = 243,
  [244] = 137,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 146,
  [249] = 149,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 160,
  [254] = 254,
  [255] = 255,
  [256] = 41,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 41,
  [262] = 262,
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
  [273] = 243,
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
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 137,
  [296] = 296,
  [297] = 254,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 160,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 302,
  [310] = 303,
  [311] = 290,
  [312] = 312,
  [313] = 313,
  [314] = 302,
  [315] = 303,
  [316] = 316,
  [317] = 317,
  [318] = 302,
  [319] = 319,
  [320] = 320,
  [321] = 302,
  [322] = 302,
  [323] = 303,
  [324] = 302,
  [325] = 325,
  [326] = 326,
  [327] = 302,
  [328] = 328,
  [329] = 302,
  [330] = 149,
  [331] = 302,
  [332] = 146,
  [333] = 302,
  [334] = 334,
  [335] = 302,
  [336] = 302,
  [337] = 288,
  [338] = 289,
  [339] = 288,
  [340] = 289,
  [341] = 288,
  [342] = 289,
  [343] = 288,
  [344] = 288,
  [345] = 288,
  [346] = 288,
  [347] = 288,
  [348] = 288,
  [349] = 288,
  [350] = 288,
  [351] = 288,
  [352] = 290,
  [353] = 353,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '_') ADVANCE(209);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(247);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(256);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(245);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '@') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(244);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(216);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 43:
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 44:
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(190);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 55:
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(238);
      END_STATE();
    case 56:
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 57:
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 79:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 89:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 92:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 101:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 111:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 130:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 151:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 152:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
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
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(199);
      END_STATE();
    case 158:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ',') ADVANCE(251);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 159:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == ',') ADVANCE(251);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(136);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(120);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 160:
      if (eof) ADVANCE(161);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '$') ADVANCE(202);
      if (lookahead == ',') ADVANCE(251);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(136);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(120);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(247);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(247);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(247);
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
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(207);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(247);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(269);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
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
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
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
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 159, .external_lex_state = 2},
  [2] = {.lex_state = 159, .external_lex_state = 2},
  [3] = {.lex_state = 159, .external_lex_state = 2},
  [4] = {.lex_state = 159, .external_lex_state = 2},
  [5] = {.lex_state = 159, .external_lex_state = 2},
  [6] = {.lex_state = 31, .external_lex_state = 3},
  [7] = {.lex_state = 31, .external_lex_state = 3},
  [8] = {.lex_state = 32, .external_lex_state = 3},
  [9] = {.lex_state = 32, .external_lex_state = 3},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 32, .external_lex_state = 3},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 31, .external_lex_state = 3},
  [16] = {.lex_state = 32, .external_lex_state = 3},
  [17] = {.lex_state = 32, .external_lex_state = 3},
  [18] = {.lex_state = 30, .external_lex_state = 3},
  [19] = {.lex_state = 37, .external_lex_state = 3},
  [20] = {.lex_state = 37, .external_lex_state = 3},
  [21] = {.lex_state = 37, .external_lex_state = 3},
  [22] = {.lex_state = 30, .external_lex_state = 3},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 30, .external_lex_state = 3},
  [26] = {.lex_state = 37, .external_lex_state = 3},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 30, .external_lex_state = 3},
  [29] = {.lex_state = 30, .external_lex_state = 3},
  [30] = {.lex_state = 32, .external_lex_state = 3},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 31, .external_lex_state = 3},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 31, .external_lex_state = 3},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 19, .external_lex_state = 3},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 37, .external_lex_state = 3},
  [56] = {.lex_state = 37, .external_lex_state = 3},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 37, .external_lex_state = 3},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 19, .external_lex_state = 3},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 37, .external_lex_state = 3},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 37, .external_lex_state = 3},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 37, .external_lex_state = 3},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 159},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 32, .external_lex_state = 3},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 15},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 32, .external_lex_state = 3},
  [99] = {.lex_state = 32, .external_lex_state = 3},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 23},
  [114] = {.lex_state = 53},
  [115] = {.lex_state = 37, .external_lex_state = 3},
  [116] = {.lex_state = 22},
  [117] = {.lex_state = 159},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 159},
  [122] = {.lex_state = 38},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 37, .external_lex_state = 3},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 37},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 37, .external_lex_state = 3},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 41},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 41},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 43},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 159},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 16},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 50},
  [175] = {.lex_state = 159},
  [176] = {.lex_state = 50},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 50},
  [180] = {.lex_state = 50},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 50},
  [183] = {.lex_state = 36},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 29},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 50},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 15},
  [196] = {.lex_state = 50},
  [197] = {.lex_state = 50},
  [198] = {.lex_state = 50},
  [199] = {.lex_state = 50},
  [200] = {.lex_state = 50},
  [201] = {.lex_state = 50},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 50},
  [206] = {.lex_state = 159},
  [207] = {.lex_state = 50},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 36},
  [210] = {.lex_state = 17},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 50},
  [214] = {.lex_state = 50},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 50},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 36},
  [219] = {.lex_state = 36},
  [220] = {.lex_state = 36},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 50},
  [225] = {.lex_state = 15},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 159},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 50},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 15},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 50},
  [235] = {.lex_state = 159},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 159},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 22},
  [245] = {.lex_state = 40},
  [246] = {.lex_state = 55},
  [247] = {.lex_state = 159},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 22},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 22},
  [254] = {.lex_state = 46},
  [255] = {.lex_state = 11},
  [256] = {.lex_state = 159},
  [257] = {.lex_state = 159},
  [258] = {.lex_state = 159},
  [259] = {.lex_state = 46},
  [260] = {.lex_state = 159},
  [261] = {.lex_state = 38},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 55},
  [264] = {.lex_state = 159},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 22},
  [269] = {.lex_state = 36},
  [270] = {.lex_state = 55},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 159},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 6},
  [285] = {.lex_state = 6},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 194},
  [288] = {.lex_state = 56},
  [289] = {.lex_state = 159},
  [290] = {.lex_state = 52},
  [291] = {.lex_state = 159},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 159},
  [296] = {.lex_state = 6},
  [297] = {.lex_state = 159},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 6},
  [300] = {.lex_state = 194},
  [301] = {.lex_state = 194},
  [302] = {.lex_state = 159},
  [303] = {.lex_state = 57},
  [304] = {.lex_state = 159},
  [305] = {.lex_state = 159},
  [306] = {.lex_state = 54},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 6},
  [309] = {.lex_state = 159},
  [310] = {.lex_state = 57},
  [311] = {.lex_state = 52},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 159},
  [315] = {.lex_state = 57},
  [316] = {.lex_state = 6},
  [317] = {.lex_state = 6},
  [318] = {.lex_state = 159},
  [319] = {.lex_state = 159},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 159},
  [322] = {.lex_state = 159},
  [323] = {.lex_state = 57},
  [324] = {.lex_state = 159},
  [325] = {.lex_state = 6},
  [326] = {.lex_state = 6},
  [327] = {.lex_state = 159},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 159},
  [330] = {.lex_state = 159},
  [331] = {.lex_state = 159},
  [332] = {.lex_state = 159},
  [333] = {.lex_state = 159},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 159},
  [336] = {.lex_state = 159},
  [337] = {.lex_state = 56},
  [338] = {.lex_state = 159},
  [339] = {.lex_state = 56},
  [340] = {.lex_state = 159},
  [341] = {.lex_state = 56},
  [342] = {.lex_state = 159},
  [343] = {.lex_state = 56},
  [344] = {.lex_state = 56},
  [345] = {.lex_state = 56},
  [346] = {.lex_state = 56},
  [347] = {.lex_state = 56},
  [348] = {.lex_state = 56},
  [349] = {.lex_state = 56},
  [350] = {.lex_state = 56},
  [351] = {.lex_state = 56},
  [352] = {.lex_state = 52},
  [353] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_heredoc_marker = 0,
  ts_external_token_heredoc_content = 1,
  ts_external_token_heredoc_end = 2,
  ts_external_token_error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc_marker] = sym_heredoc_marker,
  [ts_external_token_heredoc_content] = sym_heredoc_content,
  [ts_external_token_heredoc_end] = sym_heredoc_end,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_content] = true,
    [ts_external_token_heredoc_end] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_heredoc_content] = true,
    [ts_external_token_heredoc_end] = true,
  },
  [3] = {
    [ts_external_token_heredoc_marker] = true,
  },
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
    [sym_heredoc_marker] = ACTIONS(1),
    [sym_heredoc_content] = ACTIONS(1),
    [sym_heredoc_end] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(298),
    [sym__instruction] = STATE(299),
    [sym_from_instruction] = STATE(296),
    [sym_run_instruction] = STATE(296),
    [sym_cmd_instruction] = STATE(296),
    [sym_label_instruction] = STATE(296),
    [sym_expose_instruction] = STATE(296),
    [sym_env_instruction] = STATE(296),
    [sym_add_instruction] = STATE(296),
    [sym_copy_instruction] = STATE(296),
    [sym_entrypoint_instruction] = STATE(296),
    [sym_volume_instruction] = STATE(296),
    [sym_user_instruction] = STATE(296),
    [sym_workdir_instruction] = STATE(296),
    [sym_arg_instruction] = STATE(296),
    [sym_onbuild_instruction] = STATE(296),
    [sym_stopsignal_instruction] = STATE(296),
    [sym_healthcheck_instruction] = STATE(296),
    [sym_shell_instruction] = STATE(296),
    [sym_maintainer_instruction] = STATE(296),
    [sym_cross_build_instruction] = STATE(296),
    [sym_heredoc_block] = STATE(296),
    [sym_line_continuation] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_heredoc_block_repeat1] = STATE(217),
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
    [sym_heredoc_content] = ACTIONS(47),
    [sym_heredoc_end] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
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
      sym_heredoc_content,
    ACTIONS(49), 1,
      sym_heredoc_end,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_line_continuation,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(217), 1,
      aux_sym_heredoc_block_repeat1,
    STATE(299), 1,
      sym__instruction,
    STATE(296), 20,
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
      sym_heredoc_block,
  [107] = 28,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(58), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(61), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(64), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(67), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(70), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(73), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(76), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(79), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(82), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(85), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(88), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(91), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(94), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(97), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(100), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(103), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(106), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(109), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_heredoc_content,
    ACTIONS(118), 1,
      sym_heredoc_end,
    STATE(217), 1,
      aux_sym_heredoc_block_repeat1,
    STATE(299), 1,
      sym__instruction,
    STATE(3), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(296), 20,
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
      sym_heredoc_block,
  [212] = 26,
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
    ACTIONS(47), 1,
      sym_heredoc_content,
    ACTIONS(49), 1,
      sym_heredoc_end,
    STATE(4), 1,
      sym_line_continuation,
    STATE(217), 1,
      aux_sym_heredoc_block_repeat1,
    STATE(312), 1,
      sym__instruction,
    STATE(296), 20,
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
      sym_heredoc_block,
  [310] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(5), 1,
      sym_line_continuation,
    ACTIONS(53), 23,
      sym_heredoc_content,
      sym_heredoc_end,
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
  [342] = 15,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(121), 1,
      anon_sym_DASH_DASH,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_line_continuation,
    STATE(7), 1,
      aux_sym_run_instruction_repeat1,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(52), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(90), 1,
      sym__comment_line,
    STATE(233), 1,
      sym_shell_fragment,
    STATE(283), 1,
      sym__anon_comment,
    ACTIONS(125), 2,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token3,
    STATE(44), 2,
      sym_param,
      sym_mount_param,
    STATE(285), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(123), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
  [393] = 15,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(121), 1,
      anon_sym_DASH_DASH,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym_line_continuation,
    STATE(15), 1,
      aux_sym_run_instruction_repeat1,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(52), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(90), 1,
      sym__comment_line,
    STATE(233), 1,
      sym_shell_fragment,
    STATE(283), 1,
      sym__anon_comment,
    ACTIONS(125), 2,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token3,
    STATE(44), 2,
      sym_param,
      sym_mount_param,
    STATE(294), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(123), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
  [444] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(52), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(90), 1,
      sym__comment_line,
    STATE(233), 1,
      sym_shell_fragment,
    STATE(283), 1,
      sym__anon_comment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    STATE(281), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(125), 3,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
  [485] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_line_continuation,
    STATE(17), 1,
      aux_sym_shell_command_repeat1,
    STATE(52), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(90), 1,
      sym__comment_line,
    STATE(233), 1,
      sym_shell_fragment,
    STATE(283), 1,
      sym__anon_comment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    STATE(271), 2,
      sym_shell_command,
      sym_json_string_array,
    ACTIONS(125), 3,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
  [526] = 12,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      aux_sym__env_key_token1,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_line_continuation,
    STATE(36), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(118), 1,
      sym__imm_expansion,
    STATE(136), 1,
      sym__immediate_expansion,
    ACTIONS(143), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(268), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [566] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_line_continuation,
    STATE(30), 1,
      aux_sym_shell_command_repeat1,
    STATE(52), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(90), 1,
      sym__comment_line,
    STATE(283), 1,
      sym__anon_comment,
    STATE(313), 1,
      sym_shell_fragment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(125), 3,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
  [600] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR2,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(60), 1,
      sym__imm_expansion,
    STATE(75), 1,
      sym__immediate_expansion,
    ACTIONS(151), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(326), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [634] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR2,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(60), 1,
      sym__imm_expansion,
    STATE(75), 1,
      sym__immediate_expansion,
    ACTIONS(151), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(328), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [668] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR2,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_line_continuation,
    STATE(23), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(60), 1,
      sym__imm_expansion,
    STATE(75), 1,
      sym__immediate_expansion,
    ACTIONS(151), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(169), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [702] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    STATE(15), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(44), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(156), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(158), 4,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [728] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(11), 1,
      aux_sym_shell_command_repeat1,
    STATE(16), 1,
      sym_line_continuation,
    STATE(52), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(90), 1,
      sym__comment_line,
    STATE(283), 1,
      sym__anon_comment,
    STATE(334), 1,
      sym_shell_fragment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(125), 3,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
  [762] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(127), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_line_continuation,
    STATE(30), 1,
      aux_sym_shell_command_repeat1,
    STATE(52), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(90), 1,
      sym__comment_line,
    STATE(221), 1,
      sym_shell_fragment,
    STATE(283), 1,
      sym__anon_comment,
    ACTIONS(123), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(125), 3,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
  [796] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      sym_line_continuation,
    STATE(22), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(164), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(160), 5,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [821] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(166), 1,
      aux_sym_path_token1,
    ACTIONS(168), 1,
      aux_sym_path_token2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_DASH_DASH,
    ACTIONS(174), 1,
      sym_heredoc_marker,
    STATE(19), 1,
      sym_line_continuation,
    STATE(55), 1,
      aux_sym_add_instruction_repeat1,
    STATE(65), 1,
      aux_sym_add_instruction_repeat2,
    STATE(77), 1,
      sym_expansion,
    STATE(124), 1,
      sym_param,
    STATE(269), 1,
      sym_path_with_heredoc,
  [858] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(166), 1,
      aux_sym_path_token1,
    ACTIONS(168), 1,
      aux_sym_path_token2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_DASH_DASH,
    ACTIONS(174), 1,
      sym_heredoc_marker,
    STATE(19), 1,
      aux_sym_add_instruction_repeat1,
    STATE(20), 1,
      sym_line_continuation,
    STATE(70), 1,
      aux_sym_add_instruction_repeat2,
    STATE(77), 1,
      sym_expansion,
    STATE(124), 1,
      sym_param,
    STATE(269), 1,
      sym_path_with_heredoc,
  [895] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(166), 1,
      aux_sym_path_token1,
    ACTIONS(168), 1,
      aux_sym_path_token2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_DASH_DASH,
    ACTIONS(174), 1,
      sym_heredoc_marker,
    STATE(21), 1,
      sym_line_continuation,
    STATE(26), 1,
      aux_sym_add_instruction_repeat1,
    STATE(68), 1,
      aux_sym_add_instruction_repeat2,
    STATE(77), 1,
      sym_expansion,
    STATE(124), 1,
      sym_param,
    STATE(269), 1,
      sym_path_with_heredoc,
  [932] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    STATE(22), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(181), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(176), 5,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [955] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR2,
    ACTIONS(183), 1,
      anon_sym_LF,
    STATE(23), 1,
      sym_line_continuation,
    STATE(24), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(60), 1,
      sym__imm_expansion,
    STATE(75), 1,
      sym__immediate_expansion,
    ACTIONS(151), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    ACTIONS(185), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [986] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 1,
      anon_sym_DOLLAR2,
    STATE(60), 1,
      sym__imm_expansion,
    STATE(75), 1,
      sym__immediate_expansion,
    ACTIONS(194), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(24), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(192), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1015] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_mount_param_repeat1,
    STATE(25), 1,
      sym_line_continuation,
    ACTIONS(199), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(197), 5,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1040] = 12,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(166), 1,
      aux_sym_path_token1,
    ACTIONS(168), 1,
      aux_sym_path_token2,
    ACTIONS(170), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_DASH_DASH,
    ACTIONS(174), 1,
      sym_heredoc_marker,
    STATE(26), 1,
      sym_line_continuation,
    STATE(55), 1,
      aux_sym_add_instruction_repeat1,
    STATE(56), 1,
      aux_sym_add_instruction_repeat2,
    STATE(77), 1,
      sym_expansion,
    STATE(124), 1,
      sym_param,
    STATE(269), 1,
      sym_path_with_heredoc,
  [1077] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(203), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(205), 1,
      anon_sym_DOLLAR2,
    ACTIONS(208), 1,
      aux_sym_image_name_token2,
    STATE(87), 1,
      sym__imm_expansion,
    STATE(94), 1,
      sym__immediate_expansion,
    STATE(27), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1105] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(28), 1,
      sym_line_continuation,
    ACTIONS(213), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(211), 6,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1125] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(29), 1,
      sym_line_continuation,
    ACTIONS(181), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(176), 6,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1145] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(219), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym__comment_line,
    STATE(283), 1,
      sym__anon_comment,
    ACTIONS(217), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    STATE(30), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(215), 3,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
  [1171] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(224), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(226), 1,
      anon_sym_DOLLAR2,
    ACTIONS(228), 1,
      aux_sym_image_name_token2,
    STATE(27), 1,
      aux_sym_image_name_repeat1,
    STATE(31), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym__imm_expansion,
    STATE(94), 1,
      sym__immediate_expansion,
    ACTIONS(222), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1201] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR2,
    ACTIONS(228), 1,
      aux_sym_image_name_token2,
    ACTIONS(232), 1,
      aux_sym_from_instruction_token2,
    STATE(31), 1,
      aux_sym_image_name_repeat1,
    STATE(32), 1,
      sym_line_continuation,
    STATE(87), 1,
      sym__imm_expansion,
    STATE(94), 1,
      sym__immediate_expansion,
    ACTIONS(230), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1231] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(192), 1,
      aux_sym__env_key_token1,
    ACTIONS(234), 1,
      anon_sym_DOLLAR2,
    STATE(118), 1,
      sym__imm_expansion,
    STATE(136), 1,
      sym__immediate_expansion,
    ACTIONS(237), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(33), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1258] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      anon_sym_DOLLAR2,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      sym_line_continuation,
    STATE(46), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(244), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1287] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(250), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(252), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_image_tag_token1,
    STATE(35), 1,
      sym_line_continuation,
    STATE(37), 1,
      aux_sym_image_tag_repeat1,
    STATE(102), 1,
      sym__imm_expansion,
    STATE(110), 1,
      sym__immediate_expansion,
    ACTIONS(248), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1316] = 9,
    ACTIONS(133), 1,
      anon_sym_DOLLAR2,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      aux_sym__env_key_token1,
    STATE(33), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(36), 1,
      sym_line_continuation,
    STATE(118), 1,
      sym__imm_expansion,
    STATE(136), 1,
      sym__immediate_expansion,
    ACTIONS(143), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1345] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(258), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(260), 1,
      anon_sym_DOLLAR2,
    ACTIONS(263), 1,
      aux_sym_image_tag_token1,
    STATE(102), 1,
      sym__imm_expansion,
    STATE(110), 1,
      sym__immediate_expansion,
    ACTIONS(256), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [1372] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(266), 1,
      anon_sym_DOLLAR2,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      anon_sym_BSLASH,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(271), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
    STATE(38), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1399] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    STATE(39), 1,
      sym_line_continuation,
    STATE(40), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(144), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(148), 1,
      sym__imm_expansion,
    ACTIONS(277), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1428] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    STATE(40), 1,
      sym_line_continuation,
    STATE(42), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(144), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(148), 1,
      sym__imm_expansion,
    ACTIONS(283), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [1457] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(41), 1,
      sym_line_continuation,
    ACTIONS(287), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(285), 5,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1476] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(291), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(294), 1,
      anon_sym_DOLLAR2,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(144), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(148), 1,
      sym__imm_expansion,
    ACTIONS(289), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(42), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [1503] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      anon_sym_DOLLAR2,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(244), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1532] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(44), 1,
      sym_line_continuation,
    ACTIONS(301), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(299), 5,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
      anon_sym_LBRACK,
  [1551] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      anon_sym_DOLLAR2,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(45), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(244), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1580] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      anon_sym_DOLLAR2,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(46), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(244), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1609] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(309), 1,
      aux_sym_label_pair_token1,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
    STATE(141), 1,
      sym_label_pair,
    STATE(47), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
    STATE(280), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1636] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      anon_sym_DOLLAR2,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(48), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(244), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1665] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(240), 1,
      anon_sym_DOLLAR2,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(49), 1,
      sym_line_continuation,
    STATE(113), 1,
      sym__imm_expansion,
    STATE(119), 1,
      sym__immediate_expansion,
    ACTIONS(244), 2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [1694] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(324), 1,
      aux_sym_label_pair_token1,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      aux_sym_label_instruction_repeat1,
    STATE(50), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym_label_pair,
    STATE(280), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1723] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(51), 1,
      sym_line_continuation,
    ACTIONS(332), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1741] = 6,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(338), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(340), 1,
      sym_heredoc_marker,
    STATE(52), 1,
      sym_line_continuation,
    STATE(61), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(336), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1763] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(344), 1,
      aux_sym_image_name_token1,
    ACTIONS(346), 1,
      anon_sym_DASH_DASH,
    STATE(32), 1,
      sym_expansion,
    STATE(53), 1,
      sym_line_continuation,
    STATE(86), 1,
      sym_image_name,
    STATE(122), 1,
      sym_param,
    STATE(240), 1,
      sym_image_spec,
  [1791] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(348), 1,
      aux_sym_label_pair_token1,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      aux_sym_label_instruction_repeat1,
    STATE(54), 1,
      sym_line_continuation,
    STATE(141), 1,
      sym_label_pair,
    STATE(280), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1817] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(354), 1,
      aux_sym_path_token1,
    ACTIONS(358), 1,
      anon_sym_DASH_DASH,
    STATE(124), 1,
      sym_param,
    STATE(55), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
    ACTIONS(356), 3,
      sym_heredoc_marker,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [1839] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      aux_sym_path_token1,
    ACTIONS(363), 1,
      aux_sym_path_token2,
    ACTIONS(365), 1,
      anon_sym_DOLLAR,
    ACTIONS(367), 1,
      sym_heredoc_marker,
    STATE(56), 1,
      sym_line_continuation,
    STATE(59), 1,
      aux_sym_add_instruction_repeat2,
    STATE(63), 1,
      sym_expansion,
    STATE(267), 1,
      sym_path_with_heredoc,
  [1867] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(365), 1,
      anon_sym_DOLLAR,
    ACTIONS(369), 1,
      aux_sym_path_token1,
    ACTIONS(371), 1,
      aux_sym_path_token2,
    STATE(57), 1,
      sym_line_continuation,
    STATE(72), 1,
      sym_expansion,
    STATE(204), 1,
      sym_path,
    STATE(275), 1,
      sym_json_string_array,
  [1895] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      anon_sym_LF,
    ACTIONS(375), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(378), 1,
      anon_sym_DOLLAR2,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(148), 1,
      sym__imm_expansion,
    STATE(190), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(58), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [1921] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(381), 1,
      aux_sym_path_token1,
    ACTIONS(384), 1,
      aux_sym_path_token2,
    ACTIONS(387), 1,
      anon_sym_DOLLAR,
    ACTIONS(390), 1,
      sym_heredoc_marker,
    STATE(77), 1,
      sym_expansion,
    STATE(269), 1,
      sym_path_with_heredoc,
    STATE(59), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat2,
  [1947] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(60), 1,
      sym_line_continuation,
    ACTIONS(395), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(393), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [1965] = 5,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(404), 1,
      sym_heredoc_marker,
    STATE(61), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(399), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
  [1985] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(62), 1,
      sym_line_continuation,
    ACTIONS(409), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(407), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2003] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      anon_sym_LF,
    ACTIONS(413), 1,
      aux_sym_path_token3,
    ACTIONS(415), 1,
      anon_sym_DOLLAR2,
    ACTIONS(417), 1,
      sym__non_newline_whitespace,
    STATE(63), 1,
      sym_line_continuation,
    STATE(64), 1,
      aux_sym_path_repeat1,
    STATE(155), 1,
      sym__imm_expansion,
    STATE(163), 1,
      sym__immediate_expansion,
  [2031] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      aux_sym_path_token3,
    ACTIONS(415), 1,
      anon_sym_DOLLAR2,
    ACTIONS(419), 1,
      anon_sym_LF,
    ACTIONS(421), 1,
      sym__non_newline_whitespace,
    STATE(64), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_path_repeat1,
    STATE(155), 1,
      sym__imm_expansion,
    STATE(163), 1,
      sym__immediate_expansion,
  [2059] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      aux_sym_path_token1,
    ACTIONS(363), 1,
      aux_sym_path_token2,
    ACTIONS(365), 1,
      anon_sym_DOLLAR,
    ACTIONS(367), 1,
      sym_heredoc_marker,
    STATE(59), 1,
      aux_sym_add_instruction_repeat2,
    STATE(63), 1,
      sym_expansion,
    STATE(65), 1,
      sym_line_continuation,
    STATE(266), 1,
      sym_path_with_heredoc,
  [2087] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      aux_sym_path_token3,
    ACTIONS(415), 1,
      anon_sym_DOLLAR2,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(425), 1,
      sym__non_newline_whitespace,
    STATE(66), 1,
      sym_line_continuation,
    STATE(74), 1,
      aux_sym_path_repeat1,
    STATE(155), 1,
      sym__imm_expansion,
    STATE(163), 1,
      sym__immediate_expansion,
  [2115] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(431), 1,
      anon_sym_DOLLAR2,
    ACTIONS(434), 1,
      aux_sym_image_digest_token1,
    STATE(153), 1,
      sym__imm_expansion,
    STATE(159), 1,
      sym__immediate_expansion,
    STATE(67), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [2141] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      aux_sym_path_token1,
    ACTIONS(363), 1,
      aux_sym_path_token2,
    ACTIONS(365), 1,
      anon_sym_DOLLAR,
    ACTIONS(367), 1,
      sym_heredoc_marker,
    STATE(59), 1,
      aux_sym_add_instruction_repeat2,
    STATE(63), 1,
      sym_expansion,
    STATE(68), 1,
      sym_line_continuation,
    STATE(250), 1,
      sym_path_with_heredoc,
  [2169] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(69), 1,
      sym_line_continuation,
    ACTIONS(439), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(437), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2187] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(361), 1,
      aux_sym_path_token1,
    ACTIONS(363), 1,
      aux_sym_path_token2,
    ACTIONS(365), 1,
      anon_sym_DOLLAR,
    ACTIONS(367), 1,
      sym_heredoc_marker,
    STATE(59), 1,
      aux_sym_add_instruction_repeat2,
    STATE(63), 1,
      sym_expansion,
    STATE(70), 1,
      sym_line_continuation,
    STATE(252), 1,
      sym_path_with_heredoc,
  [2215] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(443), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(445), 1,
      anon_sym_DOLLAR2,
    ACTIONS(447), 1,
      aux_sym_image_digest_token1,
    STATE(67), 1,
      aux_sym_image_digest_repeat1,
    STATE(71), 1,
      sym_line_continuation,
    STATE(153), 1,
      sym__imm_expansion,
    STATE(159), 1,
      sym__immediate_expansion,
  [2243] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(413), 1,
      aux_sym_path_token3,
    ACTIONS(415), 1,
      anon_sym_DOLLAR2,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(451), 1,
      sym__non_newline_whitespace,
    STATE(66), 1,
      aux_sym_path_repeat1,
    STATE(72), 1,
      sym_line_continuation,
    STATE(155), 1,
      sym__imm_expansion,
    STATE(163), 1,
      sym__immediate_expansion,
  [2271] = 9,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(453), 1,
      anon_sym_LF,
    STATE(58), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(73), 1,
      sym_line_continuation,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(148), 1,
      sym__imm_expansion,
    STATE(190), 1,
      sym__immediate_user_name_or_group_fragment,
  [2299] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(455), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      aux_sym_path_token3,
    ACTIONS(460), 1,
      anon_sym_DOLLAR2,
    ACTIONS(463), 1,
      sym__non_newline_whitespace,
    STATE(155), 1,
      sym__imm_expansion,
    STATE(163), 1,
      sym__immediate_expansion,
    STATE(74), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2325] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(467), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(465), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [2343] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(421), 1,
      sym__non_newline_whitespace,
    ACTIONS(469), 1,
      aux_sym_path_token3,
    ACTIONS(471), 1,
      anon_sym_DOLLAR2,
    STATE(76), 1,
      sym_line_continuation,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(183), 1,
      sym__immediate_expansion,
    STATE(218), 1,
      sym__imm_expansion,
  [2368] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(417), 1,
      sym__non_newline_whitespace,
    ACTIONS(469), 1,
      aux_sym_path_token3,
    ACTIONS(471), 1,
      anon_sym_DOLLAR2,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(77), 1,
      sym_line_continuation,
    STATE(183), 1,
      sym__immediate_expansion,
    STATE(218), 1,
      sym__imm_expansion,
  [2393] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(473), 1,
      anon_sym_NONE,
    ACTIONS(475), 1,
      anon_sym_DASH_DASH,
    STATE(78), 1,
      sym_line_continuation,
    STATE(121), 1,
      aux_sym_add_instruction_repeat1,
    STATE(241), 1,
      sym_param,
    STATE(278), 1,
      sym_cmd_instruction,
  [2418] = 7,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(463), 1,
      sym__non_newline_whitespace,
    ACTIONS(477), 1,
      aux_sym_path_token3,
    ACTIONS(480), 1,
      anon_sym_DOLLAR2,
    STATE(183), 1,
      sym__immediate_expansion,
    STATE(218), 1,
      sym__imm_expansion,
    STATE(79), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2441] = 7,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(488), 1,
      anon_sym_DOLLAR2,
    STATE(185), 1,
      sym__imm_expansion,
    STATE(203), 1,
      sym__immediate_expansion,
    STATE(80), 2,
      sym_line_continuation,
      aux_sym__stopsignal_value_repeat1,
  [2464] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(81), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2481] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 1,
      anon_sym_DOLLAR2,
    ACTIONS(495), 1,
      aux_sym_image_alias_token2,
    STATE(82), 1,
      sym_line_continuation,
    STATE(83), 1,
      aux_sym_image_alias_repeat1,
    STATE(195), 1,
      sym__immediate_expansion,
    STATE(228), 1,
      sym__imm_expansion,
  [2506] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(493), 1,
      anon_sym_DOLLAR2,
    ACTIONS(495), 1,
      aux_sym_image_alias_token2,
    ACTIONS(497), 1,
      anon_sym_LF,
    STATE(83), 1,
      sym_line_continuation,
    STATE(93), 1,
      aux_sym_image_alias_repeat1,
    STATE(195), 1,
      sym__immediate_expansion,
    STATE(228), 1,
      sym__imm_expansion,
  [2531] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(84), 1,
      sym_line_continuation,
    ACTIONS(409), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(407), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2548] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(499), 1,
      anon_sym_LF,
    ACTIONS(501), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(503), 1,
      anon_sym_DOLLAR2,
    STATE(85), 1,
      sym_line_continuation,
    STATE(88), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(185), 1,
      sym__imm_expansion,
    STATE(203), 1,
      sym__immediate_expansion,
  [2573] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(509), 1,
      anon_sym_COLON,
    ACTIONS(511), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym_line_continuation,
    STATE(171), 1,
      sym_image_tag,
    STATE(251), 1,
      sym_image_digest,
  [2598] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(393), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2615] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(501), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(503), 1,
      anon_sym_DOLLAR2,
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(80), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(88), 1,
      sym_line_continuation,
    STATE(185), 1,
      sym__imm_expansion,
    STATE(203), 1,
      sym__immediate_expansion,
  [2640] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    STATE(73), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(89), 1,
      sym_line_continuation,
    STATE(143), 1,
      sym__immediate_expansion,
    STATE(148), 1,
      sym__imm_expansion,
    STATE(190), 1,
      sym__immediate_user_name_or_group_fragment,
  [2665] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(517), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(515), 4,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [2682] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(91), 1,
      sym_line_continuation,
    ACTIONS(439), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(437), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2699] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(92), 1,
      sym_line_continuation,
    ACTIONS(521), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(519), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2716] = 7,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(525), 1,
      anon_sym_DOLLAR2,
    ACTIONS(528), 1,
      aux_sym_image_alias_token2,
    STATE(195), 1,
      sym__immediate_expansion,
    STATE(228), 1,
      sym__imm_expansion,
    STATE(93), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2739] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(94), 1,
      sym_line_continuation,
    ACTIONS(533), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(531), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2756] = 7,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      aux_sym_path_token3,
    ACTIONS(538), 1,
      anon_sym_DOLLAR2,
    STATE(194), 1,
      sym__imm_expansion,
    STATE(212), 1,
      sym__immediate_expansion,
    STATE(95), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2779] = 6,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(543), 1,
      anon_sym_DOLLAR,
    ACTIONS(546), 1,
      aux_sym_expose_port_token1,
    STATE(96), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(210), 2,
      sym_expansion,
      sym_expose_port,
  [2800] = 7,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      anon_sym_DOLLAR,
    ACTIONS(553), 1,
      aux_sym_expose_port_token1,
    STATE(96), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(97), 1,
      sym_line_continuation,
    STATE(210), 2,
      sym_expansion,
      sym_expose_port,
  [2823] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(98), 1,
      sym_line_continuation,
    ACTIONS(557), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(555), 4,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [2840] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(561), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token4,
    ACTIONS(559), 4,
      sym_heredoc_marker,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [2857] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(451), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      aux_sym_path_token3,
    ACTIONS(565), 1,
      anon_sym_DOLLAR2,
    STATE(100), 1,
      sym_line_continuation,
    STATE(101), 1,
      aux_sym_path_repeat1,
    STATE(194), 1,
      sym__imm_expansion,
    STATE(212), 1,
      sym__immediate_expansion,
  [2882] = 8,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      aux_sym_path_token3,
    ACTIONS(565), 1,
      anon_sym_DOLLAR2,
    STATE(95), 1,
      aux_sym_path_repeat1,
    STATE(101), 1,
      sym_line_continuation,
    STATE(194), 1,
      sym__imm_expansion,
    STATE(212), 1,
      sym__immediate_expansion,
  [2907] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(102), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(393), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2923] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(103), 1,
      sym_line_continuation,
    ACTIONS(439), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(437), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2939] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(445), 1,
      anon_sym_DOLLAR2,
    ACTIONS(447), 1,
      aux_sym_image_digest_token1,
    STATE(71), 1,
      aux_sym_image_digest_repeat1,
    STATE(104), 1,
      sym_line_continuation,
    STATE(153), 1,
      sym__imm_expansion,
    STATE(159), 1,
      sym__immediate_expansion,
  [2961] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(567), 1,
      aux_sym_path_token1,
    ACTIONS(569), 1,
      aux_sym_path_token2,
    ACTIONS(571), 1,
      anon_sym_DOLLAR,
    STATE(100), 1,
      sym_expansion,
    STATE(105), 1,
      sym_line_continuation,
    STATE(272), 1,
      sym_path,
  [2983] = 6,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(573), 1,
      anon_sym_BSLASH,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym_line_continuation,
    STATE(129), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(577), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3003] = 6,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(573), 1,
      anon_sym_BSLASH,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(577), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3023] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym__env_key_token1,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3039] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      aux_sym__env_key_token1,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(437), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3055] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(110), 1,
      sym_line_continuation,
    ACTIONS(583), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(581), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3071] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym__env_key_token1,
    STATE(111), 1,
      sym_line_continuation,
    ACTIONS(407), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3087] = 6,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(573), 1,
      anon_sym_BSLASH,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym_line_continuation,
    STATE(129), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(577), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3107] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(395), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(393), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3123] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(587), 1,
      aux_sym__env_key_token1,
    STATE(114), 1,
      sym_line_continuation,
    STATE(116), 1,
      aux_sym_env_instruction_repeat1,
    STATE(237), 1,
      sym_env_pair,
    STATE(259), 1,
      sym__env_key,
    STATE(274), 1,
      sym__spaced_env_pair,
  [3145] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(287), 1,
      aux_sym_path_token1,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(285), 4,
      sym_heredoc_marker,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [3161] = 7,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(591), 1,
      aux_sym__env_key_token1,
    STATE(116), 1,
      sym_line_continuation,
    STATE(130), 1,
      aux_sym_env_instruction_repeat1,
    STATE(237), 1,
      sym_env_pair,
    STATE(305), 1,
      sym__env_key,
  [3183] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(593), 1,
      anon_sym_DOLLAR,
    ACTIONS(595), 1,
      aux_sym_expose_port_token1,
    STATE(97), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(117), 1,
      sym_line_continuation,
    STATE(210), 2,
      sym_expansion,
      sym_expose_port,
  [3203] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      aux_sym__env_key_token1,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(393), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3219] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(599), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(597), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3235] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(439), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(437), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3251] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(475), 1,
      anon_sym_DASH_DASH,
    STATE(121), 1,
      sym_line_continuation,
    STATE(167), 1,
      aux_sym_add_instruction_repeat1,
    STATE(241), 1,
      sym_param,
    STATE(317), 1,
      sym_cmd_instruction,
  [3273] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(342), 1,
      anon_sym_DOLLAR,
    ACTIONS(344), 1,
      aux_sym_image_name_token1,
    STATE(32), 1,
      sym_expansion,
    STATE(86), 1,
      sym_image_name,
    STATE(122), 1,
      sym_line_continuation,
    STATE(239), 1,
      sym_image_spec,
  [3295] = 6,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(573), 1,
      anon_sym_BSLASH,
    ACTIONS(601), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      sym_line_continuation,
    STATE(129), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(577), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3315] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(603), 1,
      aux_sym_path_token1,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(605), 4,
      sym_heredoc_marker,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [3331] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(409), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(407), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3347] = 6,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(573), 1,
      anon_sym_BSLASH,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(577), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3367] = 5,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(609), 1,
      anon_sym_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(611), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(613), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [3385] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      anon_sym_DOLLAR,
    ACTIONS(369), 1,
      aux_sym_path_token1,
    ACTIONS(371), 1,
      aux_sym_path_token2,
    STATE(72), 1,
      sym_expansion,
    STATE(128), 1,
      sym_line_continuation,
    STATE(265), 1,
      sym_path,
  [3407] = 5,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(615), 1,
      anon_sym_BSLASH,
    ACTIONS(618), 1,
      anon_sym_SQUOTE,
    ACTIONS(620), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
    STATE(129), 2,
      sym_line_continuation,
      aux_sym_single_quoted_string_repeat1,
  [3425] = 6,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      aux_sym__env_key_token1,
    STATE(237), 1,
      sym_env_pair,
    STATE(305), 1,
      sym__env_key,
    STATE(130), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [3445] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3461] = 6,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(573), 1,
      anon_sym_BSLASH,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      aux_sym_single_quoted_string_repeat1,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(577), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3481] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(133), 1,
      sym_line_continuation,
    ACTIONS(409), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(407), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3497] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(330), 3,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
      sym_double_quoted_escape_sequence,
  [3513] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_image_tag_token1,
    STATE(35), 1,
      aux_sym_image_tag_repeat1,
    STATE(102), 1,
      sym__imm_expansion,
    STATE(110), 1,
      sym__immediate_expansion,
    STATE(135), 1,
      sym_line_continuation,
  [3535] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(467), 1,
      aux_sym__env_key_token1,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(465), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [3551] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LF,
    STATE(137), 1,
      sym_line_continuation,
    ACTIONS(632), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3566] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(519), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(521), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3581] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(634), 1,
      aux_sym_path_token1,
    STATE(139), 1,
      sym_line_continuation,
    ACTIONS(636), 3,
      sym_heredoc_marker,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3596] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(140), 1,
      sym_line_continuation,
    ACTIONS(437), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(439), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3611] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(638), 1,
      anon_sym_LF,
    STATE(141), 1,
      sym_line_continuation,
    ACTIONS(640), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3626] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
    STATE(142), 2,
      sym_line_continuation,
      aux_sym_json_string_repeat1,
  [3641] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(143), 1,
      sym_line_continuation,
    ACTIONS(647), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3654] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(144), 1,
      sym_line_continuation,
    ACTIONS(649), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3667] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      aux_sym_from_instruction_token2,
    STATE(145), 1,
      sym_line_continuation,
    ACTIONS(437), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3682] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_LF,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(653), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3697] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      anon_sym_DOLLAR,
    ACTIONS(657), 1,
      aux_sym_image_alias_token1,
    STATE(82), 1,
      sym_expansion,
    STATE(147), 1,
      sym_line_continuation,
    STATE(325), 1,
      sym_image_alias,
  [3716] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(393), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3729] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(659), 1,
      anon_sym_LF,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(661), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3744] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(150), 1,
      sym_line_continuation,
    ACTIONS(663), 2,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
    ACTIONS(665), 2,
      aux_sym_single_quoted_string_token1,
      sym_single_quoted_escape_sequence,
  [3759] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(151), 1,
      sym_line_continuation,
    ACTIONS(330), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3772] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(152), 1,
      sym_line_continuation,
    ACTIONS(407), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3785] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      aux_sym_from_instruction_token2,
    STATE(153), 1,
      sym_line_continuation,
    ACTIONS(393), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3800] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym_from_instruction_token2,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(407), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3815] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(155), 1,
      sym_line_continuation,
    ACTIONS(393), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(395), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3830] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(156), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(409), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3845] = 5,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_line_continuation,
    STATE(166), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(669), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [3862] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_from_instruction_token2,
    STATE(158), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3877] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(673), 1,
      aux_sym_from_instruction_token2,
    STATE(159), 1,
      sym_line_continuation,
    ACTIONS(671), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3892] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_LF,
    STATE(160), 1,
      sym_line_continuation,
    ACTIONS(677), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3907] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(161), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
    ACTIONS(332), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [3922] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      anon_sym_DOLLAR,
    ACTIONS(657), 1,
      aux_sym_image_alias_token1,
    STATE(82), 1,
      sym_expansion,
    STATE(162), 1,
      sym_line_continuation,
    STATE(320), 1,
      sym_image_alias,
  [3941] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(163), 1,
      sym_line_continuation,
    ACTIONS(679), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(681), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3956] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(683), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(685), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_expansion,
    STATE(164), 1,
      sym_line_continuation,
    STATE(255), 1,
      sym__user_name_or_group,
  [3975] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(165), 1,
      sym_line_continuation,
    ACTIONS(437), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3988] = 5,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(687), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      aux_sym_json_string_repeat1,
    STATE(166), 1,
      sym_line_continuation,
    ACTIONS(669), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4005] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(356), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(689), 1,
      anon_sym_DASH_DASH,
    STATE(241), 1,
      sym_param,
    STATE(167), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [4022] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(168), 1,
      sym_line_continuation,
    ACTIONS(519), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4035] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(692), 1,
      anon_sym_LF,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(694), 3,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4050] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(696), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    STATE(85), 1,
      sym_expansion,
    STATE(170), 1,
      sym_line_continuation,
    STATE(277), 1,
      sym__stopsignal_value,
  [4069] = 6,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(511), 1,
      anon_sym_AT,
    ACTIONS(700), 1,
      anon_sym_LF,
    ACTIONS(702), 1,
      aux_sym_from_instruction_token2,
    STATE(171), 1,
      sym_line_continuation,
    STATE(262), 1,
      sym_image_digest,
  [4088] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      aux_sym_path_token3,
    STATE(172), 1,
      sym_line_continuation,
    ACTIONS(437), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4102] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      anon_sym_LF,
    STATE(173), 1,
      sym_line_continuation,
    ACTIONS(439), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4116] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    ACTIONS(706), 1,
      sym_variable,
    STATE(174), 1,
      sym_line_continuation,
    STATE(225), 1,
      sym__expansion_body,
  [4132] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(708), 1,
      anon_sym_COMMA2,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym_line_continuation,
    STATE(206), 1,
      aux_sym_json_string_array_repeat1,
  [4148] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    ACTIONS(714), 1,
      sym_variable,
    STATE(111), 1,
      sym__expansion_body,
    STATE(176), 1,
      sym_line_continuation,
  [4164] = 4,
    ACTIONS(716), 1,
      anon_sym_LF,
    ACTIONS(718), 1,
      anon_sym_BSLASH_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(177), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [4178] = 5,
    ACTIONS(721), 1,
      anon_sym_LF,
    ACTIONS(723), 1,
      anon_sym_BSLASH_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(177), 1,
      aux_sym_shell_command_repeat2,
    STATE(178), 1,
      sym_line_continuation,
  [4194] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(725), 1,
      anon_sym_LBRACE,
    ACTIONS(727), 1,
      sym_variable,
    STATE(62), 1,
      sym__expansion_body,
    STATE(179), 1,
      sym_line_continuation,
  [4210] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      anon_sym_LBRACE,
    ACTIONS(731), 1,
      sym_variable,
    STATE(154), 1,
      sym__expansion_body,
    STATE(180), 1,
      sym_line_continuation,
  [4226] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4238] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    ACTIONS(706), 1,
      sym_variable,
    STATE(182), 1,
      sym_line_continuation,
    STATE(222), 1,
      sym__expansion_body,
  [4254] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      aux_sym_path_token3,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(681), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4268] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(407), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4280] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(185), 1,
      sym_line_continuation,
    ACTIONS(393), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4292] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(519), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4304] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym__non_newline_whitespace,
    STATE(187), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [4318] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(738), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(740), 2,
      aux_sym_json_string_token1,
      sym_json_escape_sequence,
  [4332] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(189), 1,
      sym_line_continuation,
    ACTIONS(437), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4344] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(742), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4356] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
    ACTIONS(746), 1,
      sym_variable,
    STATE(125), 1,
      sym__expansion_body,
    STATE(191), 1,
      sym_line_continuation,
  [4372] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_path_token3,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4386] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym_path_token3,
    STATE(193), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4400] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      aux_sym_path_token3,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(393), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4414] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(195), 1,
      sym_line_continuation,
    ACTIONS(748), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4426] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
    ACTIONS(752), 1,
      sym_variable,
    STATE(186), 1,
      sym__expansion_body,
    STATE(196), 1,
      sym_line_continuation,
  [4442] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
    ACTIONS(752), 1,
      sym_variable,
    STATE(184), 1,
      sym__expansion_body,
    STATE(197), 1,
      sym_line_continuation,
  [4458] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_LBRACE,
    ACTIONS(756), 1,
      sym_variable,
    STATE(198), 1,
      sym_line_continuation,
    STATE(202), 1,
      sym__expansion_body,
  [4474] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_LBRACE,
    ACTIONS(756), 1,
      sym_variable,
    STATE(193), 1,
      sym__expansion_body,
    STATE(199), 1,
      sym_line_continuation,
  [4490] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
    ACTIONS(760), 1,
      sym_variable,
    STATE(168), 1,
      sym__expansion_body,
    STATE(200), 1,
      sym_line_continuation,
  [4506] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
    ACTIONS(760), 1,
      sym_variable,
    STATE(152), 1,
      sym__expansion_body,
    STATE(201), 1,
      sym_line_continuation,
  [4522] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(521), 1,
      aux_sym_path_token3,
    STATE(202), 1,
      sym_line_continuation,
    ACTIONS(519), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4536] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(762), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4548] = 5,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_LF,
    ACTIONS(766), 1,
      sym__non_newline_whitespace,
    STATE(204), 1,
      sym_line_continuation,
    STATE(208), 1,
      aux_sym_volume_instruction_repeat1,
  [4564] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(770), 1,
      sym_variable,
    STATE(138), 1,
      sym__expansion_body,
    STATE(205), 1,
      sym_line_continuation,
  [4580] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_COMMA2,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(206), 2,
      sym_line_continuation,
      aux_sym_json_string_array_repeat1,
  [4594] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(770), 1,
      sym_variable,
    STATE(156), 1,
      sym__expansion_body,
    STATE(207), 1,
      sym_line_continuation,
  [4610] = 5,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      sym__non_newline_whitespace,
    ACTIONS(777), 1,
      anon_sym_LF,
    STATE(187), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(208), 1,
      sym_line_continuation,
  [4626] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(332), 1,
      aux_sym_path_token3,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(330), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4640] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(779), 1,
      anon_sym_LF,
    STATE(210), 1,
      sym_line_continuation,
    ACTIONS(781), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4654] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym_path_token3,
    STATE(211), 1,
      sym_line_continuation,
    ACTIONS(407), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4668] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      aux_sym_path_token3,
    STATE(212), 1,
      sym_line_continuation,
    ACTIONS(681), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4682] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
    ACTIONS(785), 1,
      sym_variable,
    STATE(213), 1,
      sym_line_continuation,
    STATE(219), 1,
      sym__expansion_body,
  [4698] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
    ACTIONS(785), 1,
      sym_variable,
    STATE(211), 1,
      sym__expansion_body,
    STATE(214), 1,
      sym_line_continuation,
  [4714] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(787), 1,
      anon_sym_LF,
    STATE(215), 1,
      sym_line_continuation,
    ACTIONS(789), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4728] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    ACTIONS(793), 1,
      sym_variable,
    STATE(216), 1,
      sym_line_continuation,
    STATE(223), 1,
      sym__expansion_body,
  [4744] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(47), 1,
      sym_heredoc_content,
    ACTIONS(795), 1,
      sym_heredoc_end,
    STATE(217), 1,
      sym_line_continuation,
    STATE(236), 1,
      aux_sym_heredoc_block_repeat1,
  [4760] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      aux_sym_path_token3,
    STATE(218), 1,
      sym_line_continuation,
    ACTIONS(393), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4774] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(521), 1,
      aux_sym_path_token3,
    STATE(219), 1,
      sym_line_continuation,
    ACTIONS(519), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4788] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      aux_sym_path_token3,
    STATE(220), 1,
      sym_line_continuation,
    ACTIONS(437), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4802] = 5,
    ACTIONS(723), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(797), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(178), 1,
      aux_sym_shell_command_repeat2,
    STATE(221), 1,
      sym_line_continuation,
  [4818] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(222), 1,
      sym_line_continuation,
    ACTIONS(519), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4830] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(223), 1,
      sym_line_continuation,
    ACTIONS(521), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4844] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(799), 1,
      anon_sym_LBRACE,
    ACTIONS(801), 1,
      sym_variable,
    STATE(133), 1,
      sym__expansion_body,
    STATE(224), 1,
      sym_line_continuation,
  [4860] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(225), 1,
      sym_line_continuation,
    ACTIONS(407), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4872] = 5,
    ACTIONS(723), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(797), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(177), 1,
      aux_sym_shell_command_repeat2,
    STATE(226), 1,
      sym_line_continuation,
  [4888] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(708), 1,
      anon_sym_COMMA2,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_json_string_array_repeat1,
    STATE(227), 1,
      sym_line_continuation,
  [4904] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(228), 1,
      sym_line_continuation,
    ACTIONS(393), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4916] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(805), 1,
      anon_sym_LBRACE,
    ACTIONS(807), 1,
      sym_variable,
    STATE(92), 1,
      sym__expansion_body,
    STATE(229), 1,
      sym_line_continuation,
  [4932] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(230), 1,
      sym_line_continuation,
    ACTIONS(437), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4944] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(231), 1,
      sym_line_continuation,
    ACTIONS(330), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [4956] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(330), 1,
      anon_sym_LF,
    STATE(232), 1,
      sym_line_continuation,
    ACTIONS(332), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4970] = 5,
    ACTIONS(723), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(809), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_required_line_continuation,
    STATE(226), 1,
      aux_sym_shell_command_repeat2,
    STATE(233), 1,
      sym_line_continuation,
  [4986] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(805), 1,
      anon_sym_LBRACE,
    ACTIONS(807), 1,
      sym_variable,
    STATE(84), 1,
      sym__expansion_body,
    STATE(234), 1,
      sym_line_continuation,
  [5002] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(811), 1,
      anon_sym_RBRACK,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    STATE(227), 1,
      sym_json_string,
    STATE(235), 1,
      sym_line_continuation,
  [5018] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(815), 1,
      sym_heredoc_content,
    ACTIONS(818), 1,
      sym_heredoc_end,
    STATE(236), 2,
      sym_line_continuation,
      aux_sym_heredoc_block_repeat1,
  [5032] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(820), 1,
      anon_sym_LF,
    ACTIONS(822), 1,
      aux_sym__env_key_token1,
    STATE(237), 1,
      sym_line_continuation,
  [5045] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_LF,
    ACTIONS(826), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_line_continuation,
  [5058] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      anon_sym_LF,
    ACTIONS(830), 1,
      aux_sym_from_instruction_token2,
    STATE(239), 1,
      sym_line_continuation,
  [5071] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      anon_sym_LF,
    ACTIONS(834), 1,
      aux_sym_from_instruction_token2,
    STATE(240), 1,
      sym_line_continuation,
  [5084] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(241), 1,
      sym_line_continuation,
    ACTIONS(605), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5095] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(242), 1,
      sym_line_continuation,
    ACTIONS(818), 2,
      sym_heredoc_content,
      sym_heredoc_end,
  [5106] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(411), 1,
      anon_sym_LF,
    ACTIONS(417), 1,
      sym__non_newline_whitespace,
    STATE(243), 1,
      sym_line_continuation,
  [5119] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_LF,
    ACTIONS(632), 1,
      aux_sym__env_key_token1,
    STATE(244), 1,
      sym_line_continuation,
  [5132] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      aux_sym_param_token1,
    ACTIONS(838), 1,
      anon_sym_mount,
    STATE(245), 1,
      sym_line_continuation,
  [5145] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      aux_sym_mount_param_param_token1,
    STATE(29), 1,
      sym_mount_param_param,
    STATE(246), 1,
      sym_line_continuation,
  [5158] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    STATE(247), 1,
      sym_line_continuation,
    STATE(279), 1,
      sym_json_string_array,
  [5171] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 1,
      aux_sym__env_key_token1,
    STATE(248), 1,
      sym_line_continuation,
  [5184] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(659), 1,
      anon_sym_LF,
    ACTIONS(661), 1,
      aux_sym__env_key_token1,
    STATE(249), 1,
      sym_line_continuation,
  [5197] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(842), 1,
      anon_sym_LF,
    ACTIONS(844), 1,
      sym__non_newline_whitespace,
    STATE(250), 1,
      sym_line_continuation,
  [5210] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      anon_sym_LF,
    ACTIONS(848), 1,
      aux_sym_from_instruction_token2,
    STATE(251), 1,
      sym_line_continuation,
  [5223] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      sym__non_newline_whitespace,
    ACTIONS(850), 1,
      anon_sym_LF,
    STATE(252), 1,
      sym_line_continuation,
  [5236] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_LF,
    ACTIONS(677), 1,
      aux_sym__env_key_token1,
    STATE(253), 1,
      sym_line_continuation,
  [5249] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    STATE(254), 1,
      sym_line_continuation,
    ACTIONS(852), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [5260] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(854), 1,
      anon_sym_LF,
    ACTIONS(856), 1,
      anon_sym_COLON,
    STATE(255), 1,
      sym_line_continuation,
  [5273] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(256), 1,
      sym_line_continuation,
    ACTIONS(285), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [5284] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(257), 1,
      sym_line_continuation,
    ACTIONS(775), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5295] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    STATE(257), 1,
      sym_json_string,
    STATE(258), 1,
      sym_line_continuation,
  [5308] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      anon_sym_EQ,
    ACTIONS(860), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(259), 1,
      sym_line_continuation,
  [5321] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(260), 1,
      sym_line_continuation,
    ACTIONS(862), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5332] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      aux_sym_image_name_token1,
    STATE(261), 1,
      sym_line_continuation,
  [5345] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(864), 1,
      anon_sym_LF,
    ACTIONS(866), 1,
      aux_sym_from_instruction_token2,
    STATE(262), 1,
      sym_line_continuation,
  [5358] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      aux_sym_mount_param_param_token1,
    STATE(25), 1,
      sym_mount_param_param,
    STATE(263), 1,
      sym_line_continuation,
  [5371] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(264), 1,
      sym_line_continuation,
    ACTIONS(868), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [5382] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(870), 1,
      sym__non_newline_whitespace,
    STATE(265), 1,
      sym_line_continuation,
  [5395] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      sym__non_newline_whitespace,
    ACTIONS(872), 1,
      anon_sym_LF,
    STATE(266), 1,
      sym_line_continuation,
  [5408] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      sym__non_newline_whitespace,
    ACTIONS(874), 1,
      anon_sym_LF,
    STATE(267), 1,
      sym_line_continuation,
  [5421] = 4,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(876), 1,
      anon_sym_LF,
    ACTIONS(878), 1,
      aux_sym__env_key_token1,
    STATE(268), 1,
      sym_line_continuation,
  [5434] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      sym__non_newline_whitespace,
    STATE(269), 1,
      sym_line_continuation,
  [5444] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(880), 1,
      aux_sym_mount_param_param_token1,
    STATE(270), 1,
      sym_line_continuation,
  [5454] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(882), 1,
      anon_sym_LF,
    STATE(271), 1,
      sym_line_continuation,
  [5464] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      anon_sym_LF,
    STATE(272), 1,
      sym_line_continuation,
  [5474] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(417), 1,
      sym__non_newline_whitespace,
    STATE(273), 1,
      sym_line_continuation,
  [5484] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(886), 1,
      anon_sym_LF,
    STATE(274), 1,
      sym_line_continuation,
  [5494] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(888), 1,
      anon_sym_LF,
    STATE(275), 1,
      sym_line_continuation,
  [5504] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(890), 1,
      anon_sym_LF,
    STATE(276), 1,
      sym_line_continuation,
  [5514] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(892), 1,
      anon_sym_LF,
    STATE(277), 1,
      sym_line_continuation,
  [5524] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(894), 1,
      anon_sym_LF,
    STATE(278), 1,
      sym_line_continuation,
  [5534] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(896), 1,
      anon_sym_LF,
    STATE(279), 1,
      sym_line_continuation,
  [5544] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(898), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_line_continuation,
  [5554] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(900), 1,
      anon_sym_LF,
    STATE(281), 1,
      sym_line_continuation,
  [5564] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(902), 1,
      anon_sym_LF,
    STATE(282), 1,
      sym_line_continuation,
  [5574] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(904), 1,
      anon_sym_LF,
    STATE(283), 1,
      sym_line_continuation,
  [5584] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(906), 1,
      anon_sym_LF,
    STATE(284), 1,
      sym_line_continuation,
  [5594] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(908), 1,
      anon_sym_LF,
    STATE(285), 1,
      sym_line_continuation,
  [5604] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(910), 1,
      anon_sym_LF,
    STATE(286), 1,
      sym_line_continuation,
  [5614] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(912), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(287), 1,
      sym_line_continuation,
  [5624] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(914), 1,
      aux_sym__expansion_body_token1,
    STATE(288), 1,
      sym_line_continuation,
  [5634] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(916), 1,
      anon_sym_EQ,
    STATE(289), 1,
      sym_line_continuation,
  [5644] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(918), 1,
      aux_sym_param_token1,
    STATE(290), 1,
      sym_line_continuation,
  [5654] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(920), 1,
      anon_sym_EQ,
    STATE(291), 1,
      sym_line_continuation,
  [5664] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(922), 1,
      anon_sym_LF,
    STATE(292), 1,
      sym_line_continuation,
  [5674] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(924), 1,
      anon_sym_LF,
    STATE(293), 1,
      sym_line_continuation,
  [5684] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(926), 1,
      anon_sym_LF,
    STATE(294), 1,
      sym_line_continuation,
  [5694] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(630), 1,
      anon_sym_EQ,
    STATE(295), 1,
      sym_line_continuation,
  [5704] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(928), 1,
      anon_sym_LF,
    STATE(296), 1,
      sym_line_continuation,
  [5714] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      anon_sym_EQ,
    STATE(297), 1,
      sym_line_continuation,
  [5724] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(930), 1,
      ts_builtin_sym_end,
    STATE(298), 1,
      sym_line_continuation,
  [5734] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(932), 1,
      anon_sym_LF,
    STATE(299), 1,
      sym_line_continuation,
  [5744] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(934), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(300), 1,
      sym_line_continuation,
  [5754] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(936), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(301), 1,
      sym_line_continuation,
  [5764] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    STATE(302), 1,
      sym_line_continuation,
  [5774] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(940), 1,
      aux_sym_param_token2,
    STATE(303), 1,
      sym_line_continuation,
  [5784] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      anon_sym_EQ,
    STATE(304), 1,
      sym_line_continuation,
  [5794] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      anon_sym_EQ,
    STATE(305), 1,
      sym_line_continuation,
  [5804] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(942), 1,
      aux_sym_arg_instruction_token2,
    STATE(306), 1,
      sym_line_continuation,
  [5814] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(944), 1,
      anon_sym_LF,
    STATE(307), 1,
      sym_line_continuation,
  [5824] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(946), 1,
      anon_sym_LF,
    STATE(308), 1,
      sym_line_continuation,
  [5834] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(948), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      sym_line_continuation,
  [5844] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(950), 1,
      aux_sym_param_token2,
    STATE(310), 1,
      sym_line_continuation,
  [5854] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(952), 1,
      aux_sym_param_token1,
    STATE(311), 1,
      sym_line_continuation,
  [5864] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(954), 1,
      anon_sym_LF,
    STATE(312), 1,
      sym_line_continuation,
  [5874] = 3,
    ACTIONS(956), 1,
      anon_sym_LF,
    ACTIONS(958), 1,
      anon_sym_BSLASH_LF,
    STATE(313), 1,
      sym_line_continuation,
  [5884] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(960), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      sym_line_continuation,
  [5894] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(962), 1,
      aux_sym_param_token2,
    STATE(315), 1,
      sym_line_continuation,
  [5904] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(964), 1,
      anon_sym_LF,
    STATE(316), 1,
      sym_line_continuation,
  [5914] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(966), 1,
      anon_sym_LF,
    STATE(317), 1,
      sym_line_continuation,
  [5924] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      sym_line_continuation,
  [5934] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(970), 1,
      anon_sym_EQ,
    STATE(319), 1,
      sym_line_continuation,
  [5944] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(972), 1,
      anon_sym_LF,
    STATE(320), 1,
      sym_line_continuation,
  [5954] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      sym_line_continuation,
  [5964] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(976), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_line_continuation,
  [5974] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(978), 1,
      aux_sym_param_token2,
    STATE(323), 1,
      sym_line_continuation,
  [5984] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(980), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      sym_line_continuation,
  [5994] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(982), 1,
      anon_sym_LF,
    STATE(325), 1,
      sym_line_continuation,
  [6004] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(984), 1,
      anon_sym_LF,
    STATE(326), 1,
      sym_line_continuation,
  [6014] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(986), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      sym_line_continuation,
  [6024] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(988), 1,
      anon_sym_LF,
    STATE(328), 1,
      sym_line_continuation,
  [6034] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      sym_line_continuation,
  [6044] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(659), 1,
      anon_sym_EQ,
    STATE(330), 1,
      sym_line_continuation,
  [6054] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(992), 1,
      anon_sym_RBRACE,
    STATE(331), 1,
      sym_line_continuation,
  [6064] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      anon_sym_EQ,
    STATE(332), 1,
      sym_line_continuation,
  [6074] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(994), 1,
      anon_sym_RBRACE,
    STATE(333), 1,
      sym_line_continuation,
  [6084] = 3,
    ACTIONS(716), 1,
      anon_sym_LF,
    ACTIONS(996), 1,
      anon_sym_BSLASH_LF,
    STATE(334), 1,
      sym_line_continuation,
  [6094] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(998), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      sym_line_continuation,
  [6104] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      sym_line_continuation,
  [6114] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1002), 1,
      aux_sym__expansion_body_token1,
    STATE(337), 1,
      sym_line_continuation,
  [6124] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1004), 1,
      anon_sym_EQ,
    STATE(338), 1,
      sym_line_continuation,
  [6134] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1006), 1,
      aux_sym__expansion_body_token1,
    STATE(339), 1,
      sym_line_continuation,
  [6144] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1008), 1,
      anon_sym_EQ,
    STATE(340), 1,
      sym_line_continuation,
  [6154] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1010), 1,
      aux_sym__expansion_body_token1,
    STATE(341), 1,
      sym_line_continuation,
  [6164] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1012), 1,
      anon_sym_EQ,
    STATE(342), 1,
      sym_line_continuation,
  [6174] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1014), 1,
      aux_sym__expansion_body_token1,
    STATE(343), 1,
      sym_line_continuation,
  [6184] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1016), 1,
      aux_sym__expansion_body_token1,
    STATE(344), 1,
      sym_line_continuation,
  [6194] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1018), 1,
      aux_sym__expansion_body_token1,
    STATE(345), 1,
      sym_line_continuation,
  [6204] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1020), 1,
      aux_sym__expansion_body_token1,
    STATE(346), 1,
      sym_line_continuation,
  [6214] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1022), 1,
      aux_sym__expansion_body_token1,
    STATE(347), 1,
      sym_line_continuation,
  [6224] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1024), 1,
      aux_sym__expansion_body_token1,
    STATE(348), 1,
      sym_line_continuation,
  [6234] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1026), 1,
      aux_sym__expansion_body_token1,
    STATE(349), 1,
      sym_line_continuation,
  [6244] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1028), 1,
      aux_sym__expansion_body_token1,
    STATE(350), 1,
      sym_line_continuation,
  [6254] = 3,
    ACTIONS(137), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1030), 1,
      aux_sym__expansion_body_token1,
    STATE(351), 1,
      sym_line_continuation,
  [6264] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(1032), 1,
      aux_sym_param_token1,
    STATE(352), 1,
      sym_line_continuation,
  [6274] = 1,
    ACTIONS(1034), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 212,
  [SMALL_STATE(5)] = 310,
  [SMALL_STATE(6)] = 342,
  [SMALL_STATE(7)] = 393,
  [SMALL_STATE(8)] = 444,
  [SMALL_STATE(9)] = 485,
  [SMALL_STATE(10)] = 526,
  [SMALL_STATE(11)] = 566,
  [SMALL_STATE(12)] = 600,
  [SMALL_STATE(13)] = 634,
  [SMALL_STATE(14)] = 668,
  [SMALL_STATE(15)] = 702,
  [SMALL_STATE(16)] = 728,
  [SMALL_STATE(17)] = 762,
  [SMALL_STATE(18)] = 796,
  [SMALL_STATE(19)] = 821,
  [SMALL_STATE(20)] = 858,
  [SMALL_STATE(21)] = 895,
  [SMALL_STATE(22)] = 932,
  [SMALL_STATE(23)] = 955,
  [SMALL_STATE(24)] = 986,
  [SMALL_STATE(25)] = 1015,
  [SMALL_STATE(26)] = 1040,
  [SMALL_STATE(27)] = 1077,
  [SMALL_STATE(28)] = 1105,
  [SMALL_STATE(29)] = 1125,
  [SMALL_STATE(30)] = 1145,
  [SMALL_STATE(31)] = 1171,
  [SMALL_STATE(32)] = 1201,
  [SMALL_STATE(33)] = 1231,
  [SMALL_STATE(34)] = 1258,
  [SMALL_STATE(35)] = 1287,
  [SMALL_STATE(36)] = 1316,
  [SMALL_STATE(37)] = 1345,
  [SMALL_STATE(38)] = 1372,
  [SMALL_STATE(39)] = 1399,
  [SMALL_STATE(40)] = 1428,
  [SMALL_STATE(41)] = 1457,
  [SMALL_STATE(42)] = 1476,
  [SMALL_STATE(43)] = 1503,
  [SMALL_STATE(44)] = 1532,
  [SMALL_STATE(45)] = 1551,
  [SMALL_STATE(46)] = 1580,
  [SMALL_STATE(47)] = 1609,
  [SMALL_STATE(48)] = 1636,
  [SMALL_STATE(49)] = 1665,
  [SMALL_STATE(50)] = 1694,
  [SMALL_STATE(51)] = 1723,
  [SMALL_STATE(52)] = 1741,
  [SMALL_STATE(53)] = 1763,
  [SMALL_STATE(54)] = 1791,
  [SMALL_STATE(55)] = 1817,
  [SMALL_STATE(56)] = 1839,
  [SMALL_STATE(57)] = 1867,
  [SMALL_STATE(58)] = 1895,
  [SMALL_STATE(59)] = 1921,
  [SMALL_STATE(60)] = 1947,
  [SMALL_STATE(61)] = 1965,
  [SMALL_STATE(62)] = 1985,
  [SMALL_STATE(63)] = 2003,
  [SMALL_STATE(64)] = 2031,
  [SMALL_STATE(65)] = 2059,
  [SMALL_STATE(66)] = 2087,
  [SMALL_STATE(67)] = 2115,
  [SMALL_STATE(68)] = 2141,
  [SMALL_STATE(69)] = 2169,
  [SMALL_STATE(70)] = 2187,
  [SMALL_STATE(71)] = 2215,
  [SMALL_STATE(72)] = 2243,
  [SMALL_STATE(73)] = 2271,
  [SMALL_STATE(74)] = 2299,
  [SMALL_STATE(75)] = 2325,
  [SMALL_STATE(76)] = 2343,
  [SMALL_STATE(77)] = 2368,
  [SMALL_STATE(78)] = 2393,
  [SMALL_STATE(79)] = 2418,
  [SMALL_STATE(80)] = 2441,
  [SMALL_STATE(81)] = 2464,
  [SMALL_STATE(82)] = 2481,
  [SMALL_STATE(83)] = 2506,
  [SMALL_STATE(84)] = 2531,
  [SMALL_STATE(85)] = 2548,
  [SMALL_STATE(86)] = 2573,
  [SMALL_STATE(87)] = 2598,
  [SMALL_STATE(88)] = 2615,
  [SMALL_STATE(89)] = 2640,
  [SMALL_STATE(90)] = 2665,
  [SMALL_STATE(91)] = 2682,
  [SMALL_STATE(92)] = 2699,
  [SMALL_STATE(93)] = 2716,
  [SMALL_STATE(94)] = 2739,
  [SMALL_STATE(95)] = 2756,
  [SMALL_STATE(96)] = 2779,
  [SMALL_STATE(97)] = 2800,
  [SMALL_STATE(98)] = 2823,
  [SMALL_STATE(99)] = 2840,
  [SMALL_STATE(100)] = 2857,
  [SMALL_STATE(101)] = 2882,
  [SMALL_STATE(102)] = 2907,
  [SMALL_STATE(103)] = 2923,
  [SMALL_STATE(104)] = 2939,
  [SMALL_STATE(105)] = 2961,
  [SMALL_STATE(106)] = 2983,
  [SMALL_STATE(107)] = 3003,
  [SMALL_STATE(108)] = 3023,
  [SMALL_STATE(109)] = 3039,
  [SMALL_STATE(110)] = 3055,
  [SMALL_STATE(111)] = 3071,
  [SMALL_STATE(112)] = 3087,
  [SMALL_STATE(113)] = 3107,
  [SMALL_STATE(114)] = 3123,
  [SMALL_STATE(115)] = 3145,
  [SMALL_STATE(116)] = 3161,
  [SMALL_STATE(117)] = 3183,
  [SMALL_STATE(118)] = 3203,
  [SMALL_STATE(119)] = 3219,
  [SMALL_STATE(120)] = 3235,
  [SMALL_STATE(121)] = 3251,
  [SMALL_STATE(122)] = 3273,
  [SMALL_STATE(123)] = 3295,
  [SMALL_STATE(124)] = 3315,
  [SMALL_STATE(125)] = 3331,
  [SMALL_STATE(126)] = 3347,
  [SMALL_STATE(127)] = 3367,
  [SMALL_STATE(128)] = 3385,
  [SMALL_STATE(129)] = 3407,
  [SMALL_STATE(130)] = 3425,
  [SMALL_STATE(131)] = 3445,
  [SMALL_STATE(132)] = 3461,
  [SMALL_STATE(133)] = 3481,
  [SMALL_STATE(134)] = 3497,
  [SMALL_STATE(135)] = 3513,
  [SMALL_STATE(136)] = 3535,
  [SMALL_STATE(137)] = 3551,
  [SMALL_STATE(138)] = 3566,
  [SMALL_STATE(139)] = 3581,
  [SMALL_STATE(140)] = 3596,
  [SMALL_STATE(141)] = 3611,
  [SMALL_STATE(142)] = 3626,
  [SMALL_STATE(143)] = 3641,
  [SMALL_STATE(144)] = 3654,
  [SMALL_STATE(145)] = 3667,
  [SMALL_STATE(146)] = 3682,
  [SMALL_STATE(147)] = 3697,
  [SMALL_STATE(148)] = 3716,
  [SMALL_STATE(149)] = 3729,
  [SMALL_STATE(150)] = 3744,
  [SMALL_STATE(151)] = 3759,
  [SMALL_STATE(152)] = 3772,
  [SMALL_STATE(153)] = 3785,
  [SMALL_STATE(154)] = 3800,
  [SMALL_STATE(155)] = 3815,
  [SMALL_STATE(156)] = 3830,
  [SMALL_STATE(157)] = 3845,
  [SMALL_STATE(158)] = 3862,
  [SMALL_STATE(159)] = 3877,
  [SMALL_STATE(160)] = 3892,
  [SMALL_STATE(161)] = 3907,
  [SMALL_STATE(162)] = 3922,
  [SMALL_STATE(163)] = 3941,
  [SMALL_STATE(164)] = 3956,
  [SMALL_STATE(165)] = 3975,
  [SMALL_STATE(166)] = 3988,
  [SMALL_STATE(167)] = 4005,
  [SMALL_STATE(168)] = 4022,
  [SMALL_STATE(169)] = 4035,
  [SMALL_STATE(170)] = 4050,
  [SMALL_STATE(171)] = 4069,
  [SMALL_STATE(172)] = 4088,
  [SMALL_STATE(173)] = 4102,
  [SMALL_STATE(174)] = 4116,
  [SMALL_STATE(175)] = 4132,
  [SMALL_STATE(176)] = 4148,
  [SMALL_STATE(177)] = 4164,
  [SMALL_STATE(178)] = 4178,
  [SMALL_STATE(179)] = 4194,
  [SMALL_STATE(180)] = 4210,
  [SMALL_STATE(181)] = 4226,
  [SMALL_STATE(182)] = 4238,
  [SMALL_STATE(183)] = 4254,
  [SMALL_STATE(184)] = 4268,
  [SMALL_STATE(185)] = 4280,
  [SMALL_STATE(186)] = 4292,
  [SMALL_STATE(187)] = 4304,
  [SMALL_STATE(188)] = 4318,
  [SMALL_STATE(189)] = 4332,
  [SMALL_STATE(190)] = 4344,
  [SMALL_STATE(191)] = 4356,
  [SMALL_STATE(192)] = 4372,
  [SMALL_STATE(193)] = 4386,
  [SMALL_STATE(194)] = 4400,
  [SMALL_STATE(195)] = 4414,
  [SMALL_STATE(196)] = 4426,
  [SMALL_STATE(197)] = 4442,
  [SMALL_STATE(198)] = 4458,
  [SMALL_STATE(199)] = 4474,
  [SMALL_STATE(200)] = 4490,
  [SMALL_STATE(201)] = 4506,
  [SMALL_STATE(202)] = 4522,
  [SMALL_STATE(203)] = 4536,
  [SMALL_STATE(204)] = 4548,
  [SMALL_STATE(205)] = 4564,
  [SMALL_STATE(206)] = 4580,
  [SMALL_STATE(207)] = 4594,
  [SMALL_STATE(208)] = 4610,
  [SMALL_STATE(209)] = 4626,
  [SMALL_STATE(210)] = 4640,
  [SMALL_STATE(211)] = 4654,
  [SMALL_STATE(212)] = 4668,
  [SMALL_STATE(213)] = 4682,
  [SMALL_STATE(214)] = 4698,
  [SMALL_STATE(215)] = 4714,
  [SMALL_STATE(216)] = 4728,
  [SMALL_STATE(217)] = 4744,
  [SMALL_STATE(218)] = 4760,
  [SMALL_STATE(219)] = 4774,
  [SMALL_STATE(220)] = 4788,
  [SMALL_STATE(221)] = 4802,
  [SMALL_STATE(222)] = 4818,
  [SMALL_STATE(223)] = 4830,
  [SMALL_STATE(224)] = 4844,
  [SMALL_STATE(225)] = 4860,
  [SMALL_STATE(226)] = 4872,
  [SMALL_STATE(227)] = 4888,
  [SMALL_STATE(228)] = 4904,
  [SMALL_STATE(229)] = 4916,
  [SMALL_STATE(230)] = 4932,
  [SMALL_STATE(231)] = 4944,
  [SMALL_STATE(232)] = 4956,
  [SMALL_STATE(233)] = 4970,
  [SMALL_STATE(234)] = 4986,
  [SMALL_STATE(235)] = 5002,
  [SMALL_STATE(236)] = 5018,
  [SMALL_STATE(237)] = 5032,
  [SMALL_STATE(238)] = 5045,
  [SMALL_STATE(239)] = 5058,
  [SMALL_STATE(240)] = 5071,
  [SMALL_STATE(241)] = 5084,
  [SMALL_STATE(242)] = 5095,
  [SMALL_STATE(243)] = 5106,
  [SMALL_STATE(244)] = 5119,
  [SMALL_STATE(245)] = 5132,
  [SMALL_STATE(246)] = 5145,
  [SMALL_STATE(247)] = 5158,
  [SMALL_STATE(248)] = 5171,
  [SMALL_STATE(249)] = 5184,
  [SMALL_STATE(250)] = 5197,
  [SMALL_STATE(251)] = 5210,
  [SMALL_STATE(252)] = 5223,
  [SMALL_STATE(253)] = 5236,
  [SMALL_STATE(254)] = 5249,
  [SMALL_STATE(255)] = 5260,
  [SMALL_STATE(256)] = 5273,
  [SMALL_STATE(257)] = 5284,
  [SMALL_STATE(258)] = 5295,
  [SMALL_STATE(259)] = 5308,
  [SMALL_STATE(260)] = 5321,
  [SMALL_STATE(261)] = 5332,
  [SMALL_STATE(262)] = 5345,
  [SMALL_STATE(263)] = 5358,
  [SMALL_STATE(264)] = 5371,
  [SMALL_STATE(265)] = 5382,
  [SMALL_STATE(266)] = 5395,
  [SMALL_STATE(267)] = 5408,
  [SMALL_STATE(268)] = 5421,
  [SMALL_STATE(269)] = 5434,
  [SMALL_STATE(270)] = 5444,
  [SMALL_STATE(271)] = 5454,
  [SMALL_STATE(272)] = 5464,
  [SMALL_STATE(273)] = 5474,
  [SMALL_STATE(274)] = 5484,
  [SMALL_STATE(275)] = 5494,
  [SMALL_STATE(276)] = 5504,
  [SMALL_STATE(277)] = 5514,
  [SMALL_STATE(278)] = 5524,
  [SMALL_STATE(279)] = 5534,
  [SMALL_STATE(280)] = 5544,
  [SMALL_STATE(281)] = 5554,
  [SMALL_STATE(282)] = 5564,
  [SMALL_STATE(283)] = 5574,
  [SMALL_STATE(284)] = 5584,
  [SMALL_STATE(285)] = 5594,
  [SMALL_STATE(286)] = 5604,
  [SMALL_STATE(287)] = 5614,
  [SMALL_STATE(288)] = 5624,
  [SMALL_STATE(289)] = 5634,
  [SMALL_STATE(290)] = 5644,
  [SMALL_STATE(291)] = 5654,
  [SMALL_STATE(292)] = 5664,
  [SMALL_STATE(293)] = 5674,
  [SMALL_STATE(294)] = 5684,
  [SMALL_STATE(295)] = 5694,
  [SMALL_STATE(296)] = 5704,
  [SMALL_STATE(297)] = 5714,
  [SMALL_STATE(298)] = 5724,
  [SMALL_STATE(299)] = 5734,
  [SMALL_STATE(300)] = 5744,
  [SMALL_STATE(301)] = 5754,
  [SMALL_STATE(302)] = 5764,
  [SMALL_STATE(303)] = 5774,
  [SMALL_STATE(304)] = 5784,
  [SMALL_STATE(305)] = 5794,
  [SMALL_STATE(306)] = 5804,
  [SMALL_STATE(307)] = 5814,
  [SMALL_STATE(308)] = 5824,
  [SMALL_STATE(309)] = 5834,
  [SMALL_STATE(310)] = 5844,
  [SMALL_STATE(311)] = 5854,
  [SMALL_STATE(312)] = 5864,
  [SMALL_STATE(313)] = 5874,
  [SMALL_STATE(314)] = 5884,
  [SMALL_STATE(315)] = 5894,
  [SMALL_STATE(316)] = 5904,
  [SMALL_STATE(317)] = 5914,
  [SMALL_STATE(318)] = 5924,
  [SMALL_STATE(319)] = 5934,
  [SMALL_STATE(320)] = 5944,
  [SMALL_STATE(321)] = 5954,
  [SMALL_STATE(322)] = 5964,
  [SMALL_STATE(323)] = 5974,
  [SMALL_STATE(324)] = 5984,
  [SMALL_STATE(325)] = 5994,
  [SMALL_STATE(326)] = 6004,
  [SMALL_STATE(327)] = 6014,
  [SMALL_STATE(328)] = 6024,
  [SMALL_STATE(329)] = 6034,
  [SMALL_STATE(330)] = 6044,
  [SMALL_STATE(331)] = 6054,
  [SMALL_STATE(332)] = 6064,
  [SMALL_STATE(333)] = 6074,
  [SMALL_STATE(334)] = 6084,
  [SMALL_STATE(335)] = 6094,
  [SMALL_STATE(336)] = 6104,
  [SMALL_STATE(337)] = 6114,
  [SMALL_STATE(338)] = 6124,
  [SMALL_STATE(339)] = 6134,
  [SMALL_STATE(340)] = 6144,
  [SMALL_STATE(341)] = 6154,
  [SMALL_STATE(342)] = 6164,
  [SMALL_STATE(343)] = 6174,
  [SMALL_STATE(344)] = 6184,
  [SMALL_STATE(345)] = 6194,
  [SMALL_STATE(346)] = 6204,
  [SMALL_STATE(347)] = 6214,
  [SMALL_STATE(348)] = 6224,
  [SMALL_STATE(349)] = 6234,
  [SMALL_STATE(350)] = 6244,
  [SMALL_STATE(351)] = 6254,
  [SMALL_STATE(352)] = 6264,
  [SMALL_STATE(353)] = 6274,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(300),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(308),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(307),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(245),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(246),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(179),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(75),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(234),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(94),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(287),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(176),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(136),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(191),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(110),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(224),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(119),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(119),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(143),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(201),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(280),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(49),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(132),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(352),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(143),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(201),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(77),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(77),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(213),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(273),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(61),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(61),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(180),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(159),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(163),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(207),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(183),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(214),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(203),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(197),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(174),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(195),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(212),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(199),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(216),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(127),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_line, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_required_line_continuation, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(150),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(150),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(297),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(188),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(311),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(99),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(128),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(258),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2), SHIFT_REPEAT(308),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [930] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
