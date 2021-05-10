#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 247
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
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
  anon_sym_LBRACE = 29,
  aux_sym_expansion_token1 = 30,
  anon_sym_RBRACE = 31,
  sym_variable = 32,
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
  aux_sym_image_name_repeat1 = 104,
  aux_sym_image_tag_repeat1 = 105,
  aux_sym_image_digest_repeat1 = 106,
  aux_sym_image_alias_repeat1 = 107,
  aux_sym_string_array_repeat1 = 108,
  aux_sym_shell_command_repeat1 = 109,
  aux_sym_double_quoted_string_repeat1 = 110,
  aux_sym_unquoted_string_repeat1 = 111,
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
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_token1] = {
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
      if (eof) ADVANCE(151);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == 'U') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(225);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(225);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(179);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(201);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(187);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(205);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(177);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 60:
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 76:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 77:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 87:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 89:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 94:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 96:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 105:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 120:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 121:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 131:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 135:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 136:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 137:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 138:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 148:
      if (eof) ADVANCE(151);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(112);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 149:
      if (eof) ADVANCE(151);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(129);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(112);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 150:
      if (eof) ADVANCE(151);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == '{') ADVANCE(184);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_env_pair_token1);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_shell_command_token1);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(187);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_shell_command_token2);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_shell_command_token2);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(201);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(182);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(209);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(187);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 148},
  [2] = {.lex_state = 148},
  [3] = {.lex_state = 148},
  [4] = {.lex_state = 148},
  [5] = {.lex_state = 148},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 148},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 51},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 148},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 148},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 51},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 52},
  [71] = {.lex_state = 31},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 31},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 31},
  [79] = {.lex_state = 31},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 148},
  [82] = {.lex_state = 26},
  [83] = {.lex_state = 38},
  [84] = {.lex_state = 31},
  [85] = {.lex_state = 38},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 52},
  [88] = {.lex_state = 50},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 38},
  [92] = {.lex_state = 31},
  [93] = {.lex_state = 52},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 24},
  [104] = {.lex_state = 148},
  [105] = {.lex_state = 148},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 51},
  [108] = {.lex_state = 43},
  [109] = {.lex_state = 44},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 51},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 51},
  [117] = {.lex_state = 148},
  [118] = {.lex_state = 148},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 24},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 41},
  [127] = {.lex_state = 41},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 148},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 148},
  [133] = {.lex_state = 148},
  [134] = {.lex_state = 18},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 148},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 16},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 18},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 27},
  [148] = {.lex_state = 16},
  [149] = {.lex_state = 41},
  [150] = {.lex_state = 19},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 49},
  [153] = {.lex_state = 31},
  [154] = {.lex_state = 41},
  [155] = {.lex_state = 41},
  [156] = {.lex_state = 19},
  [157] = {.lex_state = 148},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 148},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 41},
  [164] = {.lex_state = 42},
  [165] = {.lex_state = 42},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 28},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 47},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 46},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 148},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 148},
  [182] = {.lex_state = 42},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 42},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 42},
  [187] = {.lex_state = 42},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 42},
  [195] = {.lex_state = 42},
  [196] = {.lex_state = 42},
  [197] = {.lex_state = 42},
  [198] = {.lex_state = 42},
  [199] = {.lex_state = 42},
  [200] = {.lex_state = 42},
  [201] = {.lex_state = 42},
  [202] = {.lex_state = 42},
  [203] = {.lex_state = 42},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 148},
  [207] = {.lex_state = 53},
  [208] = {.lex_state = 42},
  [209] = {.lex_state = 53},
  [210] = {.lex_state = 42},
  [211] = {.lex_state = 148},
  [212] = {.lex_state = 53},
  [213] = {.lex_state = 42},
  [214] = {.lex_state = 148},
  [215] = {.lex_state = 148},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 148},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 148},
  [220] = {.lex_state = 54},
  [221] = {.lex_state = 148},
  [222] = {.lex_state = 148},
  [223] = {.lex_state = 148},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 148},
  [226] = {.lex_state = 42},
  [227] = {.lex_state = 148},
  [228] = {.lex_state = 243},
  [229] = {.lex_state = 148},
  [230] = {.lex_state = 42},
  [231] = {.lex_state = 148},
  [232] = {.lex_state = 54},
  [233] = {.lex_state = 148},
  [234] = {.lex_state = 54},
  [235] = {.lex_state = 148},
  [236] = {.lex_state = 54},
  [237] = {.lex_state = 54},
  [238] = {.lex_state = 54},
  [239] = {.lex_state = 54},
  [240] = {.lex_state = 54},
  [241] = {.lex_state = 54},
  [242] = {.lex_state = 54},
  [243] = {.lex_state = 54},
  [244] = {.lex_state = 54},
  [245] = {.lex_state = 46},
  [246] = {(TSStateId)(-1)},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
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
    [sym_source_file] = STATE(180),
    [sym__instruction] = STATE(177),
    [sym_from_instruction] = STATE(176),
    [sym_run_instruction] = STATE(176),
    [sym_cmd_instruction] = STATE(176),
    [sym_label_instruction] = STATE(176),
    [sym_expose_instruction] = STATE(176),
    [sym_env_instruction] = STATE(176),
    [sym_add_instruction] = STATE(176),
    [sym_copy_instruction] = STATE(176),
    [sym_entrypoint_instruction] = STATE(176),
    [sym_volume_instruction] = STATE(176),
    [sym_user_instruction] = STATE(176),
    [sym_workdir_instruction] = STATE(176),
    [sym_arg_instruction] = STATE(176),
    [sym_onbuild_instruction] = STATE(176),
    [sym_stopsignal_instruction] = STATE(176),
    [sym_healthcheck_instruction] = STATE(176),
    [sym_shell_instruction] = STATE(176),
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
    STATE(177), 1,
      sym__instruction,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(176), 17,
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
    STATE(177), 1,
      sym__instruction,
    STATE(176), 17,
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
    STATE(192), 1,
      sym__instruction,
    STATE(176), 17,
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
  [289] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(106), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(65), 1,
      sym_expansion,
    STATE(139), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [321] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(108), 1,
      anon_sym_DOLLAR,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(50), 1,
      sym_expansion,
    STATE(141), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [353] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(118), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(120), 1,
      anon_sym_DOLLAR,
    ACTIONS(123), 1,
      aux_sym_image_name_token1,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(41), 1,
      sym_expansion,
    STATE(8), 2,
      sym_comment,
      aux_sym_image_name_repeat1,
    ACTIONS(116), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [381] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(106), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(65), 1,
      sym_expansion,
    STATE(178), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [413] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(130), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(132), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      aux_sym_image_name_token1,
    STATE(8), 1,
      aux_sym_image_name_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(41), 1,
      sym_expansion,
    ACTIONS(128), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [443] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      aux_sym_image_name_token1,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
    ACTIONS(138), 1,
      anon_sym_DASH_DASH,
    STATE(10), 1,
      aux_sym_image_name_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(18), 1,
      sym_param,
    STATE(35), 1,
      sym_image_name,
    STATE(41), 1,
      sym_expansion,
    STATE(138), 1,
      sym_image_spec,
  [477] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(142), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(146), 1,
      aux_sym_image_tag_token1,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_image_tag_repeat1,
    STATE(60), 1,
      sym_expansion,
    ACTIONS(140), 2,
      anon_sym_LF,
      anon_sym_AT,
  [506] = 10,
    ACTIONS(102), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      aux_sym_label_pair_token1,
    STATE(13), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(65), 1,
      sym_expansion,
  [537] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(156), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(158), 1,
      anon_sym_DOLLAR,
    ACTIONS(161), 1,
      aux_sym_image_tag_token1,
    STATE(60), 1,
      sym_expansion,
    ACTIONS(154), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(14), 2,
      sym_comment,
      aux_sym_image_tag_repeat1,
  [564] = 10,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      aux_sym_env_pair_token1,
    ACTIONS(164), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(50), 1,
      sym_expansion,
  [595] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_DOLLAR,
    ACTIONS(171), 1,
      aux_sym_env_pair_token1,
    ACTIONS(173), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(176), 1,
      anon_sym_BSLASH,
    STATE(50), 1,
      sym_expansion,
    STATE(16), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [624] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      aux_sym_label_pair_token1,
    ACTIONS(179), 1,
      anon_sym_DOLLAR,
    ACTIONS(182), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(185), 1,
      anon_sym_BSLASH,
    STATE(65), 1,
      sym_expansion,
    STATE(17), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [653] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(134), 1,
      aux_sym_image_name_token1,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
    STATE(10), 1,
      aux_sym_image_name_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(35), 1,
      sym_image_name,
    STATE(41), 1,
      sym_expansion,
    STATE(148), 1,
      sym_image_spec,
  [681] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(188), 1,
      anon_sym_NONE,
    ACTIONS(190), 1,
      anon_sym_DASH_DASH,
    STATE(19), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(129), 1,
      sym_param,
    STATE(193), 1,
      sym_cmd_instruction,
  [709] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(192), 1,
      anon_sym_LF,
    ACTIONS(194), 1,
      anon_sym_COLON,
    ACTIONS(196), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(198), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym__user_name_group,
    STATE(73), 1,
      sym_expansion,
  [737] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    STATE(21), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(76), 1,
      sym_expansion,
  [765] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(76), 1,
      sym_expansion,
  [793] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(214), 1,
      anon_sym_DOLLAR,
    ACTIONS(216), 1,
      aux_sym_image_digest_token1,
    STATE(23), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_image_digest_repeat1,
    STATE(75), 1,
      sym_expansion,
  [821] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(76), 1,
      sym_expansion,
  [849] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(76), 1,
      sym_expansion,
  [877] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(76), 1,
      sym_expansion,
  [905] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(198), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_LF,
    ACTIONS(226), 1,
      aux_sym_expose_port_token1,
    STATE(27), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(110), 1,
      sym_expansion,
    STATE(113), 1,
      sym_expose_port,
  [933] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(28), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(230), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [953] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(204), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(206), 1,
      sym_escape_sequence,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(76), 1,
      sym_expansion,
  [981] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(238), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      aux_sym_image_digest_token1,
    STATE(75), 1,
      sym_expansion,
    STATE(30), 2,
      sym_comment,
      aux_sym_image_digest_repeat1,
  [1007] = 7,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(246), 1,
      aux_sym_path_token2,
    ACTIONS(249), 1,
      anon_sym_DOLLAR,
    STATE(82), 1,
      sym_expansion,
    ACTIONS(244), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(31), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1031] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(252), 1,
      anon_sym_DOLLAR,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(260), 1,
      sym_escape_sequence,
    STATE(76), 1,
      sym_expansion,
    STATE(32), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [1057] = 7,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(265), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(268), 1,
      anon_sym_DOLLAR,
    STATE(73), 1,
      sym_expansion,
    ACTIONS(263), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(33), 2,
      aux_sym__user_name_group,
      sym_comment,
  [1081] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(271), 1,
      anon_sym_LF,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      aux_sym_expose_port_token1,
    STATE(110), 1,
      sym_expansion,
    STATE(113), 1,
      sym_expose_port,
    STATE(34), 2,
      sym_comment,
      aux_sym_expose_instruction_repeat1,
  [1107] = 9,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(279), 1,
      anon_sym_LF,
    ACTIONS(281), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym_comment,
    STATE(90), 1,
      sym_image_tag,
    STATE(146), 1,
      sym_image_digest,
  [1135] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      aux_sym_path_token1,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH,
    STATE(36), 1,
      sym_comment,
    STATE(64), 1,
      sym_expansion,
    STATE(71), 1,
      sym_param,
    STATE(184), 1,
      sym_path,
  [1163] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      aux_sym_path_token1,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH,
    STATE(37), 1,
      sym_comment,
    STATE(64), 1,
      sym_expansion,
    STATE(74), 1,
      sym_param,
    STATE(164), 1,
      sym_path,
  [1191] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(38), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(295), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1211] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      aux_sym_path_token1,
    ACTIONS(299), 1,
      anon_sym_DOLLAR,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    STATE(40), 1,
      sym_expansion,
    STATE(120), 1,
      sym_path,
    STATE(190), 1,
      sym_string_array,
  [1239] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      aux_sym_path_token2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_path_repeat1,
    STATE(82), 1,
      sym_expansion,
    ACTIONS(303), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1265] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(41), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(311), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1285] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(305), 1,
      aux_sym_path_token2,
    ACTIONS(307), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      aux_sym_path_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(82), 1,
      sym_expansion,
    ACTIONS(313), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1311] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(43), 1,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(228), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1330] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(196), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(198), 1,
      anon_sym_DOLLAR,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym__user_name_group,
    STATE(44), 1,
      sym_comment,
    STATE(73), 1,
      sym_expansion,
  [1355] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(45), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(295), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [1374] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(46), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(293), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1393] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(317), 1,
      aux_sym_path_token2,
    ACTIONS(319), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      sym__non_newline_whitespace,
    STATE(47), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_path_repeat1,
    STATE(107), 1,
      sym_expansion,
  [1418] = 7,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    STATE(124), 1,
      sym_expansion,
    STATE(48), 2,
      aux_sym__stopsignal_value,
      sym_comment,
  [1441] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(49), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(230), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [1460] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(50), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(333), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [1479] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    ACTIONS(337), 1,
      aux_sym_expose_port_token1,
    STATE(27), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(51), 1,
      sym_comment,
    STATE(110), 1,
      sym_expansion,
    STATE(113), 1,
      sym_expose_port,
  [1504] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    ACTIONS(341), 1,
      aux_sym_image_alias_token1,
    STATE(52), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_image_alias_repeat1,
    STATE(102), 1,
      sym_expansion,
    STATE(204), 1,
      sym_image_alias,
  [1529] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(53), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(230), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1548] = 7,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(343), 1,
      anon_sym_LF,
    ACTIONS(345), 1,
      anon_sym_DOLLAR,
    ACTIONS(348), 1,
      aux_sym_image_alias_token1,
    STATE(102), 1,
      sym_expansion,
    STATE(54), 2,
      sym_comment,
      aux_sym_image_alias_repeat1,
  [1571] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      aux_sym_path_token2,
    ACTIONS(355), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_path_repeat1,
    STATE(115), 1,
      sym_expansion,
  [1596] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(190), 1,
      anon_sym_DASH_DASH,
    STATE(56), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(129), 1,
      sym_param,
    STATE(218), 1,
      sym_cmd_instruction,
  [1621] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(357), 1,
      anon_sym_LF,
    ACTIONS(359), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      aux_sym__stopsignal_value,
    STATE(57), 1,
      sym_comment,
    STATE(124), 1,
      sym_expansion,
  [1646] = 6,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(363), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(367), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1667] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(369), 1,
      anon_sym_LF,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(373), 1,
      aux_sym_image_alias_token1,
    STATE(54), 1,
      aux_sym_image_alias_repeat1,
    STATE(59), 1,
      sym_comment,
    STATE(102), 1,
      sym_expansion,
  [1692] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(60), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(377), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1711] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(321), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      aux_sym_path_token2,
    ACTIONS(355), 1,
      anon_sym_DOLLAR,
    STATE(61), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_path_repeat1,
    STATE(115), 1,
      sym_expansion,
  [1736] = 7,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(379), 1,
      aux_sym_path_token2,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(385), 1,
      sym__non_newline_whitespace,
    STATE(107), 1,
      sym_expansion,
    STATE(62), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1759] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(63), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(295), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1778] = 8,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(317), 1,
      aux_sym_path_token2,
    ACTIONS(319), 1,
      anon_sym_DOLLAR,
    ACTIONS(351), 1,
      sym__non_newline_whitespace,
    STATE(47), 1,
      aux_sym_path_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(107), 1,
      sym_expansion,
  [1803] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(65), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(333), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1822] = 7,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(387), 1,
      aux_sym_path_token2,
    ACTIONS(390), 1,
      anon_sym_DOLLAR,
    STATE(115), 1,
      sym_expansion,
    STATE(66), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1845] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    ACTIONS(341), 1,
      aux_sym_image_alias_token1,
    STATE(59), 1,
      aux_sym_image_alias_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(102), 1,
      sym_expansion,
    STATE(171), 1,
      sym_image_alias,
  [1870] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(68), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(295), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1889] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(69), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(230), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1908] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      aux_sym_shell_command_token1,
    STATE(70), 1,
      sym_comment,
    STATE(189), 2,
      sym_string_array,
      sym_shell_command,
  [1928] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      aux_sym_path_token1,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym_expansion,
    STATE(71), 1,
      sym_comment,
    STATE(230), 1,
      sym_path,
  [1950] = 7,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      aux_sym_env_pair_token1,
    STATE(72), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_env_instruction_repeat1,
    STATE(142), 1,
      sym_env_pair,
  [1972] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(399), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1990] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      aux_sym_path_token1,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(64), 1,
      sym_expansion,
    STATE(74), 1,
      sym_comment,
    STATE(226), 1,
      sym_path,
  [2012] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(75), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(405), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2030] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(409), 1,
      aux_sym_double_quoted_string_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(407), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2048] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      aux_sym_double_quoted_string_token1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2066] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      aux_sym_path_token1,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      sym_expansion,
    STATE(78), 1,
      sym_comment,
    STATE(168), 1,
      sym_path,
  [2088] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      aux_sym_path_token1,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      sym_expansion,
    STATE(79), 1,
      sym_comment,
    STATE(205), 1,
      sym_path,
  [2110] = 7,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(415), 1,
      anon_sym_LF,
    ACTIONS(417), 1,
      aux_sym_label_pair_token1,
    STATE(80), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_label_instruction_repeat1,
    STATE(151), 1,
      sym_label_pair,
  [2132] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(421), 1,
      anon_sym_DASH_DASH,
    STATE(129), 1,
      sym_param,
    STATE(81), 2,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [2152] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(82), 1,
      sym_comment,
    ACTIONS(424), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2168] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      aux_sym__stopsignal_value,
    STATE(83), 1,
      sym_comment,
    STATE(124), 1,
      sym_expansion,
  [2190] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      aux_sym_path_token1,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      sym_expansion,
    STATE(84), 1,
      sym_comment,
    STATE(191), 1,
      sym_path,
  [2212] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      aux_sym__user_name_group,
    STATE(73), 1,
      sym_expansion,
    STATE(85), 1,
      sym_comment,
  [2234] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(228), 1,
      aux_sym_double_quoted_string_token1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2252] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      aux_sym_shell_command_token1,
    STATE(87), 1,
      sym_comment,
    STATE(174), 2,
      sym_string_array,
      sym_shell_command,
  [2272] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      aux_sym_image_tag_token1,
    ACTIONS(430), 1,
      anon_sym_DOLLAR,
    STATE(12), 1,
      aux_sym_image_tag_repeat1,
    STATE(60), 1,
      sym_expansion,
    STATE(88), 1,
      sym_comment,
  [2294] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(216), 1,
      aux_sym_image_digest_token1,
    ACTIONS(432), 1,
      anon_sym_DOLLAR,
    STATE(23), 1,
      aux_sym_image_digest_repeat1,
    STATE(75), 1,
      sym_expansion,
    STATE(89), 1,
      sym_comment,
  [2316] = 7,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(285), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      anon_sym_LF,
    ACTIONS(436), 1,
      aux_sym_from_instruction_token2,
    STATE(90), 1,
      sym_comment,
    STATE(131), 1,
      sym_image_digest,
  [2338] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(335), 1,
      anon_sym_DOLLAR,
    STATE(44), 1,
      aux_sym__user_name_group,
    STATE(73), 1,
      sym_expansion,
    STATE(91), 1,
      sym_comment,
  [2360] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      aux_sym_path_token1,
    ACTIONS(299), 1,
      anon_sym_DOLLAR,
    STATE(40), 1,
      sym_expansion,
    STATE(92), 1,
      sym_comment,
    STATE(147), 1,
      sym_path,
  [2382] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      aux_sym_shell_command_token1,
    STATE(93), 1,
      sym_comment,
    STATE(172), 2,
      sym_string_array,
      sym_shell_command,
  [2402] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      aux_sym_path_token1,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      sym_expansion,
    STATE(94), 1,
      sym_comment,
    STATE(179), 1,
      sym_path,
  [2424] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(95), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2440] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(96), 1,
      sym_comment,
    ACTIONS(230), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2456] = 6,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(438), 1,
      anon_sym_LF,
    ACTIONS(440), 1,
      aux_sym_env_pair_token1,
    STATE(142), 1,
      sym_env_pair,
    STATE(97), 2,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [2476] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      aux_sym_path_token1,
    ACTIONS(413), 1,
      anon_sym_DOLLAR,
    STATE(55), 1,
      sym_expansion,
    STATE(98), 1,
      sym_comment,
    STATE(183), 1,
      sym_path,
  [2498] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(99), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(295), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2516] = 6,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(445), 1,
      aux_sym_label_pair_token1,
    STATE(151), 1,
      sym_label_pair,
    STATE(100), 2,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [2536] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(101), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(230), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2554] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(448), 1,
      anon_sym_LF,
    STATE(102), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2571] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_LF,
    STATE(103), 1,
      sym_comment,
    ACTIONS(295), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2588] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_comment,
    STATE(117), 1,
      sym_double_quoted_string,
  [2607] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(105), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [2624] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(461), 1,
      anon_sym_LF,
    STATE(106), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2641] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(465), 1,
      sym__non_newline_whitespace,
    STATE(107), 1,
      sym_comment,
    ACTIONS(424), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2658] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(467), 1,
      aux_sym_env_pair_token1,
    STATE(72), 1,
      aux_sym_env_instruction_repeat1,
    STATE(108), 1,
      sym_comment,
    STATE(142), 1,
      sym_env_pair,
  [2677] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(469), 1,
      aux_sym_label_pair_token1,
    STATE(80), 1,
      aux_sym_label_instruction_repeat1,
    STATE(109), 1,
      sym_comment,
    STATE(151), 1,
      sym_label_pair,
  [2696] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(363), 1,
      anon_sym_LF,
    STATE(110), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2713] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(471), 1,
      anon_sym_LF,
    ACTIONS(473), 1,
      sym__non_newline_whitespace,
    STATE(111), 2,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [2730] = 6,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(476), 1,
      anon_sym_LF,
    ACTIONS(478), 1,
      sym__non_newline_whitespace,
    STATE(111), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(112), 1,
      sym_comment,
  [2749] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(480), 1,
      anon_sym_LF,
    STATE(113), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2766] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      sym__non_newline_whitespace,
    STATE(114), 1,
      sym_comment,
    ACTIONS(295), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2783] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(465), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym_comment,
    ACTIONS(424), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2800] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(228), 1,
      sym__non_newline_whitespace,
    STATE(116), 1,
      sym_comment,
    ACTIONS(230), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2817] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_string_array_repeat1,
  [2836] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_string_array_repeat1,
    STATE(118), 1,
      sym_comment,
  [2855] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_LF,
    STATE(119), 1,
      sym_comment,
    ACTIONS(295), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2872] = 6,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(478), 1,
      sym__non_newline_whitespace,
    ACTIONS(490), 1,
      anon_sym_LF,
    STATE(112), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(120), 1,
      sym_comment,
  [2891] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(228), 1,
      anon_sym_LF,
    STATE(121), 1,
      sym_comment,
    ACTIONS(230), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2908] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(228), 1,
      anon_sym_LF,
    STATE(122), 1,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2925] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(293), 1,
      anon_sym_LF,
    STATE(123), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [2942] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(492), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_comment,
    ACTIONS(494), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2959] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(228), 1,
      anon_sym_LF,
    STATE(125), 1,
      sym_comment,
    ACTIONS(230), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2976] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      sym_variable,
    STATE(126), 1,
      sym_comment,
  [2992] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    ACTIONS(502), 1,
      sym_variable,
    STATE(127), 1,
      sym_comment,
  [3008] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      sym_variable,
    STATE(128), 1,
      sym_comment,
  [3024] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(129), 1,
      sym_comment,
    ACTIONS(508), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3038] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(510), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      anon_sym_EQ,
    STATE(130), 1,
      sym_comment,
  [3054] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      aux_sym_from_instruction_token2,
    STATE(131), 1,
      sym_comment,
  [3070] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3084] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_comment,
    STATE(159), 1,
      sym_double_quoted_string,
  [3100] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_LF,
    ACTIONS(522), 1,
      aux_sym_env_pair_token1,
    STATE(134), 1,
      sym_comment,
  [3116] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      sym_variable,
    STATE(135), 1,
      sym_comment,
  [3132] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(528), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3146] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(532), 1,
      anon_sym_BSLASH_LF,
    STATE(137), 2,
      sym_comment,
      aux_sym_shell_command_repeat1,
  [3160] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 1,
      aux_sym_from_instruction_token2,
    STATE(138), 1,
      sym_comment,
  [3176] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      aux_sym_label_pair_token1,
    STATE(139), 1,
      sym_comment,
  [3192] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 1,
      sym_variable,
    STATE(140), 1,
      sym_comment,
  [3208] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      aux_sym_env_pair_token1,
    STATE(141), 1,
      sym_comment,
  [3224] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 1,
      aux_sym_env_pair_token1,
    STATE(142), 1,
      sym_comment,
  [3240] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(518), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      aux_sym_env_pair_token1,
    STATE(143), 1,
      sym_comment,
  [3256] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    ACTIONS(559), 1,
      sym_variable,
    STATE(144), 1,
      sym_comment,
  [3272] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
    ACTIONS(563), 1,
      sym_variable,
    STATE(145), 1,
      sym_comment,
  [3288] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 1,
      aux_sym_from_instruction_token2,
    STATE(146), 1,
      sym_comment,
  [3304] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    STATE(147), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3318] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(571), 1,
      aux_sym_from_instruction_token2,
    STATE(148), 1,
      sym_comment,
  [3334] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    ACTIONS(575), 1,
      sym_variable,
    STATE(149), 1,
      sym_comment,
  [3350] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(520), 1,
      anon_sym_LF,
    ACTIONS(522), 1,
      aux_sym_label_pair_token1,
    STATE(150), 1,
      sym_comment,
  [3366] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      aux_sym_label_pair_token1,
    STATE(151), 1,
      sym_comment,
  [3382] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_DOLLAR,
    ACTIONS(581), 1,
      aux_sym_image_name_token1,
    STATE(152), 1,
      sym_comment,
  [3398] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_DOLLAR,
    ACTIONS(581), 1,
      aux_sym_path_token1,
    STATE(153), 1,
      sym_comment,
  [3414] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    ACTIONS(585), 1,
      sym_variable,
    STATE(154), 1,
      sym_comment,
  [3430] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      sym_variable,
    STATE(155), 1,
      sym_comment,
  [3446] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(518), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      aux_sym_label_pair_token1,
    STATE(156), 1,
      sym_comment,
  [3462] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3476] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      anon_sym_BSLASH_LF,
    STATE(158), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_shell_command_repeat1,
  [3492] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3506] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    STATE(160), 1,
      sym_comment,
    STATE(216), 1,
      sym_string_array,
  [3522] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      sym_variable,
    STATE(161), 1,
      sym_comment,
  [3538] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(599), 1,
      anon_sym_LF,
    STATE(137), 1,
      aux_sym_shell_command_repeat1,
    STATE(162), 1,
      sym_comment,
  [3554] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      sym_variable,
    STATE(163), 1,
      sym_comment,
  [3570] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(605), 1,
      sym__non_newline_whitespace,
    STATE(164), 1,
      sym_comment,
  [3583] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(607), 1,
      sym__non_newline_whitespace,
    STATE(165), 1,
      sym_comment,
  [3596] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      aux_sym_param_token1,
    STATE(166), 1,
      sym_comment,
  [3609] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(611), 1,
      aux_sym_shell_command_token2,
    STATE(167), 1,
      sym_comment,
  [3622] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(613), 1,
      anon_sym_LF,
    STATE(168), 1,
      sym_comment,
  [3635] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(615), 1,
      anon_sym_LF,
    STATE(169), 1,
      sym_comment,
  [3648] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(617), 1,
      aux_sym_arg_instruction_token2,
    STATE(170), 1,
      sym_comment,
  [3661] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(619), 1,
      anon_sym_LF,
    STATE(171), 1,
      sym_comment,
  [3674] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(621), 1,
      anon_sym_LF,
    STATE(172), 1,
      sym_comment,
  [3687] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      aux_sym_param_token1,
    STATE(173), 1,
      sym_comment,
  [3700] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(625), 1,
      anon_sym_LF,
    STATE(174), 1,
      sym_comment,
  [3713] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(627), 1,
      anon_sym_EQ,
    STATE(175), 1,
      sym_comment,
  [3726] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(629), 1,
      anon_sym_LF,
    STATE(176), 1,
      sym_comment,
  [3739] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(631), 1,
      anon_sym_LF,
    STATE(177), 1,
      sym_comment,
  [3752] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(633), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_comment,
  [3765] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(635), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_comment,
  [3778] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      sym_comment,
  [3791] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(639), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym_comment,
  [3804] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(641), 1,
      sym__non_newline_whitespace,
    STATE(182), 1,
      sym_comment,
  [3817] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(643), 1,
      anon_sym_LF,
    STATE(183), 1,
      sym_comment,
  [3830] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(645), 1,
      sym__non_newline_whitespace,
    STATE(184), 1,
      sym_comment,
  [3843] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      anon_sym_LF,
    ACTIONS(647), 1,
      anon_sym_BSLASH_LF,
    STATE(185), 1,
      sym_comment,
  [3856] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(649), 1,
      sym__non_newline_whitespace,
    STATE(186), 1,
      sym_comment,
  [3869] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(651), 1,
      sym__non_newline_whitespace,
    STATE(187), 1,
      sym_comment,
  [3882] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(653), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_comment,
  [3895] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(655), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_comment,
  [3908] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_comment,
  [3921] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(659), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_comment,
  [3934] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym_comment,
  [3947] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(193), 1,
      sym_comment,
  [3960] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(665), 1,
      sym__non_newline_whitespace,
    STATE(194), 1,
      sym_comment,
  [3973] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(667), 1,
      sym__non_newline_whitespace,
    STATE(195), 1,
      sym_comment,
  [3986] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(669), 1,
      sym__non_newline_whitespace,
    STATE(196), 1,
      sym_comment,
  [3999] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(671), 1,
      sym__non_newline_whitespace,
    STATE(197), 1,
      sym_comment,
  [4012] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(673), 1,
      sym__non_newline_whitespace,
    STATE(198), 1,
      sym_comment,
  [4025] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(675), 1,
      sym__non_newline_whitespace,
    STATE(199), 1,
      sym_comment,
  [4038] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(677), 1,
      sym__non_newline_whitespace,
    STATE(200), 1,
      sym_comment,
  [4051] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(679), 1,
      sym__non_newline_whitespace,
    STATE(201), 1,
      sym_comment,
  [4064] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(681), 1,
      sym__non_newline_whitespace,
    STATE(202), 1,
      sym_comment,
  [4077] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(683), 1,
      sym__non_newline_whitespace,
    STATE(203), 1,
      sym_comment,
  [4090] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(685), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_comment,
  [4103] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(687), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_comment,
  [4116] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_comment,
  [4129] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(691), 1,
      aux_sym_param_token2,
    STATE(207), 1,
      sym_comment,
  [4142] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(693), 1,
      sym__non_newline_whitespace,
    STATE(208), 1,
      sym_comment,
  [4155] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(695), 1,
      aux_sym_param_token2,
    STATE(209), 1,
      sym_comment,
  [4168] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(697), 1,
      sym__non_newline_whitespace,
    STATE(210), 1,
      sym_comment,
  [4181] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_comment,
  [4194] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(701), 1,
      aux_sym_param_token2,
    STATE(212), 1,
      sym_comment,
  [4207] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(703), 1,
      sym__non_newline_whitespace,
    STATE(213), 1,
      sym_comment,
  [4220] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      sym_comment,
  [4233] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      sym_comment,
  [4246] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(709), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_comment,
  [4259] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_comment,
  [4272] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(713), 1,
      anon_sym_LF,
    STATE(218), 1,
      sym_comment,
  [4285] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      sym_comment,
  [4298] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(717), 1,
      aux_sym_expansion_token1,
    STATE(220), 1,
      sym_comment,
  [4311] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_comment,
  [4324] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      anon_sym_EQ,
    STATE(222), 1,
      sym_comment,
  [4337] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_comment,
  [4350] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(224), 1,
      sym_comment,
  [4363] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_comment,
  [4376] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(729), 1,
      sym__non_newline_whitespace,
    STATE(226), 1,
      sym_comment,
  [4389] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_comment,
  [4402] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(733), 1,
      aux_sym_comment_token1,
    STATE(228), 1,
      sym_comment,
  [4415] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_comment,
  [4428] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(737), 1,
      sym__non_newline_whitespace,
    STATE(230), 1,
      sym_comment,
  [4441] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4454] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(741), 1,
      aux_sym_expansion_token1,
    STATE(232), 1,
      sym_comment,
  [4467] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(743), 1,
      anon_sym_EQ,
    STATE(233), 1,
      sym_comment,
  [4480] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(745), 1,
      aux_sym_expansion_token1,
    STATE(234), 1,
      sym_comment,
  [4493] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      anon_sym_EQ,
    STATE(235), 1,
      sym_comment,
  [4506] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(749), 1,
      aux_sym_expansion_token1,
    STATE(236), 1,
      sym_comment,
  [4519] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(751), 1,
      aux_sym_expansion_token1,
    STATE(237), 1,
      sym_comment,
  [4532] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(753), 1,
      aux_sym_expansion_token1,
    STATE(238), 1,
      sym_comment,
  [4545] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(755), 1,
      aux_sym_expansion_token1,
    STATE(239), 1,
      sym_comment,
  [4558] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(757), 1,
      aux_sym_expansion_token1,
    STATE(240), 1,
      sym_comment,
  [4571] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(759), 1,
      aux_sym_expansion_token1,
    STATE(241), 1,
      sym_comment,
  [4584] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(761), 1,
      aux_sym_expansion_token1,
    STATE(242), 1,
      sym_comment,
  [4597] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(763), 1,
      aux_sym_expansion_token1,
    STATE(243), 1,
      sym_comment,
  [4610] = 4,
    ACTIONS(106), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(765), 1,
      aux_sym_expansion_token1,
    STATE(244), 1,
      sym_comment,
  [4623] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(767), 1,
      aux_sym_param_token1,
    STATE(245), 1,
      sym_comment,
  [4636] = 1,
    ACTIONS(769), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 259,
  [SMALL_STATE(6)] = 289,
  [SMALL_STATE(7)] = 321,
  [SMALL_STATE(8)] = 353,
  [SMALL_STATE(9)] = 381,
  [SMALL_STATE(10)] = 413,
  [SMALL_STATE(11)] = 443,
  [SMALL_STATE(12)] = 477,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 537,
  [SMALL_STATE(15)] = 564,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 624,
  [SMALL_STATE(18)] = 653,
  [SMALL_STATE(19)] = 681,
  [SMALL_STATE(20)] = 709,
  [SMALL_STATE(21)] = 737,
  [SMALL_STATE(22)] = 765,
  [SMALL_STATE(23)] = 793,
  [SMALL_STATE(24)] = 821,
  [SMALL_STATE(25)] = 849,
  [SMALL_STATE(26)] = 877,
  [SMALL_STATE(27)] = 905,
  [SMALL_STATE(28)] = 933,
  [SMALL_STATE(29)] = 953,
  [SMALL_STATE(30)] = 981,
  [SMALL_STATE(31)] = 1007,
  [SMALL_STATE(32)] = 1031,
  [SMALL_STATE(33)] = 1057,
  [SMALL_STATE(34)] = 1081,
  [SMALL_STATE(35)] = 1107,
  [SMALL_STATE(36)] = 1135,
  [SMALL_STATE(37)] = 1163,
  [SMALL_STATE(38)] = 1191,
  [SMALL_STATE(39)] = 1211,
  [SMALL_STATE(40)] = 1239,
  [SMALL_STATE(41)] = 1265,
  [SMALL_STATE(42)] = 1285,
  [SMALL_STATE(43)] = 1311,
  [SMALL_STATE(44)] = 1330,
  [SMALL_STATE(45)] = 1355,
  [SMALL_STATE(46)] = 1374,
  [SMALL_STATE(47)] = 1393,
  [SMALL_STATE(48)] = 1418,
  [SMALL_STATE(49)] = 1441,
  [SMALL_STATE(50)] = 1460,
  [SMALL_STATE(51)] = 1479,
  [SMALL_STATE(52)] = 1504,
  [SMALL_STATE(53)] = 1529,
  [SMALL_STATE(54)] = 1548,
  [SMALL_STATE(55)] = 1571,
  [SMALL_STATE(56)] = 1596,
  [SMALL_STATE(57)] = 1621,
  [SMALL_STATE(58)] = 1646,
  [SMALL_STATE(59)] = 1667,
  [SMALL_STATE(60)] = 1692,
  [SMALL_STATE(61)] = 1711,
  [SMALL_STATE(62)] = 1736,
  [SMALL_STATE(63)] = 1759,
  [SMALL_STATE(64)] = 1778,
  [SMALL_STATE(65)] = 1803,
  [SMALL_STATE(66)] = 1822,
  [SMALL_STATE(67)] = 1845,
  [SMALL_STATE(68)] = 1870,
  [SMALL_STATE(69)] = 1889,
  [SMALL_STATE(70)] = 1908,
  [SMALL_STATE(71)] = 1928,
  [SMALL_STATE(72)] = 1950,
  [SMALL_STATE(73)] = 1972,
  [SMALL_STATE(74)] = 1990,
  [SMALL_STATE(75)] = 2012,
  [SMALL_STATE(76)] = 2030,
  [SMALL_STATE(77)] = 2048,
  [SMALL_STATE(78)] = 2066,
  [SMALL_STATE(79)] = 2088,
  [SMALL_STATE(80)] = 2110,
  [SMALL_STATE(81)] = 2132,
  [SMALL_STATE(82)] = 2152,
  [SMALL_STATE(83)] = 2168,
  [SMALL_STATE(84)] = 2190,
  [SMALL_STATE(85)] = 2212,
  [SMALL_STATE(86)] = 2234,
  [SMALL_STATE(87)] = 2252,
  [SMALL_STATE(88)] = 2272,
  [SMALL_STATE(89)] = 2294,
  [SMALL_STATE(90)] = 2316,
  [SMALL_STATE(91)] = 2338,
  [SMALL_STATE(92)] = 2360,
  [SMALL_STATE(93)] = 2382,
  [SMALL_STATE(94)] = 2402,
  [SMALL_STATE(95)] = 2424,
  [SMALL_STATE(96)] = 2440,
  [SMALL_STATE(97)] = 2456,
  [SMALL_STATE(98)] = 2476,
  [SMALL_STATE(99)] = 2498,
  [SMALL_STATE(100)] = 2516,
  [SMALL_STATE(101)] = 2536,
  [SMALL_STATE(102)] = 2554,
  [SMALL_STATE(103)] = 2571,
  [SMALL_STATE(104)] = 2588,
  [SMALL_STATE(105)] = 2607,
  [SMALL_STATE(106)] = 2624,
  [SMALL_STATE(107)] = 2641,
  [SMALL_STATE(108)] = 2658,
  [SMALL_STATE(109)] = 2677,
  [SMALL_STATE(110)] = 2696,
  [SMALL_STATE(111)] = 2713,
  [SMALL_STATE(112)] = 2730,
  [SMALL_STATE(113)] = 2749,
  [SMALL_STATE(114)] = 2766,
  [SMALL_STATE(115)] = 2783,
  [SMALL_STATE(116)] = 2800,
  [SMALL_STATE(117)] = 2817,
  [SMALL_STATE(118)] = 2836,
  [SMALL_STATE(119)] = 2855,
  [SMALL_STATE(120)] = 2872,
  [SMALL_STATE(121)] = 2891,
  [SMALL_STATE(122)] = 2908,
  [SMALL_STATE(123)] = 2925,
  [SMALL_STATE(124)] = 2942,
  [SMALL_STATE(125)] = 2959,
  [SMALL_STATE(126)] = 2976,
  [SMALL_STATE(127)] = 2992,
  [SMALL_STATE(128)] = 3008,
  [SMALL_STATE(129)] = 3024,
  [SMALL_STATE(130)] = 3038,
  [SMALL_STATE(131)] = 3054,
  [SMALL_STATE(132)] = 3070,
  [SMALL_STATE(133)] = 3084,
  [SMALL_STATE(134)] = 3100,
  [SMALL_STATE(135)] = 3116,
  [SMALL_STATE(136)] = 3132,
  [SMALL_STATE(137)] = 3146,
  [SMALL_STATE(138)] = 3160,
  [SMALL_STATE(139)] = 3176,
  [SMALL_STATE(140)] = 3192,
  [SMALL_STATE(141)] = 3208,
  [SMALL_STATE(142)] = 3224,
  [SMALL_STATE(143)] = 3240,
  [SMALL_STATE(144)] = 3256,
  [SMALL_STATE(145)] = 3272,
  [SMALL_STATE(146)] = 3288,
  [SMALL_STATE(147)] = 3304,
  [SMALL_STATE(148)] = 3318,
  [SMALL_STATE(149)] = 3334,
  [SMALL_STATE(150)] = 3350,
  [SMALL_STATE(151)] = 3366,
  [SMALL_STATE(152)] = 3382,
  [SMALL_STATE(153)] = 3398,
  [SMALL_STATE(154)] = 3414,
  [SMALL_STATE(155)] = 3430,
  [SMALL_STATE(156)] = 3446,
  [SMALL_STATE(157)] = 3462,
  [SMALL_STATE(158)] = 3476,
  [SMALL_STATE(159)] = 3492,
  [SMALL_STATE(160)] = 3506,
  [SMALL_STATE(161)] = 3522,
  [SMALL_STATE(162)] = 3538,
  [SMALL_STATE(163)] = 3554,
  [SMALL_STATE(164)] = 3570,
  [SMALL_STATE(165)] = 3583,
  [SMALL_STATE(166)] = 3596,
  [SMALL_STATE(167)] = 3609,
  [SMALL_STATE(168)] = 3622,
  [SMALL_STATE(169)] = 3635,
  [SMALL_STATE(170)] = 3648,
  [SMALL_STATE(171)] = 3661,
  [SMALL_STATE(172)] = 3674,
  [SMALL_STATE(173)] = 3687,
  [SMALL_STATE(174)] = 3700,
  [SMALL_STATE(175)] = 3713,
  [SMALL_STATE(176)] = 3726,
  [SMALL_STATE(177)] = 3739,
  [SMALL_STATE(178)] = 3752,
  [SMALL_STATE(179)] = 3765,
  [SMALL_STATE(180)] = 3778,
  [SMALL_STATE(181)] = 3791,
  [SMALL_STATE(182)] = 3804,
  [SMALL_STATE(183)] = 3817,
  [SMALL_STATE(184)] = 3830,
  [SMALL_STATE(185)] = 3843,
  [SMALL_STATE(186)] = 3856,
  [SMALL_STATE(187)] = 3869,
  [SMALL_STATE(188)] = 3882,
  [SMALL_STATE(189)] = 3895,
  [SMALL_STATE(190)] = 3908,
  [SMALL_STATE(191)] = 3921,
  [SMALL_STATE(192)] = 3934,
  [SMALL_STATE(193)] = 3947,
  [SMALL_STATE(194)] = 3960,
  [SMALL_STATE(195)] = 3973,
  [SMALL_STATE(196)] = 3986,
  [SMALL_STATE(197)] = 3999,
  [SMALL_STATE(198)] = 4012,
  [SMALL_STATE(199)] = 4025,
  [SMALL_STATE(200)] = 4038,
  [SMALL_STATE(201)] = 4051,
  [SMALL_STATE(202)] = 4064,
  [SMALL_STATE(203)] = 4077,
  [SMALL_STATE(204)] = 4090,
  [SMALL_STATE(205)] = 4103,
  [SMALL_STATE(206)] = 4116,
  [SMALL_STATE(207)] = 4129,
  [SMALL_STATE(208)] = 4142,
  [SMALL_STATE(209)] = 4155,
  [SMALL_STATE(210)] = 4168,
  [SMALL_STATE(211)] = 4181,
  [SMALL_STATE(212)] = 4194,
  [SMALL_STATE(213)] = 4207,
  [SMALL_STATE(214)] = 4220,
  [SMALL_STATE(215)] = 4233,
  [SMALL_STATE(216)] = 4246,
  [SMALL_STATE(217)] = 4259,
  [SMALL_STATE(218)] = 4272,
  [SMALL_STATE(219)] = 4285,
  [SMALL_STATE(220)] = 4298,
  [SMALL_STATE(221)] = 4311,
  [SMALL_STATE(222)] = 4324,
  [SMALL_STATE(223)] = 4337,
  [SMALL_STATE(224)] = 4350,
  [SMALL_STATE(225)] = 4363,
  [SMALL_STATE(226)] = 4376,
  [SMALL_STATE(227)] = 4389,
  [SMALL_STATE(228)] = 4402,
  [SMALL_STATE(229)] = 4415,
  [SMALL_STATE(230)] = 4428,
  [SMALL_STATE(231)] = 4441,
  [SMALL_STATE(232)] = 4454,
  [SMALL_STATE(233)] = 4467,
  [SMALL_STATE(234)] = 4480,
  [SMALL_STATE(235)] = 4493,
  [SMALL_STATE(236)] = 4506,
  [SMALL_STATE(237)] = 4519,
  [SMALL_STATE(238)] = 4532,
  [SMALL_STATE(239)] = 4545,
  [SMALL_STATE(240)] = 4558,
  [SMALL_STATE(241)] = 4571,
  [SMALL_STATE(242)] = 4584,
  [SMALL_STATE(243)] = 4597,
  [SMALL_STATE(244)] = 4610,
  [SMALL_STATE(245)] = 4623,
  [SMALL_STATE(246)] = 4636,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(163),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(41),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(149),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(60),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(135),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(50),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(50),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(161),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(65),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(65),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(154),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(75),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(82),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(126),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(155),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(76),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(76),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(73),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(128),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(128),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(58),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 10),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(124),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(144),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(127),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(102),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(107),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(145),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(115),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(140),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_group, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(173),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(181),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(175),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(133),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(92),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 7),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 7),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(167),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 8),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 8),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 9),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 9),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 13),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 11),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [637] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 6),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
