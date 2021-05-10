#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 280
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

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
  aux_sym__user_name_group_token1 = 15,
  aux_sym_workdir_instruction_token1 = 16,
  aux_sym_arg_instruction_token1 = 17,
  aux_sym_arg_instruction_token2 = 18,
  anon_sym_EQ = 19,
  aux_sym_onbuild_instruction_token1 = 20,
  aux_sym_stopsignal_instruction_token1 = 21,
  aux_sym__stopsignal_value_token1 = 22,
  aux_sym_healthcheck_instruction_token1 = 23,
  anon_sym_NONE = 24,
  aux_sym_shell_instruction_token1 = 25,
  aux_sym_path_token1 = 26,
  aux_sym_path_token2 = 27,
  anon_sym_DOLLAR = 28,
  aux_sym_expansion_token1 = 29,
  anon_sym_LBRACE = 30,
  aux_sym_expansion_token2 = 31,
  anon_sym_RBRACE = 32,
  aux_sym_env_pair_token1 = 33,
  aux_sym_expose_port_token1 = 34,
  anon_sym_SLASHtcp = 35,
  anon_sym_SLASHudp = 36,
  aux_sym_label_pair_token1 = 37,
  aux_sym_image_name_token1 = 38,
  aux_sym_image_tag_token1 = 39,
  anon_sym_AT = 40,
  aux_sym_image_digest_token1 = 41,
  anon_sym_DASH_DASH = 42,
  aux_sym_param_token1 = 43,
  aux_sym_param_token2 = 44,
  aux_sym_image_alias_token1 = 45,
  anon_sym_LBRACK = 46,
  anon_sym_COMMA = 47,
  anon_sym_RBRACK = 48,
  aux_sym_shell_command_token1 = 49,
  anon_sym_BSLASH_LF = 50,
  aux_sym_shell_command_token2 = 51,
  anon_sym_DQUOTE = 52,
  aux_sym_double_quoted_string_token1 = 53,
  aux_sym_unquoted_string_token1 = 54,
  anon_sym_BSLASH = 55,
  sym_escape_sequence = 56,
  sym__non_newline_whitespace = 57,
  anon_sym_POUND = 58,
  aux_sym_comment_token1 = 59,
  sym_source_file = 60,
  sym__instruction = 61,
  sym_from_instruction = 62,
  sym_run_instruction = 63,
  sym_cmd_instruction = 64,
  sym_label_instruction = 65,
  sym_expose_instruction = 66,
  sym_env_instruction = 67,
  sym_add_instruction = 68,
  sym_copy_instruction = 69,
  sym_entrypoint_instruction = 70,
  sym_volume_instruction = 71,
  sym_user_instruction = 72,
  aux_sym__user_name_group = 73,
  sym_workdir_instruction = 74,
  sym_arg_instruction = 75,
  sym_onbuild_instruction = 76,
  sym_stopsignal_instruction = 77,
  aux_sym__stopsignal_value = 78,
  sym_healthcheck_instruction = 79,
  sym_shell_instruction = 80,
  sym_path = 81,
  sym_expansion = 82,
  sym_env_pair = 83,
  sym_expose_port = 84,
  sym_label_pair = 85,
  sym_image_spec = 86,
  sym_image_name = 87,
  sym_image_tag = 88,
  sym_image_digest = 89,
  sym_param = 90,
  sym_image_alias = 91,
  sym_string_array = 92,
  sym_shell_command = 93,
  sym_double_quoted_string = 94,
  sym_unquoted_string = 95,
  sym_comment = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_label_instruction_repeat1 = 98,
  aux_sym_expose_instruction_repeat1 = 99,
  aux_sym_env_instruction_repeat1 = 100,
  aux_sym_volume_instruction_repeat1 = 101,
  aux_sym_healthcheck_instruction_repeat1 = 102,
  aux_sym_path_repeat1 = 103,
  aux_sym_expansion_repeat1 = 104,
  aux_sym_image_name_repeat1 = 105,
  aux_sym_image_tag_repeat1 = 106,
  aux_sym_image_digest_repeat1 = 107,
  aux_sym_image_alias_repeat1 = 108,
  aux_sym_string_array_repeat1 = 109,
  aux_sym_shell_command_repeat1 = 110,
  aux_sym_double_quoted_string_repeat1 = 111,
  aux_sym_unquoted_string_repeat1 = 112,
};

