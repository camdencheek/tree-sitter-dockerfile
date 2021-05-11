#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
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
  aux_sym_shell_fragment_token1 = 49,
  aux_sym_shell_fragment_token2 = 50,
  sym_line_continuation = 51,
  anon_sym_POUND = 52,
  aux_sym__anon_comment_token1 = 53,
  anon_sym_DQUOTE = 54,
  aux_sym_double_quoted_string_token1 = 55,
  aux_sym_unquoted_string_token1 = 56,
  anon_sym_BSLASH = 57,
  sym_escape_sequence = 58,
  sym__non_newline_whitespace = 59,
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
  sym_shell_fragment = 94,
  sym__comment_line = 95,
  sym__anon_comment = 96,
  sym_double_quoted_string = 97,
  sym_unquoted_string = 98,
  sym_comment = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym_label_instruction_repeat1 = 101,
  aux_sym_expose_instruction_repeat1 = 102,
  aux_sym_env_instruction_repeat1 = 103,
  aux_sym_volume_instruction_repeat1 = 104,
  aux_sym_healthcheck_instruction_repeat1 = 105,
  aux_sym_path_repeat1 = 106,
  aux_sym_image_name_repeat1 = 107,
  aux_sym_image_tag_repeat1 = 108,
  aux_sym_image_digest_repeat1 = 109,
  aux_sym_image_alias_repeat1 = 110,
  aux_sym_string_array_repeat1 = 111,
  aux_sym_shell_command_repeat1 = 112,
  aux_sym_shell_command_repeat2 = 113,
  aux_sym_shell_fragment_repeat1 = 114,
  aux_sym_double_quoted_string_repeat1 = 115,
  aux_sym_unquoted_string_repeat1 = 116,
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
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [sym_line_continuation] = "line_continuation",
  [anon_sym_POUND] = "#",
  [aux_sym__anon_comment_token1] = "_anon_comment_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [sym__non_newline_whitespace] = "_non_newline_whitespace",
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
  [sym_shell_fragment] = "shell_fragment",
  [sym__comment_line] = "_comment_line",
  [sym__anon_comment] = "comment",
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
  [aux_sym_shell_command_repeat2] = "shell_command_repeat2",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
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
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [sym_line_continuation] = sym_line_continuation,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__anon_comment_token1] = aux_sym__anon_comment_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__non_newline_whitespace] = sym__non_newline_whitespace,
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
  [sym_shell_fragment] = sym_shell_fragment,
  [sym__comment_line] = sym__comment_line,
  [sym__anon_comment] = sym_comment,
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
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__anon_comment_token1] = {
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
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ',') ADVANCE(209);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(213);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == ' ') ADVANCE(233);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(211);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(232);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(232);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '@') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') SKIP(27)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(176);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(215);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(195);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(195);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(202);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 69:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 73:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 74:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 75:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 86:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 102:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 124:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 128:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 132:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 133:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
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
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 145:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ',') ADVANCE(209);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 146:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ',') ADVANCE(209);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ',') ADVANCE(209);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '[') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == ']') ADVANCE(210);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__user_name_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(213);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_env_pair_token1);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(195);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(195);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(179);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(206);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__anon_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '_') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 145},
  [2] = {.lex_state = 145},
  [3] = {.lex_state = 145},
  [4] = {.lex_state = 145},
  [5] = {.lex_state = 145},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 145},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 51},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 145},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 145},
  [67] = {.lex_state = 51},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 30},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 30},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 145},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 50},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 37},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 30},
  [105] = {.lex_state = 30},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 51},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 51},
  [112] = {.lex_state = 145},
  [113] = {.lex_state = 43},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 44},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 51},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 145},
  [122] = {.lex_state = 145},
  [123] = {.lex_state = 27},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 145},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 145},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 145},
  [139] = {.lex_state = 145},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 145},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 16},
  [148] = {.lex_state = 41},
  [149] = {.lex_state = 41},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 41},
  [152] = {.lex_state = 30},
  [153] = {.lex_state = 27},
  [154] = {.lex_state = 41},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 41},
  [158] = {.lex_state = 49},
  [159] = {.lex_state = 17},
  [160] = {.lex_state = 41},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 17},
  [163] = {.lex_state = 145},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 145},
  [166] = {.lex_state = 41},
  [167] = {.lex_state = 41},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 39},
  [170] = {.lex_state = 41},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 42},
  [177] = {.lex_state = 46},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 47},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 145},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 145},
  [186] = {.lex_state = 46},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 42},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 42},
  [194] = {.lex_state = 42},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 42},
  [197] = {.lex_state = 42},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 224},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 42},
  [205] = {.lex_state = 42},
  [206] = {.lex_state = 42},
  [207] = {.lex_state = 42},
  [208] = {.lex_state = 42},
  [209] = {.lex_state = 42},
  [210] = {.lex_state = 42},
  [211] = {.lex_state = 42},
  [212] = {.lex_state = 42},
  [213] = {.lex_state = 42},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 42},
  [216] = {.lex_state = 145},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 42},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 42},
  [221] = {.lex_state = 145},
  [222] = {.lex_state = 52},
  [223] = {.lex_state = 42},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 145},
  [226] = {.lex_state = 52},
  [227] = {.lex_state = 145},
  [228] = {.lex_state = 145},
  [229] = {.lex_state = 145},
  [230] = {.lex_state = 53},
  [231] = {.lex_state = 145},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 145},
  [234] = {.lex_state = 145},
  [235] = {.lex_state = 145},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 145},
  [238] = {.lex_state = 224},
  [239] = {.lex_state = 145},
  [240] = {.lex_state = 42},
  [241] = {.lex_state = 145},
  [242] = {.lex_state = 53},
  [243] = {.lex_state = 145},
  [244] = {.lex_state = 53},
  [245] = {.lex_state = 145},
  [246] = {.lex_state = 53},
  [247] = {.lex_state = 53},
  [248] = {.lex_state = 53},
  [249] = {.lex_state = 53},
  [250] = {.lex_state = 53},
  [251] = {.lex_state = 53},
  [252] = {.lex_state = 53},
  [253] = {.lex_state = 53},
  [254] = {.lex_state = 53},
  [255] = {.lex_state = 46},
  [256] = {(TSStateId)(-1)},
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
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(192),
    [sym__instruction] = STATE(190),
    [sym_from_instruction] = STATE(187),
    [sym_run_instruction] = STATE(187),
    [sym_cmd_instruction] = STATE(187),
    [sym_label_instruction] = STATE(187),
    [sym_expose_instruction] = STATE(187),
    [sym_env_instruction] = STATE(187),
    [sym_add_instruction] = STATE(187),
    [sym_copy_instruction] = STATE(187),
    [sym_entrypoint_instruction] = STATE(187),
    [sym_volume_instruction] = STATE(187),
    [sym_user_instruction] = STATE(187),
    [sym_workdir_instruction] = STATE(187),
    [sym_arg_instruction] = STATE(187),
    [sym_onbuild_instruction] = STATE(187),
    [sym_stopsignal_instruction] = STATE(187),
    [sym_healthcheck_instruction] = STATE(187),
    [sym_shell_instruction] = STATE(187),
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
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
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
    STATE(190), 1,
      sym__instruction,
    STATE(2), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(187), 17,
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
      sym_line_continuation,
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
    STATE(190), 1,
      sym__instruction,
    STATE(187), 17,
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
      sym_line_continuation,
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
    STATE(203), 1,
      sym__instruction,
    STATE(187), 17,
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
      sym_line_continuation,
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
  [289] = 9,
    ACTIONS(100), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(102), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      aux_sym_image_name_token1,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_image_name_repeat1,
    STATE(47), 1,
      sym_expansion,
    ACTIONS(98), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [319] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_DOLLAR,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym_expansion,
    STATE(147), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [351] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(104), 1,
      aux_sym_image_name_token1,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(120), 1,
      anon_sym_DASH_DASH,
    STATE(6), 1,
      aux_sym_image_name_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(40), 1,
      sym_image_name,
    STATE(41), 1,
      sym_param,
    STATE(47), 1,
      sym_expansion,
    STATE(168), 1,
      sym_image_spec,
  [385] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(128), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(70), 1,
      sym_expansion,
    STATE(184), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [417] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      aux_sym_image_name_token1,
    STATE(47), 1,
      sym_expansion,
    STATE(10), 2,
      sym_comment,
      aux_sym_image_name_repeat1,
    ACTIONS(130), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [445] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(128), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(70), 1,
      sym_expansion,
    STATE(145), 2,
      sym_double_quoted_string,
      sym_unquoted_string,
  [477] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(142), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(144), 1,
      anon_sym_DOLLAR,
    ACTIONS(146), 1,
      aux_sym_image_tag_token1,
    STATE(12), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_image_tag_repeat1,
    STATE(69), 1,
      sym_expansion,
    ACTIONS(140), 2,
      anon_sym_LF,
      anon_sym_AT,
  [506] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(150), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(195), 1,
      sym__anon_comment,
    STATE(214), 1,
      sym_shell_fragment,
    ACTIONS(148), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(56), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [533] = 10,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(128), 1,
      anon_sym_BSLASH,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(154), 1,
      anon_sym_DOLLAR,
    ACTIONS(156), 1,
      aux_sym_label_pair_token1,
    STATE(14), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(70), 1,
      sym_expansion,
  [564] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(162), 1,
      anon_sym_DOLLAR,
    ACTIONS(165), 1,
      aux_sym_image_tag_token1,
    STATE(69), 1,
      sym_expansion,
    ACTIONS(158), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(15), 2,
      sym_comment,
      aux_sym_image_tag_repeat1,
  [591] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym_shell_fragment,
    ACTIONS(148), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(173), 2,
      sym_string_array,
      sym_shell_command,
  [618] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym_shell_fragment,
    ACTIONS(148), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(182), 2,
      sym_string_array,
      sym_shell_command,
  [645] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      aux_sym_label_pair_token1,
    ACTIONS(177), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(180), 1,
      anon_sym_BSLASH,
    STATE(70), 1,
      sym_expansion,
    STATE(18), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [674] = 10,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(114), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(116), 1,
      anon_sym_BSLASH,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(156), 1,
      aux_sym_env_pair_token1,
    ACTIONS(183), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_unquoted_string_repeat1,
    STATE(52), 1,
      sym_expansion,
  [705] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(150), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(195), 1,
      sym__anon_comment,
    STATE(198), 1,
      sym_shell_fragment,
    ACTIONS(148), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(13), 2,
      sym__comment_line,
      aux_sym_shell_command_repeat1,
  [732] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(164), 1,
      sym_shell_fragment,
    ACTIONS(148), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(171), 2,
      sym_string_array,
      sym_shell_command,
  [759] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(175), 1,
      aux_sym_env_pair_token1,
    ACTIONS(185), 1,
      anon_sym_DOLLAR,
    ACTIONS(188), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(191), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym_expansion,
    STATE(22), 2,
      sym_comment,
      aux_sym_unquoted_string_repeat1,
  [788] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(194), 1,
      anon_sym_DOLLAR,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(202), 1,
      sym_escape_sequence,
    STATE(80), 1,
      sym_expansion,
    STATE(23), 2,
      sym_comment,
      aux_sym_double_quoted_string_repeat1,
  [814] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(207), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [834] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(215), 1,
      sym_escape_sequence,
    STATE(25), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(80), 1,
      sym_expansion,
  [862] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(219), 1,
      anon_sym_DOLLAR,
    ACTIONS(222), 1,
      aux_sym_expose_port_token1,
    STATE(114), 1,
      sym_expansion,
    STATE(117), 1,
      sym_expose_port,
    STATE(26), 2,
      sym_comment,
      aux_sym_expose_instruction_repeat1,
  [888] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(215), 1,
      sym_escape_sequence,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(80), 1,
      sym_expansion,
  [916] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(215), 1,
      sym_escape_sequence,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(80), 1,
      sym_expansion,
  [944] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(215), 1,
      sym_escape_sequence,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(80), 1,
      sym_expansion,
  [972] = 7,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(236), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym_expansion,
    ACTIONS(231), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(30), 2,
      aux_sym__user_name_group,
      sym_comment,
  [996] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(241), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1016] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(245), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(247), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
      aux_sym_image_digest_token1,
    STATE(32), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_image_digest_repeat1,
    STATE(79), 1,
      sym_expansion,
  [1044] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(255), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    STATE(30), 1,
      aux_sym__user_name_group,
    STATE(33), 1,
      sym_comment,
    STATE(91), 1,
      sym_expansion,
  [1072] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(215), 1,
      sym_escape_sequence,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(34), 1,
      sym_comment,
    STATE(80), 1,
      sym_expansion,
  [1100] = 7,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      aux_sym_path_token2,
    ACTIONS(266), 1,
      anon_sym_DOLLAR,
    STATE(100), 1,
      sym_expansion,
    ACTIONS(261), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
    STATE(35), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1124] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      aux_sym_path_token2,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    STATE(36), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(100), 1,
      sym_expansion,
    ACTIONS(269), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1150] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      aux_sym_path_token1,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_DASH_DASH,
    STATE(37), 1,
      sym_comment,
    STATE(67), 1,
      sym_expansion,
    STATE(83), 1,
      sym_param,
    STATE(191), 1,
      sym_path,
  [1178] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      aux_sym_path_token1,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(279), 1,
      anon_sym_DASH_DASH,
    STATE(38), 1,
      sym_comment,
    STATE(67), 1,
      sym_expansion,
    STATE(82), 1,
      sym_param,
    STATE(194), 1,
      sym_path,
  [1206] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      aux_sym_path_token1,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    STATE(36), 1,
      sym_expansion,
    STATE(39), 1,
      sym_comment,
    STATE(123), 1,
      sym_path,
    STATE(201), 1,
      sym_string_array,
  [1234] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(287), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(291), 1,
      anon_sym_AT,
    STATE(40), 1,
      sym_comment,
    STATE(92), 1,
      sym_image_tag,
    STATE(155), 1,
      sym_image_digest,
  [1262] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(104), 1,
      aux_sym_image_name_token1,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    STATE(6), 1,
      aux_sym_image_name_repeat1,
    STATE(40), 1,
      sym_image_name,
    STATE(41), 1,
      sym_comment,
    STATE(47), 1,
      sym_expansion,
    STATE(156), 1,
      sym_image_spec,
  [1290] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(213), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(215), 1,
      sym_escape_sequence,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_double_quoted_string_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(80), 1,
      sym_expansion,
  [1318] = 9,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_LF,
    ACTIONS(297), 1,
      aux_sym_expose_port_token1,
    STATE(26), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(114), 1,
      sym_expansion,
    STATE(117), 1,
      sym_expose_port,
  [1346] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(299), 1,
      anon_sym_NONE,
    ACTIONS(301), 1,
      anon_sym_DASH_DASH,
    STATE(44), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(135), 1,
      sym_param,
    STATE(172), 1,
      sym_cmd_instruction,
  [1374] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      aux_sym_path_token2,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(100), 1,
      sym_expansion,
    ACTIONS(303), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [1400] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      anon_sym_LF,
    ACTIONS(307), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(309), 1,
      anon_sym_DOLLAR,
    ACTIONS(312), 1,
      aux_sym_image_digest_token1,
    STATE(79), 1,
      sym_expansion,
    STATE(46), 2,
      sym_comment,
      aux_sym_image_digest_repeat1,
  [1426] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
    ACTIONS(317), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_name_token1,
  [1446] = 7,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      aux_sym_path_token2,
    ACTIONS(322), 1,
      anon_sym_DOLLAR,
    ACTIONS(325), 1,
      sym__non_newline_whitespace,
    STATE(111), 1,
      sym_expansion,
    STATE(48), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1469] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(205), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1488] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(207), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1507] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(241), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1526] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    ACTIONS(327), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(329), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [1545] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      aux_sym_path_token2,
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    ACTIONS(335), 1,
      sym__non_newline_whitespace,
    STATE(48), 1,
      aux_sym_path_repeat1,
    STATE(53), 1,
      sym_comment,
    STATE(111), 1,
      sym_expansion,
  [1570] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(207), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [1589] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(239), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [1608] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(339), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym__anon_comment,
    ACTIONS(337), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(56), 3,
      sym__comment_line,
      sym_comment,
      aux_sym_shell_command_repeat1,
  [1627] = 7,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(342), 1,
      aux_sym_path_token2,
    ACTIONS(345), 1,
      anon_sym_DOLLAR,
    STATE(120), 1,
      sym_expansion,
    STATE(57), 2,
      sym_comment,
      aux_sym_path_repeat1,
  [1650] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(348), 1,
      anon_sym_DOLLAR,
    ACTIONS(350), 1,
      aux_sym_image_alias_token1,
    STATE(58), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_image_alias_repeat1,
    STATE(124), 1,
      sym_expansion,
    STATE(224), 1,
      sym_image_alias,
  [1675] = 7,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 1,
      anon_sym_DOLLAR,
    ACTIONS(357), 1,
      aux_sym_image_alias_token1,
    STATE(124), 1,
      sym_expansion,
    STATE(59), 2,
      sym_comment,
      aux_sym_image_alias_repeat1,
  [1698] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(241), 3,
      anon_sym_DOLLAR,
      aux_sym_env_pair_token1,
      aux_sym_unquoted_string_token1,
  [1717] = 6,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
    ACTIONS(364), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
  [1738] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(366), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym__user_name_group,
    STATE(62), 1,
      sym_comment,
    STATE(91), 1,
      sym_expansion,
  [1763] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      anon_sym_DOLLAR,
    ACTIONS(370), 1,
      aux_sym_expose_port_token1,
    STATE(43), 1,
      aux_sym_expose_instruction_repeat1,
    STATE(63), 1,
      sym_comment,
    STATE(114), 1,
      sym_expansion,
    STATE(117), 1,
      sym_expose_port,
  [1788] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_LF,
    ACTIONS(372), 1,
      aux_sym_path_token2,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    STATE(57), 1,
      aux_sym_path_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(120), 1,
      sym_expansion,
  [1813] = 7,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(378), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(381), 1,
      anon_sym_DOLLAR,
    STATE(129), 1,
      sym_expansion,
    STATE(65), 2,
      aux_sym__stopsignal_value,
      sym_comment,
  [1836] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(301), 1,
      anon_sym_DASH_DASH,
    STATE(66), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_healthcheck_instruction_repeat1,
    STATE(135), 1,
      sym_param,
    STATE(232), 1,
      sym_cmd_instruction,
  [1861] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      aux_sym_path_token2,
    ACTIONS(333), 1,
      anon_sym_DOLLAR,
    ACTIONS(384), 1,
      sym__non_newline_whitespace,
    STATE(53), 1,
      aux_sym_path_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(111), 1,
      sym_expansion,
  [1886] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      anon_sym_DOLLAR,
    ACTIONS(390), 1,
      aux_sym_image_alias_token1,
    STATE(59), 1,
      aux_sym_image_alias_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(124), 1,
      sym_expansion,
  [1911] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_LF,
      anon_sym_AT,
    ACTIONS(394), 3,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
      aux_sym_image_tag_token1,
  [1930] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_comment,
    ACTIONS(327), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(329), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1949] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(398), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(400), 1,
      anon_sym_DOLLAR,
    STATE(65), 1,
      aux_sym__stopsignal_value,
    STATE(71), 1,
      sym_comment,
    STATE(129), 1,
      sym_expansion,
  [1974] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(241), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [1993] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_BSLASH,
    ACTIONS(207), 3,
      anon_sym_DOLLAR,
      aux_sym_label_pair_token1,
      aux_sym_unquoted_string_token1,
  [2012] = 8,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(372), 1,
      aux_sym_path_token2,
    ACTIONS(374), 1,
      anon_sym_DOLLAR,
    ACTIONS(384), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym_path_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(120), 1,
      sym_expansion,
  [2037] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(348), 1,
      anon_sym_DOLLAR,
    ACTIONS(350), 1,
      aux_sym_image_alias_token1,
    STATE(68), 1,
      aux_sym_image_alias_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(124), 1,
      sym_expansion,
    STATE(180), 1,
      sym_image_alias,
  [2062] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      sym_expansion,
    STATE(76), 1,
      sym_comment,
    STATE(175), 1,
      sym_path,
  [2084] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      aux_sym_image_digest_token1,
    ACTIONS(406), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      aux_sym_image_digest_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(79), 1,
      sym_expansion,
  [2106] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(368), 1,
      anon_sym_DOLLAR,
    STATE(33), 1,
      aux_sym__user_name_group,
    STATE(78), 1,
      sym_comment,
    STATE(91), 1,
      sym_expansion,
  [2128] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(79), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(410), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2146] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      aux_sym_double_quoted_string_token1,
    STATE(80), 1,
      sym_comment,
    ACTIONS(412), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2164] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(207), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2182] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      aux_sym_path_token1,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      sym_expansion,
    STATE(82), 1,
      sym_comment,
    STATE(240), 1,
      sym_path,
  [2204] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      aux_sym_path_token1,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      sym_expansion,
    STATE(83), 1,
      sym_comment,
    STATE(176), 1,
      sym_path,
  [2226] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      aux_sym_double_quoted_string_token1,
    STATE(84), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2244] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(418), 1,
      anon_sym_DASH_DASH,
    STATE(135), 1,
      sym_param,
    STATE(85), 2,
      sym_comment,
      aux_sym_healthcheck_instruction_repeat1,
  [2264] = 7,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(421), 1,
      anon_sym_LF,
    ACTIONS(423), 1,
      aux_sym_env_pair_token1,
    STATE(86), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_env_instruction_repeat1,
    STATE(150), 1,
      sym_env_pair,
  [2286] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      aux_sym_double_quoted_string_token1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [2304] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      sym_expansion,
    STATE(88), 1,
      sym_comment,
    STATE(174), 1,
      sym_path,
  [2326] = 7,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      aux_sym_label_pair_token1,
    STATE(89), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_label_instruction_repeat1,
    STATE(159), 1,
      sym_label_pair,
  [2348] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      aux_sym_image_tag_token1,
    ACTIONS(429), 1,
      anon_sym_DOLLAR,
    STATE(12), 1,
      aux_sym_image_tag_repeat1,
    STATE(69), 1,
      sym_expansion,
    STATE(90), 1,
      sym_comment,
  [2370] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      anon_sym_DOLLAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym__user_name_group_token1,
  [2388] = 7,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(437), 1,
      aux_sym_from_instruction_token2,
    STATE(92), 1,
      sym_comment,
    STATE(136), 1,
      sym_image_digest,
  [2410] = 6,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(443), 1,
      sym_line_continuation,
    STATE(93), 1,
      sym_comment,
    STATE(101), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(441), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2430] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      aux_sym__user_name_group_token1,
    ACTIONS(368), 1,
      anon_sym_DOLLAR,
    STATE(62), 1,
      aux_sym__user_name_group,
    STATE(91), 1,
      sym_expansion,
    STATE(94), 1,
      sym_comment,
  [2452] = 6,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(445), 1,
      anon_sym_LF,
    ACTIONS(447), 1,
      aux_sym_env_pair_token1,
    STATE(150), 1,
      sym_env_pair,
    STATE(95), 2,
      sym_comment,
      aux_sym_env_instruction_repeat1,
  [2472] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      aux_sym_path_token1,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    STATE(36), 1,
      sym_expansion,
    STATE(96), 1,
      sym_comment,
    STATE(153), 1,
      sym_path,
  [2494] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(241), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2510] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      sym_expansion,
    STATE(98), 1,
      sym_comment,
    STATE(188), 1,
      sym_path,
  [2532] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym_comment,
    ACTIONS(207), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2548] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym_comment,
    ACTIONS(450), 4,
      anon_sym_LF,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
      sym__non_newline_whitespace,
  [2564] = 5,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      sym_line_continuation,
    ACTIONS(454), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
    STATE(101), 2,
      sym_comment,
      aux_sym_shell_fragment_repeat1,
  [2582] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(459), 1,
      aux_sym__stopsignal_value_token1,
    ACTIONS(461), 1,
      anon_sym_DOLLAR,
    STATE(71), 1,
      aux_sym__stopsignal_value,
    STATE(102), 1,
      sym_comment,
    STATE(129), 1,
      sym_expansion,
  [2604] = 6,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(465), 1,
      aux_sym_label_pair_token1,
    STATE(159), 1,
      sym_label_pair,
    STATE(103), 2,
      sym_comment,
      aux_sym_label_instruction_repeat1,
  [2624] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      sym_expansion,
    STATE(104), 1,
      sym_comment,
    STATE(189), 1,
      sym_path,
  [2646] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      aux_sym_path_token1,
    ACTIONS(404), 1,
      anon_sym_DOLLAR,
    STATE(74), 1,
      sym_expansion,
    STATE(105), 1,
      sym_comment,
    STATE(202), 1,
      sym_path,
  [2668] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_LF,
      aux_sym_image_digest_token1,
    ACTIONS(241), 2,
      aux_sym_from_instruction_token2,
      anon_sym_DOLLAR,
  [2686] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym__non_newline_whitespace,
    STATE(107), 1,
      sym_comment,
    ACTIONS(207), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2703] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(108), 1,
      sym_comment,
    ACTIONS(207), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2720] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      anon_sym_LF,
    STATE(109), 1,
      sym_comment,
    ACTIONS(470), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      sym_line_continuation,
  [2735] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(472), 1,
      anon_sym_LF,
    STATE(110), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2752] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      sym__non_newline_whitespace,
    STATE(111), 1,
      sym_comment,
    ACTIONS(450), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2769] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    STATE(112), 2,
      sym_comment,
      aux_sym_string_array_repeat1,
  [2786] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      aux_sym_env_pair_token1,
    STATE(86), 1,
      aux_sym_env_instruction_repeat1,
    STATE(113), 1,
      sym_comment,
    STATE(150), 1,
      sym_env_pair,
  [2805] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(114), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2822] = 6,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(487), 1,
      sym__non_newline_whitespace,
    STATE(115), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_volume_instruction_repeat1,
  [2841] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(489), 1,
      aux_sym_label_pair_token1,
    STATE(89), 1,
      aux_sym_label_instruction_repeat1,
    STATE(116), 1,
      sym_comment,
    STATE(159), 1,
      sym_label_pair,
  [2860] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(491), 1,
      anon_sym_LF,
    STATE(117), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
  [2877] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 1,
      sym__non_newline_whitespace,
    STATE(118), 2,
      sym_comment,
      aux_sym_volume_instruction_repeat1,
  [2894] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      sym__non_newline_whitespace,
    STATE(119), 1,
      sym_comment,
    ACTIONS(241), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2911] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      anon_sym_LF,
    STATE(120), 1,
      sym_comment,
    ACTIONS(450), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [2928] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym_string_array_repeat1,
  [2947] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_double_quoted_string,
    STATE(122), 1,
      sym_comment,
  [2966] = 6,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(487), 1,
      sym__non_newline_whitespace,
    ACTIONS(508), 1,
      anon_sym_LF,
    STATE(115), 1,
      aux_sym_volume_instruction_repeat1,
    STATE(123), 1,
      sym_comment,
  [2985] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      anon_sym_LF,
    STATE(124), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3002] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      aux_sym_string_array_repeat1,
    STATE(125), 1,
      sym_comment,
  [3021] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(126), 1,
      sym_comment,
    ACTIONS(207), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [3038] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_LF,
    STATE(127), 1,
      sym_comment,
    ACTIONS(241), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [3055] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(128), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3072] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_LF,
    STATE(129), 1,
      sym_comment,
    ACTIONS(518), 2,
      aux_sym__stopsignal_value_token1,
      anon_sym_DOLLAR,
  [3089] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_LF,
    STATE(130), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_DOLLAR,
      aux_sym_image_alias_token1,
  [3106] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_LF,
    STATE(131), 1,
      sym_comment,
    ACTIONS(241), 2,
      aux_sym_path_token2,
      anon_sym_DOLLAR,
  [3123] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      sym_variable,
    STATE(132), 1,
      sym_comment,
  [3139] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      aux_sym_label_pair_token1,
    STATE(133), 1,
      sym_comment,
  [3155] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    ACTIONS(530), 1,
      sym_variable,
    STATE(134), 1,
      sym_comment,
  [3171] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(532), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3185] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(536), 1,
      aux_sym_from_instruction_token2,
    STATE(136), 1,
      sym_comment,
  [3201] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(540), 1,
      anon_sym_EQ,
    STATE(137), 1,
      sym_comment,
  [3217] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3231] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_comment,
    STATE(165), 1,
      sym_double_quoted_string,
  [3247] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 1,
      aux_sym_env_pair_token1,
    STATE(140), 1,
      sym_comment,
  [3263] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(544), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [3277] = 5,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(546), 1,
      anon_sym_LF,
    ACTIONS(548), 1,
      sym_line_continuation,
    STATE(142), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_shell_command_repeat2,
  [3293] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(550), 1,
      anon_sym_LF,
    ACTIONS(552), 1,
      sym_line_continuation,
    STATE(143), 2,
      sym_comment,
      aux_sym_shell_command_repeat2,
  [3307] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      sym_variable,
    STATE(144), 1,
      sym_comment,
  [3323] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 1,
      aux_sym_label_pair_token1,
    STATE(145), 1,
      sym_comment,
  [3339] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      aux_sym_env_pair_token1,
    STATE(146), 1,
      sym_comment,
  [3355] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 1,
      aux_sym_env_pair_token1,
    STATE(147), 1,
      sym_comment,
  [3371] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    ACTIONS(571), 1,
      sym_variable,
    STATE(148), 1,
      sym_comment,
  [3387] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    ACTIONS(575), 1,
      sym_variable,
    STATE(149), 1,
      sym_comment,
  [3403] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 1,
      aux_sym_env_pair_token1,
    STATE(150), 1,
      sym_comment,
  [3419] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
    ACTIONS(583), 1,
      sym_variable,
    STATE(151), 1,
      sym_comment,
  [3435] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_DOLLAR,
    ACTIONS(585), 1,
      aux_sym_path_token1,
    STATE(152), 1,
      sym_comment,
  [3451] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym_comment,
    ACTIONS(495), 2,
      anon_sym_LF,
      sym__non_newline_whitespace,
  [3465] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      sym_variable,
    STATE(154), 1,
      sym_comment,
  [3481] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      aux_sym_from_instruction_token2,
    STATE(155), 1,
      sym_comment,
  [3497] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      anon_sym_LF,
    ACTIONS(597), 1,
      aux_sym_from_instruction_token2,
    STATE(156), 1,
      sym_comment,
  [3513] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
    ACTIONS(601), 1,
      sym_variable,
    STATE(157), 1,
      sym_comment,
  [3529] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_DOLLAR,
    ACTIONS(585), 1,
      aux_sym_image_name_token1,
    STATE(158), 1,
      sym_comment,
  [3545] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      aux_sym_label_pair_token1,
    STATE(159), 1,
      sym_comment,
  [3561] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(609), 1,
      sym_variable,
    STATE(160), 1,
      sym_comment,
  [3577] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(161), 1,
      sym_comment,
    STATE(219), 1,
      sym_string_array,
  [3593] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(563), 1,
      aux_sym_label_pair_token1,
    STATE(162), 1,
      sym_comment,
  [3609] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3623] = 5,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(548), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      anon_sym_LF,
    STATE(142), 1,
      aux_sym_shell_command_repeat2,
    STATE(164), 1,
      sym_comment,
  [3639] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3653] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    ACTIONS(615), 1,
      sym_variable,
    STATE(166), 1,
      sym_comment,
  [3669] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
    ACTIONS(619), 1,
      sym_variable,
    STATE(167), 1,
      sym_comment,
  [3685] = 5,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 1,
      aux_sym_from_instruction_token2,
    STATE(168), 1,
      sym_comment,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    STATE(169), 1,
      sym_comment,
    ACTIONS(625), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      anon_sym_POUND,
  [3713] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
    ACTIONS(629), 1,
      sym_variable,
    STATE(170), 1,
      sym_comment,
  [3729] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(631), 1,
      anon_sym_LF,
    STATE(171), 1,
      sym_comment,
  [3742] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(633), 1,
      anon_sym_LF,
    STATE(172), 1,
      sym_comment,
  [3755] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      anon_sym_LF,
    STATE(173), 1,
      sym_comment,
  [3768] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(637), 1,
      anon_sym_LF,
    STATE(174), 1,
      sym_comment,
  [3781] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(639), 1,
      anon_sym_LF,
    STATE(175), 1,
      sym_comment,
  [3794] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      sym__non_newline_whitespace,
    STATE(176), 1,
      sym_comment,
  [3807] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(643), 1,
      aux_sym_param_token1,
    STATE(177), 1,
      sym_comment,
  [3820] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(645), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym_comment,
  [3833] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(647), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_comment,
  [3846] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(649), 1,
      anon_sym_LF,
    STATE(180), 1,
      sym_comment,
  [3859] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(651), 1,
      aux_sym_arg_instruction_token2,
    STATE(181), 1,
      sym_comment,
  [3872] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(653), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym_comment,
  [3885] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(655), 1,
      anon_sym_EQ,
    STATE(183), 1,
      sym_comment,
  [3898] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(657), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_comment,
  [3911] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(659), 1,
      anon_sym_EQ,
    STATE(185), 1,
      sym_comment,
  [3924] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(661), 1,
      aux_sym_param_token1,
    STATE(186), 1,
      sym_comment,
  [3937] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(663), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym_comment,
  [3950] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      anon_sym_LF,
    STATE(188), 1,
      sym_comment,
  [3963] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(667), 1,
      anon_sym_LF,
    STATE(189), 1,
      sym_comment,
  [3976] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_comment,
  [3989] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(671), 1,
      sym__non_newline_whitespace,
    STATE(191), 1,
      sym_comment,
  [4002] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
    STATE(192), 1,
      sym_comment,
  [4015] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      sym__non_newline_whitespace,
    STATE(193), 1,
      sym_comment,
  [4028] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(677), 1,
      sym__non_newline_whitespace,
    STATE(194), 1,
      sym_comment,
  [4041] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(679), 1,
      anon_sym_LF,
    STATE(195), 1,
      sym_comment,
  [4054] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym__non_newline_whitespace,
    STATE(196), 1,
      sym_comment,
  [4067] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(683), 1,
      sym__non_newline_whitespace,
    STATE(197), 1,
      sym_comment,
  [4080] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(550), 1,
      anon_sym_LF,
    ACTIONS(685), 1,
      sym_line_continuation,
    STATE(198), 1,
      sym_comment,
  [4093] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(687), 1,
      aux_sym__anon_comment_token1,
    STATE(199), 1,
      sym_comment,
  [4106] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(689), 1,
      anon_sym_LF,
    STATE(200), 1,
      sym_comment,
  [4119] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(691), 1,
      anon_sym_LF,
    STATE(201), 1,
      sym_comment,
  [4132] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(693), 1,
      anon_sym_LF,
    STATE(202), 1,
      sym_comment,
  [4145] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(695), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_comment,
  [4158] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(697), 1,
      sym__non_newline_whitespace,
    STATE(204), 1,
      sym_comment,
  [4171] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(699), 1,
      sym__non_newline_whitespace,
    STATE(205), 1,
      sym_comment,
  [4184] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(701), 1,
      sym__non_newline_whitespace,
    STATE(206), 1,
      sym_comment,
  [4197] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(703), 1,
      sym__non_newline_whitespace,
    STATE(207), 1,
      sym_comment,
  [4210] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(705), 1,
      sym__non_newline_whitespace,
    STATE(208), 1,
      sym_comment,
  [4223] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      sym__non_newline_whitespace,
    STATE(209), 1,
      sym_comment,
  [4236] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      sym__non_newline_whitespace,
    STATE(210), 1,
      sym_comment,
  [4249] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(711), 1,
      sym__non_newline_whitespace,
    STATE(211), 1,
      sym_comment,
  [4262] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(713), 1,
      sym__non_newline_whitespace,
    STATE(212), 1,
      sym_comment,
  [4275] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(715), 1,
      sym__non_newline_whitespace,
    STATE(213), 1,
      sym_comment,
  [4288] = 4,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 1,
      sym_line_continuation,
    STATE(214), 1,
      sym_comment,
  [4301] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      sym__non_newline_whitespace,
    STATE(215), 1,
      sym_comment,
  [4314] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(723), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym_comment,
  [4327] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(725), 1,
      aux_sym_param_token2,
    STATE(217), 1,
      sym_comment,
  [4340] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(727), 1,
      sym__non_newline_whitespace,
    STATE(218), 1,
      sym_comment,
  [4353] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(729), 1,
      anon_sym_LF,
    STATE(219), 1,
      sym_comment,
  [4366] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      sym__non_newline_whitespace,
    STATE(220), 1,
      sym_comment,
  [4379] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_comment,
  [4392] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(735), 1,
      aux_sym_param_token2,
    STATE(222), 1,
      sym_comment,
  [4405] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(737), 1,
      sym__non_newline_whitespace,
    STATE(223), 1,
      sym_comment,
  [4418] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(739), 1,
      anon_sym_LF,
    STATE(224), 1,
      sym_comment,
  [4431] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_comment,
  [4444] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(743), 1,
      aux_sym_param_token2,
    STATE(226), 1,
      sym_comment,
  [4457] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_comment,
  [4470] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_comment,
  [4483] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_comment,
  [4496] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(751), 1,
      aux_sym_expansion_token1,
    STATE(230), 1,
      sym_comment,
  [4509] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4522] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(755), 1,
      anon_sym_LF,
    STATE(232), 1,
      sym_comment,
  [4535] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
  [4548] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      anon_sym_EQ,
    STATE(234), 1,
      sym_comment,
  [4561] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_comment,
  [4574] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      anon_sym_LF,
    STATE(236), 1,
      sym_comment,
  [4587] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
  [4600] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(767), 1,
      aux_sym__anon_comment_token1,
    STATE(238), 1,
      sym_comment,
  [4613] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [4626] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(771), 1,
      sym__non_newline_whitespace,
    STATE(240), 1,
      sym_comment,
  [4639] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_comment,
  [4652] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(775), 1,
      aux_sym_expansion_token1,
    STATE(242), 1,
      sym_comment,
  [4665] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(777), 1,
      anon_sym_EQ,
    STATE(243), 1,
      sym_comment,
  [4678] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      aux_sym_expansion_token1,
    STATE(244), 1,
      sym_comment,
  [4691] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(781), 1,
      anon_sym_EQ,
    STATE(245), 1,
      sym_comment,
  [4704] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      aux_sym_expansion_token1,
    STATE(246), 1,
      sym_comment,
  [4717] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(785), 1,
      aux_sym_expansion_token1,
    STATE(247), 1,
      sym_comment,
  [4730] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(787), 1,
      aux_sym_expansion_token1,
    STATE(248), 1,
      sym_comment,
  [4743] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(789), 1,
      aux_sym_expansion_token1,
    STATE(249), 1,
      sym_comment,
  [4756] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      aux_sym_expansion_token1,
    STATE(250), 1,
      sym_comment,
  [4769] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(793), 1,
      aux_sym_expansion_token1,
    STATE(251), 1,
      sym_comment,
  [4782] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(795), 1,
      aux_sym_expansion_token1,
    STATE(252), 1,
      sym_comment,
  [4795] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(797), 1,
      aux_sym_expansion_token1,
    STATE(253), 1,
      sym_comment,
  [4808] = 4,
    ACTIONS(106), 1,
      sym_line_continuation,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(799), 1,
      aux_sym_expansion_token1,
    STATE(254), 1,
      sym_comment,
  [4821] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(801), 1,
      aux_sym_param_token1,
    STATE(255), 1,
      sym_comment,
  [4834] = 1,
    ACTIONS(803), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 176,
  [SMALL_STATE(5)] = 259,
  [SMALL_STATE(6)] = 289,
  [SMALL_STATE(7)] = 319,
  [SMALL_STATE(8)] = 351,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 417,
  [SMALL_STATE(11)] = 445,
  [SMALL_STATE(12)] = 477,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 533,
  [SMALL_STATE(15)] = 564,
  [SMALL_STATE(16)] = 591,
  [SMALL_STATE(17)] = 618,
  [SMALL_STATE(18)] = 645,
  [SMALL_STATE(19)] = 674,
  [SMALL_STATE(20)] = 705,
  [SMALL_STATE(21)] = 732,
  [SMALL_STATE(22)] = 759,
  [SMALL_STATE(23)] = 788,
  [SMALL_STATE(24)] = 814,
  [SMALL_STATE(25)] = 834,
  [SMALL_STATE(26)] = 862,
  [SMALL_STATE(27)] = 888,
  [SMALL_STATE(28)] = 916,
  [SMALL_STATE(29)] = 944,
  [SMALL_STATE(30)] = 972,
  [SMALL_STATE(31)] = 996,
  [SMALL_STATE(32)] = 1016,
  [SMALL_STATE(33)] = 1044,
  [SMALL_STATE(34)] = 1072,
  [SMALL_STATE(35)] = 1100,
  [SMALL_STATE(36)] = 1124,
  [SMALL_STATE(37)] = 1150,
  [SMALL_STATE(38)] = 1178,
  [SMALL_STATE(39)] = 1206,
  [SMALL_STATE(40)] = 1234,
  [SMALL_STATE(41)] = 1262,
  [SMALL_STATE(42)] = 1290,
  [SMALL_STATE(43)] = 1318,
  [SMALL_STATE(44)] = 1346,
  [SMALL_STATE(45)] = 1374,
  [SMALL_STATE(46)] = 1400,
  [SMALL_STATE(47)] = 1426,
  [SMALL_STATE(48)] = 1446,
  [SMALL_STATE(49)] = 1469,
  [SMALL_STATE(50)] = 1488,
  [SMALL_STATE(51)] = 1507,
  [SMALL_STATE(52)] = 1526,
  [SMALL_STATE(53)] = 1545,
  [SMALL_STATE(54)] = 1570,
  [SMALL_STATE(55)] = 1589,
  [SMALL_STATE(56)] = 1608,
  [SMALL_STATE(57)] = 1627,
  [SMALL_STATE(58)] = 1650,
  [SMALL_STATE(59)] = 1675,
  [SMALL_STATE(60)] = 1698,
  [SMALL_STATE(61)] = 1717,
  [SMALL_STATE(62)] = 1738,
  [SMALL_STATE(63)] = 1763,
  [SMALL_STATE(64)] = 1788,
  [SMALL_STATE(65)] = 1813,
  [SMALL_STATE(66)] = 1836,
  [SMALL_STATE(67)] = 1861,
  [SMALL_STATE(68)] = 1886,
  [SMALL_STATE(69)] = 1911,
  [SMALL_STATE(70)] = 1930,
  [SMALL_STATE(71)] = 1949,
  [SMALL_STATE(72)] = 1974,
  [SMALL_STATE(73)] = 1993,
  [SMALL_STATE(74)] = 2012,
  [SMALL_STATE(75)] = 2037,
  [SMALL_STATE(76)] = 2062,
  [SMALL_STATE(77)] = 2084,
  [SMALL_STATE(78)] = 2106,
  [SMALL_STATE(79)] = 2128,
  [SMALL_STATE(80)] = 2146,
  [SMALL_STATE(81)] = 2164,
  [SMALL_STATE(82)] = 2182,
  [SMALL_STATE(83)] = 2204,
  [SMALL_STATE(84)] = 2226,
  [SMALL_STATE(85)] = 2244,
  [SMALL_STATE(86)] = 2264,
  [SMALL_STATE(87)] = 2286,
  [SMALL_STATE(88)] = 2304,
  [SMALL_STATE(89)] = 2326,
  [SMALL_STATE(90)] = 2348,
  [SMALL_STATE(91)] = 2370,
  [SMALL_STATE(92)] = 2388,
  [SMALL_STATE(93)] = 2410,
  [SMALL_STATE(94)] = 2430,
  [SMALL_STATE(95)] = 2452,
  [SMALL_STATE(96)] = 2472,
  [SMALL_STATE(97)] = 2494,
  [SMALL_STATE(98)] = 2510,
  [SMALL_STATE(99)] = 2532,
  [SMALL_STATE(100)] = 2548,
  [SMALL_STATE(101)] = 2564,
  [SMALL_STATE(102)] = 2582,
  [SMALL_STATE(103)] = 2604,
  [SMALL_STATE(104)] = 2624,
  [SMALL_STATE(105)] = 2646,
  [SMALL_STATE(106)] = 2668,
  [SMALL_STATE(107)] = 2686,
  [SMALL_STATE(108)] = 2703,
  [SMALL_STATE(109)] = 2720,
  [SMALL_STATE(110)] = 2735,
  [SMALL_STATE(111)] = 2752,
  [SMALL_STATE(112)] = 2769,
  [SMALL_STATE(113)] = 2786,
  [SMALL_STATE(114)] = 2805,
  [SMALL_STATE(115)] = 2822,
  [SMALL_STATE(116)] = 2841,
  [SMALL_STATE(117)] = 2860,
  [SMALL_STATE(118)] = 2877,
  [SMALL_STATE(119)] = 2894,
  [SMALL_STATE(120)] = 2911,
  [SMALL_STATE(121)] = 2928,
  [SMALL_STATE(122)] = 2947,
  [SMALL_STATE(123)] = 2966,
  [SMALL_STATE(124)] = 2985,
  [SMALL_STATE(125)] = 3002,
  [SMALL_STATE(126)] = 3021,
  [SMALL_STATE(127)] = 3038,
  [SMALL_STATE(128)] = 3055,
  [SMALL_STATE(129)] = 3072,
  [SMALL_STATE(130)] = 3089,
  [SMALL_STATE(131)] = 3106,
  [SMALL_STATE(132)] = 3123,
  [SMALL_STATE(133)] = 3139,
  [SMALL_STATE(134)] = 3155,
  [SMALL_STATE(135)] = 3171,
  [SMALL_STATE(136)] = 3185,
  [SMALL_STATE(137)] = 3201,
  [SMALL_STATE(138)] = 3217,
  [SMALL_STATE(139)] = 3231,
  [SMALL_STATE(140)] = 3247,
  [SMALL_STATE(141)] = 3263,
  [SMALL_STATE(142)] = 3277,
  [SMALL_STATE(143)] = 3293,
  [SMALL_STATE(144)] = 3307,
  [SMALL_STATE(145)] = 3323,
  [SMALL_STATE(146)] = 3339,
  [SMALL_STATE(147)] = 3355,
  [SMALL_STATE(148)] = 3371,
  [SMALL_STATE(149)] = 3387,
  [SMALL_STATE(150)] = 3403,
  [SMALL_STATE(151)] = 3419,
  [SMALL_STATE(152)] = 3435,
  [SMALL_STATE(153)] = 3451,
  [SMALL_STATE(154)] = 3465,
  [SMALL_STATE(155)] = 3481,
  [SMALL_STATE(156)] = 3497,
  [SMALL_STATE(157)] = 3513,
  [SMALL_STATE(158)] = 3529,
  [SMALL_STATE(159)] = 3545,
  [SMALL_STATE(160)] = 3561,
  [SMALL_STATE(161)] = 3577,
  [SMALL_STATE(162)] = 3593,
  [SMALL_STATE(163)] = 3609,
  [SMALL_STATE(164)] = 3623,
  [SMALL_STATE(165)] = 3639,
  [SMALL_STATE(166)] = 3653,
  [SMALL_STATE(167)] = 3669,
  [SMALL_STATE(168)] = 3685,
  [SMALL_STATE(169)] = 3701,
  [SMALL_STATE(170)] = 3713,
  [SMALL_STATE(171)] = 3729,
  [SMALL_STATE(172)] = 3742,
  [SMALL_STATE(173)] = 3755,
  [SMALL_STATE(174)] = 3768,
  [SMALL_STATE(175)] = 3781,
  [SMALL_STATE(176)] = 3794,
  [SMALL_STATE(177)] = 3807,
  [SMALL_STATE(178)] = 3820,
  [SMALL_STATE(179)] = 3833,
  [SMALL_STATE(180)] = 3846,
  [SMALL_STATE(181)] = 3859,
  [SMALL_STATE(182)] = 3872,
  [SMALL_STATE(183)] = 3885,
  [SMALL_STATE(184)] = 3898,
  [SMALL_STATE(185)] = 3911,
  [SMALL_STATE(186)] = 3924,
  [SMALL_STATE(187)] = 3937,
  [SMALL_STATE(188)] = 3950,
  [SMALL_STATE(189)] = 3963,
  [SMALL_STATE(190)] = 3976,
  [SMALL_STATE(191)] = 3989,
  [SMALL_STATE(192)] = 4002,
  [SMALL_STATE(193)] = 4015,
  [SMALL_STATE(194)] = 4028,
  [SMALL_STATE(195)] = 4041,
  [SMALL_STATE(196)] = 4054,
  [SMALL_STATE(197)] = 4067,
  [SMALL_STATE(198)] = 4080,
  [SMALL_STATE(199)] = 4093,
  [SMALL_STATE(200)] = 4106,
  [SMALL_STATE(201)] = 4119,
  [SMALL_STATE(202)] = 4132,
  [SMALL_STATE(203)] = 4145,
  [SMALL_STATE(204)] = 4158,
  [SMALL_STATE(205)] = 4171,
  [SMALL_STATE(206)] = 4184,
  [SMALL_STATE(207)] = 4197,
  [SMALL_STATE(208)] = 4210,
  [SMALL_STATE(209)] = 4223,
  [SMALL_STATE(210)] = 4236,
  [SMALL_STATE(211)] = 4249,
  [SMALL_STATE(212)] = 4262,
  [SMALL_STATE(213)] = 4275,
  [SMALL_STATE(214)] = 4288,
  [SMALL_STATE(215)] = 4301,
  [SMALL_STATE(216)] = 4314,
  [SMALL_STATE(217)] = 4327,
  [SMALL_STATE(218)] = 4340,
  [SMALL_STATE(219)] = 4353,
  [SMALL_STATE(220)] = 4366,
  [SMALL_STATE(221)] = 4379,
  [SMALL_STATE(222)] = 4392,
  [SMALL_STATE(223)] = 4405,
  [SMALL_STATE(224)] = 4418,
  [SMALL_STATE(225)] = 4431,
  [SMALL_STATE(226)] = 4444,
  [SMALL_STATE(227)] = 4457,
  [SMALL_STATE(228)] = 4470,
  [SMALL_STATE(229)] = 4483,
  [SMALL_STATE(230)] = 4496,
  [SMALL_STATE(231)] = 4509,
  [SMALL_STATE(232)] = 4522,
  [SMALL_STATE(233)] = 4535,
  [SMALL_STATE(234)] = 4548,
  [SMALL_STATE(235)] = 4561,
  [SMALL_STATE(236)] = 4574,
  [SMALL_STATE(237)] = 4587,
  [SMALL_STATE(238)] = 4600,
  [SMALL_STATE(239)] = 4613,
  [SMALL_STATE(240)] = 4626,
  [SMALL_STATE(241)] = 4639,
  [SMALL_STATE(242)] = 4652,
  [SMALL_STATE(243)] = 4665,
  [SMALL_STATE(244)] = 4678,
  [SMALL_STATE(245)] = 4691,
  [SMALL_STATE(246)] = 4704,
  [SMALL_STATE(247)] = 4717,
  [SMALL_STATE(248)] = 4730,
  [SMALL_STATE(249)] = 4743,
  [SMALL_STATE(250)] = 4756,
  [SMALL_STATE(251)] = 4769,
  [SMALL_STATE(252)] = 4782,
  [SMALL_STATE(253)] = 4795,
  [SMALL_STATE(254)] = 4808,
  [SMALL_STATE(255)] = 4821,
  [SMALL_STATE(256)] = 4834,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(166),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(47),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(154),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(69),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(167),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(70),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(70),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(170),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(52),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(52),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(160),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(80),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(80),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(134),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(61),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(91),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__user_name_group, 2), SHIFT_REPEAT(134),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 3, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(100),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(144),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(157),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(79),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(111),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(151),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(199),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(120),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(132),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(149),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(124),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 5, .production_id = 10),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 2),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(129),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 2), SHIFT_REPEAT(148),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 2), SHIFT_REPEAT(186),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__user_name_group, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__user_name_group, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(185),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(109),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(183),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2), SHIFT_REPEAT(139),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_array_repeat1, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(96),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_alias_repeat1, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stopsignal_value, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__stopsignal_value, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_healthcheck_instruction_repeat1, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 7),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 7),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 3, .production_id = 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 12),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2), SHIFT_REPEAT(20),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 8),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 8),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 9),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 9),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 12),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_line, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 6),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 6),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anon_comment, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 6, .production_id = 13),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 5, .production_id = 11),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [673] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 2),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat2, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 6),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
