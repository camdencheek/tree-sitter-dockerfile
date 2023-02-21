#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 322
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
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
  anon_sym_LBRACK = 58,
  anon_sym_COMMA2 = 59,
  anon_sym_RBRACK = 60,
  aux_sym_shell_fragment_token1 = 61,
  aux_sym_shell_fragment_token2 = 62,
  aux_sym_shell_fragment_token3 = 63,
  anon_sym_BSLASH_LF = 64,
  anon_sym_POUND = 65,
  anon_sym_DQUOTE = 66,
  aux_sym_double_quoted_string_token1 = 67,
  aux_sym_unquoted_string_token1 = 68,
  anon_sym_BSLASH = 69,
  sym_escape_sequence = 70,
  sym__non_newline_whitespace = 71,
  sym_comment = 72,
  sym_source_file = 73,
  sym__instruction = 74,
  sym_from_instruction = 75,
  sym_run_instruction = 76,
  sym_cmd_instruction = 77,
  sym_label_instruction = 78,
  sym_expose_instruction = 79,
  sym_env_instruction = 80,
  sym_add_instruction = 81,
  sym_copy_instruction = 82,
  sym_entrypoint_instruction = 83,
  sym_volume_instruction = 84,
  sym_user_instruction = 85,
  sym__user_name_or_group = 86,
  aux_sym__immediate_user_name_or_group = 87,
  sym__immediate_user_name_or_group_fragment = 88,
  sym_workdir_instruction = 89,
  sym_arg_instruction = 90,
  sym_onbuild_instruction = 91,
  sym_stopsignal_instruction = 92,
  sym__stopsignal_value = 93,
  sym_healthcheck_instruction = 94,
  sym_shell_instruction = 95,
  sym_maintainer_instruction = 96,
  sym_cross_build_instruction = 97,
  sym_path = 98,
  sym_expansion = 99,
  sym__immediate_expansion = 100,
  sym__imm_expansion = 101,
  sym__expansion_body = 102,
  sym_env_pair = 103,
  sym__spaced_env_pair = 104,
  sym__env_key = 105,
  sym_expose_port = 106,
  sym_label_pair = 107,
  sym_image_spec = 108,
  sym_image_name = 109,
  sym_image_tag = 110,
  sym_image_digest = 111,
  sym_param = 112,
  sym_mount_param = 113,
  sym_mount_param_param = 114,
  sym_image_alias = 115,
  sym_string_array = 116,
  sym_shell_command = 117,
  sym_shell_fragment = 118,
  sym_line_continuation = 119,
  sym_required_line_continuation = 120,
  sym__comment_line = 121,
  sym__anon_comment = 122,
  sym_double_quoted_string = 123,
  sym_unquoted_string = 124,
  aux_sym_source_file_repeat1 = 125,
  aux_sym_run_instruction_repeat1 = 126,
  aux_sym_label_instruction_repeat1 = 127,
  aux_sym_expose_instruction_repeat1 = 128,
  aux_sym_env_instruction_repeat1 = 129,
  aux_sym_add_instruction_repeat1 = 130,
  aux_sym_volume_instruction_repeat1 = 131,
  aux_sym__user_name_or_group_repeat1 = 132,
  aux_sym__stopsignal_value_repeat1 = 133,
  aux_sym_healthcheck_instruction_repeat1 = 134,
  aux_sym_path_repeat1 = 135,
  aux_sym_image_name_repeat1 = 136,
  aux_sym_image_tag_repeat1 = 137,
  aux_sym_image_digest_repeat1 = 138,
  aux_sym_mount_param_repeat1 = 139,
  aux_sym_image_alias_repeat1 = 140,
  aux_sym_string_array_repeat1 = 141,
  aux_sym_shell_command_repeat1 = 142,
  aux_sym_shell_command_repeat2 = 143,
  aux_sym_shell_fragment_repeat1 = 144,
  aux_sym_double_quoted_string_repeat1 = 145,
  aux_sym_unquoted_string_repeat1 = 146,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [anon_sym_BSLASH_LF] = "\\\n",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
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
  [sym_string_array] = "string_array",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "line_continuation",
  [sym__comment_line] = "_comment_line",
  [sym__anon_comment] = "comment",
  [sym_double_quoted_string] = "double_quoted_string",
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
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
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
  [sym_string_array] = sym_string_array,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_line_continuation,
  [sym__comment_line] = sym__comment_line,
  [sym__anon_comment] = sym_comment,
  [sym_double_quoted_string] = sym_double_quoted_string,
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
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_command_repeat2] = aux_sym_shell_command_repeat2,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
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
  [sym_string_array] = {
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
  [sym_double_quoted_string] = {
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
  [aux_sym_string_array_repeat1] = {
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
  [aux_sym_double_quoted_string_repeat1] = {
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
  [27] = 21,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 36,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 35,
  [48] = 48,
  [49] = 35,
  [50] = 36,
  [51] = 51,
  [52] = 52,
  [53] = 44,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 44,
  [58] = 48,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 45,
  [67] = 67,
  [68] = 68,
  [69] = 48,
  [70] = 70,
  [71] = 71,
  [72] = 45,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 74,
  [81] = 81,
  [82] = 77,
  [83] = 60,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 74,
  [95] = 64,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 64,
  [100] = 64,
  [101] = 74,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 77,
  [106] = 106,
  [107] = 60,
  [108] = 60,
  [109] = 77,
  [110] = 110,
  [111] = 111,
  [112] = 74,
  [113] = 113,
  [114] = 60,
  [115] = 64,
  [116] = 75,
  [117] = 117,
  [118] = 77,
  [119] = 64,
  [120] = 74,
  [121] = 64,
  [122] = 77,
  [123] = 123,
  [124] = 60,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 64,
  [129] = 74,
  [130] = 74,
  [131] = 131,
  [132] = 60,
  [133] = 133,
  [134] = 77,
  [135] = 60,
  [136] = 136,
  [137] = 137,
  [138] = 75,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 77,
  [147] = 147,
  [148] = 64,
  [149] = 75,
  [150] = 150,
  [151] = 150,
  [152] = 152,
  [153] = 150,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 150,
  [158] = 158,
  [159] = 150,
  [160] = 158,
  [161] = 150,
  [162] = 158,
  [163] = 150,
  [164] = 158,
  [165] = 150,
  [166] = 166,
  [167] = 158,
  [168] = 150,
  [169] = 169,
  [170] = 170,
  [171] = 158,
  [172] = 150,
  [173] = 158,
  [174] = 174,
  [175] = 175,
  [176] = 60,
  [177] = 77,
  [178] = 158,
  [179] = 179,
  [180] = 180,
  [181] = 64,
  [182] = 136,
  [183] = 183,
  [184] = 75,
  [185] = 185,
  [186] = 74,
  [187] = 64,
  [188] = 188,
  [189] = 189,
  [190] = 75,
  [191] = 74,
  [192] = 60,
  [193] = 193,
  [194] = 77,
  [195] = 195,
  [196] = 75,
  [197] = 74,
  [198] = 74,
  [199] = 75,
  [200] = 150,
  [201] = 77,
  [202] = 60,
  [203] = 77,
  [204] = 60,
  [205] = 205,
  [206] = 64,
  [207] = 136,
  [208] = 150,
  [209] = 64,
  [210] = 74,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 212,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 76,
  [224] = 212,
  [225] = 76,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 76,
  [231] = 231,
  [232] = 232,
  [233] = 221,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 221,
  [243] = 243,
  [244] = 244,
  [245] = 243,
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
  [272] = 246,
  [273] = 273,
  [274] = 274,
  [275] = 261,
  [276] = 276,
  [277] = 271,
  [278] = 246,
  [279] = 279,
  [280] = 280,
  [281] = 271,
  [282] = 271,
  [283] = 246,
  [284] = 284,
  [285] = 285,
  [286] = 271,
  [287] = 287,
  [288] = 288,
  [289] = 271,
  [290] = 290,
  [291] = 291,
  [292] = 271,
  [293] = 293,
  [294] = 294,
  [295] = 271,
  [296] = 296,
  [297] = 271,
  [298] = 298,
  [299] = 271,
  [300] = 300,
  [301] = 271,
  [302] = 302,
  [303] = 271,
  [304] = 271,
  [305] = 298,
  [306] = 258,
  [307] = 298,
  [308] = 258,
  [309] = 298,
  [310] = 258,
  [311] = 298,
  [312] = 298,
  [313] = 298,
  [314] = 298,
  [315] = 298,
  [316] = 298,
  [317] = 298,
  [318] = 298,
  [319] = 298,
  [320] = 261,
  [321] = 321,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(251);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead == 'U') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(250);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(259);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(249);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\r') SKIP(24)
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '=') ADVANCE(247);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 33:
      if (lookahead == '$') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 34:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 35:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(219);
      END_STATE();
    case 36:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(201);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 50:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 51:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 52:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(241);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 55:
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 95:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(193);
      END_STATE();
    case 99:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 148:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
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
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 160:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == '[') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(118);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
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
          lookahead == ' ') ADVANCE(264);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
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
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
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
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\\') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
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
      if (lookahead == '\n') ADVANCE(251);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(251);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(210);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
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
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 34},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 160},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 30},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 160},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 50},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 15},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 31},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 34},
  [92] = {.lex_state = 34},
  [93] = {.lex_state = 34},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 160},
  [98] = {.lex_state = 34},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 34},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 35},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 34},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 160},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 18},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 34},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 40},
  [144] = {.lex_state = 39},
  [145] = {.lex_state = 39},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 22},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 33},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 46},
  [152] = {.lex_state = 160},
  [153] = {.lex_state = 46},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 46},
  [158] = {.lex_state = 46},
  [159] = {.lex_state = 46},
  [160] = {.lex_state = 46},
  [161] = {.lex_state = 46},
  [162] = {.lex_state = 46},
  [163] = {.lex_state = 46},
  [164] = {.lex_state = 46},
  [165] = {.lex_state = 46},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 46},
  [168] = {.lex_state = 46},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 51},
  [171] = {.lex_state = 46},
  [172] = {.lex_state = 46},
  [173] = {.lex_state = 46},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 23},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 46},
  [179] = {.lex_state = 160},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 160},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 160},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 46},
  [201] = {.lex_state = 33},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 33},
  [205] = {.lex_state = 23},
  [206] = {.lex_state = 33},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 46},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 33},
  [211] = {.lex_state = 53},
  [212] = {.lex_state = 160},
  [213] = {.lex_state = 53},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 18},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 23},
  [219] = {.lex_state = 160},
  [220] = {.lex_state = 23},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 23},
  [223] = {.lex_state = 34},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 35},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 160},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 23},
  [230] = {.lex_state = 160},
  [231] = {.lex_state = 160},
  [232] = {.lex_state = 23},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 15},
  [236] = {.lex_state = 37},
  [237] = {.lex_state = 34},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 160},
  [240] = {.lex_state = 42},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 160},
  [243] = {.lex_state = 42},
  [244] = {.lex_state = 20},
  [245] = {.lex_state = 160},
  [246] = {.lex_state = 54},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 53},
  [250] = {.lex_state = 160},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 160},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 198},
  [258] = {.lex_state = 160},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 160},
  [261] = {.lex_state = 49},
  [262] = {.lex_state = 160},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 33},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 198},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 198},
  [271] = {.lex_state = 160},
  [272] = {.lex_state = 54},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 49},
  [276] = {.lex_state = 52},
  [277] = {.lex_state = 160},
  [278] = {.lex_state = 54},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 160},
  [282] = {.lex_state = 160},
  [283] = {.lex_state = 54},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 160},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 160},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 160},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 160},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 160},
  [298] = {.lex_state = 55},
  [299] = {.lex_state = 160},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 160},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 160},
  [304] = {.lex_state = 160},
  [305] = {.lex_state = 55},
  [306] = {.lex_state = 160},
  [307] = {.lex_state = 55},
  [308] = {.lex_state = 160},
  [309] = {.lex_state = 55},
  [310] = {.lex_state = 160},
  [311] = {.lex_state = 55},
  [312] = {.lex_state = 55},
  [313] = {.lex_state = 55},
  [314] = {.lex_state = 55},
  [315] = {.lex_state = 55},
  [316] = {.lex_state = 55},
  [317] = {.lex_state = 55},
  [318] = {.lex_state = 55},
  [319] = {.lex_state = 55},
  [320] = {.lex_state = 49},
  [321] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_continuation] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__stopsignal_value_token2] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(266),
    [sym__instruction] = STATE(267),
    [sym_from_instruction] = STATE(263),
    [sym_run_instruction] = STATE(263),
    [sym_cmd_instruction] = STATE(263),
    [sym_label_instruction] = STATE(263),
    [sym_expose_instruction] = STATE(263),
    [sym_env_instruction] = STATE(263),
    [sym_add_instruction] = STATE(263),
    [sym_copy_instruction] = STATE(263),
    [sym_entrypoint_instruction] = STATE(263),
    [sym_volume_instruction] = STATE(263),
    [sym_user_instruction] = STATE(263),
    [sym_workdir_instruction] = STATE(263),
    [sym_arg_instruction] = STATE(263),
    [sym_onbuild_instruction] = STATE(263),
    [sym_stopsignal_instruction] = STATE(263),
    [sym_healthcheck_instruction] = STATE(263),
    [sym_shell_instruction] = STATE(263),
    [sym_maintainer_instruction] = STATE(263),
    [sym_cross_build_instruction] = STATE(263),
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
    STATE(267), 1,
      sym__instruction,
    STATE(263), 19,
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
    STATE(267), 1,
      sym__instruction,
    STATE(3), 2,
      sym_line_continuation,
      aux_sym_source_file_repeat1,
    STATE(263), 19,
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
    STATE(285), 1,
      sym__instruction,
    STATE(263), 19,
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
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_line_continuation,
    STATE(12), 1,
      aux_sym_shell_command_repeat1,
    STATE(14), 1,
      aux_sym_run_instruction_repeat1,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(131), 1,
      sym__comment_line,
    STATE(180), 1,
      sym_shell_fragment,
    STATE(255), 1,
      sym__anon_comment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(71), 2,
      sym_param,
      sym_mount_param,
    STATE(247), 2,
      sym_string_array,
      sym_shell_command,
  [359] = 15,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(111), 1,
      anon_sym_DASH_DASH,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(6), 1,
      aux_sym_run_instruction_repeat1,
    STATE(7), 1,
      sym_line_continuation,
    STATE(12), 1,
      aux_sym_shell_command_repeat1,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(131), 1,
      sym__comment_line,
    STATE(180), 1,
      sym_shell_fragment,
    STATE(255), 1,
      sym__anon_comment,
    ACTIONS(117), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(71), 2,
      sym_param,
      sym_mount_param,
    STATE(256), 2,
      sym_string_array,
      sym_shell_command,
  [408] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_line_continuation,
    STATE(12), 1,
      aux_sym_shell_command_repeat1,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(131), 1,
      sym__comment_line,
    STATE(180), 1,
      sym_shell_fragment,
    STATE(255), 1,
      sym__anon_comment,
    STATE(254), 2,
      sym_string_array,
      sym_shell_command,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [445] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_line_continuation,
    STATE(12), 1,
      aux_sym_shell_command_repeat1,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(131), 1,
      sym__comment_line,
    STATE(180), 1,
      sym_shell_fragment,
    STATE(255), 1,
      sym__anon_comment,
    STATE(269), 2,
      sym_string_array,
      sym_shell_command,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [482] = 11,
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
    STATE(10), 1,
      sym_line_continuation,
    STATE(27), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__immediate_expansion,
    STATE(109), 1,
      sym__imm_expansion,
    ACTIONS(131), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(217), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [518] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_line_continuation,
    STATE(33), 1,
      aux_sym_shell_command_repeat1,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(131), 1,
      sym__comment_line,
    STATE(251), 1,
      sym_shell_fragment,
    STATE(255), 1,
      sym__anon_comment,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [548] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_line_continuation,
    STATE(33), 1,
      aux_sym_shell_command_repeat1,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(131), 1,
      sym__comment_line,
    STATE(189), 1,
      sym_shell_fragment,
    STATE(255), 1,
      sym__anon_comment,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [578] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(119), 1,
      anon_sym_POUND,
    STATE(11), 1,
      aux_sym_shell_command_repeat1,
    STATE(13), 1,
      sym_line_continuation,
    STATE(96), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(131), 1,
      sym__comment_line,
    STATE(255), 1,
      sym__anon_comment,
    STATE(300), 1,
      sym_shell_fragment,
    ACTIONS(117), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [608] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(133), 1,
      anon_sym_DASH_DASH,
    ACTIONS(138), 1,
      aux_sym_shell_fragment_token1,
    STATE(14), 2,
      sym_line_continuation,
      aux_sym_run_instruction_repeat1,
    STATE(71), 2,
      sym_param,
      sym_mount_param,
    ACTIONS(136), 4,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [632] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_DOLLAR2,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(87), 1,
      sym__immediate_expansion,
    STATE(105), 1,
      sym__imm_expansion,
    ACTIONS(144), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(214), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [662] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_DOLLAR2,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(87), 1,
      sym__immediate_expansion,
    STATE(105), 1,
      sym__imm_expansion,
    ACTIONS(144), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(280), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [692] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(150), 1,
      anon_sym_DOLLAR2,
    ACTIONS(153), 1,
      aux_sym_image_name_token2,
    STATE(77), 1,
      sym__imm_expansion,
    STATE(78), 1,
      sym__immediate_expansion,
    STATE(17), 2,
      sym_line_continuation,
      aux_sym_image_name_repeat1,
    ACTIONS(146), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [720] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_DOLLAR2,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_line_continuation,
    STATE(21), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(87), 1,
      sym__immediate_expansion,
    STATE(105), 1,
      sym__imm_expansion,
    ACTIONS(144), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(291), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [750] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(158), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(160), 1,
      anon_sym_DOLLAR2,
    ACTIONS(162), 1,
      aux_sym_image_name_token2,
    STATE(19), 1,
      sym_line_continuation,
    STATE(20), 1,
      aux_sym_image_name_repeat1,
    STATE(77), 1,
      sym__imm_expansion,
    STATE(78), 1,
      sym__immediate_expansion,
    ACTIONS(156), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [780] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(160), 1,
      anon_sym_DOLLAR2,
    ACTIONS(162), 1,
      aux_sym_image_name_token2,
    ACTIONS(166), 1,
      aux_sym_from_instruction_token2,
    STATE(17), 1,
      aux_sym_image_name_repeat1,
    STATE(20), 1,
      sym_line_continuation,
    STATE(77), 1,
      sym__imm_expansion,
    STATE(78), 1,
      sym__immediate_expansion,
    ACTIONS(164), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [810] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(140), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      aux_sym_label_pair_token1,
    STATE(21), 1,
      sym_line_continuation,
    STATE(31), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(87), 1,
      sym__immediate_expansion,
    STATE(105), 1,
      sym__imm_expansion,
    ACTIONS(144), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [839] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      aux_sym_shell_fragment_token1,
    STATE(22), 2,
      sym_line_continuation,
      aux_sym_mount_param_repeat1,
    ACTIONS(172), 5,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [860] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(181), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    STATE(23), 1,
      sym_line_continuation,
    STATE(30), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(126), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(179), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [889] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(187), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(189), 1,
      anon_sym_DOLLAR2,
    ACTIONS(192), 1,
      aux_sym_image_tag_token1,
    STATE(82), 1,
      sym__imm_expansion,
    STATE(90), 1,
      sym__immediate_expansion,
    ACTIONS(185), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(24), 2,
      sym_line_continuation,
      aux_sym_image_tag_repeat1,
  [916] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(181), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    STATE(23), 1,
      aux_sym__user_name_or_group_repeat1,
    STATE(25), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(126), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(195), 2,
      anon_sym_LF,
      anon_sym_COLON,
  [945] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      aux_sym_shell_fragment_token1,
    STATE(26), 1,
      sym_line_continuation,
    STATE(29), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(197), 5,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [968] = 9,
    ACTIONS(123), 1,
      anon_sym_DOLLAR2,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      aux_sym__env_key_token1,
    STATE(27), 1,
      sym_line_continuation,
    STATE(32), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(86), 1,
      sym__immediate_expansion,
    STATE(109), 1,
      sym__imm_expansion,
    ACTIONS(131), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [997] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(205), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(207), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      aux_sym_image_tag_token1,
    STATE(24), 1,
      aux_sym_image_tag_repeat1,
    STATE(28), 1,
      sym_line_continuation,
    STATE(82), 1,
      sym__imm_expansion,
    STATE(90), 1,
      sym__immediate_expansion,
    ACTIONS(203), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1026] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      aux_sym_shell_fragment_token1,
    STATE(22), 1,
      aux_sym_mount_param_repeat1,
    STATE(29), 1,
      sym_line_continuation,
    ACTIONS(211), 5,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [1049] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(217), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(220), 1,
      anon_sym_DOLLAR2,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(126), 1,
      sym__immediate_user_name_or_group_fragment,
    ACTIONS(215), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(30), 2,
      sym_line_continuation,
      aux_sym__user_name_or_group_repeat1,
  [1076] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 1,
      anon_sym_DOLLAR2,
    ACTIONS(228), 1,
      aux_sym_label_pair_token1,
    STATE(87), 1,
      sym__immediate_expansion,
    STATE(105), 1,
      sym__imm_expansion,
    ACTIONS(230), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(31), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1103] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(228), 1,
      aux_sym__env_key_token1,
    ACTIONS(233), 1,
      anon_sym_DOLLAR2,
    STATE(86), 1,
      sym__immediate_expansion,
    STATE(109), 1,
      sym__imm_expansion,
    ACTIONS(236), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
    STATE(32), 2,
      sym_line_continuation,
      aux_sym_unquoted_string_repeat1,
  [1130] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(241), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym__comment_line,
    STATE(255), 1,
      sym__anon_comment,
    STATE(33), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat1,
    ACTIONS(239), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1152] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR2,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(169), 1,
      sym__immediate_user_name_or_group_fragment,
    STATE(34), 2,
      aux_sym__immediate_user_name_or_group,
      sym_line_continuation,
  [1178] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(258), 1,
      sym_escape_sequence,
    STATE(35), 1,
      sym_line_continuation,
    STATE(37), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(134), 1,
      sym__imm_expansion,
    STATE(147), 1,
      sym__immediate_expansion,
  [1206] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_DOLLAR2,
    ACTIONS(256), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(258), 1,
      sym_escape_sequence,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(36), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym__imm_expansion,
    STATE(147), 1,
      sym__immediate_expansion,
  [1234] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(262), 1,
      anon_sym_DOLLAR2,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(270), 1,
      sym_escape_sequence,
    STATE(134), 1,
      sym__imm_expansion,
    STATE(147), 1,
      sym__immediate_expansion,
    STATE(37), 2,
      sym_line_continuation,
      aux_sym_double_quoted_string_repeat1,
  [1260] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(275), 1,
      aux_sym_shell_fragment_token1,
    STATE(38), 1,
      sym_line_continuation,
    ACTIONS(273), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [1278] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(177), 1,
      aux_sym_shell_fragment_token1,
    STATE(39), 1,
      sym_line_continuation,
    ACTIONS(172), 6,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [1296] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(279), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(283), 1,
      aux_sym_image_digest_token1,
    STATE(40), 1,
      sym_line_continuation,
    STATE(51), 1,
      aux_sym_image_digest_repeat1,
    STATE(142), 1,
      sym__immediate_expansion,
    STATE(146), 1,
      sym__imm_expansion,
  [1324] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      aux_sym_path_token1,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      anon_sym_DASH_DASH,
    STATE(41), 1,
      sym_line_continuation,
    STATE(57), 1,
      sym_expansion,
    STATE(93), 1,
      sym_param,
    STATE(98), 1,
      aux_sym_add_instruction_repeat1,
    STATE(265), 1,
      sym_path,
  [1352] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_DOLLAR2,
    ACTIONS(256), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(258), 1,
      sym_escape_sequence,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_line_continuation,
    STATE(49), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(134), 1,
      sym__imm_expansion,
    STATE(147), 1,
      sym__immediate_expansion,
  [1380] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(181), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    ACTIONS(293), 1,
      anon_sym_LF,
    STATE(34), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(43), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(169), 1,
      sym__immediate_user_name_or_group_fragment,
  [1408] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(297), 1,
      aux_sym_path_token2,
    ACTIONS(299), 1,
      anon_sym_DOLLAR2,
    STATE(44), 1,
      sym_line_continuation,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(118), 1,
      sym__imm_expansion,
    STATE(136), 1,
      sym__immediate_expansion,
    ACTIONS(295), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1434] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(297), 1,
      aux_sym_path_token2,
    ACTIONS(299), 1,
      anon_sym_DOLLAR2,
    STATE(45), 1,
      sym_line_continuation,
    STATE(48), 1,
      aux_sym_path_repeat1,
    STATE(118), 1,
      sym__imm_expansion,
    STATE(136), 1,
      sym__immediate_expansion,
    ACTIONS(301), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1460] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      aux_sym_path_token1,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      anon_sym_DASH_DASH,
    STATE(46), 1,
      sym_line_continuation,
    STATE(57), 1,
      sym_expansion,
    STATE(91), 1,
      sym_param,
    STATE(92), 1,
      aux_sym_add_instruction_repeat1,
    STATE(265), 1,
      sym_path,
  [1488] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_DOLLAR2,
    ACTIONS(256), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(258), 1,
      sym_escape_sequence,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(47), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym__imm_expansion,
    STATE(147), 1,
      sym__immediate_expansion,
  [1516] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(307), 1,
      aux_sym_path_token2,
    ACTIONS(310), 1,
      anon_sym_DOLLAR2,
    STATE(118), 1,
      sym__imm_expansion,
    STATE(136), 1,
      sym__immediate_expansion,
    ACTIONS(305), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(48), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1540] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_DOLLAR2,
    ACTIONS(256), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(258), 1,
      sym_escape_sequence,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(49), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym__imm_expansion,
    STATE(147), 1,
      sym__immediate_expansion,
  [1568] = 9,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_DOLLAR2,
    ACTIONS(256), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(258), 1,
      sym_escape_sequence,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(50), 1,
      sym_line_continuation,
    STATE(134), 1,
      sym__imm_expansion,
    STATE(147), 1,
      sym__immediate_expansion,
  [1596] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(317), 1,
      anon_sym_LF,
    ACTIONS(319), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(321), 1,
      anon_sym_DOLLAR2,
    ACTIONS(324), 1,
      aux_sym_image_digest_token1,
    STATE(142), 1,
      sym__immediate_expansion,
    STATE(146), 1,
      sym__imm_expansion,
    STATE(51), 2,
      sym_line_continuation,
      aux_sym_image_digest_repeat1,
  [1622] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      aux_sym_image_name_token1,
    ACTIONS(331), 1,
      anon_sym_DASH_DASH,
    STATE(19), 1,
      sym_expansion,
    STATE(52), 1,
      sym_line_continuation,
    STATE(67), 1,
      sym_image_name,
    STATE(111), 1,
      sym_param,
    STATE(235), 1,
      sym_image_spec,
  [1650] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(333), 1,
      anon_sym_LF,
    ACTIONS(335), 1,
      aux_sym_path_token2,
    ACTIONS(337), 1,
      anon_sym_DOLLAR2,
    STATE(53), 1,
      sym_line_continuation,
    STATE(72), 1,
      aux_sym_path_repeat1,
    STATE(203), 1,
      sym__imm_expansion,
    STATE(207), 1,
      sym__immediate_expansion,
  [1675] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(341), 1,
      anon_sym_DOLLAR,
    ACTIONS(343), 1,
      aux_sym_expose_port_token1,
    STATE(54), 1,
      sym_line_continuation,
    STATE(68), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(183), 2,
      sym_expansion,
      sym_expose_port,
  [1698] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      aux_sym_path_token1,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(55), 1,
      sym_line_continuation,
    STATE(205), 1,
      sym_path,
    STATE(273), 1,
      sym_string_array,
  [1723] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(351), 1,
      anon_sym_DOLLAR2,
    ACTIONS(353), 1,
      aux_sym_image_alias_token2,
    STATE(56), 1,
      sym_line_continuation,
    STATE(65), 1,
      aux_sym_image_alias_repeat1,
    STATE(174), 1,
      sym__immediate_expansion,
    STATE(177), 1,
      sym__imm_expansion,
  [1748] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(333), 1,
      sym__non_newline_whitespace,
    ACTIONS(355), 1,
      aux_sym_path_token2,
    ACTIONS(357), 1,
      anon_sym_DOLLAR2,
    STATE(57), 1,
      sym_line_continuation,
    STATE(66), 1,
      aux_sym_path_repeat1,
    STATE(182), 1,
      sym__immediate_expansion,
    STATE(201), 1,
      sym__imm_expansion,
  [1773] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(359), 1,
      aux_sym_path_token2,
    ACTIONS(362), 1,
      anon_sym_DOLLAR2,
    ACTIONS(365), 1,
      sym__non_newline_whitespace,
    STATE(182), 1,
      sym__immediate_expansion,
    STATE(201), 1,
      sym__imm_expansion,
    STATE(58), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [1796] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(367), 1,
      anon_sym_NONE,
    ACTIONS(369), 1,
      anon_sym_DASH_DASH,
    STATE(59), 1,
      sym_line_continuation,
    STATE(97), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(219), 1,
      sym_param,
    STATE(288), 1,
      sym_cmd_instruction,
  [1821] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(60), 1,
      sym_line_continuation,
    ACTIONS(373), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(371), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1838] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(377), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(379), 1,
      anon_sym_DOLLAR2,
    STATE(61), 1,
      sym_line_continuation,
    STATE(62), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(154), 1,
      sym__immediate_expansion,
    STATE(194), 1,
      sym__imm_expansion,
  [1863] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(383), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(386), 1,
      anon_sym_DOLLAR2,
    STATE(154), 1,
      sym__immediate_expansion,
    STATE(194), 1,
      sym__imm_expansion,
    STATE(62), 2,
      sym_line_continuation,
      aux_sym__stopsignal_value_repeat1,
  [1886] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(181), 1,
      aux_sym__immediate_user_name_or_group_fragment_token1,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    STATE(43), 1,
      aux_sym__immediate_user_name_or_group,
    STATE(63), 1,
      sym_line_continuation,
    STATE(122), 1,
      sym__imm_expansion,
    STATE(125), 1,
      sym__immediate_expansion,
    STATE(169), 1,
      sym__immediate_user_name_or_group_fragment,
  [1911] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(64), 1,
      sym_line_continuation,
    ACTIONS(391), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(389), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [1928] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      anon_sym_DOLLAR2,
    ACTIONS(353), 1,
      aux_sym_image_alias_token2,
    ACTIONS(393), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym_line_continuation,
    STATE(73), 1,
      aux_sym_image_alias_repeat1,
    STATE(174), 1,
      sym__immediate_expansion,
    STATE(177), 1,
      sym__imm_expansion,
  [1953] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(355), 1,
      aux_sym_path_token2,
    ACTIONS(357), 1,
      anon_sym_DOLLAR2,
    ACTIONS(395), 1,
      sym__non_newline_whitespace,
    STATE(58), 1,
      aux_sym_path_repeat1,
    STATE(66), 1,
      sym_line_continuation,
    STATE(182), 1,
      sym__immediate_expansion,
    STATE(201), 1,
      sym__imm_expansion,
  [1978] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(399), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(401), 1,
      anon_sym_COLON,
    ACTIONS(403), 1,
      anon_sym_AT,
    STATE(67), 1,
      sym_line_continuation,
    STATE(140), 1,
      sym_image_tag,
    STATE(238), 1,
      sym_image_digest,
  [2003] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      anon_sym_DOLLAR,
    ACTIONS(410), 1,
      aux_sym_expose_port_token1,
    STATE(68), 2,
      sym_line_continuation,
      aux_sym_expose_instruction_repeat1,
    STATE(183), 2,
      sym_expansion,
      sym_expose_port,
  [2024] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(413), 1,
      aux_sym_path_token2,
    ACTIONS(416), 1,
      anon_sym_DOLLAR2,
    STATE(203), 1,
      sym__imm_expansion,
    STATE(207), 1,
      sym__immediate_expansion,
    STATE(69), 2,
      sym_line_continuation,
      aux_sym_path_repeat1,
  [2047] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(377), 1,
      aux_sym__stopsignal_value_token2,
    ACTIONS(379), 1,
      anon_sym_DOLLAR2,
    ACTIONS(419), 1,
      anon_sym_LF,
    STATE(61), 1,
      aux_sym__stopsignal_value_repeat1,
    STATE(70), 1,
      sym_line_continuation,
    STATE(154), 1,
      sym__immediate_expansion,
    STATE(194), 1,
      sym__imm_expansion,
  [2072] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(423), 1,
      aux_sym_shell_fragment_token1,
    STATE(71), 1,
      sym_line_continuation,
    ACTIONS(421), 5,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [2089] = 8,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(335), 1,
      aux_sym_path_token2,
    ACTIONS(337), 1,
      anon_sym_DOLLAR2,
    ACTIONS(395), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym_path_repeat1,
    STATE(72), 1,
      sym_line_continuation,
    STATE(203), 1,
      sym__imm_expansion,
    STATE(207), 1,
      sym__immediate_expansion,
  [2114] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      anon_sym_DOLLAR2,
    ACTIONS(430), 1,
      aux_sym_image_alias_token2,
    STATE(174), 1,
      sym__immediate_expansion,
    STATE(177), 1,
      sym__imm_expansion,
    STATE(73), 2,
      sym_line_continuation,
      aux_sym_image_alias_repeat1,
  [2137] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(74), 1,
      sym_line_continuation,
    ACTIONS(435), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(433), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2154] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_line_continuation,
    ACTIONS(439), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(437), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2171] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(443), 1,
      aux_sym_shell_fragment_token1,
    STATE(76), 1,
      sym_line_continuation,
    ACTIONS(441), 5,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [2188] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(77), 1,
      sym_line_continuation,
    ACTIONS(447), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(445), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2205] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(78), 1,
      sym_line_continuation,
    ACTIONS(451), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(449), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2222] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(453), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      aux_sym_expose_port_token1,
    STATE(54), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(79), 1,
      sym_line_continuation,
    STATE(183), 2,
      sym_expansion,
      sym_expose_port,
  [2242] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      aux_sym__env_key_token1,
    STATE(80), 1,
      sym_line_continuation,
    ACTIONS(433), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2258] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(457), 1,
      aux_sym__env_key_token1,
    STATE(81), 1,
      sym_line_continuation,
    STATE(84), 1,
      aux_sym_env_instruction_repeat1,
    STATE(240), 1,
      sym__env_key,
    STATE(244), 1,
      sym_env_pair,
    STATE(248), 1,
      sym__spaced_env_pair,
  [2280] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(82), 1,
      sym_line_continuation,
    ACTIONS(447), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(445), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2296] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(83), 1,
      sym_line_continuation,
    ACTIONS(373), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2312] = 7,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 1,
      aux_sym__env_key_token1,
    STATE(84), 1,
      sym_line_continuation,
    STATE(110), 1,
      aux_sym_env_instruction_repeat1,
    STATE(244), 1,
      sym_env_pair,
    STATE(250), 1,
      sym__env_key,
  [2334] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(463), 1,
      anon_sym_LF,
    STATE(85), 1,
      sym_line_continuation,
    ACTIONS(465), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(467), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2352] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(471), 1,
      aux_sym__env_key_token1,
    STATE(86), 1,
      sym_line_continuation,
    ACTIONS(469), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2368] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(471), 1,
      aux_sym_label_pair_token1,
    STATE(87), 1,
      sym_line_continuation,
    ACTIONS(469), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2384] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(207), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      aux_sym_image_tag_token1,
    STATE(28), 1,
      aux_sym_image_tag_repeat1,
    STATE(82), 1,
      sym__imm_expansion,
    STATE(88), 1,
      sym_line_continuation,
    STATE(90), 1,
      sym__immediate_expansion,
  [2406] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(281), 1,
      anon_sym_DOLLAR2,
    ACTIONS(283), 1,
      aux_sym_image_digest_token1,
    STATE(40), 1,
      aux_sym_image_digest_repeat1,
    STATE(89), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym__immediate_expansion,
    STATE(146), 1,
      sym__imm_expansion,
  [2428] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(90), 1,
      sym_line_continuation,
    ACTIONS(475), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(473), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2444] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      aux_sym_path_token1,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_expansion,
    STATE(91), 1,
      sym_line_continuation,
    STATE(104), 1,
      aux_sym_add_instruction_repeat1,
    STATE(265), 1,
      sym_path,
  [2466] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      aux_sym_path_token1,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(92), 1,
      sym_line_continuation,
    STATE(103), 1,
      aux_sym_add_instruction_repeat1,
    STATE(232), 1,
      sym_path,
  [2488] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      aux_sym_path_token1,
    ACTIONS(287), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_expansion,
    STATE(93), 1,
      sym_line_continuation,
    STATE(102), 1,
      aux_sym_add_instruction_repeat1,
    STATE(265), 1,
      sym_path,
  [2510] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(94), 1,
      sym_line_continuation,
    ACTIONS(435), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(433), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2526] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      aux_sym__env_key_token1,
    STATE(95), 1,
      sym_line_continuation,
    ACTIONS(389), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2542] = 5,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(481), 1,
      anon_sym_BSLASH_LF,
    STATE(96), 1,
      sym_line_continuation,
    STATE(106), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(479), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2560] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(11), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(369), 1,
      anon_sym_DASH_DASH,
    STATE(97), 1,
      sym_line_continuation,
    STATE(133), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(219), 1,
      sym_param,
    STATE(279), 1,
      sym_cmd_instruction,
  [2582] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      aux_sym_path_token1,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(98), 1,
      sym_line_continuation,
    STATE(103), 1,
      aux_sym_add_instruction_repeat1,
    STATE(229), 1,
      sym_path,
  [2604] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      aux_sym_label_pair_token1,
    STATE(99), 1,
      sym_line_continuation,
    ACTIONS(389), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2620] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(100), 1,
      sym_line_continuation,
    ACTIONS(391), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(389), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [2636] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      aux_sym_label_pair_token1,
    STATE(101), 1,
      sym_line_continuation,
    ACTIONS(433), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2652] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      aux_sym_path_token1,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(102), 1,
      sym_line_continuation,
    STATE(103), 1,
      aux_sym_add_instruction_repeat1,
    STATE(220), 1,
      sym_path,
  [2674] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(483), 1,
      aux_sym_path_token1,
    ACTIONS(486), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_expansion,
    STATE(265), 1,
      sym_path,
    STATE(103), 2,
      sym_line_continuation,
      aux_sym_add_instruction_repeat1,
  [2694] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      aux_sym_path_token1,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(103), 1,
      aux_sym_add_instruction_repeat1,
    STATE(104), 1,
      sym_line_continuation,
    STATE(218), 1,
      sym_path,
  [2716] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      aux_sym_label_pair_token1,
    STATE(105), 1,
      sym_line_continuation,
    ACTIONS(445), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2732] = 4,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(494), 1,
      anon_sym_BSLASH_LF,
    STATE(106), 2,
      sym_line_continuation,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(491), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2748] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      aux_sym_label_pair_token1,
    STATE(107), 1,
      sym_line_continuation,
    ACTIONS(371), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2764] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      aux_sym__env_key_token1,
    STATE(108), 1,
      sym_line_continuation,
    ACTIONS(371), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2780] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      aux_sym__env_key_token1,
    STATE(109), 1,
      sym_line_continuation,
    ACTIONS(445), 4,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH,
  [2796] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(496), 1,
      anon_sym_LF,
    ACTIONS(498), 1,
      aux_sym__env_key_token1,
    STATE(244), 1,
      sym_env_pair,
    STATE(250), 1,
      sym__env_key,
    STATE(110), 2,
      sym_line_continuation,
      aux_sym_env_instruction_repeat1,
  [2816] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      aux_sym_image_name_token1,
    STATE(19), 1,
      sym_expansion,
    STATE(67), 1,
      sym_image_name,
    STATE(111), 1,
      sym_line_continuation,
    STATE(234), 1,
      sym_image_spec,
  [2838] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(112), 1,
      sym_line_continuation,
    ACTIONS(433), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2851] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(113), 1,
      sym_line_continuation,
    ACTIONS(501), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [2864] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(371), 1,
      anon_sym_DOLLAR2,
    STATE(114), 1,
      sym_line_continuation,
    ACTIONS(373), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2879] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      anon_sym_DOLLAR2,
    STATE(115), 1,
      sym_line_continuation,
    ACTIONS(391), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2894] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      anon_sym_DOLLAR2,
    STATE(116), 1,
      sym_line_continuation,
    ACTIONS(439), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2909] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(503), 1,
      anon_sym_LF,
    ACTIONS(505), 1,
      aux_sym_label_pair_token1,
    STATE(241), 1,
      sym_label_pair,
    STATE(117), 2,
      sym_line_continuation,
      aux_sym_label_instruction_repeat1,
  [2926] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(445), 1,
      anon_sym_DOLLAR2,
    STATE(118), 1,
      sym_line_continuation,
    ACTIONS(447), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2941] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(119), 1,
      sym_line_continuation,
    ACTIONS(389), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(391), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2956] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_DOLLAR2,
    STATE(120), 1,
      sym_line_continuation,
    ACTIONS(435), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [2971] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(121), 1,
      sym_line_continuation,
    ACTIONS(389), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2984] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(122), 1,
      sym_line_continuation,
    ACTIONS(445), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [2997] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(345), 1,
      aux_sym_path_token1,
    ACTIONS(347), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_expansion,
    STATE(123), 1,
      sym_line_continuation,
    STATE(222), 1,
      sym_path,
  [3016] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(124), 1,
      sym_line_continuation,
    ACTIONS(371), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3029] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(125), 1,
      sym_line_continuation,
    ACTIONS(508), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3042] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(126), 1,
      sym_line_continuation,
    ACTIONS(510), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3055] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(127), 1,
      sym_line_continuation,
    ACTIONS(512), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3068] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      aux_sym_from_instruction_token2,
    STATE(128), 1,
      sym_line_continuation,
    ACTIONS(389), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3083] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(129), 1,
      sym_line_continuation,
    ACTIONS(433), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(435), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3098] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      aux_sym_from_instruction_token2,
    STATE(130), 1,
      sym_line_continuation,
    ACTIONS(433), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3113] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(131), 1,
      sym_line_continuation,
    ACTIONS(514), 4,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      anon_sym_POUND,
  [3126] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(132), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(373), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3141] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(516), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(518), 1,
      anon_sym_DASH_DASH,
    STATE(219), 1,
      sym_param,
    STATE(133), 2,
      sym_line_continuation,
      aux_sym_healthcheck_instruction_repeat1,
  [3158] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(134), 1,
      sym_line_continuation,
    ACTIONS(445), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(447), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3173] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      aux_sym_from_instruction_token2,
    STATE(135), 1,
      sym_line_continuation,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3188] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(523), 1,
      anon_sym_DOLLAR2,
    STATE(136), 1,
      sym_line_continuation,
    ACTIONS(521), 3,
      anon_sym_LF,
      aux_sym_path_token2,
      sym__non_newline_whitespace,
  [3203] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      aux_sym_label_pair_token1,
    STATE(117), 1,
      aux_sym_label_instruction_repeat1,
    STATE(137), 1,
      sym_line_continuation,
    STATE(241), 1,
      sym_label_pair,
  [3222] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(138), 1,
      sym_line_continuation,
    ACTIONS(437), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3235] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(529), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(531), 1,
      anon_sym_DOLLAR,
    STATE(70), 1,
      sym_expansion,
    STATE(139), 1,
      sym_line_continuation,
    STATE(287), 1,
      sym__stopsignal_value,
  [3254] = 6,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(403), 1,
      anon_sym_AT,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      aux_sym_from_instruction_token2,
    STATE(140), 1,
      sym_line_continuation,
    STATE(216), 1,
      sym_image_digest,
  [3273] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(537), 1,
      aux_sym_path_token1,
    ACTIONS(539), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_expansion,
    STATE(141), 1,
      sym_line_continuation,
    STATE(274), 1,
      sym_path,
  [3292] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(543), 1,
      aux_sym_from_instruction_token2,
    STATE(142), 1,
      sym_line_continuation,
    ACTIONS(541), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3307] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(545), 1,
      aux_sym__user_name_or_group_token1,
    ACTIONS(547), 1,
      anon_sym_DOLLAR,
    STATE(25), 1,
      sym_expansion,
    STATE(143), 1,
      sym_line_continuation,
    STATE(228), 1,
      sym__user_name_or_group,
  [3326] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(549), 1,
      anon_sym_DOLLAR,
    ACTIONS(551), 1,
      aux_sym_image_alias_token1,
    STATE(56), 1,
      sym_expansion,
    STATE(144), 1,
      sym_line_continuation,
    STATE(290), 1,
      sym_image_alias,
  [3345] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(549), 1,
      anon_sym_DOLLAR,
    ACTIONS(551), 1,
      aux_sym_image_alias_token1,
    STATE(56), 1,
      sym_expansion,
    STATE(145), 1,
      sym_line_continuation,
    STATE(264), 1,
      sym_image_alias,
  [3364] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      aux_sym_from_instruction_token2,
    STATE(146), 1,
      sym_line_continuation,
    ACTIONS(445), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [3379] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(147), 1,
      sym_line_continuation,
    ACTIONS(553), 2,
      anon_sym_DOLLAR2,
      aux_sym_double_quoted_string_token1,
    ACTIONS(555), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3394] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      aux_sym_path_token2,
    STATE(148), 1,
      sym_line_continuation,
    ACTIONS(389), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [3408] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      aux_sym_path_token2,
    STATE(149), 1,
      sym_line_continuation,
    ACTIONS(437), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3422] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(559), 1,
      sym_variable,
    STATE(150), 1,
      sym_line_continuation,
    STATE(176), 1,
      sym__expansion_body,
  [3438] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
    ACTIONS(563), 1,
      sym_variable,
    STATE(108), 1,
      sym__expansion_body,
    STATE(151), 1,
      sym_line_continuation,
  [3454] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_COMMA2,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_line_continuation,
    STATE(185), 1,
      aux_sym_string_array_repeat1,
  [3470] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    ACTIONS(571), 1,
      sym_variable,
    STATE(107), 1,
      sym__expansion_body,
    STATE(153), 1,
      sym_line_continuation,
  [3486] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(154), 1,
      sym_line_continuation,
    ACTIONS(573), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3498] = 4,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_BSLASH_LF,
    STATE(13), 1,
      sym_required_line_continuation,
    STATE(155), 2,
      sym_line_continuation,
      aux_sym_shell_command_repeat2,
  [3512] = 5,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 1,
      anon_sym_BSLASH_LF,
    STATE(13), 1,
      sym_required_line_continuation,
    STATE(155), 1,
      aux_sym_shell_command_repeat2,
    STATE(156), 1,
      sym_line_continuation,
  [3528] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    ACTIONS(586), 1,
      sym_variable,
    STATE(132), 1,
      sym__expansion_body,
    STATE(157), 1,
      sym_line_continuation,
  [3544] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(559), 1,
      sym_variable,
    STATE(158), 1,
      sym_line_continuation,
    STATE(184), 1,
      sym__expansion_body,
  [3560] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    ACTIONS(590), 1,
      sym_variable,
    STATE(135), 1,
      sym__expansion_body,
    STATE(159), 1,
      sym_line_continuation,
  [3576] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym_variable,
    STATE(160), 1,
      sym_line_continuation,
    STATE(190), 1,
      sym__expansion_body,
  [3592] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
    ACTIONS(598), 1,
      sym_variable,
    STATE(83), 1,
      sym__expansion_body,
    STATE(161), 1,
      sym_line_continuation,
  [3608] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(602), 1,
      sym_variable,
    STATE(162), 1,
      sym_line_continuation,
    STATE(196), 1,
      sym__expansion_body,
  [3624] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym_variable,
    STATE(163), 1,
      sym_line_continuation,
    STATE(192), 1,
      sym__expansion_body,
  [3640] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(606), 1,
      sym_variable,
    STATE(138), 1,
      sym__expansion_body,
    STATE(164), 1,
      sym_line_continuation,
  [3656] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(602), 1,
      sym_variable,
    STATE(165), 1,
      sym_line_continuation,
    STATE(202), 1,
      sym__expansion_body,
  [3672] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(608), 1,
      anon_sym_LF,
    ACTIONS(610), 1,
      sym__non_newline_whitespace,
    STATE(166), 2,
      sym_line_continuation,
      aux_sym_volume_instruction_repeat1,
  [3686] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(615), 1,
      sym_variable,
    STATE(116), 1,
      sym__expansion_body,
    STATE(167), 1,
      sym_line_continuation,
  [3702] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(606), 1,
      sym_variable,
    STATE(124), 1,
      sym__expansion_body,
    STATE(168), 1,
      sym_line_continuation,
  [3718] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(169), 1,
      sym_line_continuation,
    ACTIONS(617), 3,
      anon_sym_LF,
      aux_sym__immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [3730] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(619), 1,
      aux_sym_label_pair_token1,
    STATE(137), 1,
      aux_sym_label_instruction_repeat1,
    STATE(170), 1,
      sym_line_continuation,
    STATE(241), 1,
      sym_label_pair,
  [3746] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      sym_variable,
    STATE(149), 1,
      sym__expansion_body,
    STATE(171), 1,
      sym_line_continuation,
  [3762] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(615), 1,
      sym_variable,
    STATE(114), 1,
      sym__expansion_body,
    STATE(172), 1,
      sym_line_continuation,
  [3778] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(625), 1,
      anon_sym_LBRACE,
    ACTIONS(627), 1,
      sym_variable,
    STATE(173), 1,
      sym_line_continuation,
    STATE(199), 1,
      sym__expansion_body,
  [3794] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(174), 1,
      sym_line_continuation,
    ACTIONS(629), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3806] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(631), 1,
      anon_sym_LF,
    ACTIONS(633), 1,
      sym__non_newline_whitespace,
    STATE(166), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(175), 1,
      sym_line_continuation,
  [3822] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(176), 1,
      sym_line_continuation,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3834] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(177), 1,
      sym_line_continuation,
    ACTIONS(445), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3846] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
    ACTIONS(637), 1,
      sym_variable,
    STATE(75), 1,
      sym__expansion_body,
    STATE(178), 1,
      sym_line_continuation,
  [3862] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    ACTIONS(641), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_line_continuation,
    STATE(195), 1,
      sym_double_quoted_string,
  [3878] = 5,
    ACTIONS(582), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(643), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_required_line_continuation,
    STATE(180), 1,
      sym_line_continuation,
    STATE(193), 1,
      aux_sym_shell_command_repeat2,
  [3894] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(181), 1,
      sym_line_continuation,
    ACTIONS(389), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3906] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(521), 1,
      aux_sym_path_token2,
    STATE(182), 1,
      sym_line_continuation,
    ACTIONS(523), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [3920] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(645), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_line_continuation,
    ACTIONS(647), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3934] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(184), 1,
      sym_line_continuation,
    ACTIONS(437), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3946] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(649), 1,
      anon_sym_COMMA2,
    ACTIONS(652), 1,
      anon_sym_RBRACK,
    STATE(185), 2,
      sym_line_continuation,
      aux_sym_string_array_repeat1,
  [3960] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(186), 1,
      sym_line_continuation,
    ACTIONS(433), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [3972] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(187), 1,
      sym_line_continuation,
    ACTIONS(389), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [3984] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(654), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_line_continuation,
    ACTIONS(656), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3998] = 5,
    ACTIONS(582), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(658), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_required_line_continuation,
    STATE(156), 1,
      aux_sym_shell_command_repeat2,
    STATE(189), 1,
      sym_line_continuation,
  [4014] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(190), 1,
      sym_line_continuation,
    ACTIONS(437), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4026] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(191), 1,
      sym_line_continuation,
    ACTIONS(433), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4038] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(192), 1,
      sym_line_continuation,
    ACTIONS(371), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4050] = 5,
    ACTIONS(582), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(658), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_required_line_continuation,
    STATE(155), 1,
      aux_sym_shell_command_repeat2,
    STATE(193), 1,
      sym_line_continuation,
  [4066] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(194), 1,
      sym_line_continuation,
    ACTIONS(445), 3,
      anon_sym_LF,
      aux_sym__stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [4078] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_COMMA2,
    ACTIONS(660), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      aux_sym_string_array_repeat1,
    STATE(195), 1,
      sym_line_continuation,
  [4094] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(439), 1,
      aux_sym_path_token2,
    STATE(196), 1,
      sym_line_continuation,
    ACTIONS(437), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4108] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      aux_sym_path_token2,
    STATE(197), 1,
      sym_line_continuation,
    ACTIONS(433), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4122] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(433), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym_line_continuation,
    ACTIONS(435), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4136] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(437), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_line_continuation,
    ACTIONS(439), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4150] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
    ACTIONS(623), 1,
      sym_variable,
    STATE(200), 1,
      sym_line_continuation,
    STATE(204), 1,
      sym__expansion_body,
  [4166] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      aux_sym_path_token2,
    STATE(201), 1,
      sym_line_continuation,
    ACTIONS(445), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4180] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      aux_sym_path_token2,
    STATE(202), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4194] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(447), 1,
      aux_sym_path_token2,
    STATE(203), 1,
      sym_line_continuation,
    ACTIONS(445), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4208] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(373), 1,
      aux_sym_path_token2,
    STATE(204), 1,
      sym_line_continuation,
    ACTIONS(371), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4222] = 5,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      sym__non_newline_whitespace,
    ACTIONS(662), 1,
      anon_sym_LF,
    STATE(175), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(205), 1,
      sym_line_continuation,
  [4238] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(391), 1,
      aux_sym_path_token2,
    STATE(206), 1,
      sym_line_continuation,
    ACTIONS(389), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4252] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(521), 1,
      aux_sym_path_token2,
    STATE(207), 1,
      sym_line_continuation,
    ACTIONS(523), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [4266] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(635), 1,
      anon_sym_LBRACE,
    ACTIONS(637), 1,
      sym_variable,
    STATE(60), 1,
      sym__expansion_body,
    STATE(208), 1,
      sym_line_continuation,
  [4282] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(389), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_line_continuation,
    ACTIONS(391), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4296] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(435), 1,
      aux_sym_path_token2,
    STATE(210), 1,
      sym_line_continuation,
    ACTIONS(433), 2,
      anon_sym_DOLLAR2,
      sym__non_newline_whitespace,
  [4310] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      aux_sym_mount_param_param_token1,
    STATE(39), 1,
      sym_mount_param_param,
    STATE(211), 1,
      sym_line_continuation,
  [4323] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(212), 1,
      sym_line_continuation,
    ACTIONS(666), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4334] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(664), 1,
      aux_sym_mount_param_param_token1,
    STATE(26), 1,
      sym_mount_param_param,
    STATE(213), 1,
      sym_line_continuation,
  [4347] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(668), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      aux_sym_label_pair_token1,
    STATE(214), 1,
      sym_line_continuation,
  [4360] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_LF,
    ACTIONS(672), 1,
      aux_sym_label_pair_token1,
    STATE(215), 1,
      sym_line_continuation,
  [4373] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(674), 1,
      anon_sym_LF,
    ACTIONS(676), 1,
      aux_sym_from_instruction_token2,
    STATE(216), 1,
      sym_line_continuation,
  [4386] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(680), 1,
      aux_sym__env_key_token1,
    STATE(217), 1,
      sym_line_continuation,
  [4399] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(684), 1,
      sym__non_newline_whitespace,
    STATE(218), 1,
      sym_line_continuation,
  [4412] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(219), 1,
      sym_line_continuation,
    ACTIONS(686), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4423] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      sym__non_newline_whitespace,
    ACTIONS(688), 1,
      anon_sym_LF,
    STATE(220), 1,
      sym_line_continuation,
  [4436] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(692), 1,
      aux_sym__env_key_token1,
    STATE(221), 1,
      sym_line_continuation,
  [4449] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(222), 1,
      sym_line_continuation,
    ACTIONS(608), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [4460] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      aux_sym_path_token1,
    STATE(223), 1,
      sym_line_continuation,
  [4473] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(666), 1,
      anon_sym_LF,
    ACTIONS(672), 1,
      aux_sym__env_key_token1,
    STATE(224), 1,
      sym_line_continuation,
  [4486] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      aux_sym_image_name_token1,
    STATE(225), 1,
      sym_line_continuation,
  [4499] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(696), 1,
      anon_sym_EQ,
    STATE(226), 1,
      sym_line_continuation,
  [4512] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(227), 1,
      sym_line_continuation,
    STATE(293), 1,
      sym_string_array,
  [4525] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(698), 1,
      anon_sym_LF,
    ACTIONS(700), 1,
      anon_sym_COLON,
    STATE(228), 1,
      sym_line_continuation,
  [4538] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      sym__non_newline_whitespace,
    ACTIONS(702), 1,
      anon_sym_LF,
    STATE(229), 1,
      sym_line_continuation,
  [4551] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(230), 1,
      sym_line_continuation,
    ACTIONS(441), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4562] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(641), 1,
      anon_sym_DQUOTE,
    STATE(231), 1,
      sym_line_continuation,
    STATE(239), 1,
      sym_double_quoted_string,
  [4575] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(684), 1,
      sym__non_newline_whitespace,
    ACTIONS(704), 1,
      anon_sym_LF,
    STATE(232), 1,
      sym_line_continuation,
  [4588] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(692), 1,
      aux_sym_label_pair_token1,
    STATE(233), 1,
      sym_line_continuation,
  [4601] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(708), 1,
      aux_sym_from_instruction_token2,
    STATE(234), 1,
      sym_line_continuation,
  [4614] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(710), 1,
      anon_sym_LF,
    ACTIONS(712), 1,
      aux_sym_from_instruction_token2,
    STATE(235), 1,
      sym_line_continuation,
  [4627] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(714), 1,
      aux_sym_param_token1,
    ACTIONS(716), 1,
      anon_sym_mount,
    STATE(236), 1,
      sym_line_continuation,
  [4640] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(718), 1,
      aux_sym_path_token1,
    ACTIONS(720), 1,
      anon_sym_DOLLAR,
    STATE(237), 1,
      sym_line_continuation,
  [4653] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(724), 1,
      aux_sym_from_instruction_token2,
    STATE(238), 1,
      sym_line_continuation,
  [4666] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(239), 1,
      sym_line_continuation,
    ACTIONS(652), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4677] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      anon_sym_EQ,
    ACTIONS(728), 1,
      aux_sym__spaced_env_pair_token1,
    STATE(240), 1,
      sym_line_continuation,
  [4690] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(730), 1,
      anon_sym_LF,
    ACTIONS(732), 1,
      aux_sym_label_pair_token1,
    STATE(241), 1,
      sym_line_continuation,
  [4703] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    STATE(242), 1,
      sym_line_continuation,
    ACTIONS(690), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [4714] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    STATE(243), 1,
      sym_line_continuation,
    ACTIONS(734), 2,
      anon_sym_EQ,
      aux_sym__spaced_env_pair_token1,
  [4725] = 4,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      aux_sym__env_key_token1,
    STATE(244), 1,
      sym_line_continuation,
  [4738] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(734), 1,
      anon_sym_EQ,
    STATE(245), 1,
      sym_line_continuation,
  [4748] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(740), 1,
      aux_sym_param_token2,
    STATE(246), 1,
      sym_line_continuation,
  [4758] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(247), 1,
      sym_line_continuation,
  [4768] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(744), 1,
      anon_sym_LF,
    STATE(248), 1,
      sym_line_continuation,
  [4778] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(746), 1,
      aux_sym_mount_param_param_token1,
    STATE(249), 1,
      sym_line_continuation,
  [4788] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(726), 1,
      anon_sym_EQ,
    STATE(250), 1,
      sym_line_continuation,
  [4798] = 3,
    ACTIONS(748), 1,
      anon_sym_LF,
    ACTIONS(750), 1,
      anon_sym_BSLASH_LF,
    STATE(251), 1,
      sym_line_continuation,
  [4808] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(752), 1,
      anon_sym_LF,
    STATE(252), 1,
      sym_line_continuation,
  [4818] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(754), 1,
      anon_sym_EQ,
    STATE(253), 1,
      sym_line_continuation,
  [4828] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(756), 1,
      anon_sym_LF,
    STATE(254), 1,
      sym_line_continuation,
  [4838] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(758), 1,
      anon_sym_LF,
    STATE(255), 1,
      sym_line_continuation,
  [4848] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(760), 1,
      anon_sym_LF,
    STATE(256), 1,
      sym_line_continuation,
  [4858] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(762), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(257), 1,
      sym_line_continuation,
  [4868] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(764), 1,
      anon_sym_EQ,
    STATE(258), 1,
      sym_line_continuation,
  [4878] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(766), 1,
      anon_sym_LF,
    STATE(259), 1,
      sym_line_continuation,
  [4888] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(768), 1,
      anon_sym_EQ,
    STATE(260), 1,
      sym_line_continuation,
  [4898] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(770), 1,
      aux_sym_param_token1,
    STATE(261), 1,
      sym_line_continuation,
  [4908] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(772), 1,
      anon_sym_EQ,
    STATE(262), 1,
      sym_line_continuation,
  [4918] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(774), 1,
      anon_sym_LF,
    STATE(263), 1,
      sym_line_continuation,
  [4928] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(776), 1,
      anon_sym_LF,
    STATE(264), 1,
      sym_line_continuation,
  [4938] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(778), 1,
      sym__non_newline_whitespace,
    STATE(265), 1,
      sym_line_continuation,
  [4948] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(780), 1,
      ts_builtin_sym_end,
    STATE(266), 1,
      sym_line_continuation,
  [4958] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(782), 1,
      anon_sym_LF,
    STATE(267), 1,
      sym_line_continuation,
  [4968] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(784), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(268), 1,
      sym_line_continuation,
  [4978] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(786), 1,
      anon_sym_LF,
    STATE(269), 1,
      sym_line_continuation,
  [4988] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(788), 1,
      aux_sym_maintainer_instruction_token2,
    STATE(270), 1,
      sym_line_continuation,
  [4998] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      sym_line_continuation,
  [5008] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(792), 1,
      aux_sym_param_token2,
    STATE(272), 1,
      sym_line_continuation,
  [5018] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(794), 1,
      anon_sym_LF,
    STATE(273), 1,
      sym_line_continuation,
  [5028] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(796), 1,
      anon_sym_LF,
    STATE(274), 1,
      sym_line_continuation,
  [5038] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(798), 1,
      aux_sym_param_token1,
    STATE(275), 1,
      sym_line_continuation,
  [5048] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(800), 1,
      aux_sym_arg_instruction_token2,
    STATE(276), 1,
      sym_line_continuation,
  [5058] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_line_continuation,
  [5068] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(804), 1,
      aux_sym_param_token2,
    STATE(278), 1,
      sym_line_continuation,
  [5078] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(806), 1,
      anon_sym_LF,
    STATE(279), 1,
      sym_line_continuation,
  [5088] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(808), 1,
      anon_sym_LF,
    STATE(280), 1,
      sym_line_continuation,
  [5098] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_line_continuation,
  [5108] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      sym_line_continuation,
  [5118] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(814), 1,
      aux_sym_param_token2,
    STATE(283), 1,
      sym_line_continuation,
  [5128] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(816), 1,
      anon_sym_LF,
    STATE(284), 1,
      sym_line_continuation,
  [5138] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(818), 1,
      anon_sym_LF,
    STATE(285), 1,
      sym_line_continuation,
  [5148] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_line_continuation,
  [5158] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(822), 1,
      anon_sym_LF,
    STATE(287), 1,
      sym_line_continuation,
  [5168] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(824), 1,
      anon_sym_LF,
    STATE(288), 1,
      sym_line_continuation,
  [5178] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      sym_line_continuation,
  [5188] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(828), 1,
      anon_sym_LF,
    STATE(290), 1,
      sym_line_continuation,
  [5198] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(830), 1,
      anon_sym_LF,
    STATE(291), 1,
      sym_line_continuation,
  [5208] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      sym_line_continuation,
  [5218] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(834), 1,
      anon_sym_LF,
    STATE(293), 1,
      sym_line_continuation,
  [5228] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(836), 1,
      anon_sym_LF,
    STATE(294), 1,
      sym_line_continuation,
  [5238] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
    STATE(295), 1,
      sym_line_continuation,
  [5248] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(840), 1,
      anon_sym_LF,
    STATE(296), 1,
      sym_line_continuation,
  [5258] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      sym_line_continuation,
  [5268] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(844), 1,
      aux_sym__expansion_body_token1,
    STATE(298), 1,
      sym_line_continuation,
  [5278] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      sym_line_continuation,
  [5288] = 3,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(848), 1,
      anon_sym_BSLASH_LF,
    STATE(300), 1,
      sym_line_continuation,
  [5298] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      sym_line_continuation,
  [5308] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(852), 1,
      anon_sym_LF,
    STATE(302), 1,
      sym_line_continuation,
  [5318] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      sym_line_continuation,
  [5328] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(856), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      sym_line_continuation,
  [5338] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(858), 1,
      aux_sym__expansion_body_token1,
    STATE(305), 1,
      sym_line_continuation,
  [5348] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(860), 1,
      anon_sym_EQ,
    STATE(306), 1,
      sym_line_continuation,
  [5358] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(862), 1,
      aux_sym__expansion_body_token1,
    STATE(307), 1,
      sym_line_continuation,
  [5368] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(864), 1,
      anon_sym_EQ,
    STATE(308), 1,
      sym_line_continuation,
  [5378] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(866), 1,
      aux_sym__expansion_body_token1,
    STATE(309), 1,
      sym_line_continuation,
  [5388] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(868), 1,
      anon_sym_EQ,
    STATE(310), 1,
      sym_line_continuation,
  [5398] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(870), 1,
      aux_sym__expansion_body_token1,
    STATE(311), 1,
      sym_line_continuation,
  [5408] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(872), 1,
      aux_sym__expansion_body_token1,
    STATE(312), 1,
      sym_line_continuation,
  [5418] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(874), 1,
      aux_sym__expansion_body_token1,
    STATE(313), 1,
      sym_line_continuation,
  [5428] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(876), 1,
      aux_sym__expansion_body_token1,
    STATE(314), 1,
      sym_line_continuation,
  [5438] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(878), 1,
      aux_sym__expansion_body_token1,
    STATE(315), 1,
      sym_line_continuation,
  [5448] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(880), 1,
      aux_sym__expansion_body_token1,
    STATE(316), 1,
      sym_line_continuation,
  [5458] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(882), 1,
      aux_sym__expansion_body_token1,
    STATE(317), 1,
      sym_line_continuation,
  [5468] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(884), 1,
      aux_sym__expansion_body_token1,
    STATE(318), 1,
      sym_line_continuation,
  [5478] = 3,
    ACTIONS(127), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(886), 1,
      aux_sym__expansion_body_token1,
    STATE(319), 1,
      sym_line_continuation,
  [5488] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(888), 1,
      aux_sym_param_token1,
    STATE(320), 1,
      sym_line_continuation,
  [5498] = 1,
    ACTIONS(890), 1,
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
  [SMALL_STATE(9)] = 445,
  [SMALL_STATE(10)] = 482,
  [SMALL_STATE(11)] = 518,
  [SMALL_STATE(12)] = 548,
  [SMALL_STATE(13)] = 578,
  [SMALL_STATE(14)] = 608,
  [SMALL_STATE(15)] = 632,
  [SMALL_STATE(16)] = 662,
  [SMALL_STATE(17)] = 692,
  [SMALL_STATE(18)] = 720,
  [SMALL_STATE(19)] = 750,
  [SMALL_STATE(20)] = 780,
  [SMALL_STATE(21)] = 810,
  [SMALL_STATE(22)] = 839,
  [SMALL_STATE(23)] = 860,
  [SMALL_STATE(24)] = 889,
  [SMALL_STATE(25)] = 916,
  [SMALL_STATE(26)] = 945,
  [SMALL_STATE(27)] = 968,
  [SMALL_STATE(28)] = 997,
  [SMALL_STATE(29)] = 1026,
  [SMALL_STATE(30)] = 1049,
  [SMALL_STATE(31)] = 1076,
  [SMALL_STATE(32)] = 1103,
  [SMALL_STATE(33)] = 1130,
  [SMALL_STATE(34)] = 1152,
  [SMALL_STATE(35)] = 1178,
  [SMALL_STATE(36)] = 1206,
  [SMALL_STATE(37)] = 1234,
  [SMALL_STATE(38)] = 1260,
  [SMALL_STATE(39)] = 1278,
  [SMALL_STATE(40)] = 1296,
  [SMALL_STATE(41)] = 1324,
  [SMALL_STATE(42)] = 1352,
  [SMALL_STATE(43)] = 1380,
  [SMALL_STATE(44)] = 1408,
  [SMALL_STATE(45)] = 1434,
  [SMALL_STATE(46)] = 1460,
  [SMALL_STATE(47)] = 1488,
  [SMALL_STATE(48)] = 1516,
  [SMALL_STATE(49)] = 1540,
  [SMALL_STATE(50)] = 1568,
  [SMALL_STATE(51)] = 1596,
  [SMALL_STATE(52)] = 1622,
  [SMALL_STATE(53)] = 1650,
  [SMALL_STATE(54)] = 1675,
  [SMALL_STATE(55)] = 1698,
  [SMALL_STATE(56)] = 1723,
  [SMALL_STATE(57)] = 1748,
  [SMALL_STATE(58)] = 1773,
  [SMALL_STATE(59)] = 1796,
  [SMALL_STATE(60)] = 1821,
  [SMALL_STATE(61)] = 1838,
  [SMALL_STATE(62)] = 1863,
  [SMALL_STATE(63)] = 1886,
  [SMALL_STATE(64)] = 1911,
  [SMALL_STATE(65)] = 1928,
  [SMALL_STATE(66)] = 1953,
  [SMALL_STATE(67)] = 1978,
  [SMALL_STATE(68)] = 2003,
  [SMALL_STATE(69)] = 2024,
  [SMALL_STATE(70)] = 2047,
  [SMALL_STATE(71)] = 2072,
  [SMALL_STATE(72)] = 2089,
  [SMALL_STATE(73)] = 2114,
  [SMALL_STATE(74)] = 2137,
  [SMALL_STATE(75)] = 2154,
  [SMALL_STATE(76)] = 2171,
  [SMALL_STATE(77)] = 2188,
  [SMALL_STATE(78)] = 2205,
  [SMALL_STATE(79)] = 2222,
  [SMALL_STATE(80)] = 2242,
  [SMALL_STATE(81)] = 2258,
  [SMALL_STATE(82)] = 2280,
  [SMALL_STATE(83)] = 2296,
  [SMALL_STATE(84)] = 2312,
  [SMALL_STATE(85)] = 2334,
  [SMALL_STATE(86)] = 2352,
  [SMALL_STATE(87)] = 2368,
  [SMALL_STATE(88)] = 2384,
  [SMALL_STATE(89)] = 2406,
  [SMALL_STATE(90)] = 2428,
  [SMALL_STATE(91)] = 2444,
  [SMALL_STATE(92)] = 2466,
  [SMALL_STATE(93)] = 2488,
  [SMALL_STATE(94)] = 2510,
  [SMALL_STATE(95)] = 2526,
  [SMALL_STATE(96)] = 2542,
  [SMALL_STATE(97)] = 2560,
  [SMALL_STATE(98)] = 2582,
  [SMALL_STATE(99)] = 2604,
  [SMALL_STATE(100)] = 2620,
  [SMALL_STATE(101)] = 2636,
  [SMALL_STATE(102)] = 2652,
  [SMALL_STATE(103)] = 2674,
  [SMALL_STATE(104)] = 2694,
  [SMALL_STATE(105)] = 2716,
  [SMALL_STATE(106)] = 2732,
  [SMALL_STATE(107)] = 2748,
  [SMALL_STATE(108)] = 2764,
  [SMALL_STATE(109)] = 2780,
  [SMALL_STATE(110)] = 2796,
  [SMALL_STATE(111)] = 2816,
  [SMALL_STATE(112)] = 2838,
  [SMALL_STATE(113)] = 2851,
  [SMALL_STATE(114)] = 2864,
  [SMALL_STATE(115)] = 2879,
  [SMALL_STATE(116)] = 2894,
  [SMALL_STATE(117)] = 2909,
  [SMALL_STATE(118)] = 2926,
  [SMALL_STATE(119)] = 2941,
  [SMALL_STATE(120)] = 2956,
  [SMALL_STATE(121)] = 2971,
  [SMALL_STATE(122)] = 2984,
  [SMALL_STATE(123)] = 2997,
  [SMALL_STATE(124)] = 3016,
  [SMALL_STATE(125)] = 3029,
  [SMALL_STATE(126)] = 3042,
  [SMALL_STATE(127)] = 3055,
  [SMALL_STATE(128)] = 3068,
  [SMALL_STATE(129)] = 3083,
  [SMALL_STATE(130)] = 3098,
  [SMALL_STATE(131)] = 3113,
  [SMALL_STATE(132)] = 3126,
  [SMALL_STATE(133)] = 3141,
  [SMALL_STATE(134)] = 3158,
  [SMALL_STATE(135)] = 3173,
  [SMALL_STATE(136)] = 3188,
  [SMALL_STATE(137)] = 3203,
  [SMALL_STATE(138)] = 3222,
  [SMALL_STATE(139)] = 3235,
  [SMALL_STATE(140)] = 3254,
  [SMALL_STATE(141)] = 3273,
  [SMALL_STATE(142)] = 3292,
  [SMALL_STATE(143)] = 3307,
  [SMALL_STATE(144)] = 3326,
  [SMALL_STATE(145)] = 3345,
  [SMALL_STATE(146)] = 3364,
  [SMALL_STATE(147)] = 3379,
  [SMALL_STATE(148)] = 3394,
  [SMALL_STATE(149)] = 3408,
  [SMALL_STATE(150)] = 3422,
  [SMALL_STATE(151)] = 3438,
  [SMALL_STATE(152)] = 3454,
  [SMALL_STATE(153)] = 3470,
  [SMALL_STATE(154)] = 3486,
  [SMALL_STATE(155)] = 3498,
  [SMALL_STATE(156)] = 3512,
  [SMALL_STATE(157)] = 3528,
  [SMALL_STATE(158)] = 3544,
  [SMALL_STATE(159)] = 3560,
  [SMALL_STATE(160)] = 3576,
  [SMALL_STATE(161)] = 3592,
  [SMALL_STATE(162)] = 3608,
  [SMALL_STATE(163)] = 3624,
  [SMALL_STATE(164)] = 3640,
  [SMALL_STATE(165)] = 3656,
  [SMALL_STATE(166)] = 3672,
  [SMALL_STATE(167)] = 3686,
  [SMALL_STATE(168)] = 3702,
  [SMALL_STATE(169)] = 3718,
  [SMALL_STATE(170)] = 3730,
  [SMALL_STATE(171)] = 3746,
  [SMALL_STATE(172)] = 3762,
  [SMALL_STATE(173)] = 3778,
  [SMALL_STATE(174)] = 3794,
  [SMALL_STATE(175)] = 3806,
  [SMALL_STATE(176)] = 3822,
  [SMALL_STATE(177)] = 3834,
  [SMALL_STATE(178)] = 3846,
  [SMALL_STATE(179)] = 3862,
  [SMALL_STATE(180)] = 3878,
  [SMALL_STATE(181)] = 3894,
  [SMALL_STATE(182)] = 3906,
  [SMALL_STATE(183)] = 3920,
  [SMALL_STATE(184)] = 3934,
  [SMALL_STATE(185)] = 3946,
  [SMALL_STATE(186)] = 3960,
  [SMALL_STATE(187)] = 3972,
  [SMALL_STATE(188)] = 3984,
  [SMALL_STATE(189)] = 3998,
  [SMALL_STATE(190)] = 4014,
  [SMALL_STATE(191)] = 4026,
  [SMALL_STATE(192)] = 4038,
  [SMALL_STATE(193)] = 4050,
  [SMALL_STATE(194)] = 4066,
  [SMALL_STATE(195)] = 4078,
  [SMALL_STATE(196)] = 4094,
  [SMALL_STATE(197)] = 4108,
  [SMALL_STATE(198)] = 4122,
  [SMALL_STATE(199)] = 4136,
  [SMALL_STATE(200)] = 4150,
  [SMALL_STATE(201)] = 4166,
  [SMALL_STATE(202)] = 4180,
  [SMALL_STATE(203)] = 4194,
  [SMALL_STATE(204)] = 4208,
  [SMALL_STATE(205)] = 4222,
  [SMALL_STATE(206)] = 4238,
  [SMALL_STATE(207)] = 4252,
  [SMALL_STATE(208)] = 4266,
  [SMALL_STATE(209)] = 4282,
  [SMALL_STATE(210)] = 4296,
  [SMALL_STATE(211)] = 4310,
  [SMALL_STATE(212)] = 4323,
  [SMALL_STATE(213)] = 4334,
  [SMALL_STATE(214)] = 4347,
  [SMALL_STATE(215)] = 4360,
  [SMALL_STATE(216)] = 4373,
  [SMALL_STATE(217)] = 4386,
  [SMALL_STATE(218)] = 4399,
  [SMALL_STATE(219)] = 4412,
  [SMALL_STATE(220)] = 4423,
  [SMALL_STATE(221)] = 4436,
  [SMALL_STATE(222)] = 4449,
  [SMALL_STATE(223)] = 4460,
  [SMALL_STATE(224)] = 4473,
  [SMALL_STATE(225)] = 4486,
  [SMALL_STATE(226)] = 4499,
  [SMALL_STATE(227)] = 4512,
  [SMALL_STATE(228)] = 4525,
  [SMALL_STATE(229)] = 4538,
  [SMALL_STATE(230)] = 4551,
  [SMALL_STATE(231)] = 4562,
  [SMALL_STATE(232)] = 4575,
  [SMALL_STATE(233)] = 4588,
  [SMALL_STATE(234)] = 4601,
  [SMALL_STATE(235)] = 4614,
  [SMALL_STATE(236)] = 4627,
  [SMALL_STATE(237)] = 4640,
  [SMALL_STATE(238)] = 4653,
  [SMALL_STATE(239)] = 4666,
  [SMALL_STATE(240)] = 4677,
  [SMALL_STATE(241)] = 4690,
  [SMALL_STATE(242)] = 4703,
  [SMALL_STATE(243)] = 4714,
  [SMALL_STATE(244)] = 4725,
  [SMALL_STATE(245)] = 4738,
  [SMALL_STATE(246)] = 4748,
  [SMALL_STATE(247)] = 4758,
  [SMALL_STATE(248)] = 4768,
  [SMALL_STATE(249)] = 4778,
  [SMALL_STATE(250)] = 4788,
  [SMALL_STATE(251)] = 4798,
  [SMALL_STATE(252)] = 4808,
  [SMALL_STATE(253)] = 4818,
  [SMALL_STATE(254)] = 4828,
  [SMALL_STATE(255)] = 4838,
  [SMALL_STATE(256)] = 4848,
  [SMALL_STATE(257)] = 4858,
  [SMALL_STATE(258)] = 4868,
  [SMALL_STATE(259)] = 4878,
  [SMALL_STATE(260)] = 4888,
  [SMALL_STATE(261)] = 4898,
  [SMALL_STATE(262)] = 4908,
  [SMALL_STATE(263)] = 4918,
  [SMALL_STATE(264)] = 4928,
  [SMALL_STATE(265)] = 4938,
  [SMALL_STATE(266)] = 4948,
  [SMALL_STATE(267)] = 4958,
  [SMALL_STATE(268)] = 4968,
  [SMALL_STATE(269)] = 4978,
  [SMALL_STATE(270)] = 4988,
  [SMALL_STATE(271)] = 4998,
  [SMALL_STATE(272)] = 5008,
  [SMALL_STATE(273)] = 5018,
  [SMALL_STATE(274)] = 5028,
  [SMALL_STATE(275)] = 5038,
  [SMALL_STATE(276)] = 5048,
  [SMALL_STATE(277)] = 5058,
  [SMALL_STATE(278)] = 5068,
  [SMALL_STATE(279)] = 5078,
  [SMALL_STATE(280)] = 5088,
  [SMALL_STATE(281)] = 5098,
  [SMALL_STATE(282)] = 5108,
  [SMALL_STATE(283)] = 5118,
  [SMALL_STATE(284)] = 5128,
  [SMALL_STATE(285)] = 5138,
  [SMALL_STATE(286)] = 5148,
  [SMALL_STATE(287)] = 5158,
  [SMALL_STATE(288)] = 5168,
  [SMALL_STATE(289)] = 5178,
  [SMALL_STATE(290)] = 5188,
  [SMALL_STATE(291)] = 5198,
  [SMALL_STATE(292)] = 5208,
  [SMALL_STATE(293)] = 5218,
  [SMALL_STATE(294)] = 5228,
  [SMALL_STATE(295)] = 5238,
  [SMALL_STATE(296)] = 5248,
  [SMALL_STATE(297)] = 5258,
  [SMALL_STATE(298)] = 5268,
  [SMALL_STATE(299)] = 5278,
  [SMALL_STATE(300)] = 5288,
  [SMALL_STATE(301)] = 5298,
  [SMALL_STATE(302)] = 5308,
  [SMALL_STATE(303)] = 5318,
  [SMALL_STATE(304)] = 5328,
  [SMALL_STATE(305)] = 5338,
  [SMALL_STATE(306)] = 5348,
  [SMALL_STATE(307)] = 5358,
  [SMALL_STATE(308)] = 5368,
  [SMALL_STATE(309)] = 5378,
  [SMALL_STATE(310)] = 5388,
  [SMALL_STATE(311)] = 5398,
  [SMALL_STATE(312)] = 5408,
  [SMALL_STATE(313)] = 5418,
  [SMALL_STATE(314)] = 5428,
  [SMALL_STATE(315)] = 5438,
  [SMALL_STATE(316)] = 5448,
  [SMALL_STATE(317)] = 5458,
  [SMALL_STATE(318)] = 5468,
  [SMALL_STATE(319)] = 5478,
  [SMALL_STATE(320)] = 5488,
  [SMALL_STATE(321)] = 5498,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(270),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(236),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(208),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(78),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(211),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(161),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(90),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user_name_or_group, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 13),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 15),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(125),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 2), SHIFT_REPEAT(168),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(153),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(87),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(151),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(86),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(257),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(125),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 2), SHIFT_REPEAT(168),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(157),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(147),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(147),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 11),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(136),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(172),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(159),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(142),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(182),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(200),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(154),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 2), SHIFT_REPEAT(163),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(173),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(85),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(207),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(165),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stopsignal_value, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(150),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(174),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 13),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 13),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_expansion, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_expansion, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(57),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(171),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(106),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(245),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_required_line_continuation, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(253),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_user_name_or_group_fragment, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_or_group_repeat1, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(275),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value_repeat1, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(113),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 3),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(123),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__immediate_user_name_or_group, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(231),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 9),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 10),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 6),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__env_key, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 2),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 14),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [780] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 12),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 7),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__spaced_env_pair, 3, .production_id = 10),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_continuation, 1),
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