static const char *ts_symbol_names[] = {
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
  [aux_sym__user_name_group_token1] = "_user_name_group_token1",
  [aux_sym_workdir_instruction_token1] = "WORKDIR",
  [aux_sym_arg_instruction_token1] = "ARG",
  [aux_sym_arg_instruction_token2] = "unquoted_string",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "ONBUILD",
  [aux_sym_stopsignal_instruction_token1] = "STOPSIGNAL",
  [aux_sym__stopsignal_value_token1] = "_stopsignal_value_token1",
  [aux_sym_healthcheck_instruction_token1] = "HEALTHCHECK",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "SHELL",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_expansion_token1] = "expansion_token1",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_token2] = "expansion_token2",
  [anon_sym_RBRACE] = "}",
  [aux_sym_env_pair_token1] = "unquoted_string",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "unquoted_string",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym_shell_command_token1] = "shell_command_token1",
  [anon_sym_BSLASH_LF] = "\\\n",
  [aux_sym_shell_command_token2] = "shell_command_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym__non_newline_whitespace] = "_non_newline_whitespace",
  [anon_sym_POUND] = "#",
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
  [aux_sym__user_name_group] = "_user_name_group",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [aux_sym__stopsignal_value] = "_stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_path] = "path",
  [sym_expansion] = "expansion",
  [sym_env_pair] = "env_pair",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_image_alias] = "image_alias",
  [sym_string_array] = "string_array",
  [sym_shell_command] = "shell_command",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_healthcheck_instruction_repeat1] = "healthcheck_instruction_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_expansion_repeat1] = "expansion_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_string_array_repeat1] = "string_array_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
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
  [aux_sym__user_name_group_token1] = aux_sym__user_name_group_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = sym_unquoted_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym__stopsignal_value_token1] = aux_sym__stopsignal_value_token1,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_expansion_token1] = aux_sym_expansion_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_token2] = aux_sym_expansion_token2,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_env_pair_token1] = sym_unquoted_string,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = sym_unquoted_string,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_shell_command_token1] = aux_sym_shell_command_token1,
  [anon_sym_BSLASH_LF] = anon_sym_BSLASH_LF,
  [aux_sym_shell_command_token2] = aux_sym_shell_command_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__non_newline_whitespace] = sym__non_newline_whitespace,
  [anon_sym_POUND] = anon_sym_POUND,
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
  [aux_sym__user_name_group] = aux_sym__user_name_group,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [aux_sym__stopsignal_value] = aux_sym__stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_path] = sym_path,
  [sym_expansion] = sym_expansion,
  [sym_env_pair] = sym_env_pair,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_image_alias] = sym_image_alias,
  [sym_string_array] = sym_string_array,
  [sym_shell_command] = sym_shell_command,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_healthcheck_instruction_repeat1] = aux_sym_healthcheck_instruction_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_expansion_repeat1] = aux_sym_expansion_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_string_array_repeat1] = aux_sym_string_array_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
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
  [aux_sym__user_name_group_token1] = {
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
  [aux_sym_expansion_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_pair_token1] = {
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
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_command_token2] = {
    .visible = false,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
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
  [aux_sym__user_name_group] = {
    .visible = false,
    .named = false,
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
  [aux_sym__stopsignal_value] = {
    .visible = false,
    .named = false,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
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
  [sym_env_pair] = {
    .visible = true,
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
  [sym_double_quoted_string] = {
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
  [aux_sym_volume_instruction_repeat1] = {
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
  [aux_sym_expansion_repeat1] = {
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

static const char *ts_field_names[] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_user, 2},
  [2] =
    {field_name, 2},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_as, 4},
  [8] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [11] =
    {field_key, 0},
    {field_value, 2},
  [13] =
    {field_name, 0},
    {field_value, 2},
  [15] =
    {field_group, 4},
    {field_user, 2},
  [17] =
    {field_default, 4},
    {field_name, 2},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_as, 5},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [2] = sym_unquoted_string,
  },
  [10] = {
    [2] = sym_unquoted_string,
    [4] = sym_unquoted_string,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__user_name_group, 2,
    aux_sym__user_name_group,
    sym_unquoted_string,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(252);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == 'U') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == 'x') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(241);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(263);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') SKIP(41)
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') SKIP(41)
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') SKIP(43)
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') SKIP(43)
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') SKIP(45)
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(200);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(62)
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(276);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 75:
      if (lookahead == '#') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(242);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(198);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 81:
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 97:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 108:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 110:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 112:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 116:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(197);
      END_STATE();
    case 117:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(97);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 139:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 140:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 142:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 158:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 159:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 169:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(147);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 170:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(147);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(102);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(133);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '$') ADVANCE(205);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '[') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(252);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '-') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == '_') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '_') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(204);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_expansion_token2);
      if (lookahead == '\n') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_expansion_token2);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_expansion_token2);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_env_pair_token1);
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
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
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
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
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_shell_command_token1);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_shell_command_token2);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_shell_command_token2);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(263);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(235);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(238);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(204);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(246);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 169},
  [2] = {.lex_state = 169},
  [3] = {.lex_state = 169},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 42},
  [33] = {.lex_state = 42},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 44},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 169},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 31},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 69},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 38},
  [62] = {.lex_state = 38},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 34},
  [72] = {.lex_state = 42},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 52},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 42},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 50},
  [81] = {.lex_state = 71},
  [82] = {.lex_state = 50},
  [83] = {.lex_state = 40},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 169},
  [87] = {.lex_state = 71},
  [88] = {.lex_state = 57},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 39},
  [93] = {.lex_state = 169},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 39},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 34},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 71},
  [100] = {.lex_state = 24},
  [101] = {.lex_state = 57},
  [102] = {.lex_state = 72},
  [103] = {.lex_state = 72},
  [104] = {.lex_state = 72},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 38},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 25},
  [109] = {.lex_state = 38},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 73},
  [116] = {.lex_state = 73},
  [117] = {.lex_state = 50},
  [118] = {.lex_state = 44},
  [119] = {.lex_state = 169},
  [120] = {.lex_state = 50},
  [121] = {.lex_state = 29},
  [122] = {.lex_state = 50},
  [123] = {.lex_state = 28},
  [124] = {.lex_state = 58},
  [125] = {.lex_state = 50},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 56},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 70},
  [130] = {.lex_state = 73},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 50},
  [133] = {.lex_state = 40},
  [134] = {.lex_state = 50},
  [135] = {.lex_state = 58},
  [136] = {.lex_state = 50},
  [137] = {.lex_state = 50},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 58},
  [140] = {.lex_state = 45},
  [141] = {.lex_state = 45},
  [142] = {.lex_state = 61},
  [143] = {.lex_state = 61},
  [144] = {.lex_state = 61},
  [145] = {.lex_state = 61},
  [146] = {.lex_state = 61},
  [147] = {.lex_state = 61},
  [148] = {.lex_state = 169},
  [149] = {.lex_state = 61},
  [150] = {.lex_state = 45},
  [151] = {.lex_state = 61},
  [152] = {.lex_state = 61},
  [153] = {.lex_state = 61},
  [154] = {.lex_state = 61},
  [155] = {.lex_state = 61},
  [156] = {.lex_state = 63},
  [157] = {.lex_state = 64},
  [158] = {.lex_state = 61},
  [159] = {.lex_state = 169},
  [160] = {.lex_state = 24},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 169},
  [164] = {.lex_state = 39},
  [165] = {.lex_state = 25},
  [166] = {.lex_state = 72},
  [167] = {.lex_state = 169},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 169},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 26},
  [173] = {.lex_state = 45},
  [174] = {.lex_state = 169},
  [175] = {.lex_state = 69},
  [176] = {.lex_state = 169},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 29},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 50},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 26},
  [183] = {.lex_state = 26},
  [184] = {.lex_state = 26},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 169},
  [187] = {.lex_state = 28},
  [188] = {.lex_state = 28},
  [189] = {.lex_state = 169},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 169},
  [192] = {.lex_state = 28},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 62},
  [196] = {.lex_state = 62},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 169},
  [199] = {.lex_state = 74},
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 62},
  [207] = {.lex_state = 62},
  [208] = {.lex_state = 169},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 169},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 66},
  [214] = {.lex_state = 67},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 66},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 62},
  [222] = {.lex_state = 62},
  [223] = {.lex_state = 62},
  [224] = {.lex_state = 75},
  [225] = {.lex_state = 62},
  [226] = {.lex_state = 62},
  [227] = {.lex_state = 62},
  [228] = {.lex_state = 62},
  [229] = {.lex_state = 62},
  [230] = {.lex_state = 62},
  [231] = {.lex_state = 62},
  [232] = {.lex_state = 281},
  [233] = {.lex_state = 62},
  [234] = {.lex_state = 169},
  [235] = {.lex_state = 75},
  [236] = {.lex_state = 62},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 46},
  [239] = {.lex_state = 169},
  [240] = {.lex_state = 75},
  [241] = {.lex_state = 62},
  [242] = {.lex_state = 62},
  [243] = {.lex_state = 169},
  [244] = {.lex_state = 62},
  [245] = {.lex_state = 169},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 169},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 169},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 169},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 169},
  [254] = {.lex_state = 169},
  [255] = {.lex_state = 169},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 169},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 169},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 169},
  [262] = {.lex_state = 74},
  [263] = {.lex_state = 169},
  [264] = {.lex_state = 62},
  [265] = {.lex_state = 62},
  [266] = {.lex_state = 74},
  [267] = {.lex_state = 169},
  [268] = {.lex_state = 74},
  [269] = {.lex_state = 74},
  [270] = {.lex_state = 74},
  [271] = {.lex_state = 74},
  [272] = {.lex_state = 74},
  [273] = {.lex_state = 74},
  [274] = {.lex_state = 74},
  [275] = {.lex_state = 74},
  [276] = {.lex_state = 74},
  [277] = {.lex_state = 74},
  [278] = {.lex_state = 66},
  [279] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__user_name_group_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_expansion_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(220),
    [sym__instruction] = STATE(219),
    [sym_from_instruction] = STATE(218),
    [sym_run_instruction] = STATE(218),
    [sym_cmd_instruction] = STATE(218),
    [sym_label_instruction] = STATE(218),
    [sym_expose_instruction] = STATE(218),
    [sym_env_instruction] = STATE(218),
    [sym_add_instruction] = STATE(218),
    [sym_copy_instruction] = STATE(218),
    [sym_entrypoint_instruction] = STATE(218),
    [sym_volume_instruction] = STATE(218),
    [sym_user_instruction] = STATE(218),
    [sym_workdir_instruction] = STATE(218),
    [sym_arg_instruction] = STATE(218),
    [sym_onbuild_instruction] = STATE(218),
    [sym_stopsignal_instruction] = STATE(218),
    [sym_healthcheck_instruction] = STATE(218),
    [sym_shell_instruction] = STATE(218),
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
    [anon_sym_BSLASH_LF] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(48), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(51), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(54), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(57), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(60), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(63), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(66), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(69), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(72), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(75), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(78), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(81), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(84), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(87), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(90), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(93), 1,
      aux_sym_shell_instruction_token1,
    STATE(219), 1,
      sym__instruction,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(218), 17,
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
  [87] = 24,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
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
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(219), 1,
      sym__instruction,
    STATE(218), 17,
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
  [176] = 22,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
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
    STATE(4), 1,
      sym_comment,
    STATE(202), 1,
      sym__instruction,
    STATE(218), 17,
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
  [259] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_comment,
    ACTIONS(43), 18,
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
  [289] = 8,
    ACTIONS(102), 1,
      aux_sym_expansion_token1,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(98), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(100), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [318] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(114), 1,
      aux_sym_expansion_token1,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    STATE(7), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
    ACTIONS(110), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(112), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [345] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(126), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(98), 1,
      sym_expansion,
    STATE(178), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [377] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      aux_sym_image_name_token1,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    STATE(9), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_image_name_repeat1,
    STATE(48), 1,
      sym_expansion,
    STATE(51), 1,
      sym_image_name,
    STATE(52), 1,
      sym_param,
    STATE(182), 1,
      sym_image_spec,
  [411] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      aux_sym_expansion_token1,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(100), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [439] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(140), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_image_name_token1,
  [461] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(142), 1,
      aux_sym_expansion_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(100), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [489] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      aux_sym_expansion_token1,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    STATE(13), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [515] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      aux_sym_expansion_token1,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym_expansion_repeat1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(100), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [543] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      aux_sym_image_name_token1,
    ACTIONS(158), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(160), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_image_name_repeat1,
    STATE(48), 1,
      sym_expansion,
    ACTIONS(156), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [573] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(126), 1,
      anon_sym_BSLASH,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    STATE(16), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(98), 1,
      sym_expansion,
    STATE(246), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [605] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      aux_sym_expansion_token1,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    STATE(17), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [631] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(172), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_image_name_token1,
  [653] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(178), 1,
      anon_sym_BSLASH,
    STATE(19), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(97), 1,
      sym_expansion,
    STATE(171), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [685] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(180), 1,
      aux_sym_expansion_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(20), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
    ACTIONS(112), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [711] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(188), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(190), 1,
      anon_sym_DOLLAR,
    ACTIONS(193), 1,
      aux_sym_image_name_token1,
    STATE(48), 1,
      sym_expansion,
    STATE(21), 2,
      sym_comment,
      aux_sym_image_name_repeat1,
    ACTIONS(186), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [739] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(196), 1,
      aux_sym_expansion_token1,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(22), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [764] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(140), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [785] = 10,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(178), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      aux_sym_env_pair_token1,
    STATE(24), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(97), 1,
      sym_expansion,
  [816] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(172), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [837] = 8,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      aux_sym_expansion_token1,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(100), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_digest_token1,
  [864] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 1,
      anon_sym_DOLLAR,
    ACTIONS(217), 1,
      aux_sym_env_pair_token1,
    ACTIONS(219), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(222), 1,
      anon_sym_BSLASH,
    STATE(97), 1,
      sym_expansion,
    STATE(27), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [893] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(140), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_image_tag_token1,
  [914] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(217), 1,
      aux_sym_label_pair_token1,
    ACTIONS(225), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    STATE(98), 1,
      sym_expansion,
    STATE(29), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [943] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(234), 1,
      aux_sym_expansion_token1,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    STATE(30), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
    ACTIONS(112), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_digest_token1,
  [968] = 10,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(126), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(206), 1,
      aux_sym_label_pair_token1,
    ACTIONS(240), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(98), 1,
      sym_expansion,
  [999] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      aux_sym_expansion_token1,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(100), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1024] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      aux_sym_expansion_token1,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    STATE(33), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
    ACTIONS(112), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [1047] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(256), 1,
      anon_sym_DOLLAR,
    ACTIONS(259), 1,
      aux_sym_image_tag_token1,
    STATE(90), 1,
      sym_expansion,
    ACTIONS(252), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(34), 2,
      sym_comment,
      aux_sym_image_tag_repeat1,
  [1074] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(266), 1,
      anon_sym_DOLLAR,
    ACTIONS(268), 1,
      aux_sym_image_tag_token1,
    STATE(34), 1,
      aux_sym_image_tag_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(90), 1,
      sym_expansion,
    ACTIONS(262), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1103] = 8,
    ACTIONS(98), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      aux_sym_expansion_token1,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      aux_sym_expansion_repeat1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(100), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1130] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(172), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1151] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(140), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1172] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      aux_sym_expansion_token1,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(100), 2,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
  [1199] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      aux_sym_expansion_token1,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(112), 2,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
    STATE(40), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
  [1224] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(172), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_image_tag_token1,
  [1245] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      aux_sym_path_token2,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_path_repeat1,
    STATE(118), 1,
      sym_expansion,
    ACTIONS(284), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1271] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(292), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      aux_sym_expose_port_token1,
    STATE(43), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(161), 1,
      sym_expansion,
    STATE(162), 1,
      sym_expose_port,
  [1299] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(126), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(98), 1,
      sym_expansion,
  [1327] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(300), 1,
      anon_sym_DOLLAR,
    ACTIONS(303), 1,
      aux_sym_image_digest_token1,
    STATE(128), 1,
      sym_expansion,
    STATE(45), 2,
      sym_comment,
      aux_sym_image_digest_repeat1,
  [1353] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(306), 1,
      anon_sym_NONE,
    ACTIONS(308), 1,
      anon_sym_DASH_DASH,
    STATE(46), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(189), 1,
      sym_param,
    STATE(201), 1,
      sym_cmd_instruction,
  [1381] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(310), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(318), 1,
      sym_escape_sequence,
    STATE(133), 1,
      sym_expansion,
    STATE(47), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [1407] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(323), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1427] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(325), 1,
      aux_sym_expansion_token1,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
    STATE(49), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
  [1451] = 8,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      aux_sym_expansion_token1,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      aux_sym_expansion_repeat1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [1477] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(337), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(339), 1,
      anon_sym_COLON,
    ACTIONS(341), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_comment,
    STATE(126), 1,
      sym_image_tag,
    STATE(184), 1,
      sym_image_digest,
  [1505] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      aux_sym_image_name_token1,
    STATE(15), 1,
      aux_sym_image_name_repeat1,
    STATE(48), 1,
      sym_expansion,
    STATE(51), 1,
      sym_image_name,
    STATE(52), 1,
      sym_comment,
    STATE(183), 1,
      sym_image_spec,
  [1533] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(349), 1,
      sym_escape_sequence,
    STATE(53), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(133), 1,
      sym_expansion,
  [1561] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      aux_sym_double_quoted_string_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(140), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1581] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(351), 1,
      aux_sym_expansion_token1,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
    STATE(55), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
  [1605] = 8,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(357), 1,
      aux_sym_expansion_token1,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      aux_sym_expansion_repeat1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(100), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [1631] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      aux_sym_path_token2,
    ACTIONS(288), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      aux_sym_path_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(118), 1,
      sym_expansion,
    ACTIONS(361), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1657] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      aux_sym_double_quoted_string_token1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(172), 5,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1677] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(349), 1,
      sym_escape_sequence,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(59), 1,
      sym_comment,
    STATE(133), 1,
      sym_expansion,
  [1705] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(370), 1,
      anon_sym_DOLLAR,
    STATE(131), 1,
      sym_expansion,
    ACTIONS(365), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(60), 2,
      aux_sym__user_name_group,
      sym_comment,
  [1729] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(373), 1,
      aux_sym_expansion_token1,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
    STATE(61), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
  [1753] = 8,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      aux_sym_expansion_token1,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      aux_sym_expansion_repeat1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(100), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [1779] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(385), 1,
      aux_sym_path_token2,
    ACTIONS(388), 1,
      anon_sym_DOLLAR,
    STATE(118), 1,
      sym_expansion,
    ACTIONS(383), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(63), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1803] = 8,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      aux_sym_expansion_token1,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_expansion_repeat1,
    ACTIONS(100), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [1829] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(140), 4,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
  [1849] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(349), 1,
      sym_escape_sequence,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(133), 1,
      sym_expansion,
  [1877] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym_comment,
    ACTIONS(140), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_image_digest_token1,
  [1897] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(349), 1,
      sym_escape_sequence,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(133), 1,
      sym_expansion,
  [1925] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(404), 1,
      aux_sym_expose_port_token1,
    STATE(161), 1,
      sym_expansion,
    STATE(162), 1,
      sym_expose_port,
    STATE(69), 2,
      sym_comment,
      aux_sym_expose_instruction_repeat1,
  [1951] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(172), 4,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
  [1971] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(231), 1,
      anon_sym_BSLASH,
    STATE(98), 1,
      sym_expansion,
    STATE(71), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [1997] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym_comment,
    ACTIONS(140), 6,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      sym__non_newline_whitespace,
  [2015] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      aux_sym_expansion_token1,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    STATE(73), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
  [2039] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      anon_sym_LF,
    ACTIONS(415), 1,
      anon_sym_COLON,
    ACTIONS(417), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(419), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      aux_sym__user_name_group,
    STATE(74), 1,
      sym_comment,
    STATE(131), 1,
      sym_expansion,
  [2067] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(421), 1,
      aux_sym_path_token1,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_expansion,
    STATE(75), 1,
      sym_comment,
    STATE(140), 1,
      sym_path,
    STATE(204), 1,
      sym_string_array,
  [2095] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(427), 1,
      anon_sym_LF,
    ACTIONS(429), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(431), 1,
      anon_sym_DOLLAR,
    ACTIONS(433), 1,
      aux_sym_image_digest_token1,
    STATE(45), 1,
      aux_sym_image_digest_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(128), 1,
      sym_expansion,
  [2123] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      sym__non_newline_whitespace,
  [2141] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym_comment,
    ACTIONS(172), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_image_digest_token1,
  [2161] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      sym__non_newline_whitespace,
    ACTIONS(435), 1,
      aux_sym_expansion_token1,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
    STATE(79), 2,
      sym_comment,
      aux_sym_expansion_repeat1,
  [2185] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      aux_sym_path_token1,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      anon_sym_DASH_DASH,
    STATE(80), 1,
      sym_comment,
    STATE(104), 1,
      sym_expansion,
    STATE(132), 1,
      sym_param,
    STATE(206), 1,
      sym_path,
  [2213] = 8,
    ACTIONS(98), 1,
      sym__non_newline_whitespace,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(447), 1,
      aux_sym_expansion_token1,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      aux_sym_expansion_repeat1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(100), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2239] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      aux_sym_path_token1,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    ACTIONS(445), 1,
      anon_sym_DASH_DASH,
    STATE(82), 1,
      sym_comment,
    STATE(104), 1,
      sym_expansion,
    STATE(134), 1,
      sym_param,
    STATE(207), 1,
      sym_path,
  [2267] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(349), 1,
      sym_escape_sequence,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(133), 1,
      sym_expansion,
  [2295] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(347), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(349), 1,
      sym_escape_sequence,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(84), 1,
      sym_comment,
    STATE(133), 1,
      sym_expansion,
  [2323] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(417), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(419), 1,
      anon_sym_DOLLAR,
    ACTIONS(455), 1,
      anon_sym_LF,
    STATE(60), 1,
      aux_sym__user_name_group,
    STATE(85), 1,
      sym_comment,
    STATE(131), 1,
      sym_expansion,
  [2348] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(308), 1,
      anon_sym_DASH_DASH,
    STATE(86), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(189), 1,
      sym_param,
    STATE(250), 1,
      sym_cmd_instruction,
  [2373] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      sym__non_newline_whitespace,
    STATE(87), 1,
      sym_comment,
    ACTIONS(172), 4,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
  [2392] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    ACTIONS(459), 1,
      aux_sym_image_alias_token1,
    STATE(88), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_image_alias_repeat1,
    STATE(160), 1,
      sym_expansion,
    STATE(216), 1,
      sym_image_alias,
  [2417] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(463), 1,
      aux_sym_path_token2,
    ACTIONS(465), 1,
      anon_sym_DOLLAR,
    STATE(89), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_path_repeat1,
    STATE(164), 1,
      sym_expansion,
  [2442] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(469), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [2461] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      anon_sym_DOLLAR,
    ACTIONS(475), 1,
      aux_sym_image_alias_token1,
    STATE(91), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_image_alias_repeat1,
    STATE(160), 1,
      sym_expansion,
  [2486] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      aux_sym_path_token2,
    ACTIONS(465), 1,
      anon_sym_DOLLAR,
    ACTIONS(477), 1,
      anon_sym_LF,
    STATE(89), 1,
      aux_sym_path_repeat1,
    STATE(92), 1,
      sym_comment,
    STATE(164), 1,
      sym_expansion,
  [2511] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(479), 1,
      anon_sym_DOLLAR,
    ACTIONS(481), 1,
      aux_sym_expose_port_token1,
    STATE(43), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(93), 1,
      sym_comment,
    STATE(161), 1,
      sym_expansion,
    STATE(162), 1,
      sym_expose_port,
  [2536] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_LF,
      aux_sym_expansion_token1,
    ACTIONS(140), 3,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      aux_sym_expose_port_token1,
  [2555] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      aux_sym_path_token2,
    ACTIONS(488), 1,
      anon_sym_DOLLAR,
    STATE(164), 1,
      sym_expansion,
    STATE(95), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [2578] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(495), 1,
      anon_sym_DOLLAR,
    STATE(96), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym__stopsignal_value,
    STATE(165), 1,
      sym_expansion,
  [2603] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(499), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [2622] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(499), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [2641] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      sym__non_newline_whitespace,
    STATE(99), 1,
      sym_comment,
    ACTIONS(140), 4,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
  [2660] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(503), 1,
      anon_sym_DOLLAR,
    ACTIONS(506), 1,
      aux_sym_image_alias_token1,
    STATE(160), 1,
      sym_expansion,
    STATE(100), 2,
      sym_comment,
      aux_sym_image_alias_repeat1,
  [2683] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      anon_sym_DOLLAR,
    ACTIONS(459), 1,
      aux_sym_image_alias_token1,
    STATE(91), 1,
      aux_sym_image_alias_repeat1,
    STATE(101), 1,
      sym_comment,
    STATE(160), 1,
      sym_expansion,
    STATE(215), 1,
      sym_image_alias,
  [2708] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      sym__non_newline_whitespace,
    ACTIONS(509), 1,
      aux_sym_path_token2,
    ACTIONS(512), 1,
      anon_sym_DOLLAR,
    STATE(166), 1,
      sym_expansion,
    STATE(102), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [2731] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(461), 1,
      sym__non_newline_whitespace,
    ACTIONS(515), 1,
      aux_sym_path_token2,
    ACTIONS(517), 1,
      anon_sym_DOLLAR,
    STATE(102), 1,
      aux_sym_path_repeat1,
    STATE(103), 1,
      sym_comment,
    STATE(166), 1,
      sym_expansion,
  [2756] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(477), 1,
      sym__non_newline_whitespace,
    ACTIONS(515), 1,
      aux_sym_path_token2,
    ACTIONS(517), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      aux_sym_path_repeat1,
    STATE(104), 1,
      sym_comment,
    STATE(166), 1,
      sym_expansion,
  [2781] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_LF,
      aux_sym_expansion_token1,
    ACTIONS(172), 3,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      aux_sym_expose_port_token1,
  [2800] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(106), 1,
      sym_comment,
    ACTIONS(172), 4,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
  [2819] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(107), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(523), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2840] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(530), 1,
      anon_sym_DOLLAR,
    STATE(165), 1,
      sym_expansion,
    STATE(108), 2,
      aux_sym__stopsignal_value,
      sym_comment,
  [2863] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      anon_sym_LF,
    STATE(109), 1,
      sym_comment,
    ACTIONS(140), 4,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
  [2882] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(110), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_LF,
      aux_sym_expansion_token1,
    ACTIONS(172), 3,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [2901] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_LF,
      aux_sym_expansion_token1,
    ACTIONS(140), 3,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [2920] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      anon_sym_LF,
    STATE(112), 1,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_image_alias_token1,
  [2939] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      anon_sym_LF,
    STATE(113), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_DOLLAR,
      aux_sym_expansion_token1,
      anon_sym_LBRACE,
      aux_sym_image_alias_token1,
  [2958] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(535), 1,
      aux_sym_env_pair_token1,
    STATE(114), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym_env_instruction_repeat1,
    STATE(187), 1,
      sym_env_pair,
  [2980] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(537), 1,
      aux_sym_shell_command_token1,
    STATE(115), 1,
      sym_comment,
    STATE(211), 2,
      sym_string_array,
      sym_shell_command,
  [3000] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(537), 1,
      aux_sym_shell_command_token1,
    STATE(116), 1,
      sym_comment,
    STATE(212), 2,
      sym_string_array,
      sym_shell_command,
  [3020] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      aux_sym_path_token1,
    ACTIONS(541), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(117), 1,
      sym_comment,
    STATE(256), 1,
      sym_path,
  [3042] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_comment,
    ACTIONS(543), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [3058] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(547), 1,
      anon_sym_DASH_DASH,
    STATE(189), 1,
      sym_param,
    STATE(119), 2,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [3078] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      aux_sym_path_token1,
    ACTIONS(541), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(120), 1,
      sym_comment,
    STATE(252), 1,
      sym_path,
  [3100] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(550), 1,
      anon_sym_LF,
    ACTIONS(552), 1,
      aux_sym_label_pair_token1,
    STATE(179), 1,
      sym_label_pair,
    STATE(121), 2,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [3120] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(421), 1,
      aux_sym_path_token1,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      sym_expansion,
    STATE(122), 1,
      sym_comment,
    STATE(173), 1,
      sym_path,
  [3142] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      aux_sym_env_pair_token1,
    STATE(187), 1,
      sym_env_pair,
    STATE(123), 2,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [3162] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(417), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(560), 1,
      anon_sym_DOLLAR,
    STATE(85), 1,
      aux_sym__user_name_group,
    STATE(124), 1,
      sym_comment,
    STATE(131), 1,
      sym_expansion,
  [3184] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      aux_sym_path_token1,
    ACTIONS(541), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(125), 1,
      sym_comment,
    STATE(203), 1,
      sym_path,
  [3206] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(562), 1,
      anon_sym_LF,
    ACTIONS(564), 1,
      aux_sym_from_instruction_token2,
    STATE(126), 1,
      sym_comment,
    STATE(172), 1,
      sym_image_digest,
  [3228] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      aux_sym_image_digest_token1,
    ACTIONS(566), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      aux_sym_image_digest_repeat1,
    STATE(127), 1,
      sym_comment,
    STATE(128), 1,
      sym_expansion,
  [3250] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(128), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(570), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [3268] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      aux_sym_image_tag_token1,
    ACTIONS(572), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      aux_sym_image_tag_repeat1,
    STATE(90), 1,
      sym_expansion,
    STATE(129), 1,
      sym_comment,
  [3290] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    ACTIONS(537), 1,
      aux_sym_shell_command_token1,
    STATE(130), 1,
      sym_comment,
    STATE(205), 2,
      sym_string_array,
      sym_shell_command,
  [3310] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(576), 1,
      anon_sym_DOLLAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(574), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [3328] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      aux_sym_path_token1,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym_expansion,
    STATE(132), 1,
      sym_comment,
    STATE(244), 1,
      sym_path,
  [3350] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(580), 1,
      aux_sym_double_quoted_string_token1,
    STATE(133), 1,
      sym_comment,
    ACTIONS(578), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3368] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      aux_sym_path_token1,
    ACTIONS(443), 1,
      anon_sym_DOLLAR,
    STATE(104), 1,
      sym_expansion,
    STATE(134), 1,
      sym_comment,
    STATE(242), 1,
      sym_path,
  [3390] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(417), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(560), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      aux_sym__user_name_group,
    STATE(131), 1,
      sym_expansion,
    STATE(135), 1,
      sym_comment,
  [3412] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      aux_sym_path_token1,
    ACTIONS(541), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(136), 1,
      sym_comment,
    STATE(260), 1,
      sym_path,
  [3434] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      aux_sym_path_token1,
    ACTIONS(541), 1,
      anon_sym_DOLLAR,
    STATE(92), 1,
      sym_expansion,
    STATE(137), 1,
      sym_comment,
    STATE(237), 1,
      sym_path,
  [3456] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 1,
      aux_sym_label_pair_token1,
    STATE(121), 1,
      aux_sym_label_instruction_repeat1,
    STATE(138), 1,
      sym_comment,
    STATE(179), 1,
      sym_label_pair,
  [3478] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(586), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(588), 1,
      anon_sym_DOLLAR,
    STATE(96), 1,
      aux_sym__stopsignal_value,
    STATE(139), 1,
      sym_comment,
    STATE(165), 1,
      sym_expansion,
  [3500] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_LF,
    ACTIONS(592), 1,
      sym__non_newline_whitespace,
    STATE(140), 1,
      sym_comment,
    STATE(141), 1,
      aux_sym_volume_instruction_repeat1,
  [3519] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(592), 1,
      sym__non_newline_whitespace,
    ACTIONS(594), 1,
      anon_sym_LF,
    STATE(141), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_volume_instruction_repeat1,
  [3538] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      aux_sym_expansion_token1,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      aux_sym_expansion_repeat1,
    STATE(142), 1,
      sym_comment,
  [3557] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      aux_sym_expansion_token1,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      aux_sym_expansion_repeat1,
    STATE(143), 1,
      sym_comment,
  [3576] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      aux_sym_expansion_token1,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      aux_sym_expansion_repeat1,
    STATE(144), 1,
      sym_comment,
  [3595] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      aux_sym_expansion_token1,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym_expansion_repeat1,
    STATE(145), 1,
      sym_comment,
  [3614] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      aux_sym_expansion_token1,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_expansion_repeat1,
    STATE(146), 1,
      sym_comment,
  [3633] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(616), 1,
      aux_sym_expansion_token1,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      aux_sym_expansion_repeat1,
    STATE(147), 1,
      sym_comment,
  [3652] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    ACTIONS(622), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_string_array_repeat1,
  [3671] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(357), 1,
      aux_sym_expansion_token1,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      aux_sym_expansion_repeat1,
    STATE(149), 1,
      sym_comment,
  [3690] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      anon_sym_LF,
    ACTIONS(628), 1,
      sym__non_newline_whitespace,
    STATE(150), 2,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [3707] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(631), 1,
      aux_sym_expansion_token1,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      aux_sym_expansion_repeat1,
    STATE(151), 1,
      sym_comment,
  [3726] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      aux_sym_expansion_token1,
    ACTIONS(637), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      aux_sym_expansion_repeat1,
    STATE(152), 1,
      sym_comment,
  [3745] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(639), 1,
      aux_sym_expansion_token1,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      aux_sym_expansion_repeat1,
    STATE(153), 1,
      sym_comment,
  [3764] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(643), 1,
      aux_sym_expansion_token1,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      aux_sym_expansion_repeat1,
    STATE(154), 1,
      sym_comment,
  [3783] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      aux_sym_expansion_token1,
    ACTIONS(647), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      aux_sym_expansion_repeat1,
    STATE(155), 1,
      sym_comment,
  [3802] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      aux_sym_label_pair_token1,
    STATE(138), 1,
      aux_sym_label_instruction_repeat1,
    STATE(156), 1,
      sym_comment,
    STATE(179), 1,
      sym_label_pair,
  [3821] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(651), 1,
      aux_sym_env_pair_token1,
    STATE(114), 1,
      aux_sym_env_instruction_repeat1,
    STATE(157), 1,
      sym_comment,
    STATE(187), 1,
      sym_env_pair,
  [3840] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(653), 1,
      aux_sym_expansion_token1,
    ACTIONS(655), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym_expansion_repeat1,
    STATE(158), 1,
      sym_comment,
  [3859] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_comment,
    STATE(167), 1,
      sym_double_quoted_string,
  [3878] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(160), 1,
      sym_comment,
    ACTIONS(663), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3895] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(519), 1,
      anon_sym_LF,
    STATE(161), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3912] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(162), 1,
      sym_comment,
    ACTIONS(667), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3929] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    STATE(163), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [3946] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_LF,
    STATE(164), 1,
      sym_comment,
    ACTIONS(543), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3963] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      anon_sym_LF,
    STATE(165), 1,
      sym_comment,
    ACTIONS(678), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [3980] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      sym__non_newline_whitespace,
    STATE(166), 1,
      sym_comment,
    ACTIONS(543), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3997] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      aux_sym_string_array_repeat1,
    STATE(167), 1,
      sym_comment,
  [4016] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_LF,
    STATE(168), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [4033] = 5,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_LF,
    ACTIONS(688), 1,
      anon_sym_BSLASH_LF,
    STATE(169), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_shell_command_repeat1,
  [4049] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(672), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4063] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(690), 1,
      anon_sym_LF,
    ACTIONS(692), 1,
      aux_sym_env_pair_token1,
    STATE(171), 1,
      sym_comment,
  [4079] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(696), 1,
      aux_sym_from_instruction_token2,
    STATE(172), 1,
      sym_comment,
  [4095] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [4109] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(659), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      sym_double_quoted_string,
    STATE(174), 1,
      sym_comment,
  [4125] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      aux_sym_image_name_token1,
    STATE(175), 1,
      sym_comment,
  [4141] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(176), 1,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4155] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(702), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      aux_sym_label_pair_token1,
    STATE(177), 1,
      sym_comment,
  [4171] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(706), 1,
      anon_sym_LF,
    ACTIONS(708), 1,
      aux_sym_label_pair_token1,
    STATE(178), 1,
      sym_comment,
  [4187] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_LF,
    ACTIONS(712), 1,
      aux_sym_label_pair_token1,
    STATE(179), 1,
      sym_comment,
  [4203] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_DOLLAR,
    ACTIONS(700), 1,
      aux_sym_path_token1,
    STATE(180), 1,
      sym_comment,
  [4219] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(714), 1,
      anon_sym_LF,
    ACTIONS(716), 1,
      aux_sym_label_pair_token1,
    STATE(181), 1,
      sym_comment,
  [4235] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      anon_sym_LF,
    ACTIONS(720), 1,
      aux_sym_from_instruction_token2,
    STATE(182), 1,
      sym_comment,
  [4251] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(722), 1,
      anon_sym_LF,
    ACTIONS(724), 1,
      aux_sym_from_instruction_token2,
    STATE(183), 1,
      sym_comment,
  [4267] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      anon_sym_LF,
    ACTIONS(728), 1,
      aux_sym_from_instruction_token2,
    STATE(184), 1,
      sym_comment,
  [4283] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(425), 1,
      anon_sym_LBRACK,
    STATE(185), 1,
      sym_comment,
    STATE(200), 1,
      sym_string_array,
  [4299] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4313] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_LF,
    ACTIONS(732), 1,
      aux_sym_env_pair_token1,
    STATE(187), 1,
      sym_comment,
  [4329] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(702), 1,
      anon_sym_LF,
    ACTIONS(704), 1,
      aux_sym_env_pair_token1,
    STATE(188), 1,
      sym_comment,
  [4345] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_comment,
    ACTIONS(734), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4359] = 5,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(736), 1,
      anon_sym_LF,
    STATE(169), 1,
      aux_sym_shell_command_repeat1,
    STATE(190), 1,
      sym_comment,
  [4375] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    ACTIONS(698), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4389] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(714), 1,
      anon_sym_LF,
    ACTIONS(716), 1,
      aux_sym_env_pair_token1,
    STATE(192), 1,
      sym_comment,
  [4405] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(740), 1,
      anon_sym_BSLASH_LF,
    STATE(193), 2,
      sym_comment,
      aux_sym_shell_command_repeat1,
  [4419] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(743), 1,
      anon_sym_LF,
    ACTIONS(745), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym_comment,
  [4435] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      sym__non_newline_whitespace,
    STATE(195), 1,
      sym_comment,
  [4448] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(749), 1,
      sym__non_newline_whitespace,
    STATE(196), 1,
      sym_comment,
  [4461] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(751), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_comment,
  [4474] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      anon_sym_EQ,
    STATE(198), 1,
      sym_comment,
  [4487] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(755), 1,
      aux_sym_expansion_token2,
    STATE(199), 1,
      sym_comment,
  [4500] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(757), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_comment,
  [4513] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_comment,
  [4526] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(761), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_comment,
  [4539] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_comment,
  [4552] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_comment,
  [4565] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(767), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_comment,
  [4578] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(769), 1,
      sym__non_newline_whitespace,
    STATE(206), 1,
      sym_comment,
  [4591] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(771), 1,
      sym__non_newline_whitespace,
    STATE(207), 1,
      sym_comment,
  [4604] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      anon_sym_EQ,
    STATE(208), 1,
      sym_comment,
  [4617] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(775), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_comment,
  [4630] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(777), 1,
      anon_sym_EQ,
    STATE(210), 1,
      sym_comment,
  [4643] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_comment,
  [4656] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(781), 1,
      anon_sym_LF,
    STATE(212), 1,
      sym_comment,
  [4669] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      aux_sym_param_token1,
    STATE(213), 1,
      sym_comment,
  [4682] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(785), 1,
      aux_sym_arg_instruction_token2,
    STATE(214), 1,
      sym_comment,
  [4695] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(787), 1,
      anon_sym_LF,
    STATE(215), 1,
      sym_comment,
  [4708] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(789), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_comment,
  [4721] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      aux_sym_param_token1,
    STATE(217), 1,
      sym_comment,
  [4734] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      anon_sym_LF,
    STATE(218), 1,
      sym_comment,
  [4747] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(795), 1,
      anon_sym_LF,
    STATE(219), 1,
      sym_comment,
  [4760] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(797), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym_comment,
  [4773] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(799), 1,
      sym__non_newline_whitespace,
    STATE(221), 1,
      sym_comment,
  [4786] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(801), 1,
      sym__non_newline_whitespace,
    STATE(222), 1,
      sym_comment,
  [4799] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(803), 1,
      sym__non_newline_whitespace,
    STATE(223), 1,
      sym_comment,
  [4812] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(805), 1,
      aux_sym_param_token2,
    STATE(224), 1,
      sym_comment,
  [4825] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(807), 1,
      sym__non_newline_whitespace,
    STATE(225), 1,
      sym_comment,
  [4838] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      sym__non_newline_whitespace,
    STATE(226), 1,
      sym_comment,
  [4851] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      sym__non_newline_whitespace,
    STATE(227), 1,
      sym_comment,
  [4864] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym__non_newline_whitespace,
    STATE(228), 1,
      sym_comment,
  [4877] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym__non_newline_whitespace,
    STATE(229), 1,
      sym_comment,
  [4890] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(817), 1,
      sym__non_newline_whitespace,
    STATE(230), 1,
      sym_comment,
  [4903] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(819), 1,
      sym__non_newline_whitespace,
    STATE(231), 1,
      sym_comment,
  [4916] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(821), 1,
      aux_sym_comment_token1,
    STATE(232), 1,
      sym_comment,
  [4929] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(823), 1,
      sym__non_newline_whitespace,
    STATE(233), 1,
      sym_comment,
  [4942] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_comment,
  [4955] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(827), 1,
      aux_sym_param_token2,
    STATE(235), 1,
      sym_comment,
  [4968] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(829), 1,
      sym__non_newline_whitespace,
    STATE(236), 1,
      sym_comment,
  [4981] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(831), 1,
      anon_sym_LF,
    STATE(237), 1,
      sym_comment,
  [4994] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(833), 1,
      aux_sym_shell_command_token2,
    STATE(238), 1,
      sym_comment,
  [5007] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [5020] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(837), 1,
      aux_sym_param_token2,
    STATE(240), 1,
      sym_comment,
  [5033] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(839), 1,
      sym__non_newline_whitespace,
    STATE(241), 1,
      sym_comment,
  [5046] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(841), 1,
      sym__non_newline_whitespace,
    STATE(242), 1,
      sym_comment,
  [5059] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_comment,
  [5072] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(845), 1,
      sym__non_newline_whitespace,
    STATE(244), 1,
      sym_comment,
  [5085] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_comment,
  [5098] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(849), 1,
      anon_sym_LF,
    STATE(246), 1,
      sym_comment,
  [5111] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_comment,
  [5124] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(853), 1,
      anon_sym_LF,
    STATE(248), 1,
      sym_comment,
  [5137] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym_comment,
  [5150] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      anon_sym_LF,
    STATE(250), 1,
      sym_comment,
  [5163] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      sym_comment,
  [5176] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(861), 1,
      anon_sym_LF,
    STATE(252), 1,
      sym_comment,
  [5189] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
    STATE(253), 1,
      sym_comment,
  [5202] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym_comment,
  [5215] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      sym_comment,
  [5228] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(869), 1,
      anon_sym_LF,
    STATE(256), 1,
      sym_comment,
  [5241] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(257), 1,
      sym_comment,
  [5254] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      anon_sym_BSLASH_LF,
    STATE(258), 1,
      sym_comment,
  [5267] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      sym_comment,
  [5280] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(877), 1,
      anon_sym_LF,
    STATE(260), 1,
      sym_comment,
  [5293] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      sym_comment,
  [5306] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(881), 1,
      aux_sym_expansion_token2,
    STATE(262), 1,
      sym_comment,
  [5319] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(883), 1,
      anon_sym_EQ,
    STATE(263), 1,
      sym_comment,
  [5332] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(885), 1,
      sym__non_newline_whitespace,
    STATE(264), 1,
      sym_comment,
  [5345] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(887), 1,
      sym__non_newline_whitespace,
    STATE(265), 1,
      sym_comment,
  [5358] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(889), 1,
      aux_sym_expansion_token2,
    STATE(266), 1,
      sym_comment,
  [5371] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(891), 1,
      anon_sym_EQ,
    STATE(267), 1,
      sym_comment,
  [5384] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      aux_sym_expansion_token2,
    STATE(268), 1,
      sym_comment,
  [5397] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      aux_sym_expansion_token2,
    STATE(269), 1,
      sym_comment,
  [5410] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(897), 1,
      aux_sym_expansion_token2,
    STATE(270), 1,
      sym_comment,
  [5423] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(899), 1,
      aux_sym_expansion_token2,
    STATE(271), 1,
      sym_comment,
  [5436] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(901), 1,
      aux_sym_expansion_token2,
    STATE(272), 1,
      sym_comment,
  [5449] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(903), 1,
      aux_sym_expansion_token2,
    STATE(273), 1,
      sym_comment,
  [5462] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(905), 1,
      aux_sym_expansion_token2,
    STATE(274), 1,
      sym_comment,
  [5475] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(907), 1,
      aux_sym_expansion_token2,
    STATE(275), 1,
      sym_comment,
  [5488] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      aux_sym_expansion_token2,
    STATE(276), 1,
      sym_comment,
  [5501] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(911), 1,
      aux_sym_expansion_token2,
    STATE(277), 1,
      sym_comment,
  [5514] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(913), 1,
      aux_sym_param_token1,
    STATE(278), 1,
      sym_comment,
  [5527] = 1,
    ACTIONS(915), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 259,
  [SMALL_STATE(6)] = 289,
  [SMALL_STATE(7)] = 318,
  [SMALL_STATE(8)] = 345,
  [SMALL_STATE(9)] = 377,
  [SMALL_STATE(10)] = 411,
  [SMALL_STATE(11)] = 439,
  [SMALL_STATE(12)] = 461,
  [SMALL_STATE(13)] = 489,
  [SMALL_STATE(14)] = 515,
  [SMALL_STATE(15)] = 543,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 605,
  [SMALL_STATE(18)] = 631,
  [SMALL_STATE(19)] = 653,
  [SMALL_STATE(20)] = 685,
  [SMALL_STATE(21)] = 711,
  [SMALL_STATE(22)] = 739,
  [SMALL_STATE(23)] = 764,
  [SMALL_STATE(24)] = 785,
  [SMALL_STATE(25)] = 816,
  [SMALL_STATE(26)] = 837,
  [SMALL_STATE(27)] = 864,
  [SMALL_STATE(28)] = 893,
  [SMALL_STATE(29)] = 914,
  [SMALL_STATE(30)] = 943,
  [SMALL_STATE(31)] = 968,
  [SMALL_STATE(32)] = 999,
  [SMALL_STATE(33)] = 1024,
  [SMALL_STATE(34)] = 1047,
  [SMALL_STATE(35)] = 1074,
  [SMALL_STATE(36)] = 1103,
  [SMALL_STATE(37)] = 1130,
  [SMALL_STATE(38)] = 1151,
  [SMALL_STATE(39)] = 1172,
  [SMALL_STATE(40)] = 1199,
  [SMALL_STATE(41)] = 1224,
  [SMALL_STATE(42)] = 1245,
  [SMALL_STATE(43)] = 1271,
  [SMALL_STATE(44)] = 1299,
  [SMALL_STATE(45)] = 1327,
  [SMALL_STATE(46)] = 1353,
  [SMALL_STATE(47)] = 1381,
  [SMALL_STATE(48)] = 1407,
  [SMALL_STATE(49)] = 1427,
  [SMALL_STATE(50)] = 1451,
  [SMALL_STATE(51)] = 1477,
  [SMALL_STATE(52)] = 1505,
  [SMALL_STATE(53)] = 1533,
  [SMALL_STATE(54)] = 1561,
  [SMALL_STATE(55)] = 1581,
  [SMALL_STATE(56)] = 1605,
  [SMALL_STATE(57)] = 1631,
  [SMALL_STATE(58)] = 1657,
  [SMALL_STATE(59)] = 1677,
  [SMALL_STATE(60)] = 1705,
  [SMALL_STATE(61)] = 1729,
  [SMALL_STATE(62)] = 1753,
  [SMALL_STATE(63)] = 1779,
  [SMALL_STATE(64)] = 1803,
  [SMALL_STATE(65)] = 1829,
  [SMALL_STATE(66)] = 1849,
  [SMALL_STATE(67)] = 1877,
  [SMALL_STATE(68)] = 1897,
  [SMALL_STATE(69)] = 1925,
  [SMALL_STATE(70)] = 1951,
  [SMALL_STATE(71)] = 1971,
  [SMALL_STATE(72)] = 1997,
  [SMALL_STATE(73)] = 2015,
  [SMALL_STATE(74)] = 2039,
  [SMALL_STATE(75)] = 2067,
  [SMALL_STATE(76)] = 2095,
  [SMALL_STATE(77)] = 2123,
  [SMALL_STATE(78)] = 2141,
  [SMALL_STATE(79)] = 2161,
  [SMALL_STATE(80)] = 2185,
  [SMALL_STATE(81)] = 2213,
  [SMALL_STATE(82)] = 2239,
  [SMALL_STATE(83)] = 2267,
  [SMALL_STATE(84)] = 2295,
  [SMALL_STATE(85)] = 2323,
  [SMALL_STATE(86)] = 2348,
  [SMALL_STATE(87)] = 2373,
  [SMALL_STATE(88)] = 2392,
  [SMALL_STATE(89)] = 2417,
  [SMALL_STATE(90)] = 2442,
  [SMALL_STATE(91)] = 2461,
  [SMALL_STATE(92)] = 2486,
  [SMALL_STATE(93)] = 2511,
  [SMALL_STATE(94)] = 2536,
  [SMALL_STATE(95)] = 2555,
  [SMALL_STATE(96)] = 2578,
  [SMALL_STATE(97)] = 2603,
  [SMALL_STATE(98)] = 2622,
  [SMALL_STATE(99)] = 2641,
  [SMALL_STATE(100)] = 2660,
  [SMALL_STATE(101)] = 2683,
  [SMALL_STATE(102)] = 2708,
  [SMALL_STATE(103)] = 2731,
  [SMALL_STATE(104)] = 2756,
  [SMALL_STATE(105)] = 2781,
  [SMALL_STATE(106)] = 2800,
  [SMALL_STATE(107)] = 2819,
  [SMALL_STATE(108)] = 2840,
  [SMALL_STATE(109)] = 2863,
  [SMALL_STATE(110)] = 2882,
  [SMALL_STATE(111)] = 2901,
  [SMALL_STATE(112)] = 2920,
  [SMALL_STATE(113)] = 2939,
  [SMALL_STATE(114)] = 2958,
  [SMALL_STATE(115)] = 2980,
  [SMALL_STATE(116)] = 3000,
  [SMALL_STATE(117)] = 3020,
  [SMALL_STATE(118)] = 3042,
  [SMALL_STATE(119)] = 3058,
  [SMALL_STATE(120)] = 3078,
  [SMALL_STATE(121)] = 3100,
  [SMALL_STATE(122)] = 3120,
  [SMALL_STATE(123)] = 3142,
  [SMALL_STATE(124)] = 3162,
  [SMALL_STATE(125)] = 3184,
  [SMALL_STATE(126)] = 3206,
  [SMALL_STATE(127)] = 3228,
  [SMALL_STATE(128)] = 3250,
  [SMALL_STATE(129)] = 3268,
  [SMALL_STATE(130)] = 3290,
  [SMALL_STATE(131)] = 3310,
  [SMALL_STATE(132)] = 3328,
  [SMALL_STATE(133)] = 3350,
  [SMALL_STATE(134)] = 3368,
  [SMALL_STATE(135)] = 3390,
  [SMALL_STATE(136)] = 3412,
  [SMALL_STATE(137)] = 3434,
  [SMALL_STATE(138)] = 3456,
  [SMALL_STATE(139)] = 3478,
  [SMALL_STATE(140)] = 3500,
  [SMALL_STATE(141)] = 3519,
  [SMALL_STATE(142)] = 3538,
  [SMALL_STATE(143)] = 3557,
  [SMALL_STATE(144)] = 3576,
  [SMALL_STATE(145)] = 3595,
  [SMALL_STATE(146)] = 3614,
  [SMALL_STATE(147)] = 3633,
  [SMALL_STATE(148)] = 3652,
  [SMALL_STATE(149)] = 3671,
  [SMALL_STATE(150)] = 3690,
  [SMALL_STATE(151)] = 3707,
  [SMALL_STATE(152)] = 3726,
  [SMALL_STATE(153)] = 3745,
  [SMALL_STATE(154)] = 3764,
  [SMALL_STATE(155)] = 3783,
  [SMALL_STATE(156)] = 3802,
  [SMALL_STATE(157)] = 3821,
  [SMALL_STATE(158)] = 3840,
  [SMALL_STATE(159)] = 3859,
  [SMALL_STATE(160)] = 3878,
  [SMALL_STATE(161)] = 3895,
  [SMALL_STATE(162)] = 3912,
  [SMALL_STATE(163)] = 3929,
  [SMALL_STATE(164)] = 3946,
  [SMALL_STATE(165)] = 3963,
  [SMALL_STATE(166)] = 3980,
  [SMALL_STATE(167)] = 3997,
  [SMALL_STATE(168)] = 4016,
  [SMALL_STATE(169)] = 4033,
  [SMALL_STATE(170)] = 4049,
  [SMALL_STATE(171)] = 4063,
  [SMALL_STATE(172)] = 4079,
  [SMALL_STATE(173)] = 4095,
  [SMALL_STATE(174)] = 4109,
  [SMALL_STATE(175)] = 4125,
  [SMALL_STATE(176)] = 4141,
  [SMALL_STATE(177)] = 4155,
  [SMALL_STATE(178)] = 4171,
  [SMALL_STATE(179)] = 4187,
  [SMALL_STATE(180)] = 4203,
  [SMALL_STATE(181)] = 4219,
  [SMALL_STATE(182)] = 4235,
  [SMALL_STATE(183)] = 4251,
  [SMALL_STATE(184)] = 4267,
  [SMALL_STATE(185)] = 4283,
  [SMALL_STATE(186)] = 4299,
  [SMALL_STATE(187)] = 4313,
  [SMALL_STATE(188)] = 4329,
  [SMALL_STATE(189)] = 4345,
  [SMALL_STATE(190)] = 4359,
  [SMALL_STATE(191)] = 4375,
  [SMALL_STATE(192)] = 4389,
  [SMALL_STATE(193)] = 4405,
  [SMALL_STATE(194)] = 4419,
  [SMALL_STATE(195)] = 4435,
  [SMALL_STATE(196)] = 4448,
  [SMALL_STATE(197)] = 4461,
  [SMALL_STATE(198)] = 4474,
  [SMALL_STATE(199)] = 4487,
  [SMALL_STATE(200)] = 4500,
  [SMALL_STATE(201)] = 4513,
  [SMALL_STATE(202)] = 4526,
  [SMALL_STATE(203)] = 4539,
  [SMALL_STATE(204)] = 4552,
  [SMALL_STATE(205)] = 4565,
  [SMALL_STATE(206)] = 4578,
  [SMALL_STATE(207)] = 4591,
  [SMALL_STATE(208)] = 4604,
  [SMALL_STATE(209)] = 4617,
  [SMALL_STATE(210)] = 4630,
  [SMALL_STATE(211)] = 4643,
  [SMALL_STATE(212)] = 4656,
  [SMALL_STATE(213)] = 4669,
  [SMALL_STATE(214)] = 4682,
  [SMALL_STATE(215)] = 4695,
  [SMALL_STATE(216)] = 4708,
  [SMALL_STATE(217)] = 4721,
  [SMALL_STATE(218)] = 4734,
  [SMALL_STATE(219)] = 4747,
  [SMALL_STATE(220)] = 4760,
  [SMALL_STATE(221)] = 4773,
  [SMALL_STATE(222)] = 4786,
  [SMALL_STATE(223)] = 4799,
  [SMALL_STATE(224)] = 4812,
  [SMALL_STATE(225)] = 4825,
  [SMALL_STATE(226)] = 4838,
  [SMALL_STATE(227)] = 4851,
  [SMALL_STATE(228)] = 4864,
  [SMALL_STATE(229)] = 4877,
  [SMALL_STATE(230)] = 4890,
  [SMALL_STATE(231)] = 4903,
  [SMALL_STATE(232)] = 4916,
  [SMALL_STATE(233)] = 4929,
  [SMALL_STATE(234)] = 4942,
  [SMALL_STATE(235)] = 4955,
  [SMALL_STATE(236)] = 4968,
  [SMALL_STATE(237)] = 4981,
  [SMALL_STATE(238)] = 4994,
  [SMALL_STATE(239)] = 5007,
  [SMALL_STATE(240)] = 5020,
  [SMALL_STATE(241)] = 5033,
  [SMALL_STATE(242)] = 5046,
  [SMALL_STATE(243)] = 5059,
  [SMALL_STATE(244)] = 5072,
  [SMALL_STATE(245)] = 5085,
  [SMALL_STATE(246)] = 5098,
  [SMALL_STATE(247)] = 5111,
  [SMALL_STATE(248)] = 5124,
  [SMALL_STATE(249)] = 5137,
  [SMALL_STATE(250)] = 5150,
  [SMALL_STATE(251)] = 5163,
  [SMALL_STATE(252)] = 5176,
  [SMALL_STATE(253)] = 5189,
  [SMALL_STATE(254)] = 5202,
  [SMALL_STATE(255)] = 5215,
  [SMALL_STATE(256)] = 5228,
  [SMALL_STATE(257)] = 5241,
  [SMALL_STATE(258)] = 5254,
  [SMALL_STATE(259)] = 5267,
  [SMALL_STATE(260)] = 5280,
  [SMALL_STATE(261)] = 5293,
  [SMALL_STATE(262)] = 5306,
  [SMALL_STATE(263)] = 5319,
  [SMALL_STATE(264)] = 5332,
  [SMALL_STATE(265)] = 5345,
  [SMALL_STATE(266)] = 5358,
  [SMALL_STATE(267)] = 5371,
  [SMALL_STATE(268)] = 5384,
  [SMALL_STATE(269)] = 5397,
  [SMALL_STATE(270)] = 5410,
  [SMALL_STATE(271)] = 5423,
  [SMALL_STATE(272)] = 5436,
  [SMALL_STATE(273)] = 5449,
  [SMALL_STATE(274)] = 5462,
  [SMALL_STATE(275)] = 5475,
  [SMALL_STATE(276)] = 5488,
  [SMALL_STATE(277)] = 5501,
  [SMALL_STATE(278)] = 5514,
  [SMALL_STATE(279)] = 5527,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(265),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(264),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(230),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(228),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expansion_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(18),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(199),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expansion_repeat1, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(37),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(276),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(25),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(277),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expansion_repeat1, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(41),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(273),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(158),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(48),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(58),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(275),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(142),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(97),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(97),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(143),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(98),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(98),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(78),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(274),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(77),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(268),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(146),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(90),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(70),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(269),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(145),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(128),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(144),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(133),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(133),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(112),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(272),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(110),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(271),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(131),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(152),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(106),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(270),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(118),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(153),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(155),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(107),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(105),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(262),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(87),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expansion_repeat1, 2), SHIFT_REPEAT(266),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 10),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(164),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(151),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(147),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(160),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(166),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(154),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(165),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(149),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(217),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(210),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(208),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_group, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(122),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(174),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 9),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 9),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 7),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 7),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 8),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 8),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(238),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 13),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 6),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [797] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 11),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
