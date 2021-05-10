#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 271
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  aux_sym_env_spec_token1 = 29,
  anon_sym_LBRACE = 30,
  aux_sym_env_spec_token2 = 31,
  anon_sym_RBRACE = 32,
  aux_sym_env_pair_token1 = 33,
  aux_sym_expose_port_token1 = 34,
  anon_sym_SLASHtcp = 35,
  anon_sym_SLASHudp = 36,
  aux_sym_label_pair_token1 = 37,
  aux_sym_image_name_token1 = 38,
  aux_sym_image_tag_token1 = 39,
  anon_sym_AT = 40,
  anon_sym_DASH_DASH = 41,
  aux_sym_param_token1 = 42,
  aux_sym_param_token2 = 43,
  aux_sym_name_token1 = 44,
  anon_sym_LBRACK = 45,
  anon_sym_COMMA = 46,
  anon_sym_RBRACK = 47,
  aux_sym_shell_command_token1 = 48,
  anon_sym_BSLASH_LF = 49,
  aux_sym_shell_command_token2 = 50,
  anon_sym_DQUOTE = 51,
  aux_sym_double_quoted_string_token1 = 52,
  aux_sym_unquoted_string_token1 = 53,
  anon_sym_BSLASH = 54,
  sym_escape_sequence = 55,
  sym__non_newline_whitespace = 56,
  anon_sym_POUND = 57,
  aux_sym_comment_token1 = 58,
  sym_source_file = 59,
  sym__instruction = 60,
  sym_from_instruction = 61,
  sym_run_instruction = 62,
  sym_cmd_instruction = 63,
  sym_label_instruction = 64,
  sym_expose_instruction = 65,
  sym_env_instruction = 66,
  sym_add_instruction = 67,
  sym_copy_instruction = 68,
  sym_entrypoint_instruction = 69,
  sym_volume_instruction = 70,
  sym_user_instruction = 71,
  aux_sym__user_name_group = 72,
  sym_workdir_instruction = 73,
  sym_arg_instruction = 74,
  sym_onbuild_instruction = 75,
  sym_stopsignal_instruction = 76,
  aux_sym__stopsignal_value = 77,
  sym_healthcheck_instruction = 78,
  sym_shell_instruction = 79,
  sym_path = 80,
  sym_env_spec = 81,
  sym_env_pair = 82,
  sym_expose_port = 83,
  sym_label_pair = 84,
  sym_image_spec = 85,
  sym_image_name = 86,
  sym_image_tag = 87,
  sym_image_digest = 88,
  sym_param = 89,
  sym_name = 90,
  sym_string_array = 91,
  sym_shell_command = 92,
  sym_double_quoted_string = 93,
  sym_unquoted_string = 94,
  sym_comment = 95,
  aux_sym_source_file_repeat1 = 96,
  aux_sym_label_instruction_repeat1 = 97,
  aux_sym_expose_instruction_repeat1 = 98,
  aux_sym_env_instruction_repeat1 = 99,
  aux_sym_volume_instruction_repeat1 = 100,
  aux_sym_healthcheck_instruction_repeat1 = 101,
  aux_sym_path_repeat1 = 102,
  aux_sym_env_spec_repeat1 = 103,
  aux_sym_image_name_repeat1 = 104,
  aux_sym_image_tag_repeat1 = 105,
  aux_sym_name_repeat1 = 106,
  aux_sym_string_array_repeat1 = 107,
  aux_sym_shell_command_repeat1 = 108,
  aux_sym_double_quoted_string_repeat1 = 109,
  aux_sym_unquoted_string_repeat1 = 110,
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
  [aux_sym_env_spec_token1] = "env_spec_token1",
  [anon_sym_LBRACE] = "{",
  [aux_sym_env_spec_token2] = "env_spec_token2",
  [anon_sym_RBRACE] = "}",
  [aux_sym_env_pair_token1] = "unquoted_string",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "unquoted_string",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [aux_sym_name_token1] = "name_token1",
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
  [sym_env_spec] = "env_spec",
  [sym_env_pair] = "env_pair",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_name] = "name",
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
  [aux_sym_env_spec_repeat1] = "env_spec_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
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
  [aux_sym_env_spec_token1] = aux_sym_env_spec_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_env_spec_token2] = aux_sym_env_spec_token2,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_env_pair_token1] = sym_unquoted_string,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = sym_unquoted_string,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [aux_sym_name_token1] = aux_sym_name_token1,
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
  [sym_env_spec] = sym_env_spec,
  [sym_env_pair] = sym_env_pair,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_name] = sym_name,
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
  [aux_sym_env_spec_repeat1] = aux_sym_env_spec_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
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
  [aux_sym_env_spec_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_spec_token2] = {
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
  [aux_sym_name_token1] = {
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
  [sym_env_spec] = {
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
  [sym_name] = {
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
  [aux_sym_env_spec_repeat1] = {
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
  [aux_sym_name_repeat1] = {
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
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(244);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(255);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(255);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(255);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(255);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') SKIP(35)
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') SKIP(35)
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') SKIP(37)
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') SKIP(37)
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\r') SKIP(39)
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(265);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(194);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(192);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 75:
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 86:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 92:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 93:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 103:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 104:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(98);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 105:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 111:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 120:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 135:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 152:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 153:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 163:
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(127);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 164:
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(127);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 165:
      if (eof) ADVANCE(166);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(201);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(190);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
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
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
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
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(244);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (lookahead == '_') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_env_spec_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(200);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_env_spec_token2);
      if (lookahead == '\n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_env_spec_token2);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_env_spec_token2);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_env_pair_token1);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_shell_command_token1);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BSLASH_LF);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_shell_command_token2);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_shell_command_token2);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(243);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(255);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(229);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(232);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(200);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(238);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(244);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 163},
  [2] = {.lex_state = 163},
  [3] = {.lex_state = 163},
  [4] = {.lex_state = 163},
  [5] = {.lex_state = 163},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 44},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 163},
  [45] = {.lex_state = 64},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 64},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 45},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 45},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 40},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 38},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 38},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 163},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 64},
  [88] = {.lex_state = 52},
  [89] = {.lex_state = 34},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 30},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 15},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 65},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 163},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 52},
  [102] = {.lex_state = 34},
  [103] = {.lex_state = 65},
  [104] = {.lex_state = 32},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 64},
  [107] = {.lex_state = 65},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 67},
  [110] = {.lex_state = 45},
  [111] = {.lex_state = 45},
  [112] = {.lex_state = 63},
  [113] = {.lex_state = 45},
  [114] = {.lex_state = 66},
  [115] = {.lex_state = 45},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 51},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 38},
  [120] = {.lex_state = 163},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 52},
  [123] = {.lex_state = 67},
  [124] = {.lex_state = 45},
  [125] = {.lex_state = 34},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 51},
  [128] = {.lex_state = 67},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 45},
  [131] = {.lex_state = 40},
  [132] = {.lex_state = 45},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 45},
  [135] = {.lex_state = 54},
  [136] = {.lex_state = 54},
  [137] = {.lex_state = 65},
  [138] = {.lex_state = 56},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 39},
  [141] = {.lex_state = 163},
  [142] = {.lex_state = 54},
  [143] = {.lex_state = 39},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 54},
  [146] = {.lex_state = 163},
  [147] = {.lex_state = 54},
  [148] = {.lex_state = 57},
  [149] = {.lex_state = 54},
  [150] = {.lex_state = 54},
  [151] = {.lex_state = 163},
  [152] = {.lex_state = 54},
  [153] = {.lex_state = 54},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 54},
  [156] = {.lex_state = 54},
  [157] = {.lex_state = 39},
  [158] = {.lex_state = 54},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 163},
  [162] = {.lex_state = 163},
  [163] = {.lex_state = 163},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 39},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 163},
  [168] = {.lex_state = 21},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 62},
  [171] = {.lex_state = 23},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 23},
  [174] = {.lex_state = 24},
  [175] = {.lex_state = 163},
  [176] = {.lex_state = 45},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 163},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 163},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 21},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 24},
  [188] = {.lex_state = 163},
  [189] = {.lex_state = 68},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 55},
  [193] = {.lex_state = 55},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 273},
  [199] = {.lex_state = 163},
  [200] = {.lex_state = 69},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 55},
  [210] = {.lex_state = 55},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 163},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 163},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 59},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 60},
  [222] = {.lex_state = 59},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 55},
  [227] = {.lex_state = 55},
  [228] = {.lex_state = 163},
  [229] = {.lex_state = 68},
  [230] = {.lex_state = 55},
  [231] = {.lex_state = 55},
  [232] = {.lex_state = 55},
  [233] = {.lex_state = 163},
  [234] = {.lex_state = 68},
  [235] = {.lex_state = 55},
  [236] = {.lex_state = 55},
  [237] = {.lex_state = 163},
  [238] = {.lex_state = 55},
  [239] = {.lex_state = 163},
  [240] = {.lex_state = 55},
  [241] = {.lex_state = 163},
  [242] = {.lex_state = 55},
  [243] = {.lex_state = 163},
  [244] = {.lex_state = 55},
  [245] = {.lex_state = 163},
  [246] = {.lex_state = 55},
  [247] = {.lex_state = 163},
  [248] = {.lex_state = 55},
  [249] = {.lex_state = 163},
  [250] = {.lex_state = 55},
  [251] = {.lex_state = 163},
  [252] = {.lex_state = 55},
  [253] = {.lex_state = 163},
  [254] = {.lex_state = 69},
  [255] = {.lex_state = 163},
  [256] = {.lex_state = 55},
  [257] = {.lex_state = 55},
  [258] = {.lex_state = 69},
  [259] = {.lex_state = 163},
  [260] = {.lex_state = 69},
  [261] = {.lex_state = 69},
  [262] = {.lex_state = 69},
  [263] = {.lex_state = 69},
  [264] = {.lex_state = 69},
  [265] = {.lex_state = 69},
  [266] = {.lex_state = 69},
  [267] = {.lex_state = 69},
  [268] = {.lex_state = 69},
  [269] = {.lex_state = 59},
  [270] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__user_name_group_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__stopsignal_value_token1] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_env_spec_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(225),
    [sym__instruction] = STATE(224),
    [sym_from_instruction] = STATE(223),
    [sym_run_instruction] = STATE(223),
    [sym_cmd_instruction] = STATE(223),
    [sym_label_instruction] = STATE(223),
    [sym_expose_instruction] = STATE(223),
    [sym_env_instruction] = STATE(223),
    [sym_add_instruction] = STATE(223),
    [sym_copy_instruction] = STATE(223),
    [sym_entrypoint_instruction] = STATE(223),
    [sym_volume_instruction] = STATE(223),
    [sym_user_instruction] = STATE(223),
    [sym_workdir_instruction] = STATE(223),
    [sym_arg_instruction] = STATE(223),
    [sym_onbuild_instruction] = STATE(223),
    [sym_stopsignal_instruction] = STATE(223),
    [sym_healthcheck_instruction] = STATE(223),
    [sym_shell_instruction] = STATE(223),
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
    STATE(224), 1,
      sym__instruction,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(223), 17,
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
    STATE(224), 1,
      sym__instruction,
    STATE(223), 17,
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
    STATE(204), 1,
      sym__instruction,
    STATE(223), 17,
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
      aux_sym_env_spec_token1,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_env_spec_repeat1,
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
      aux_sym_env_spec_token1,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    STATE(7), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
    ACTIONS(110), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(112), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [345] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      aux_sym_env_spec_token1,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_env_spec_repeat1,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(100), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [373] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      aux_sym_env_spec_token1,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_env_spec_repeat1,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(100), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [401] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(130), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_image_name_token1,
  [423] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      aux_sym_env_spec_token1,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    STATE(11), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [449] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      aux_sym_env_spec_token1,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_env_spec_repeat1,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(100), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [477] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(144), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(146), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      aux_sym_image_name_token1,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_image_name_repeat1,
    STATE(62), 1,
      sym_env_spec,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [507] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(154), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      aux_sym_image_name_token1,
    STATE(62), 1,
      sym_env_spec,
    STATE(14), 2,
      sym_comment,
      aux_sym_image_name_repeat1,
    ACTIONS(150), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [535] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(166), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(98), 1,
      sym_env_spec,
    STATE(220), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [567] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      aux_sym_env_spec_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(16), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
    ACTIONS(112), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [593] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(166), 1,
      anon_sym_BSLASH,
    ACTIONS(174), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(98), 1,
      sym_env_spec,
    STATE(166), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [625] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(178), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_image_name_token1,
  [647] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      anon_sym_DOLLAR,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(184), 1,
      anon_sym_BSLASH,
    STATE(19), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(91), 1,
      sym_env_spec,
    STATE(169), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [679] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      aux_sym_image_name_token1,
    ACTIONS(186), 1,
      anon_sym_DOLLAR,
    ACTIONS(188), 1,
      anon_sym_DASH_DASH,
    STATE(13), 1,
      aux_sym_image_name_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(48), 1,
      sym_image_name,
    STATE(49), 1,
      sym_param,
    STATE(62), 1,
      sym_env_spec,
    STATE(168), 1,
      sym_image_spec,
  [713] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(190), 1,
      aux_sym_env_spec_token1,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    STATE(21), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [739] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(203), 1,
      aux_sym_image_tag_token1,
    STATE(104), 1,
      sym_env_spec,
    ACTIONS(196), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(22), 2,
      sym_comment,
      aux_sym_image_tag_repeat1,
  [766] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(178), 5,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [787] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      aux_sym_env_spec_token1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_env_spec_repeat1,
    ACTIONS(100), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [812] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(130), 5,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [833] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(130), 5,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [854] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(178), 5,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [875] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      aux_sym_env_spec_token1,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(28), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
    ACTIONS(112), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [898] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(130), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_image_tag_token1,
  [919] = 10,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(166), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(218), 1,
      anon_sym_DOLLAR,
    ACTIONS(220), 1,
      aux_sym_label_pair_token1,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(98), 1,
      sym_env_spec,
  [950] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(227), 1,
      aux_sym_label_pair_token1,
    ACTIONS(229), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(232), 1,
      anon_sym_BSLASH,
    STATE(98), 1,
      sym_env_spec,
    STATE(31), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [979] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(178), 5,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_image_tag_token1,
  [1000] = 8,
    ACTIONS(98), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      aux_sym_env_spec_token1,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_env_spec_repeat1,
    ACTIONS(100), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1027] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(239), 1,
      aux_sym_env_spec_token1,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    STATE(34), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1052] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(249), 1,
      anon_sym_DOLLAR,
    ACTIONS(251), 1,
      aux_sym_image_tag_token1,
    STATE(22), 1,
      aux_sym_image_tag_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(104), 1,
      sym_env_spec,
    ACTIONS(245), 2,
      anon_sym_LF,
      anon_sym_AT,
  [1081] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      aux_sym_env_spec_token1,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_env_spec_repeat1,
    ACTIONS(98), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(100), 2,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
  [1108] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      aux_sym_env_spec_token1,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(112), 2,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
    STATE(37), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
  [1133] = 8,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      aux_sym_env_spec_token1,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_env_spec_repeat1,
    ACTIONS(100), 3,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [1160] = 10,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(184), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(220), 1,
      aux_sym_env_pair_token1,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    STATE(39), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(91), 1,
      sym_env_spec,
  [1191] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(227), 1,
      aux_sym_env_pair_token1,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(272), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(275), 1,
      anon_sym_BSLASH,
    STATE(91), 1,
      sym_env_spec,
    STATE(40), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [1220] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(278), 1,
      aux_sym_env_spec_token1,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
    ACTIONS(112), 3,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [1245] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(166), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    STATE(42), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(98), 1,
      sym_env_spec,
  [1273] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(292), 1,
      sym_escape_sequence,
    STATE(131), 1,
      sym_env_spec,
    STATE(43), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [1299] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(295), 1,
      anon_sym_NONE,
    ACTIONS(297), 1,
      anon_sym_DASH_DASH,
    STATE(44), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(181), 1,
      sym_param,
    STATE(203), 1,
      sym_cmd_instruction,
  [1327] = 8,
    ACTIONS(98), 1,
      sym__non_newline_whitespace,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      aux_sym_env_spec_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_env_spec_repeat1,
    ACTIONS(100), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [1353] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(229), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(232), 1,
      anon_sym_BSLASH,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    STATE(98), 1,
      sym_env_spec,
    STATE(46), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [1379] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      aux_sym_double_quoted_string_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1399] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(309), 1,
      anon_sym_AT,
    STATE(48), 1,
      sym_comment,
    STATE(116), 1,
      sym_image_tag,
    STATE(182), 1,
      sym_image_digest,
  [1427] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      aux_sym_image_name_token1,
    ACTIONS(186), 1,
      anon_sym_DOLLAR,
    STATE(13), 1,
      aux_sym_image_name_repeat1,
    STATE(48), 1,
      sym_image_name,
    STATE(49), 1,
      sym_comment,
    STATE(62), 1,
      sym_env_spec,
    STATE(183), 1,
      sym_image_spec,
  [1455] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      aux_sym_path_token2,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    STATE(119), 1,
      sym_env_spec,
    ACTIONS(311), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(50), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1479] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      sym__non_newline_whitespace,
    ACTIONS(319), 1,
      aux_sym_env_spec_token1,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
    STATE(51), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
  [1503] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      aux_sym_path_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_comment,
    STATE(72), 1,
      sym_env_spec,
    STATE(143), 1,
      sym_path,
    STATE(207), 1,
      sym_string_array,
  [1531] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      aux_sym_path_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    ACTIONS(335), 1,
      anon_sym_DASH_DASH,
    STATE(53), 1,
      sym_comment,
    STATE(103), 1,
      sym_env_spec,
    STATE(110), 1,
      sym_param,
    STATE(209), 1,
      sym_path,
  [1559] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      aux_sym_double_quoted_string_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(130), 5,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1579] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      aux_sym_path_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    ACTIONS(335), 1,
      anon_sym_DASH_DASH,
    STATE(55), 1,
      sym_comment,
    STATE(103), 1,
      sym_env_spec,
    STATE(134), 1,
      sym_param,
    STATE(210), 1,
      sym_path,
  [1607] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(341), 1,
      aux_sym_path_token2,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_path_repeat1,
    STATE(125), 1,
      sym_env_spec,
  [1635] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(350), 1,
      anon_sym_DOLLAR,
    STATE(121), 1,
      sym_env_spec,
    ACTIONS(345), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(57), 2,
      aux_sym__user_name_group,
      sym_comment,
  [1659] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(359), 1,
      sym_escape_sequence,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(131), 1,
      sym_env_spec,
  [1687] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(357), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(359), 1,
      sym_escape_sequence,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(131), 1,
      sym_env_spec,
  [1715] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(357), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(359), 1,
      sym_escape_sequence,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(60), 1,
      sym_comment,
    STATE(131), 1,
      sym_env_spec,
  [1743] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 1,
      anon_sym_DOLLAR,
    ACTIONS(369), 1,
      aux_sym_expose_port_token1,
    STATE(61), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(159), 1,
      sym_env_spec,
    STATE(160), 1,
      sym_expose_port,
  [1771] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(373), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1791] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(311), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(377), 1,
      aux_sym_path_token2,
    ACTIONS(380), 1,
      anon_sym_DOLLAR,
    STATE(125), 1,
      sym_env_spec,
    STATE(63), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1817] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      aux_sym_expose_port_token1,
    STATE(159), 1,
      sym_env_spec,
    STATE(160), 1,
      sym_expose_port,
    STATE(64), 2,
      sym_comment,
      aux_sym_expose_instruction_repeat1,
  [1843] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(357), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(359), 1,
      sym_escape_sequence,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(131), 1,
      sym_env_spec,
  [1871] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_comment,
    ACTIONS(178), 6,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      sym__non_newline_whitespace,
  [1889] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(130), 4,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
  [1909] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(393), 1,
      aux_sym_env_spec_token1,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      aux_sym_name_token1,
    STATE(68), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
  [1933] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(357), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(359), 1,
      sym_escape_sequence,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(131), 1,
      sym_env_spec,
  [1961] = 8,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      aux_sym_env_spec_token1,
    ACTIONS(403), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      aux_sym_env_spec_repeat1,
    STATE(70), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_DOLLAR,
      aux_sym_name_token1,
  [1987] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(357), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(359), 1,
      sym_escape_sequence,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(131), 1,
      sym_env_spec,
  [2015] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      aux_sym_path_token2,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(119), 1,
      sym_env_spec,
    ACTIONS(407), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2041] = 8,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      aux_sym_env_spec_token1,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_env_spec_repeat1,
    ACTIONS(100), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2067] = 9,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(421), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      aux_sym__user_name_group,
    STATE(74), 1,
      sym_comment,
    STATE(121), 1,
      sym_env_spec,
  [2095] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_LF,
      anon_sym_COLON,
    ACTIONS(178), 4,
      aux_sym__user_name_group_token1,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
  [2115] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(425), 1,
      aux_sym_env_spec_token1,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
    STATE(76), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
  [2139] = 8,
    ACTIONS(98), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      aux_sym_env_spec_token1,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      aux_sym_env_spec_repeat1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(100), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [2165] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym_comment,
    ACTIONS(130), 5,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
  [2185] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(79), 1,
      sym_comment,
    ACTIONS(130), 6,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      sym__non_newline_whitespace,
  [2203] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      aux_sym_path_token2,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
    STATE(50), 1,
      aux_sym_path_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(119), 1,
      sym_env_spec,
    ACTIONS(435), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [2229] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      anon_sym_LF,
    STATE(81), 1,
      sym_comment,
    ACTIONS(178), 5,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
  [2249] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LF,
    ACTIONS(437), 1,
      aux_sym_env_spec_token1,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    STATE(82), 2,
      sym_comment,
      aux_sym_env_spec_repeat1,
  [2273] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(445), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(447), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym__stopsignal_value,
    STATE(154), 1,
      sym_env_spec,
  [2298] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(453), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [2319] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(297), 1,
      anon_sym_DASH_DASH,
    STATE(85), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(181), 1,
      sym_param,
    STATE(191), 1,
      sym_cmd_instruction,
  [2344] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_LF,
      aux_sym_env_spec_token1,
    ACTIONS(130), 3,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [2363] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      sym__non_newline_whitespace,
    STATE(87), 1,
      sym_comment,
    ACTIONS(130), 4,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
  [2382] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(455), 1,
      anon_sym_DOLLAR,
    ACTIONS(457), 1,
      aux_sym_name_token1,
    STATE(88), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_name_repeat1,
    STATE(144), 1,
      sym_env_spec,
    STATE(197), 1,
      sym_name,
  [2407] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      aux_sym_path_token2,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(459), 1,
      anon_sym_LF,
    STATE(89), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_path_repeat1,
    STATE(125), 1,
      sym_env_spec,
  [2432] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_LF,
      aux_sym_env_spec_token1,
    ACTIONS(178), 3,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      aux_sym_expose_port_token1,
  [2451] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(463), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [2470] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_LF,
      aux_sym_env_spec_token1,
    ACTIONS(130), 3,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      aux_sym_expose_port_token1,
  [2489] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_LF,
      aux_sym_env_spec_token1,
    ACTIONS(178), 3,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
  [2508] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    ACTIONS(470), 1,
      aux_sym_name_token1,
    STATE(144), 1,
      sym_env_spec,
    STATE(94), 2,
      sym_comment,
      aux_sym_name_repeat1,
  [2531] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      anon_sym_LF,
    STATE(95), 1,
      sym_comment,
    ACTIONS(130), 4,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_name_token1,
  [2550] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(421), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(423), 1,
      anon_sym_DOLLAR,
    ACTIONS(473), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym__user_name_group,
    STATE(96), 1,
      sym_comment,
    STATE(121), 1,
      sym_env_spec,
  [2575] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(375), 1,
      sym__non_newline_whitespace,
    ACTIONS(475), 1,
      aux_sym_path_token2,
    ACTIONS(478), 1,
      anon_sym_DOLLAR,
    STATE(137), 1,
      sym_env_spec,
    STATE(97), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [2598] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(463), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [2617] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(481), 1,
      anon_sym_DOLLAR,
    ACTIONS(483), 1,
      aux_sym_expose_port_token1,
    STATE(61), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(99), 1,
      sym_comment,
    STATE(159), 1,
      sym_env_spec,
    STATE(160), 1,
      sym_expose_port,
  [2642] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      anon_sym_LF,
    STATE(100), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
      aux_sym_name_token1,
  [2661] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(455), 1,
      anon_sym_DOLLAR,
    ACTIONS(457), 1,
      aux_sym_name_token1,
    STATE(101), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_name_repeat1,
    STATE(144), 1,
      sym_env_spec,
    STATE(213), 1,
      sym_name,
  [2686] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      aux_sym_path_token2,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(485), 1,
      anon_sym_LF,
    STATE(63), 1,
      aux_sym_path_repeat1,
    STATE(102), 1,
      sym_comment,
    STATE(125), 1,
      sym_env_spec,
  [2711] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(459), 1,
      sym__non_newline_whitespace,
    ACTIONS(487), 1,
      aux_sym_path_token2,
    ACTIONS(489), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_path_repeat1,
    STATE(137), 1,
      sym_env_spec,
  [2736] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(493), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [2755] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 1,
      anon_sym_DOLLAR,
    ACTIONS(499), 1,
      aux_sym_name_token1,
    STATE(94), 1,
      aux_sym_name_repeat1,
    STATE(105), 1,
      sym_comment,
    STATE(144), 1,
      sym_env_spec,
  [2780] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(176), 1,
      sym__non_newline_whitespace,
    STATE(106), 1,
      sym_comment,
    ACTIONS(178), 4,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      aux_sym_env_spec_token1,
      anon_sym_LBRACE,
  [2799] = 8,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(485), 1,
      sym__non_newline_whitespace,
    ACTIONS(487), 1,
      aux_sym_path_token2,
    ACTIONS(489), 1,
      anon_sym_DOLLAR,
    STATE(97), 1,
      aux_sym_path_repeat1,
    STATE(107), 1,
      sym_comment,
    STATE(137), 1,
      sym_env_spec,
  [2824] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(503), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(506), 1,
      anon_sym_DOLLAR,
    STATE(154), 1,
      sym_env_spec,
    STATE(108), 2,
      aux_sym__stopsignal_value,
      sym_comment,
  [2847] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 1,
      aux_sym_shell_command_token1,
    STATE(109), 1,
      sym_comment,
    STATE(215), 2,
      sym_string_array,
      sym_shell_command,
  [2867] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      aux_sym_path_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym_env_spec,
    STATE(110), 1,
      sym_comment,
    STATE(192), 1,
      sym_path,
  [2889] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      aux_sym_path_token1,
    ACTIONS(513), 1,
      anon_sym_DOLLAR,
    STATE(89), 1,
      sym_env_spec,
    STATE(111), 1,
      sym_comment,
    STATE(217), 1,
      sym_path,
  [2911] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      aux_sym_image_tag_token1,
    ACTIONS(515), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      aux_sym_image_tag_repeat1,
    STATE(104), 1,
      sym_env_spec,
    STATE(112), 1,
      sym_comment,
  [2933] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      aux_sym_path_token1,
    ACTIONS(513), 1,
      anon_sym_DOLLAR,
    STATE(89), 1,
      sym_env_spec,
    STATE(113), 1,
      sym_comment,
    STATE(205), 1,
      sym_path,
  [2955] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      aux_sym_path_token2,
    ACTIONS(513), 1,
      anon_sym_DOLLAR,
    STATE(56), 1,
      aux_sym_path_repeat1,
    STATE(114), 1,
      sym_comment,
    STATE(125), 1,
      sym_env_spec,
  [2977] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      aux_sym_path_token1,
    ACTIONS(327), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_env_spec,
    STATE(115), 1,
      sym_comment,
    STATE(165), 1,
      sym_path,
  [2999] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 1,
      aux_sym_from_instruction_token2,
    STATE(116), 1,
      sym_comment,
    STATE(184), 1,
      sym_image_digest,
  [3021] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(421), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(521), 1,
      anon_sym_DOLLAR,
    STATE(96), 1,
      aux_sym__user_name_group,
    STATE(117), 1,
      sym_comment,
    STATE(121), 1,
      sym_env_spec,
  [3043] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(525), 1,
      aux_sym_label_pair_token1,
    STATE(118), 1,
      sym_comment,
    STATE(133), 1,
      aux_sym_label_instruction_repeat1,
    STATE(173), 1,
      sym_label_pair,
  [3065] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(119), 1,
      sym_comment,
    ACTIONS(527), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [3081] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(531), 1,
      anon_sym_DASH_DASH,
    STATE(181), 1,
      sym_param,
    STATE(120), 2,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [3101] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      anon_sym_DOLLAR,
    STATE(121), 1,
      sym_comment,
    ACTIONS(534), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [3119] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(540), 1,
      anon_sym_DOLLAR,
    STATE(83), 1,
      aux_sym__stopsignal_value,
    STATE(122), 1,
      sym_comment,
    STATE(154), 1,
      sym_env_spec,
  [3141] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 1,
      aux_sym_shell_command_token1,
    STATE(123), 1,
      sym_comment,
    STATE(216), 2,
      sym_string_array,
      sym_shell_command,
  [3161] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      aux_sym_path_token1,
    ACTIONS(513), 1,
      anon_sym_DOLLAR,
    STATE(89), 1,
      sym_env_spec,
    STATE(124), 1,
      sym_comment,
    STATE(206), 1,
      sym_path,
  [3183] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(542), 1,
      anon_sym_LF,
    STATE(125), 1,
      sym_comment,
    ACTIONS(527), 3,
      aux_sym_from_instruction_token2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3201] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_LF,
    ACTIONS(546), 1,
      aux_sym_env_pair_token1,
    STATE(174), 1,
      sym_env_pair,
    STATE(126), 2,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [3221] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(421), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(521), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      aux_sym__user_name_group,
    STATE(121), 1,
      sym_env_spec,
    STATE(127), 1,
      sym_comment,
  [3243] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 1,
      aux_sym_shell_command_token1,
    STATE(128), 1,
      sym_comment,
    STATE(208), 2,
      sym_string_array,
      sym_shell_command,
  [3263] = 7,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      aux_sym_env_pair_token1,
    STATE(126), 1,
      aux_sym_env_instruction_repeat1,
    STATE(129), 1,
      sym_comment,
    STATE(174), 1,
      sym_env_pair,
  [3285] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      aux_sym_path_token1,
    ACTIONS(513), 1,
      anon_sym_DOLLAR,
    STATE(89), 1,
      sym_env_spec,
    STATE(130), 1,
      sym_comment,
    STATE(194), 1,
      sym_path,
  [3307] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      aux_sym_double_quoted_string_token1,
    STATE(131), 1,
      sym_comment,
    ACTIONS(553), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3325] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      aux_sym_path_token1,
    ACTIONS(513), 1,
      anon_sym_DOLLAR,
    STATE(89), 1,
      sym_env_spec,
    STATE(132), 1,
      sym_comment,
    STATE(190), 1,
      sym_path,
  [3347] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 1,
      aux_sym_label_pair_token1,
    STATE(173), 1,
      sym_label_pair,
    STATE(133), 2,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [3367] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      aux_sym_path_token1,
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    STATE(103), 1,
      sym_env_spec,
    STATE(134), 1,
      sym_comment,
    STATE(193), 1,
      sym_path,
  [3389] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      aux_sym_env_spec_token1,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      aux_sym_env_spec_repeat1,
    STATE(135), 1,
      sym_comment,
  [3408] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      aux_sym_env_spec_token1,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_env_spec_repeat1,
    STATE(136), 1,
      sym_comment,
  [3427] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(542), 1,
      sym__non_newline_whitespace,
    STATE(137), 1,
      sym_comment,
    ACTIONS(527), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3444] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(570), 1,
      aux_sym_env_pair_token1,
    STATE(129), 1,
      aux_sym_env_instruction_repeat1,
    STATE(138), 1,
      sym_comment,
    STATE(174), 1,
      sym_env_pair,
  [3463] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(572), 1,
      anon_sym_LF,
    STATE(139), 1,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3480] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(576), 1,
      anon_sym_LF,
    ACTIONS(578), 1,
      sym__non_newline_whitespace,
    STATE(140), 2,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [3497] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_string_array_repeat1,
  [3516] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(585), 1,
      aux_sym_env_spec_token1,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      aux_sym_env_spec_repeat1,
    STATE(142), 1,
      sym_comment,
  [3535] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(591), 1,
      sym__non_newline_whitespace,
    STATE(143), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_volume_instruction_repeat1,
  [3554] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      anon_sym_LF,
    STATE(144), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_DOLLAR,
      aux_sym_name_token1,
  [3571] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      aux_sym_env_spec_token1,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      aux_sym_env_spec_repeat1,
    STATE(145), 1,
      sym_comment,
  [3590] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
    STATE(146), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [3607] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      aux_sym_env_spec_token1,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym_env_spec_repeat1,
    STATE(147), 1,
      sym_comment,
  [3626] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      aux_sym_label_pair_token1,
    STATE(118), 1,
      aux_sym_label_instruction_repeat1,
    STATE(148), 1,
      sym_comment,
    STATE(173), 1,
      sym_label_pair,
  [3645] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(610), 1,
      aux_sym_env_spec_token1,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_env_spec_repeat1,
    STATE(149), 1,
      sym_comment,
  [3664] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      aux_sym_env_spec_token1,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      aux_sym_env_spec_repeat1,
    STATE(150), 1,
      sym_comment,
  [3683] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      anon_sym_RBRACK,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_double_quoted_string,
    STATE(151), 1,
      sym_comment,
  [3702] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      aux_sym_env_spec_token1,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      aux_sym_env_spec_repeat1,
    STATE(152), 1,
      sym_comment,
  [3721] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      aux_sym_env_spec_token1,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      aux_sym_env_spec_repeat1,
    STATE(153), 1,
      sym_comment,
  [3740] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      anon_sym_LF,
    STATE(154), 1,
      sym_comment,
    ACTIONS(630), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [3757] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(632), 1,
      aux_sym_env_spec_token1,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      aux_sym_env_spec_repeat1,
    STATE(155), 1,
      sym_comment,
  [3776] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(636), 1,
      aux_sym_env_spec_token1,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_env_spec_repeat1,
    STATE(156), 1,
      sym_comment,
  [3795] = 6,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      sym__non_newline_whitespace,
    ACTIONS(640), 1,
      anon_sym_LF,
    STATE(140), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(157), 1,
      sym_comment,
  [3814] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      aux_sym_env_spec_token1,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      aux_sym_env_spec_repeat1,
    STATE(158), 1,
      sym_comment,
  [3833] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(159), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3850] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      anon_sym_LF,
    STATE(160), 1,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [3867] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_string_array_repeat1,
    STATE(161), 1,
      sym_comment,
  [3886] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      sym_comment,
    STATE(179), 1,
      sym_double_quoted_string,
  [3902] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(652), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3916] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    STATE(164), 1,
      sym_comment,
    STATE(201), 1,
      sym_string_array,
  [3932] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3946] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_LF,
    ACTIONS(656), 1,
      aux_sym_label_pair_token1,
    STATE(166), 1,
      sym_comment,
  [3962] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3976] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      anon_sym_LF,
    ACTIONS(662), 1,
      aux_sym_from_instruction_token2,
    STATE(168), 1,
      sym_comment,
  [3992] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      anon_sym_LF,
    ACTIONS(666), 1,
      aux_sym_env_pair_token1,
    STATE(169), 1,
      sym_comment,
  [4008] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_DOLLAR,
    ACTIONS(668), 1,
      aux_sym_image_name_token1,
    STATE(170), 1,
      sym_comment,
  [4024] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      aux_sym_label_pair_token1,
    STATE(171), 1,
      sym_comment,
  [4040] = 5,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_LF,
    ACTIONS(674), 1,
      anon_sym_BSLASH_LF,
    STATE(172), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_shell_command_repeat1,
  [4056] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      anon_sym_LF,
    ACTIONS(678), 1,
      aux_sym_label_pair_token1,
    STATE(173), 1,
      sym_comment,
  [4072] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      anon_sym_LF,
    ACTIONS(682), 1,
      aux_sym_env_pair_token1,
    STATE(174), 1,
      sym_comment,
  [4088] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4102] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_DOLLAR,
    ACTIONS(668), 1,
      aux_sym_path_token1,
    STATE(176), 1,
      sym_comment,
  [4118] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      anon_sym_LF,
    ACTIONS(686), 1,
      aux_sym_label_pair_token1,
    STATE(177), 1,
      sym_comment,
  [4134] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(690), 1,
      anon_sym_BSLASH_LF,
    STATE(178), 2,
      sym_comment,
      aux_sym_shell_command_repeat1,
  [4148] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(179), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4162] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 1,
      anon_sym_EQ,
    STATE(180), 1,
      sym_comment,
  [4178] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(181), 1,
      sym_comment,
    ACTIONS(697), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [4192] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(701), 1,
      aux_sym_from_instruction_token2,
    STATE(182), 1,
      sym_comment,
  [4208] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(703), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      aux_sym_from_instruction_token2,
    STATE(183), 1,
      sym_comment,
  [4224] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      anon_sym_LF,
    ACTIONS(709), 1,
      aux_sym_from_instruction_token2,
    STATE(184), 1,
      sym_comment,
  [4240] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      anon_sym_LF,
    ACTIONS(670), 1,
      aux_sym_env_pair_token1,
    STATE(185), 1,
      sym_comment,
  [4256] = 5,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(711), 1,
      anon_sym_LF,
    STATE(178), 1,
      aux_sym_shell_command_repeat1,
    STATE(186), 1,
      sym_comment,
  [4272] = 5,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      anon_sym_LF,
    ACTIONS(686), 1,
      aux_sym_env_pair_token1,
    STATE(187), 1,
      sym_comment,
  [4288] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_comment,
  [4301] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(715), 1,
      aux_sym_param_token2,
    STATE(189), 1,
      sym_comment,
  [4314] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(717), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_comment,
  [4327] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(719), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym_comment,
  [4340] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      sym__non_newline_whitespace,
    STATE(192), 1,
      sym_comment,
  [4353] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(723), 1,
      sym__non_newline_whitespace,
    STATE(193), 1,
      sym_comment,
  [4366] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(194), 1,
      sym_comment,
  [4379] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(727), 1,
      aux_sym_shell_command_token2,
    STATE(195), 1,
      sym_comment,
  [4392] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(196), 1,
      sym_comment,
  [4405] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_comment,
  [4418] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(733), 1,
      aux_sym_comment_token1,
    STATE(198), 1,
      sym_comment,
  [4431] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(735), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym_comment,
  [4444] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(737), 1,
      aux_sym_env_spec_token2,
    STATE(200), 1,
      sym_comment,
  [4457] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(739), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_comment,
  [4470] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(741), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_comment,
  [4483] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(743), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_comment,
  [4496] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(745), 1,
      anon_sym_LF,
    STATE(204), 1,
      sym_comment,
  [4509] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_comment,
  [4522] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(749), 1,
      anon_sym_LF,
    STATE(206), 1,
      sym_comment,
  [4535] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(751), 1,
      anon_sym_LF,
    STATE(207), 1,
      sym_comment,
  [4548] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      anon_sym_LF,
    STATE(208), 1,
      sym_comment,
  [4561] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(755), 1,
      sym__non_newline_whitespace,
    STATE(209), 1,
      sym_comment,
  [4574] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(757), 1,
      sym__non_newline_whitespace,
    STATE(210), 1,
      sym_comment,
  [4587] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      anon_sym_LF,
    STATE(211), 1,
      sym_comment,
  [4600] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(761), 1,
      anon_sym_EQ,
    STATE(212), 1,
      sym_comment,
  [4613] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      anon_sym_LF,
    STATE(213), 1,
      sym_comment,
  [4626] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      anon_sym_EQ,
    STATE(214), 1,
      sym_comment,
  [4639] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(767), 1,
      anon_sym_LF,
    STATE(215), 1,
      sym_comment,
  [4652] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(769), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_comment,
  [4665] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(771), 1,
      anon_sym_LF,
    STATE(217), 1,
      sym_comment,
  [4678] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(773), 1,
      anon_sym_BSLASH_LF,
    STATE(218), 1,
      sym_comment,
  [4691] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(775), 1,
      aux_sym_param_token1,
    STATE(219), 1,
      sym_comment,
  [4704] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(777), 1,
      anon_sym_LF,
    STATE(220), 1,
      sym_comment,
  [4717] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      aux_sym_arg_instruction_token2,
    STATE(221), 1,
      sym_comment,
  [4730] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(781), 1,
      aux_sym_param_token1,
    STATE(222), 1,
      sym_comment,
  [4743] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      anon_sym_LF,
    STATE(223), 1,
      sym_comment,
  [4756] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(785), 1,
      anon_sym_LF,
    STATE(224), 1,
      sym_comment,
  [4769] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(787), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_comment,
  [4782] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(789), 1,
      sym__non_newline_whitespace,
    STATE(226), 1,
      sym_comment,
  [4795] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      sym__non_newline_whitespace,
    STATE(227), 1,
      sym_comment,
  [4808] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_comment,
  [4821] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(795), 1,
      aux_sym_param_token2,
    STATE(229), 1,
      sym_comment,
  [4834] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(797), 1,
      sym__non_newline_whitespace,
    STATE(230), 1,
      sym_comment,
  [4847] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(799), 1,
      sym__non_newline_whitespace,
    STATE(231), 1,
      sym_comment,
  [4860] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(801), 1,
      sym__non_newline_whitespace,
    STATE(232), 1,
      sym_comment,
  [4873] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
  [4886] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(805), 1,
      aux_sym_param_token2,
    STATE(234), 1,
      sym_comment,
  [4899] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(807), 1,
      sym__non_newline_whitespace,
    STATE(235), 1,
      sym_comment,
  [4912] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      sym__non_newline_whitespace,
    STATE(236), 1,
      sym_comment,
  [4925] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
  [4938] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym__non_newline_whitespace,
    STATE(238), 1,
      sym_comment,
  [4951] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [4964] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(817), 1,
      sym__non_newline_whitespace,
    STATE(240), 1,
      sym_comment,
  [4977] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_comment,
  [4990] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(821), 1,
      sym__non_newline_whitespace,
    STATE(242), 1,
      sym_comment,
  [5003] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
    STATE(243), 1,
      sym_comment,
  [5016] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(825), 1,
      sym__non_newline_whitespace,
    STATE(244), 1,
      sym_comment,
  [5029] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      sym_comment,
  [5042] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(829), 1,
      sym__non_newline_whitespace,
    STATE(246), 1,
      sym_comment,
  [5055] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_comment,
  [5068] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(833), 1,
      sym__non_newline_whitespace,
    STATE(248), 1,
      sym_comment,
  [5081] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym_comment,
  [5094] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(837), 1,
      sym__non_newline_whitespace,
    STATE(250), 1,
      sym_comment,
  [5107] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      sym_comment,
  [5120] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(841), 1,
      sym__non_newline_whitespace,
    STATE(252), 1,
      sym_comment,
  [5133] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
    STATE(253), 1,
      sym_comment,
  [5146] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(845), 1,
      aux_sym_env_spec_token2,
    STATE(254), 1,
      sym_comment,
  [5159] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(847), 1,
      anon_sym_EQ,
    STATE(255), 1,
      sym_comment,
  [5172] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(849), 1,
      sym__non_newline_whitespace,
    STATE(256), 1,
      sym_comment,
  [5185] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(851), 1,
      sym__non_newline_whitespace,
    STATE(257), 1,
      sym_comment,
  [5198] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(853), 1,
      aux_sym_env_spec_token2,
    STATE(258), 1,
      sym_comment,
  [5211] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      anon_sym_EQ,
    STATE(259), 1,
      sym_comment,
  [5224] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      aux_sym_env_spec_token2,
    STATE(260), 1,
      sym_comment,
  [5237] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      aux_sym_env_spec_token2,
    STATE(261), 1,
      sym_comment,
  [5250] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(861), 1,
      aux_sym_env_spec_token2,
    STATE(262), 1,
      sym_comment,
  [5263] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      aux_sym_env_spec_token2,
    STATE(263), 1,
      sym_comment,
  [5276] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      aux_sym_env_spec_token2,
    STATE(264), 1,
      sym_comment,
  [5289] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(867), 1,
      aux_sym_env_spec_token2,
    STATE(265), 1,
      sym_comment,
  [5302] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(869), 1,
      aux_sym_env_spec_token2,
    STATE(266), 1,
      sym_comment,
  [5315] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(871), 1,
      aux_sym_env_spec_token2,
    STATE(267), 1,
      sym_comment,
  [5328] = 4,
    ACTIONS(106), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(873), 1,
      aux_sym_env_spec_token2,
    STATE(268), 1,
      sym_comment,
  [5341] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH_LF,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(875), 1,
      aux_sym_param_token1,
    STATE(269), 1,
      sym_comment,
  [5354] = 1,
    ACTIONS(877), 1,
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
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 401,
  [SMALL_STATE(11)] = 423,
  [SMALL_STATE(12)] = 449,
  [SMALL_STATE(13)] = 477,
  [SMALL_STATE(14)] = 507,
  [SMALL_STATE(15)] = 535,
  [SMALL_STATE(16)] = 567,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 625,
  [SMALL_STATE(19)] = 647,
  [SMALL_STATE(20)] = 679,
  [SMALL_STATE(21)] = 713,
  [SMALL_STATE(22)] = 739,
  [SMALL_STATE(23)] = 766,
  [SMALL_STATE(24)] = 787,
  [SMALL_STATE(25)] = 812,
  [SMALL_STATE(26)] = 833,
  [SMALL_STATE(27)] = 854,
  [SMALL_STATE(28)] = 875,
  [SMALL_STATE(29)] = 898,
  [SMALL_STATE(30)] = 919,
  [SMALL_STATE(31)] = 950,
  [SMALL_STATE(32)] = 979,
  [SMALL_STATE(33)] = 1000,
  [SMALL_STATE(34)] = 1027,
  [SMALL_STATE(35)] = 1052,
  [SMALL_STATE(36)] = 1081,
  [SMALL_STATE(37)] = 1108,
  [SMALL_STATE(38)] = 1133,
  [SMALL_STATE(39)] = 1160,
  [SMALL_STATE(40)] = 1191,
  [SMALL_STATE(41)] = 1220,
  [SMALL_STATE(42)] = 1245,
  [SMALL_STATE(43)] = 1273,
  [SMALL_STATE(44)] = 1299,
  [SMALL_STATE(45)] = 1327,
  [SMALL_STATE(46)] = 1353,
  [SMALL_STATE(47)] = 1379,
  [SMALL_STATE(48)] = 1399,
  [SMALL_STATE(49)] = 1427,
  [SMALL_STATE(50)] = 1455,
  [SMALL_STATE(51)] = 1479,
  [SMALL_STATE(52)] = 1503,
  [SMALL_STATE(53)] = 1531,
  [SMALL_STATE(54)] = 1559,
  [SMALL_STATE(55)] = 1579,
  [SMALL_STATE(56)] = 1607,
  [SMALL_STATE(57)] = 1635,
  [SMALL_STATE(58)] = 1659,
  [SMALL_STATE(59)] = 1687,
  [SMALL_STATE(60)] = 1715,
  [SMALL_STATE(61)] = 1743,
  [SMALL_STATE(62)] = 1771,
  [SMALL_STATE(63)] = 1791,
  [SMALL_STATE(64)] = 1817,
  [SMALL_STATE(65)] = 1843,
  [SMALL_STATE(66)] = 1871,
  [SMALL_STATE(67)] = 1889,
  [SMALL_STATE(68)] = 1909,
  [SMALL_STATE(69)] = 1933,
  [SMALL_STATE(70)] = 1961,
  [SMALL_STATE(71)] = 1987,
  [SMALL_STATE(72)] = 2015,
  [SMALL_STATE(73)] = 2041,
  [SMALL_STATE(74)] = 2067,
  [SMALL_STATE(75)] = 2095,
  [SMALL_STATE(76)] = 2115,
  [SMALL_STATE(77)] = 2139,
  [SMALL_STATE(78)] = 2165,
  [SMALL_STATE(79)] = 2185,
  [SMALL_STATE(80)] = 2203,
  [SMALL_STATE(81)] = 2229,
  [SMALL_STATE(82)] = 2249,
  [SMALL_STATE(83)] = 2273,
  [SMALL_STATE(84)] = 2298,
  [SMALL_STATE(85)] = 2319,
  [SMALL_STATE(86)] = 2344,
  [SMALL_STATE(87)] = 2363,
  [SMALL_STATE(88)] = 2382,
  [SMALL_STATE(89)] = 2407,
  [SMALL_STATE(90)] = 2432,
  [SMALL_STATE(91)] = 2451,
  [SMALL_STATE(92)] = 2470,
  [SMALL_STATE(93)] = 2489,
  [SMALL_STATE(94)] = 2508,
  [SMALL_STATE(95)] = 2531,
  [SMALL_STATE(96)] = 2550,
  [SMALL_STATE(97)] = 2575,
  [SMALL_STATE(98)] = 2598,
  [SMALL_STATE(99)] = 2617,
  [SMALL_STATE(100)] = 2642,
  [SMALL_STATE(101)] = 2661,
  [SMALL_STATE(102)] = 2686,
  [SMALL_STATE(103)] = 2711,
  [SMALL_STATE(104)] = 2736,
  [SMALL_STATE(105)] = 2755,
  [SMALL_STATE(106)] = 2780,
  [SMALL_STATE(107)] = 2799,
  [SMALL_STATE(108)] = 2824,
  [SMALL_STATE(109)] = 2847,
  [SMALL_STATE(110)] = 2867,
  [SMALL_STATE(111)] = 2889,
  [SMALL_STATE(112)] = 2911,
  [SMALL_STATE(113)] = 2933,
  [SMALL_STATE(114)] = 2955,
  [SMALL_STATE(115)] = 2977,
  [SMALL_STATE(116)] = 2999,
  [SMALL_STATE(117)] = 3021,
  [SMALL_STATE(118)] = 3043,
  [SMALL_STATE(119)] = 3065,
  [SMALL_STATE(120)] = 3081,
  [SMALL_STATE(121)] = 3101,
  [SMALL_STATE(122)] = 3119,
  [SMALL_STATE(123)] = 3141,
  [SMALL_STATE(124)] = 3161,
  [SMALL_STATE(125)] = 3183,
  [SMALL_STATE(126)] = 3201,
  [SMALL_STATE(127)] = 3221,
  [SMALL_STATE(128)] = 3243,
  [SMALL_STATE(129)] = 3263,
  [SMALL_STATE(130)] = 3285,
  [SMALL_STATE(131)] = 3307,
  [SMALL_STATE(132)] = 3325,
  [SMALL_STATE(133)] = 3347,
  [SMALL_STATE(134)] = 3367,
  [SMALL_STATE(135)] = 3389,
  [SMALL_STATE(136)] = 3408,
  [SMALL_STATE(137)] = 3427,
  [SMALL_STATE(138)] = 3444,
  [SMALL_STATE(139)] = 3463,
  [SMALL_STATE(140)] = 3480,
  [SMALL_STATE(141)] = 3497,
  [SMALL_STATE(142)] = 3516,
  [SMALL_STATE(143)] = 3535,
  [SMALL_STATE(144)] = 3554,
  [SMALL_STATE(145)] = 3571,
  [SMALL_STATE(146)] = 3590,
  [SMALL_STATE(147)] = 3607,
  [SMALL_STATE(148)] = 3626,
  [SMALL_STATE(149)] = 3645,
  [SMALL_STATE(150)] = 3664,
  [SMALL_STATE(151)] = 3683,
  [SMALL_STATE(152)] = 3702,
  [SMALL_STATE(153)] = 3721,
  [SMALL_STATE(154)] = 3740,
  [SMALL_STATE(155)] = 3757,
  [SMALL_STATE(156)] = 3776,
  [SMALL_STATE(157)] = 3795,
  [SMALL_STATE(158)] = 3814,
  [SMALL_STATE(159)] = 3833,
  [SMALL_STATE(160)] = 3850,
  [SMALL_STATE(161)] = 3867,
  [SMALL_STATE(162)] = 3886,
  [SMALL_STATE(163)] = 3902,
  [SMALL_STATE(164)] = 3916,
  [SMALL_STATE(165)] = 3932,
  [SMALL_STATE(166)] = 3946,
  [SMALL_STATE(167)] = 3962,
  [SMALL_STATE(168)] = 3976,
  [SMALL_STATE(169)] = 3992,
  [SMALL_STATE(170)] = 4008,
  [SMALL_STATE(171)] = 4024,
  [SMALL_STATE(172)] = 4040,
  [SMALL_STATE(173)] = 4056,
  [SMALL_STATE(174)] = 4072,
  [SMALL_STATE(175)] = 4088,
  [SMALL_STATE(176)] = 4102,
  [SMALL_STATE(177)] = 4118,
  [SMALL_STATE(178)] = 4134,
  [SMALL_STATE(179)] = 4148,
  [SMALL_STATE(180)] = 4162,
  [SMALL_STATE(181)] = 4178,
  [SMALL_STATE(182)] = 4192,
  [SMALL_STATE(183)] = 4208,
  [SMALL_STATE(184)] = 4224,
  [SMALL_STATE(185)] = 4240,
  [SMALL_STATE(186)] = 4256,
  [SMALL_STATE(187)] = 4272,
  [SMALL_STATE(188)] = 4288,
  [SMALL_STATE(189)] = 4301,
  [SMALL_STATE(190)] = 4314,
  [SMALL_STATE(191)] = 4327,
  [SMALL_STATE(192)] = 4340,
  [SMALL_STATE(193)] = 4353,
  [SMALL_STATE(194)] = 4366,
  [SMALL_STATE(195)] = 4379,
  [SMALL_STATE(196)] = 4392,
  [SMALL_STATE(197)] = 4405,
  [SMALL_STATE(198)] = 4418,
  [SMALL_STATE(199)] = 4431,
  [SMALL_STATE(200)] = 4444,
  [SMALL_STATE(201)] = 4457,
  [SMALL_STATE(202)] = 4470,
  [SMALL_STATE(203)] = 4483,
  [SMALL_STATE(204)] = 4496,
  [SMALL_STATE(205)] = 4509,
  [SMALL_STATE(206)] = 4522,
  [SMALL_STATE(207)] = 4535,
  [SMALL_STATE(208)] = 4548,
  [SMALL_STATE(209)] = 4561,
  [SMALL_STATE(210)] = 4574,
  [SMALL_STATE(211)] = 4587,
  [SMALL_STATE(212)] = 4600,
  [SMALL_STATE(213)] = 4613,
  [SMALL_STATE(214)] = 4626,
  [SMALL_STATE(215)] = 4639,
  [SMALL_STATE(216)] = 4652,
  [SMALL_STATE(217)] = 4665,
  [SMALL_STATE(218)] = 4678,
  [SMALL_STATE(219)] = 4691,
  [SMALL_STATE(220)] = 4704,
  [SMALL_STATE(221)] = 4717,
  [SMALL_STATE(222)] = 4730,
  [SMALL_STATE(223)] = 4743,
  [SMALL_STATE(224)] = 4756,
  [SMALL_STATE(225)] = 4769,
  [SMALL_STATE(226)] = 4782,
  [SMALL_STATE(227)] = 4795,
  [SMALL_STATE(228)] = 4808,
  [SMALL_STATE(229)] = 4821,
  [SMALL_STATE(230)] = 4834,
  [SMALL_STATE(231)] = 4847,
  [SMALL_STATE(232)] = 4860,
  [SMALL_STATE(233)] = 4873,
  [SMALL_STATE(234)] = 4886,
  [SMALL_STATE(235)] = 4899,
  [SMALL_STATE(236)] = 4912,
  [SMALL_STATE(237)] = 4925,
  [SMALL_STATE(238)] = 4938,
  [SMALL_STATE(239)] = 4951,
  [SMALL_STATE(240)] = 4964,
  [SMALL_STATE(241)] = 4977,
  [SMALL_STATE(242)] = 4990,
  [SMALL_STATE(243)] = 5003,
  [SMALL_STATE(244)] = 5016,
  [SMALL_STATE(245)] = 5029,
  [SMALL_STATE(246)] = 5042,
  [SMALL_STATE(247)] = 5055,
  [SMALL_STATE(248)] = 5068,
  [SMALL_STATE(249)] = 5081,
  [SMALL_STATE(250)] = 5094,
  [SMALL_STATE(251)] = 5107,
  [SMALL_STATE(252)] = 5120,
  [SMALL_STATE(253)] = 5133,
  [SMALL_STATE(254)] = 5146,
  [SMALL_STATE(255)] = 5159,
  [SMALL_STATE(256)] = 5172,
  [SMALL_STATE(257)] = 5185,
  [SMALL_STATE(258)] = 5198,
  [SMALL_STATE(259)] = 5211,
  [SMALL_STATE(260)] = 5224,
  [SMALL_STATE(261)] = 5237,
  [SMALL_STATE(262)] = 5250,
  [SMALL_STATE(263)] = 5263,
  [SMALL_STATE(264)] = 5276,
  [SMALL_STATE(265)] = 5289,
  [SMALL_STATE(266)] = 5302,
  [SMALL_STATE(267)] = 5315,
  [SMALL_STATE(268)] = 5328,
  [SMALL_STATE(269)] = 5341,
  [SMALL_STATE(270)] = 5354,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(257),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(256),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(246),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(230),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_spec, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_spec, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_spec_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(10),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(200),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_spec_repeat1, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 1),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(25),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(267),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(147),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(62),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(29),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(265),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_spec_repeat1, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(26),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(268),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(156),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(104),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(79),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(260),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(149),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(98),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(98),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(54),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(266),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(67),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(261),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(136),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(91),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(91),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(78),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(262),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(158),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(131),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(131),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(119),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(142),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(87),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(258),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(121),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(150),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(125),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(152),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(145),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(84),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(95),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(264),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(86),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(263),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(92),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_spec_repeat1, 2), SHIFT_REPEAT(254),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(155),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(144),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 10),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(137),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(135),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(154),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(153),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(222),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 1),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_group, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(212),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(214),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(115),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(162),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 8),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 8),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 9),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 9),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(195),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 7),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 7),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 6),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 13),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 11),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [787] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
