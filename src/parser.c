#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 1
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 2,
  aux_sym_block_comment_token1 = 3,
  aux_sym_block_comment_token2 = 4,
  aux_sym_block_comment_token3 = 5,
  anon_sym_COLON = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COLON2 = 9,
  anon_sym_COMMA = 10,
  aux_sym_argument_name_token1 = 11,
  sym_argument_type = 12,
  sym_connection = 13,
  sym_import = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_PIPE_BQUOTE = 17,
  aux_sym__label_codeblock_ticks_token1 = 18,
  anon_sym_BQUOTE_PIPE = 19,
  anon_sym_PIPE_PIPE_PIPE = 20,
  anon_sym_PIPE_PIPE = 21,
  anon_sym_PIPE = 22,
  aux_sym__label_codeblock_single_token1 = 23,
  sym_codeblock_language = 24,
  aux_sym_codeblock_content_token1 = 25,
  aux_sym_codeblock_content_token2 = 26,
  anon_sym_LBRACK = 27,
  anon_sym_SEMI = 28,
  anon_sym_RBRACK = 29,
  aux_sym__label_literal_token1 = 30,
  sym_integer = 31,
  sym_float = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  aux_sym__label_token_token1 = 35,
  anon_sym_DQUOTE = 36,
  aux_sym__label_double_quoted_token1 = 37,
  anon_sym_DOT = 38,
  anon_sym_LBRACK2 = 39,
  aux_sym_connection_identifier_token1 = 40,
  anon_sym_RBRACK2 = 41,
  aux_sym__ident_token1 = 42,
  anon_sym_BSLASH_STAR = 43,
  aux_sym__ident_base_token1 = 44,
  sym_glob = 45,
  sym_recursive_glob = 46,
  sym_global_glob = 47,
  sym_glob_filter = 48,
  sym_inverse_glob_filter = 49,
  anon_sym_DOLLAR = 50,
  anon_sym_LBRACE2 = 51,
  anon_sym_RBRACE2 = 52,
  anon_sym_DOT_DOT_DOT_DOLLAR = 53,
  anon_sym_SQUOTE = 54,
  aux_sym__single_quoted_token1 = 55,
  anon_sym_DQUOTE2 = 56,
  aux_sym__double_quoted_token1 = 57,
  sym_escape = 58,
  sym__eol = 59,
  sym_source_file = 60,
  sym__declaration = 61,
  sym_block_comment = 62,
  sym_declaration = 63,
  sym__expr = 64,
  sym__colon_block = 65,
  sym_method_declaration = 66,
  sym_arguments = 67,
  sym_returns = 68,
  sym_argument_name = 69,
  sym_block = 70,
  sym_label = 71,
  sym_label_codeblock = 72,
  sym__label_codeblock_ticks = 73,
  sym__label_codeblock_triple = 74,
  sym__label_codeblock_double = 75,
  sym__label_codeblock_single = 76,
  sym_codeblock_content = 77,
  sym__label_constraints = 78,
  sym_label_constraint = 79,
  sym__label_literal = 80,
  sym_boolean = 81,
  sym__label_token = 82,
  sym__label_double_quoted = 83,
  sym__identifier = 84,
  sym_identifier_chain = 85,
  sym__single_top_level_identifier = 86,
  sym_connection_reference = 87,
  sym_connection_identifier = 88,
  sym_identifier = 89,
  sym__ident = 90,
  sym__ident_base = 91,
  sym__filters = 92,
  sym__variable = 93,
  sym_variable = 94,
  sym_spread_variable = 95,
  sym__single_quoted = 96,
  sym__double_quoted = 97,
  aux_sym_source_file_repeat1 = 98,
  aux_sym_block_comment_repeat1 = 99,
  aux_sym__expr_repeat1 = 100,
  aux_sym_arguments_repeat1 = 101,
  aux_sym_arguments_repeat2 = 102,
  aux_sym_codeblock_content_repeat1 = 103,
  aux_sym__label_constraints_repeat1 = 104,
  aux_sym__label_constraints_repeat2 = 105,
  aux_sym__label_literal_repeat1 = 106,
  aux_sym__label_token_repeat1 = 107,
  aux_sym__label_double_quoted_repeat1 = 108,
  aux_sym_identifier_chain_repeat1 = 109,
  aux_sym__ident_repeat1 = 110,
  aux_sym__single_quoted_repeat1 = 111,
  aux_sym__double_quoted_repeat1 = 112,
  anon_alias_sym_returns = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [aux_sym_block_comment_token2] = "block_comment_token2",
  [aux_sym_block_comment_token3] = "block_comment_token3",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON2] = ":",
  [anon_sym_COMMA] = ",",
  [aux_sym_argument_name_token1] = "argument_name_token1",
  [sym_argument_type] = "argument_type",
  [sym_connection] = "connection",
  [sym_import] = "import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE_BQUOTE] = "|`",
  [aux_sym__label_codeblock_ticks_token1] = "codeblock_content",
  [anon_sym_BQUOTE_PIPE] = "`|",
  [anon_sym_PIPE_PIPE_PIPE] = "|||",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PIPE] = "|",
  [aux_sym__label_codeblock_single_token1] = "codeblock_content",
  [sym_codeblock_language] = "codeblock_language",
  [aux_sym_codeblock_content_token1] = "codeblock_content_token1",
  [aux_sym_codeblock_content_token2] = "codeblock_content_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACK] = "]",
  [aux_sym__label_literal_token1] = "_label_literal_token1",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__label_token_token1] = "_label_token_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__label_double_quoted_token1] = "_label_double_quoted_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK2] = "[",
  [aux_sym_connection_identifier_token1] = "connection_identifier_token1",
  [anon_sym_RBRACK2] = "]",
  [aux_sym__ident_token1] = "_ident_token1",
  [anon_sym_BSLASH_STAR] = "\\*",
  [aux_sym__ident_base_token1] = "_ident_base_token1",
  [sym_glob] = "glob",
  [sym_recursive_glob] = "recursive_glob",
  [sym_global_glob] = "global_glob",
  [sym_glob_filter] = "glob_filter",
  [sym_inverse_glob_filter] = "inverse_glob_filter",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_RBRACE2] = "}",
  [anon_sym_DOT_DOT_DOT_DOLLAR] = "...$",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_quoted_token1] = "_single_quoted_token1",
  [anon_sym_DQUOTE2] = "\"",
  [aux_sym__double_quoted_token1] = "_double_quoted_token1",
  [sym_escape] = "escape",
  [sym__eol] = "_eol",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_block_comment] = "block_comment",
  [sym_declaration] = "declaration",
  [sym__expr] = "_expr",
  [sym__colon_block] = "_colon_block",
  [sym_method_declaration] = "method_declaration",
  [sym_arguments] = "arguments",
  [sym_returns] = "returns",
  [sym_argument_name] = "argument_name",
  [sym_block] = "block",
  [sym_label] = "label",
  [sym_label_codeblock] = "label_codeblock",
  [sym__label_codeblock_ticks] = "_label_codeblock_ticks",
  [sym__label_codeblock_triple] = "_label_codeblock_triple",
  [sym__label_codeblock_double] = "_label_codeblock_double",
  [sym__label_codeblock_single] = "_label_codeblock_single",
  [sym_codeblock_content] = "codeblock_content",
  [sym__label_constraints] = "_label_constraints",
  [sym_label_constraint] = "label_constraint",
  [sym__label_literal] = "_label_literal",
  [sym_boolean] = "boolean",
  [sym__label_token] = "_label_token",
  [sym__label_double_quoted] = "_label_double_quoted",
  [sym__identifier] = "_identifier",
  [sym_identifier_chain] = "identifier_chain",
  [sym__single_top_level_identifier] = "_single_top_level_identifier",
  [sym_connection_reference] = "connection_reference",
  [sym_connection_identifier] = "connection_identifier",
  [sym_identifier] = "identifier",
  [sym__ident] = "_ident",
  [sym__ident_base] = "_ident_base",
  [sym__filters] = "_filters",
  [sym__variable] = "_variable",
  [sym_variable] = "variable",
  [sym_spread_variable] = "spread_variable",
  [sym__single_quoted] = "_single_quoted",
  [sym__double_quoted] = "_double_quoted",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym__expr_repeat1] = "_expr_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_codeblock_content_repeat1] = "codeblock_content_repeat1",
  [aux_sym__label_constraints_repeat1] = "_label_constraints_repeat1",
  [aux_sym__label_constraints_repeat2] = "_label_constraints_repeat2",
  [aux_sym__label_literal_repeat1] = "_label_literal_repeat1",
  [aux_sym__label_token_repeat1] = "_label_token_repeat1",
  [aux_sym__label_double_quoted_repeat1] = "_label_double_quoted_repeat1",
  [aux_sym_identifier_chain_repeat1] = "identifier_chain_repeat1",
  [aux_sym__ident_repeat1] = "_ident_repeat1",
  [aux_sym__single_quoted_repeat1] = "_single_quoted_repeat1",
  [aux_sym__double_quoted_repeat1] = "_double_quoted_repeat1",
  [anon_alias_sym_returns] = "returns",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [aux_sym_block_comment_token2] = aux_sym_block_comment_token2,
  [aux_sym_block_comment_token3] = aux_sym_block_comment_token3,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_argument_name_token1] = aux_sym_argument_name_token1,
  [sym_argument_type] = sym_argument_type,
  [sym_connection] = sym_connection,
  [sym_import] = sym_import,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE_BQUOTE] = anon_sym_PIPE_BQUOTE,
  [aux_sym__label_codeblock_ticks_token1] = sym_codeblock_content,
  [anon_sym_BQUOTE_PIPE] = anon_sym_BQUOTE_PIPE,
  [anon_sym_PIPE_PIPE_PIPE] = anon_sym_PIPE_PIPE_PIPE,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym__label_codeblock_single_token1] = sym_codeblock_content,
  [sym_codeblock_language] = sym_codeblock_language,
  [aux_sym_codeblock_content_token1] = aux_sym_codeblock_content_token1,
  [aux_sym_codeblock_content_token2] = aux_sym_codeblock_content_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__label_literal_token1] = aux_sym__label_literal_token1,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__label_token_token1] = aux_sym__label_token_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__label_double_quoted_token1] = aux_sym__label_double_quoted_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [aux_sym_connection_identifier_token1] = aux_sym_connection_identifier_token1,
  [anon_sym_RBRACK2] = anon_sym_RBRACK,
  [aux_sym__ident_token1] = aux_sym__ident_token1,
  [anon_sym_BSLASH_STAR] = anon_sym_BSLASH_STAR,
  [aux_sym__ident_base_token1] = aux_sym__ident_base_token1,
  [sym_glob] = sym_glob,
  [sym_recursive_glob] = sym_recursive_glob,
  [sym_global_glob] = sym_global_glob,
  [sym_glob_filter] = sym_glob_filter,
  [sym_inverse_glob_filter] = sym_inverse_glob_filter,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_RBRACE2] = anon_sym_RBRACE,
  [anon_sym_DOT_DOT_DOT_DOLLAR] = anon_sym_DOT_DOT_DOT_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_quoted_token1] = aux_sym__single_quoted_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [aux_sym__double_quoted_token1] = aux_sym__double_quoted_token1,
  [sym_escape] = sym_escape,
  [sym__eol] = sym__eol,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_block_comment] = sym_block_comment,
  [sym_declaration] = sym_declaration,
  [sym__expr] = sym__expr,
  [sym__colon_block] = sym__colon_block,
  [sym_method_declaration] = sym_method_declaration,
  [sym_arguments] = sym_arguments,
  [sym_returns] = sym_returns,
  [sym_argument_name] = sym_argument_name,
  [sym_block] = sym_block,
  [sym_label] = sym_label,
  [sym_label_codeblock] = sym_label_codeblock,
  [sym__label_codeblock_ticks] = sym__label_codeblock_ticks,
  [sym__label_codeblock_triple] = sym__label_codeblock_triple,
  [sym__label_codeblock_double] = sym__label_codeblock_double,
  [sym__label_codeblock_single] = sym__label_codeblock_single,
  [sym_codeblock_content] = sym_codeblock_content,
  [sym__label_constraints] = sym__label_constraints,
  [sym_label_constraint] = sym_label_constraint,
  [sym__label_literal] = sym__label_literal,
  [sym_boolean] = sym_boolean,
  [sym__label_token] = sym__label_token,
  [sym__label_double_quoted] = sym__label_double_quoted,
  [sym__identifier] = sym__identifier,
  [sym_identifier_chain] = sym_identifier_chain,
  [sym__single_top_level_identifier] = sym__single_top_level_identifier,
  [sym_connection_reference] = sym_connection_reference,
  [sym_connection_identifier] = sym_connection_identifier,
  [sym_identifier] = sym_identifier,
  [sym__ident] = sym__ident,
  [sym__ident_base] = sym__ident_base,
  [sym__filters] = sym__filters,
  [sym__variable] = sym__variable,
  [sym_variable] = sym_variable,
  [sym_spread_variable] = sym_spread_variable,
  [sym__single_quoted] = sym__single_quoted,
  [sym__double_quoted] = sym__double_quoted,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym__expr_repeat1] = aux_sym__expr_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_codeblock_content_repeat1] = aux_sym_codeblock_content_repeat1,
  [aux_sym__label_constraints_repeat1] = aux_sym__label_constraints_repeat1,
  [aux_sym__label_constraints_repeat2] = aux_sym__label_constraints_repeat2,
  [aux_sym__label_literal_repeat1] = aux_sym__label_literal_repeat1,
  [aux_sym__label_token_repeat1] = aux_sym__label_token_repeat1,
  [aux_sym__label_double_quoted_repeat1] = aux_sym__label_double_quoted_repeat1,
  [aux_sym_identifier_chain_repeat1] = aux_sym_identifier_chain_repeat1,
  [aux_sym__ident_repeat1] = aux_sym__ident_repeat1,
  [aux_sym__single_quoted_repeat1] = aux_sym__single_quoted_repeat1,
  [aux_sym__double_quoted_repeat1] = aux_sym__double_quoted_repeat1,
  [anon_alias_sym_returns] = anon_alias_sym_returns,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_argument_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_argument_type] = {
    .visible = true,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_codeblock_ticks_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_codeblock_single_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_codeblock_language] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_codeblock_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeblock_content_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_token_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_double_quoted_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_connection_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ident_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ident_base_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_glob] = {
    .visible = true,
    .named = true,
  },
  [sym_recursive_glob] = {
    .visible = true,
    .named = true,
  },
  [sym_global_glob] = {
    .visible = true,
    .named = true,
  },
  [sym_glob_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_inverse_glob_filter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_quoted_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quoted_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__colon_block] = {
    .visible = false,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_returns] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_name] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_label_codeblock] = {
    .visible = true,
    .named = true,
  },
  [sym__label_codeblock_ticks] = {
    .visible = false,
    .named = true,
  },
  [sym__label_codeblock_triple] = {
    .visible = false,
    .named = true,
  },
  [sym__label_codeblock_double] = {
    .visible = false,
    .named = true,
  },
  [sym__label_codeblock_single] = {
    .visible = false,
    .named = true,
  },
  [sym_codeblock_content] = {
    .visible = true,
    .named = true,
  },
  [sym__label_constraints] = {
    .visible = false,
    .named = true,
  },
  [sym_label_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__label_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__label_token] = {
    .visible = false,
    .named = true,
  },
  [sym__label_double_quoted] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier_chain] = {
    .visible = true,
    .named = true,
  },
  [sym__single_top_level_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_connection_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_connection_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [sym__ident_base] = {
    .visible = false,
    .named = true,
  },
  [sym__filters] = {
    .visible = false,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_spread_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__single_quoted] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quoted] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeblock_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_constraints_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_double_quoted_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_chain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ident_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__single_quoted_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quoted_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_returns] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_returns,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_arguments, 2,
    sym_arguments,
    anon_alias_sym_returns,
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
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 10,
  [15] = 10,
  [16] = 10,
  [17] = 13,
  [18] = 13,
  [19] = 11,
  [20] = 13,
  [21] = 10,
  [22] = 13,
  [23] = 10,
  [24] = 13,
  [25] = 25,
  [26] = 25,
  [27] = 25,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 34,
  [40] = 36,
  [41] = 35,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 43,
  [49] = 49,
  [50] = 45,
  [51] = 43,
  [52] = 46,
  [53] = 47,
  [54] = 43,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 30,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 31,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 35,
  [70] = 34,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 73,
  [78] = 78,
  [79] = 71,
  [80] = 37,
  [81] = 36,
  [82] = 82,
  [83] = 35,
  [84] = 84,
  [85] = 34,
  [86] = 86,
  [87] = 87,
  [88] = 87,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 84,
  [93] = 37,
  [94] = 36,
  [95] = 95,
  [96] = 82,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 42,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 105,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 46,
  [130] = 47,
  [131] = 131,
  [132] = 132,
  [133] = 42,
  [134] = 46,
  [135] = 47,
  [136] = 136,
  [137] = 137,
  [138] = 46,
  [139] = 47,
  [140] = 46,
  [141] = 47,
  [142] = 142,
  [143] = 143,
  [144] = 63,
  [145] = 145,
  [146] = 146,
  [147] = 78,
  [148] = 148,
  [149] = 44,
  [150] = 150,
  [151] = 61,
  [152] = 73,
  [153] = 153,
  [154] = 65,
  [155] = 155,
  [156] = 156,
  [157] = 49,
  [158] = 158,
  [159] = 67,
  [160] = 71,
  [161] = 72,
  [162] = 74,
  [163] = 145,
  [164] = 146,
  [165] = 150,
  [166] = 158,
  [167] = 76,
  [168] = 168,
  [169] = 87,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 168,
  [176] = 176,
  [177] = 177,
  [178] = 73,
  [179] = 82,
  [180] = 74,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 84,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 71,
  [189] = 173,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 86,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 198,
  [200] = 200,
  [201] = 196,
  [202] = 202,
  [203] = 203,
  [204] = 200,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 210,
  [221] = 214,
  [222] = 222,
  [223] = 223,
  [224] = 219,
  [225] = 210,
  [226] = 219,
  [227] = 210,
  [228] = 219,
  [229] = 210,
  [230] = 219,
  [231] = 210,
  [232] = 219,
  [233] = 218,
  [234] = 234,
  [235] = 222,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 208,
  [246] = 208,
  [247] = 223,
  [248] = 208,
  [249] = 223,
  [250] = 208,
  [251] = 223,
  [252] = 252,
  [253] = 223,
  [254] = 208,
  [255] = 223,
  [256] = 256,
};

static TSCharacterRange aux_sym__ident_base_token1_character_set_1[] = {
  {'"', '"'}, {'\'', '\''}, {'+', '+'}, {'-', '-'}, {'/', '9'}, {'A', 'Z'}, {'\\', '\\'}, {'_', '_'},
  {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1},
  {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386},
  {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559},
  {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6},
  {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7ca, 0x7ea},
  {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a},
  {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x971, 0x980},
  {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce},
  {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30},
  {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91},
  {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xaf9, 0xaf9},
  {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d},
  {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c},
  {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28},
  {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90},
  {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2}, {0xd04, 0xd0c},
  {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f}, {0xd85, 0xd96},
  {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4},
  {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x103f},
  {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x10a0, 0x10c5},
  {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d},
  {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6},
  {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f},
  {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770},
  {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5},
  {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7},
  {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d},
  {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf},
  {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d},
  {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb},
  {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107},
  {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139},
  {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25},
  {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6},
  {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006}, {0x3031, 0x3035},
  {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf},
  {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f},
  {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1},
  {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3},
  {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf},
  {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a},
  {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea},
  {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69},
  {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06},
  {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44},
  {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a},
  {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026},
  {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f},
  {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d}, {0x104b0, 0x104d3},
  {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1},
  {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0},
  {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876},
  {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        ' ', 8,
        '!', 31,
        '"', 189,
        '#', 58,
        '$', 179,
        '&', 177,
        '\'', 185,
        '(', 73,
        ')', 74,
        '*', 174,
        '+', 48,
        ',', 76,
        '-', 40,
        '.', 152,
        ':', 75,
        ';', 114,
        '<', 39,
        '@', 57,
        '[', 113,
        '\\', 35,
        ']', 115,
        '_', 86,
        '`', 46,
        'f', 77,
        't', 81,
        '{', 92,
        '|', 101,
        '}', 93,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 200,
        ' ', 157,
        '"', 163,
        '#', 58,
        '(', 73,
        '*', 173,
        ',', 167,
        '-', 171,
        '.', 151,
        ':', 72,
        '<', 39,
        '\\', 26,
        '}', 93,
        0, 198,
        ';', 198,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(158);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(19);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(32);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(187);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '|') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '|') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        ' ', 8,
        '!', 31,
        '"', 189,
        '#', 58,
        '$', 179,
        '&', 177,
        '\'', 185,
        '(', 73,
        ')', 74,
        '*', 174,
        '+', 48,
        ',', 76,
        '-', 40,
        '.', 152,
        ':', 72,
        ';', 114,
        '<', 39,
        '@', 57,
        '[', 113,
        '\\', 35,
        ']', 115,
        '_', 86,
        '`', 46,
        'f', 77,
        't', 81,
        '{', 92,
        '|', 101,
        '}', 93,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        ' ', 9,
        '"', 145,
        '$', 180,
        '\'', 185,
        '.', 132,
        '@', 141,
        '[', 113,
        '\\', 45,
        'f', 134,
        't', 138,
        '{', 92,
        '|', 101,
        '}', 182,
        '+', 142,
        '-', 142,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(144);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(30);
      if (lookahead != 0 &&
          lookahead != ';' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        ' ', 160,
        '"', 166,
        ')', 74,
        '*', 173,
        ',', 167,
        '-', 171,
        '.', 151,
        '<', 39,
        '\\', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(164);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '}') ADVANCE(182);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(165);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '!', 31,
        '"', 189,
        '#', 58,
        '$', 179,
        '&', 177,
        '\'', 185,
        '(', 73,
        ')', 74,
        '*', 174,
        '+', 48,
        ',', 76,
        '-', 40,
        '.', 152,
        ':', 72,
        ';', 114,
        '<', 39,
        '@', 57,
        '[', 113,
        '\\', 34,
        ']', 115,
        '_', 86,
        '`', 46,
        'f', 77,
        't', 81,
        '{', 92,
        '|', 101,
        '}', 93,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '!', 31,
        '"', 189,
        '&', 177,
        '\'', 185,
        '(', 73,
        '*', 174,
        '.', 151,
        '\\', 25,
        '}', 182,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(189);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '.') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '"', 145,
        '$', 180,
        '\'', 185,
        '.', 132,
        '@', 141,
        '[', 113,
        'f', 134,
        't', 138,
        '{', 92,
        '|', 101,
        '}', 182,
        '+', 142,
        '-', 142,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(172);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '*') ADVANCE(168);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == ']') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(183);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '@') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '.') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 31:
      if (lookahead == '&') ADVANCE(178);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '}') ADVANCE(182);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(168);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == 'U') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '}') ADVANCE(182);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '>') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'U') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 46:
      if (lookahead == '|') ADVANCE(97);
      END_STATE();
    case 47:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 59:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '\n', 200,
        ' ', 156,
        '"', 163,
        '#', 58,
        '(', 73,
        '*', 173,
        ',', 167,
        '-', 171,
        '.', 151,
        ':', 72,
        '<', 39,
        '\\', 26,
        0, 198,
        ';', 198,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(159);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 60:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '}') ADVANCE(93);
      if ((!eof && lookahead == 00) ||
          lookahead == ';') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      END_STATE();
    case 61:
      if (eof) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '}') ADVANCE(93);
      if ((!eof && lookahead == 00) ||
          lookahead == ';') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '\n', 200,
        '"', 169,
        '#', 58,
        '(', 73,
        '*', 173,
        '-', 171,
        '.', 151,
        ':', 72,
        '<', 39,
        '\\', 25,
        '{', 92,
        '}', 93,
        0, 198,
        ';', 198,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '!', 31,
        '"', 189,
        '#', 58,
        '$', 179,
        '&', 177,
        '\'', 185,
        '(', 73,
        ')', 74,
        '*', 174,
        '+', 48,
        ',', 76,
        '-', 40,
        '.', 152,
        ':', 72,
        ';', 114,
        '<', 39,
        '@', 57,
        '[', 113,
        '\\', 34,
        ']', 115,
        '_', 86,
        '`', 46,
        'f', 77,
        't', 81,
        '{', 92,
        '|', 101,
        '}', 93,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      ADVANCE_MAP(
        '!', 31,
        '"', 190,
        '#', 58,
        '$', 179,
        '&', 177,
        '\'', 185,
        '(', 73,
        '*', 174,
        '.', 41,
        '@', 57,
        '[', 153,
        '\\', 25,
        ']', 155,
        '{', 181,
        '}', 93,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '"') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_block_comment_token3);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_argument_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_argument_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_connection);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_connection);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_import);
      if (lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_import);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPE_BQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__label_codeblock_ticks_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__label_codeblock_ticks_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_BQUOTE_PIPE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_PIPE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '|') ADVANCE(98);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '|') ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__label_codeblock_single_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__label_codeblock_single_token1);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_codeblock_language);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_codeblock_content_token1);
      if (lookahead == '|') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_codeblock_content_token1);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_codeblock_content_token1);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_codeblock_content_token1);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_codeblock_content_token1);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_codeblock_content_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_codeblock_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_codeblock_content_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__label_literal_token1);
      if ((!eof && lookahead == 00)) ADVANCE(198);
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__label_literal_token1);
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__label_literal_token1);
      if (eof) ADVANCE(65);
      if ((!eof && lookahead == 00)) ADVANCE(198);
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == ';') ADVANCE(198);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == '$') ADVANCE(184);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == '$') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead == ';' ||
          lookahead == '\\' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(90);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__label_token_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__label_double_quoted_token1);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__label_double_quoted_token1);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__label_double_quoted_token1);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__label_double_quoted_token1);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__label_double_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_connection_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      ADVANCE_MAP(
        '\n', 200,
        ' ', 156,
        '"', 163,
        '*', 173,
        ',', 167,
        '-', 171,
        '<', 39,
        0, 198,
        ';', 198,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      ADVANCE_MAP(
        '\n', 200,
        ' ', 157,
        '"', 163,
        '*', 173,
        ',', 167,
        '-', 171,
        '<', 39,
        '}', 93,
        0, 198,
        ';', 198,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      ADVANCE_MAP(
        '\n', 200,
        '"', 163,
        '*', 173,
        ',', 167,
        '-', 171,
        '<', 39,
        '}', 93,
        0, 198,
        ';', 198,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      ADVANCE_MAP(
        '\n', 200,
        '"', 163,
        '*', 173,
        ',', 167,
        '-', 171,
        '<', 39,
        0, 198,
        ';', 198,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == ' ') ADVANCE(160);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '<') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == ',') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(167);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(167);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == ',') ADVANCE(167);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '<') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == ',') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(167);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ',') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASH_STAR);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__ident_base_token1);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(24);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__ident_base_token1);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(24);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__ident_base_token1);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(24);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__ident_base_token1);
      if (lookahead == '\\') ADVANCE(24);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_glob);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_glob);
      if (lookahead == '*') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_recursive_glob);
      if (lookahead == '*') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_global_glob);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_glob_filter);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_inverse_glob_filter);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOLLAR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_DOLLAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(144);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__single_quoted_token1);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__single_quoted_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__single_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(170);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__double_quoted_token1);
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__double_quoted_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__double_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_escape);
      if (lookahead == '\\') ADVANCE(24);
      if (set_contains(aux_sym__ident_base_token1_character_set_1, 436, lookahead)) ADVANCE(172);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_escape);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_escape);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__eol);
      if ((!eof && lookahead == 00)) ADVANCE(198);
      if (lookahead == '\n') ADVANCE(199);
      if (lookahead == ';') ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(200);
      if ((!eof && lookahead == 00) ||
          lookahead == ';') ADVANCE(198);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 64},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 64},
  [30] = {.lex_state = 118},
  [31] = {.lex_state = 118},
  [32] = {.lex_state = 118},
  [33] = {.lex_state = 118},
  [34] = {.lex_state = 62},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 59},
  [37] = {.lex_state = 59},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 62},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 62},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 118},
  [47] = {.lex_state = 118},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 118},
  [53] = {.lex_state = 118},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 117},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 117},
  [65] = {.lex_state = 62},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 62},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 33},
  [71] = {.lex_state = 62},
  [72] = {.lex_state = 62},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 62},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 118},
  [91] = {.lex_state = 118},
  [92] = {.lex_state = 62},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 62},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 60},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 62},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 62},
  [106] = {.lex_state = 62},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 62},
  [109] = {.lex_state = 62},
  [110] = {.lex_state = 62},
  [111] = {.lex_state = 62},
  [112] = {.lex_state = 62},
  [113] = {.lex_state = 60},
  [114] = {.lex_state = 62},
  [115] = {.lex_state = 62},
  [116] = {.lex_state = 62},
  [117] = {.lex_state = 62},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 62},
  [120] = {.lex_state = 62},
  [121] = {.lex_state = 62},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 27},
  [124] = {.lex_state = 62},
  [125] = {.lex_state = 27},
  [126] = {.lex_state = 62},
  [127] = {.lex_state = 62},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 62},
  [130] = {.lex_state = 62},
  [131] = {.lex_state = 62},
  [132] = {.lex_state = 27},
  [133] = {.lex_state = 36},
  [134] = {.lex_state = 27},
  [135] = {.lex_state = 27},
  [136] = {.lex_state = 62},
  [137] = {.lex_state = 62},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 117},
  [141] = {.lex_state = 117},
  [142] = {.lex_state = 62},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 33},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 33},
  [148] = {.lex_state = 27},
  [149] = {.lex_state = 33},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 33},
  [152] = {.lex_state = 33},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 33},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 33},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 33},
  [160] = {.lex_state = 33},
  [161] = {.lex_state = 33},
  [162] = {.lex_state = 33},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 33},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 38},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 62},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 38},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 38},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 38},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 38},
  [191] = {.lex_state = 62},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 62},
  [194] = {.lex_state = 38},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 64},
  [197] = {.lex_state = 27},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 37},
  [201] = {.lex_state = 64},
  [202] = {.lex_state = 38},
  [203] = {.lex_state = 62},
  [204] = {.lex_state = 37},
  [205] = {.lex_state = 27},
  [206] = {.lex_state = 62},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 64},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 62},
  [213] = {.lex_state = 102},
  [214] = {.lex_state = 64},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 95},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 64},
  [222] = {.lex_state = 112},
  [223] = {.lex_state = 64},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 9},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 112},
  [236] = {.lex_state = 47},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 47},
  [242] = {.lex_state = 47},
  [243] = {.lex_state = 47},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 64},
  [246] = {.lex_state = 64},
  [247] = {.lex_state = 64},
  [248] = {.lex_state = 64},
  [249] = {.lex_state = 64},
  [250] = {.lex_state = 64},
  [251] = {.lex_state = 64},
  [252] = {.lex_state = 117},
  [253] = {.lex_state = 64},
  [254] = {.lex_state = 64},
  [255] = {.lex_state = 64},
  [256] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_block_comment_token2] = ACTIONS(1),
    [aux_sym_block_comment_token3] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_argument_name_token1] = ACTIONS(1),
    [sym_connection] = ACTIONS(1),
    [sym_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_codeblock_language] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [aux_sym_connection_identifier_token1] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym_BSLASH_STAR] = ACTIONS(1),
    [sym_glob] = ACTIONS(1),
    [sym_recursive_glob] = ACTIONS(1),
    [sym_global_glob] = ACTIONS(1),
    [sym_glob_filter] = ACTIONS(1),
    [sym_inverse_glob_filter] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(209),
    [sym__declaration] = STATE(206),
    [sym_block_comment] = STATE(99),
    [sym_declaration] = STATE(99),
    [sym__expr] = STATE(112),
    [sym_method_declaration] = STATE(99),
    [sym__identifier] = STATE(96),
    [sym_identifier_chain] = STATE(96),
    [sym__single_top_level_identifier] = STATE(71),
    [sym_connection_reference] = STATE(71),
    [sym_identifier] = STATE(57),
    [sym__ident] = STATE(63),
    [sym__ident_base] = STATE(36),
    [sym__filters] = STATE(54),
    [sym__variable] = STATE(99),
    [sym_variable] = STATE(99),
    [sym_spread_variable] = STATE(99),
    [sym__single_quoted] = STATE(63),
    [sym__double_quoted] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym__ident_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_import] = ACTIONS(5),
    [anon_sym_BSLASH_STAR] = ACTIONS(11),
    [aux_sym__ident_base_token1] = ACTIONS(13),
    [sym_glob] = ACTIONS(15),
    [sym_recursive_glob] = ACTIONS(17),
    [sym_global_glob] = ACTIONS(19),
    [sym_glob_filter] = ACTIONS(21),
    [sym_inverse_glob_filter] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT_DOLLAR] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE2] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(36), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(45), 1,
      aux_sym__ident_base_token1,
    ACTIONS(48), 1,
      sym_glob,
    ACTIONS(51), 1,
      sym_recursive_glob,
    ACTIONS(54), 1,
      sym_global_glob,
    ACTIONS(60), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE2,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      aux_sym__ident_repeat1,
    STATE(36), 1,
      sym__ident_base,
    STATE(54), 1,
      sym__filters,
    STATE(57), 1,
      sym_identifier,
    STATE(105), 1,
      sym__expr,
    STATE(212), 1,
      sym__declaration,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(33), 2,
      sym_comment,
      sym_import,
    ACTIONS(57), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(71), 2,
      sym__single_top_level_identifier,
      sym_connection_reference,
    STATE(96), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(63), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(99), 6,
      sym_block_comment,
      sym_declaration,
      sym_method_declaration,
      sym__variable,
      sym_variable,
      sym_spread_variable,
  [88] = 25,
    ACTIONS(7), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE2,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(76), 1,
      aux_sym__ident_base_token1,
    ACTIONS(78), 1,
      sym_glob,
    ACTIONS(80), 1,
      sym_recursive_glob,
    ACTIONS(82), 1,
      sym_global_glob,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(40), 1,
      sym__ident_base,
    STATE(41), 1,
      aux_sym__ident_repeat1,
    STATE(51), 1,
      sym__filters,
    STATE(57), 1,
      sym_identifier,
    STATE(105), 1,
      sym__expr,
    STATE(193), 1,
      sym__declaration,
    ACTIONS(5), 2,
      sym_comment,
      sym_import,
    ACTIONS(84), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(79), 2,
      sym__single_top_level_identifier,
      sym_connection_reference,
    STATE(82), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(63), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(99), 6,
      sym_block_comment,
      sym_declaration,
      sym_method_declaration,
      sym__variable,
      sym_variable,
      sym_spread_variable,
  [175] = 25,
    ACTIONS(7), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(13), 1,
      aux_sym__ident_base_token1,
    ACTIONS(15), 1,
      sym_glob,
    ACTIONS(17), 1,
      sym_recursive_glob,
    ACTIONS(19), 1,
      sym_global_glob,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 1,
      aux_sym__ident_repeat1,
    STATE(36), 1,
      sym__ident_base,
    STATE(54), 1,
      sym__filters,
    STATE(57), 1,
      sym_identifier,
    STATE(112), 1,
      sym__expr,
    STATE(191), 1,
      sym__declaration,
    ACTIONS(5), 2,
      sym_comment,
      sym_import,
    ACTIONS(21), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(71), 2,
      sym__single_top_level_identifier,
      sym_connection_reference,
    STATE(96), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(63), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(99), 6,
      sym_block_comment,
      sym_declaration,
      sym_method_declaration,
      sym__variable,
      sym_variable,
      sym_spread_variable,
  [262] = 25,
    ACTIONS(7), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE2,
    ACTIONS(74), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(76), 1,
      aux_sym__ident_base_token1,
    ACTIONS(78), 1,
      sym_glob,
    ACTIONS(80), 1,
      sym_recursive_glob,
    ACTIONS(82), 1,
      sym_global_glob,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(40), 1,
      sym__ident_base,
    STATE(41), 1,
      aux_sym__ident_repeat1,
    STATE(51), 1,
      sym__filters,
    STATE(57), 1,
      sym_identifier,
    STATE(105), 1,
      sym__expr,
    STATE(203), 1,
      sym__declaration,
    ACTIONS(5), 2,
      sym_comment,
      sym_import,
    ACTIONS(84), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(79), 2,
      sym__single_top_level_identifier,
      sym_connection_reference,
    STATE(82), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(63), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(99), 6,
      sym_block_comment,
      sym_declaration,
      sym_method_declaration,
      sym__variable,
      sym_variable,
      sym_spread_variable,
  [349] = 22,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      sym_import,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(96), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      aux_sym__label_token_token1,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(116), 1,
      sym_escape,
    STATE(50), 1,
      aux_sym__label_literal_repeat1,
    STATE(89), 1,
      sym_label,
    STATE(90), 1,
      sym__label_token,
    STATE(137), 1,
      sym_block,
    ACTIONS(104), 2,
      sym_integer,
      sym_float,
    ACTIONS(106), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
    STATE(106), 4,
      sym__label_codeblock_ticks,
      sym__label_codeblock_triple,
      sym__label_codeblock_double,
      sym__label_codeblock_single,
    STATE(102), 6,
      sym_label_codeblock,
      sym__label_constraints,
      sym__label_literal,
      sym_boolean,
      sym__label_double_quoted,
      sym__single_quoted,
  [429] = 22,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      sym_import,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(96), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(98), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      aux_sym__label_token_token1,
    ACTIONS(120), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(124), 1,
      sym_escape,
    STATE(45), 1,
      aux_sym__label_literal_repeat1,
    STATE(89), 1,
      sym_label,
    STATE(90), 1,
      sym__label_token,
    STATE(137), 1,
      sym_block,
    ACTIONS(104), 2,
      sym_integer,
      sym_float,
    ACTIONS(106), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
    STATE(106), 4,
      sym__label_codeblock_ticks,
      sym__label_codeblock_triple,
      sym__label_codeblock_double,
      sym__label_codeblock_single,
    STATE(102), 6,
      sym_label_codeblock,
      sym__label_constraints,
      sym__label_literal,
      sym_boolean,
      sym__label_double_quoted,
      sym__single_quoted,
  [509] = 16,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(130), 1,
      aux_sym__ident_base_token1,
    ACTIONS(132), 1,
      sym_glob,
    ACTIONS(134), 1,
      sym_recursive_glob,
    ACTIONS(136), 1,
      sym_global_glob,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    STATE(43), 1,
      sym__filters,
    STATE(69), 1,
      aux_sym__ident_repeat1,
    STATE(81), 1,
      sym__ident_base,
    STATE(233), 1,
      sym__expr,
    ACTIONS(138), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(179), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(160), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [564] = 16,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(130), 1,
      aux_sym__ident_base_token1,
    ACTIONS(132), 1,
      sym_glob,
    ACTIONS(134), 1,
      sym_recursive_glob,
    ACTIONS(136), 1,
      sym_global_glob,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    STATE(43), 1,
      sym__filters,
    STATE(69), 1,
      aux_sym__ident_repeat1,
    STATE(81), 1,
      sym__ident_base,
    STATE(218), 1,
      sym__expr,
    ACTIONS(138), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(179), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(160), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [619] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(224), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [671] = 15,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(76), 1,
      aux_sym__ident_base_token1,
    ACTIONS(78), 1,
      sym_glob,
    ACTIONS(80), 1,
      sym_recursive_glob,
    ACTIONS(82), 1,
      sym_global_glob,
    ACTIONS(156), 1,
      anon_sym_DQUOTE2,
    STATE(40), 1,
      sym__ident_base,
    STATE(41), 1,
      aux_sym__ident_repeat1,
    STATE(51), 1,
      sym__filters,
    ACTIONS(84), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(86), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(63), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(79), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [723] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(130), 1,
      aux_sym__ident_base_token1,
    ACTIONS(132), 1,
      sym_glob,
    ACTIONS(134), 1,
      sym_recursive_glob,
    ACTIONS(136), 1,
      sym_global_glob,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    STATE(43), 1,
      sym__filters,
    STATE(69), 1,
      aux_sym__ident_repeat1,
    STATE(81), 1,
      sym__ident_base,
    ACTIONS(138), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(195), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(160), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [775] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(210), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [827] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(232), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [879] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(228), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [931] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(226), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [983] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(225), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1035] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(220), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1087] = 15,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(13), 1,
      aux_sym__ident_base_token1,
    ACTIONS(15), 1,
      sym_glob,
    ACTIONS(17), 1,
      sym_recursive_glob,
    ACTIONS(19), 1,
      sym_global_glob,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE2,
    STATE(35), 1,
      aux_sym__ident_repeat1,
    STATE(36), 1,
      sym__ident_base,
    STATE(54), 1,
      sym__filters,
    ACTIONS(21), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(86), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(63), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(71), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1139] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(227), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1191] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(219), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1243] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(229), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1295] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(230), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1347] = 15,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(150), 1,
      sym_recursive_glob,
    ACTIONS(152), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(231), 2,
      sym__identifier,
      sym_identifier_chain,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(188), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1399] = 14,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(144), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    ACTIONS(148), 1,
      sym_glob,
    ACTIONS(158), 1,
      sym_recursive_glob,
    ACTIONS(160), 1,
      sym_global_glob,
    STATE(48), 1,
      sym__filters,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(154), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(161), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1447] = 14,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(130), 1,
      aux_sym__ident_base_token1,
    ACTIONS(132), 1,
      sym_glob,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(158), 1,
      sym_recursive_glob,
    ACTIONS(160), 1,
      sym_global_glob,
    STATE(43), 1,
      sym__filters,
    STATE(69), 1,
      aux_sym__ident_repeat1,
    STATE(81), 1,
      sym__ident_base,
    ACTIONS(138), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(144), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(161), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1495] = 14,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(76), 1,
      aux_sym__ident_base_token1,
    ACTIONS(78), 1,
      sym_glob,
    ACTIONS(156), 1,
      anon_sym_DQUOTE2,
    ACTIONS(162), 1,
      sym_recursive_glob,
    ACTIONS(164), 1,
      sym_global_glob,
    STATE(40), 1,
      sym__ident_base,
    STATE(41), 1,
      aux_sym__ident_repeat1,
    STATE(51), 1,
      sym__filters,
    ACTIONS(84), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(63), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(72), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1543] = 14,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH_STAR,
    ACTIONS(13), 1,
      aux_sym__ident_base_token1,
    ACTIONS(15), 1,
      sym_glob,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE2,
    ACTIONS(162), 1,
      sym_recursive_glob,
    ACTIONS(164), 1,
      sym_global_glob,
    STATE(35), 1,
      aux_sym__ident_repeat1,
    STATE(36), 1,
      sym__ident_base,
    STATE(54), 1,
      sym__filters,
    ACTIONS(21), 2,
      sym_glob_filter,
      sym_inverse_glob_filter,
    STATE(63), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
    STATE(72), 3,
      sym__single_top_level_identifier,
      sym_connection_reference,
      sym_identifier,
  [1591] = 2,
    ACTIONS(166), 4,
      aux_sym__ident_base_token1,
      sym_glob,
      sym_recursive_glob,
      anon_sym_DQUOTE2,
    ACTIONS(31), 13,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LPAREN,
      sym_import,
      anon_sym_RBRACE,
      anon_sym_BSLASH_STAR,
      sym_global_glob,
      sym_glob_filter,
      sym_inverse_glob_filter,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
      anon_sym_SQUOTE,
  [1613] = 6,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      anon_sym_DOLLAR,
    ACTIONS(178), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(172), 2,
      aux_sym__label_token_token1,
      sym_escape,
    STATE(30), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
    ACTIONS(170), 5,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      aux_sym__label_literal_token1,
      sym__eol,
  [1640] = 6,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 2,
      aux_sym__label_token_token1,
      sym_escape,
    STATE(30), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
    ACTIONS(183), 5,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      aux_sym__label_literal_token1,
      sym__eol,
  [1667] = 5,
    ACTIONS(120), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(187), 2,
      aux_sym__label_token_token1,
      sym_escape,
    STATE(33), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
    ACTIONS(183), 6,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__label_literal_token1,
      sym__eol,
  [1692] = 5,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(189), 2,
      aux_sym__label_token_token1,
      sym_escape,
    STATE(33), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
    ACTIONS(170), 6,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__label_literal_token1,
      sym__eol,
  [1717] = 5,
    STATE(34), 1,
      aux_sym__ident_repeat1,
    STATE(36), 1,
      sym__ident_base,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(202), 3,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
    ACTIONS(200), 6,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DOT,
  [1741] = 5,
    STATE(34), 1,
      aux_sym__ident_repeat1,
    STATE(36), 1,
      sym__ident_base,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(13), 3,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
    ACTIONS(207), 6,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DOT,
  [1765] = 3,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 2,
      aux_sym__ident_token1,
      sym_escape,
    ACTIONS(211), 10,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
      sym__eol,
  [1785] = 3,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 6,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_DOT,
      sym__eol,
    ACTIONS(221), 6,
      anon_sym_LPAREN,
      aux_sym__ident_token1,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
      sym_escape,
  [1805] = 2,
    ACTIONS(221), 6,
      anon_sym_LPAREN,
      aux_sym__ident_token1,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
      sym_escape,
    ACTIONS(218), 7,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym__eol,
  [1823] = 5,
    ACTIONS(198), 1,
      sym__eol,
    STATE(39), 1,
      aux_sym__ident_repeat1,
    STATE(40), 1,
      sym__ident_base,
    ACTIONS(223), 3,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
    ACTIONS(200), 7,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [1847] = 2,
    ACTIONS(213), 2,
      aux_sym__ident_token1,
      sym_escape,
    ACTIONS(211), 11,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
      sym__eol,
  [1865] = 5,
    ACTIONS(205), 1,
      sym__eol,
    STATE(39), 1,
      aux_sym__ident_repeat1,
    STATE(40), 1,
      sym__ident_base,
    ACTIONS(76), 3,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
    ACTIONS(207), 7,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [1889] = 2,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(200), 10,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
  [1906] = 7,
    ACTIONS(130), 1,
      aux_sym__ident_base_token1,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    STATE(69), 1,
      aux_sym__ident_repeat1,
    STATE(81), 1,
      sym__ident_base,
    ACTIONS(128), 2,
      anon_sym_BSLASH_STAR,
      sym_glob,
    STATE(154), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
  [1931] = 2,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(228), 8,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [1946] = 7,
    ACTIONS(118), 1,
      aux_sym__label_token_token1,
    ACTIONS(120), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(124), 1,
      sym_escape,
    STATE(55), 1,
      aux_sym__label_literal_repeat1,
    STATE(91), 1,
      sym__label_token,
    STATE(32), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
  [1971] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 9,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      aux_sym__label_literal_token1,
      aux_sym__label_token_token1,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
      sym_escape,
      sym__eol,
  [1986] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 9,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      aux_sym__label_literal_token1,
      aux_sym__label_token_token1,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
      sym_escape,
      sym__eol,
  [2001] = 7,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE2,
    ACTIONS(146), 1,
      aux_sym__ident_base_token1,
    STATE(83), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(144), 2,
      anon_sym_BSLASH_STAR,
      sym_glob,
    STATE(154), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
  [2026] = 2,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(240), 8,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2041] = 7,
    ACTIONS(108), 1,
      aux_sym__label_token_token1,
    ACTIONS(112), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(116), 1,
      sym_escape,
    STATE(55), 1,
      aux_sym__label_literal_repeat1,
    STATE(91), 1,
      sym__label_token,
    STATE(31), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
  [2066] = 7,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(76), 1,
      aux_sym__ident_base_token1,
    ACTIONS(156), 1,
      anon_sym_DQUOTE2,
    STATE(40), 1,
      sym__ident_base,
    STATE(41), 1,
      aux_sym__ident_repeat1,
    ACTIONS(74), 2,
      anon_sym_BSLASH_STAR,
      sym_glob,
    STATE(65), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
  [2091] = 1,
    ACTIONS(232), 10,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__label_literal_token1,
      aux_sym__label_token_token1,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
      sym_escape,
      sym__eol,
  [2104] = 1,
    ACTIONS(236), 10,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__label_literal_token1,
      aux_sym__label_token_token1,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
      sym_escape,
      sym__eol,
  [2117] = 7,
    ACTIONS(13), 1,
      aux_sym__ident_base_token1,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_DQUOTE2,
    STATE(35), 1,
      aux_sym__ident_repeat1,
    STATE(36), 1,
      sym__ident_base,
    ACTIONS(11), 2,
      anon_sym_BSLASH_STAR,
      sym_glob,
    STATE(65), 3,
      sym__ident,
      sym__single_quoted,
      sym__double_quoted,
  [2142] = 7,
    ACTIONS(242), 1,
      aux_sym__label_token_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(251), 1,
      sym_escape,
    STATE(55), 1,
      aux_sym__label_literal_repeat1,
    STATE(252), 1,
      sym__label_token,
    STATE(64), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
  [2167] = 7,
    ACTIONS(254), 1,
      aux_sym_argument_name_token1,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    ACTIONS(258), 1,
      anon_sym_DOLLAR,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    STATE(68), 1,
      aux_sym__label_constraints_repeat2,
    STATE(104), 1,
      sym_label_constraint,
    STATE(132), 3,
      sym__variable,
      sym_variable,
      sym_spread_variable,
  [2191] = 3,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(264), 6,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2207] = 7,
    ACTIONS(254), 1,
      aux_sym_argument_name_token1,
    ACTIONS(258), 1,
      anon_sym_DOLLAR,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym__label_constraints_repeat2,
    STATE(104), 1,
      sym_label_constraint,
    STATE(132), 3,
      sym__variable,
      sym_variable,
      sym_spread_variable,
  [2231] = 6,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      aux_sym__label_double_quoted_token1,
    ACTIONS(274), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(278), 1,
      sym_escape,
    STATE(62), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_double_quoted_repeat1,
  [2253] = 5,
    ACTIONS(168), 1,
      aux_sym__label_literal_token1,
    ACTIONS(283), 1,
      anon_sym_DOLLAR,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(280), 2,
      aux_sym__label_token_token1,
      sym_escape,
    STATE(60), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
  [2273] = 2,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(291), 7,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2287] = 6,
    ACTIONS(274), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      aux_sym__label_double_quoted_token1,
    ACTIONS(297), 1,
      sym_escape,
    STATE(66), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_double_quoted_repeat1,
  [2309] = 2,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(301), 7,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2323] = 5,
    ACTIONS(181), 1,
      aux_sym__label_literal_token1,
    ACTIONS(305), 1,
      anon_sym_DOLLAR,
    ACTIONS(307), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(303), 2,
      aux_sym__label_token_token1,
      sym_escape,
    STATE(60), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_token_repeat1,
  [2343] = 2,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(311), 7,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2357] = 6,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      aux_sym__label_double_quoted_token1,
    ACTIONS(318), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    ACTIONS(324), 1,
      sym_escape,
    STATE(66), 4,
      sym__variable,
      sym_variable,
      sym_spread_variable,
      aux_sym__label_double_quoted_repeat1,
  [2379] = 2,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(329), 7,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2393] = 7,
    ACTIONS(331), 1,
      aux_sym_argument_name_token1,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    ACTIONS(336), 1,
      anon_sym_DOLLAR,
    ACTIONS(339), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    STATE(68), 1,
      aux_sym__label_constraints_repeat2,
    STATE(104), 1,
      sym_label_constraint,
    STATE(132), 3,
      sym__variable,
      sym_variable,
      sym_spread_variable,
  [2417] = 5,
    ACTIONS(130), 1,
      aux_sym__ident_base_token1,
    STATE(70), 1,
      aux_sym__ident_repeat1,
    STATE(81), 1,
      sym__ident_base,
    ACTIONS(128), 2,
      anon_sym_BSLASH_STAR,
      sym_glob,
    ACTIONS(205), 3,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
  [2436] = 5,
    ACTIONS(345), 1,
      aux_sym__ident_base_token1,
    STATE(70), 1,
      aux_sym__ident_repeat1,
    STATE(81), 1,
      sym__ident_base,
    ACTIONS(342), 2,
      anon_sym_BSLASH_STAR,
      sym_glob,
    ACTIONS(198), 3,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
  [2455] = 4,
    ACTIONS(352), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(350), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
  [2472] = 2,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(356), 6,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2485] = 4,
    ACTIONS(360), 1,
      anon_sym_DOT,
    ACTIONS(362), 1,
      sym__eol,
    STATE(75), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(358), 5,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_RBRACE,
  [2502] = 4,
    ACTIONS(364), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(356), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
  [2519] = 4,
    ACTIONS(354), 1,
      sym__eol,
    ACTIONS(367), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(356), 5,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_RBRACE,
  [2536] = 2,
    ACTIONS(370), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(372), 6,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2549] = 4,
    ACTIONS(352), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(358), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
  [2566] = 2,
    ACTIONS(374), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(376), 6,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2579] = 4,
    ACTIONS(348), 1,
      sym__eol,
    ACTIONS(360), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(350), 5,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_RBRACE,
  [2596] = 2,
    ACTIONS(218), 3,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
    ACTIONS(221), 5,
      aux_sym__ident_token1,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
      sym_escape,
  [2609] = 2,
    ACTIONS(378), 2,
      aux_sym__ident_token1,
      sym_escape,
    ACTIONS(211), 6,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
  [2622] = 4,
    ACTIONS(382), 1,
      sym_connection,
    ACTIONS(384), 1,
      sym__eol,
    STATE(84), 1,
      aux_sym__expr_repeat1,
    ACTIONS(380), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2638] = 4,
    STATE(85), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(205), 2,
      anon_sym_DOT,
      anon_sym_RBRACE2,
    ACTIONS(144), 3,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
  [2654] = 4,
    ACTIONS(382), 1,
      sym_connection,
    ACTIONS(388), 1,
      sym__eol,
    STATE(87), 1,
      aux_sym__expr_repeat1,
    ACTIONS(386), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2670] = 4,
    STATE(85), 1,
      aux_sym__ident_repeat1,
    STATE(94), 1,
      sym__ident_base,
    ACTIONS(198), 2,
      anon_sym_DOT,
      anon_sym_RBRACE2,
    ACTIONS(390), 3,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
  [2686] = 2,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(395), 5,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      sym_connection,
      anon_sym_RBRACE,
  [2698] = 4,
    ACTIONS(393), 1,
      sym__eol,
    ACTIONS(397), 1,
      sym_connection,
    STATE(87), 1,
      aux_sym__expr_repeat1,
    ACTIONS(395), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2714] = 4,
    ACTIONS(400), 1,
      sym_connection,
    STATE(88), 1,
      aux_sym__expr_repeat1,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(395), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
  [2730] = 4,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(405), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [2746] = 3,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 1,
      aux_sym__label_literal_token1,
    ACTIONS(411), 5,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
  [2760] = 3,
    ACTIONS(413), 1,
      aux_sym__label_literal_token1,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 5,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__eol,
  [2774] = 4,
    ACTIONS(419), 1,
      sym_connection,
    STATE(88), 1,
      aux_sym__expr_repeat1,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(386), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
  [2790] = 2,
    ACTIONS(218), 2,
      anon_sym_DOT,
      anon_sym_RBRACE2,
    ACTIONS(221), 5,
      aux_sym__ident_token1,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
      sym_escape,
  [2802] = 2,
    ACTIONS(421), 2,
      aux_sym__ident_token1,
      sym_escape,
    ACTIONS(211), 5,
      anon_sym_DOT,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
      anon_sym_RBRACE2,
  [2814] = 5,
    ACTIONS(254), 1,
      aux_sym_argument_name_token1,
    ACTIONS(258), 1,
      anon_sym_DOLLAR,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT_DOT_DOLLAR,
    STATE(123), 1,
      sym_label_constraint,
    STATE(132), 3,
      sym__variable,
      sym_variable,
      sym_spread_variable,
  [2832] = 4,
    ACTIONS(419), 1,
      sym_connection,
    STATE(92), 1,
      aux_sym__expr_repeat1,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(380), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_COLON,
  [2848] = 2,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(425), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2859] = 3,
    ACTIONS(429), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym__label_constraints_repeat1,
    ACTIONS(427), 4,
      aux_sym_argument_name_token1,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
  [2872] = 5,
    ACTIONS(434), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_block_comment,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      sym__eol,
  [2889] = 3,
    ACTIONS(444), 1,
      anon_sym_COLON2,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(442), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [2902] = 3,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym__label_constraints_repeat1,
    ACTIONS(334), 4,
      aux_sym_argument_name_token1,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
  [2915] = 2,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(450), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2926] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(454), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2937] = 3,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      aux_sym__label_constraints_repeat1,
    ACTIONS(456), 4,
      aux_sym_argument_name_token1,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
  [2950] = 4,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      sym__eol,
    STATE(121), 1,
      sym__colon_block,
    ACTIONS(458), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [2965] = 2,
    ACTIONS(464), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(466), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2976] = 2,
    ACTIONS(200), 1,
      aux_sym__ident_base_token1,
    ACTIONS(198), 5,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_BSLASH_STAR,
      sym_glob,
  [2987] = 2,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(470), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2998] = 2,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(474), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3009] = 2,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(478), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3020] = 2,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(482), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3031] = 4,
    ACTIONS(484), 1,
      anon_sym_COLON,
    STATE(121), 1,
      sym__colon_block,
    ACTIONS(458), 2,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      sym__eol,
  [3046] = 3,
    ACTIONS(490), 1,
      anon_sym_COLON2,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(488), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3059] = 2,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(494), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3070] = 2,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(498), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3081] = 2,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(502), 4,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3092] = 2,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(506), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3102] = 5,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      aux_sym_argument_name_token1,
    STATE(185), 1,
      sym_argument_name,
    STATE(211), 1,
      sym_arguments,
    STATE(215), 1,
      sym_returns,
  [3118] = 2,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(514), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3128] = 2,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(518), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3138] = 2,
    ACTIONS(520), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(522), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3148] = 3,
    ACTIONS(524), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(128), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(526), 3,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
      aux_sym_block_comment_token3,
  [3160] = 1,
    ACTIONS(427), 5,
      aux_sym_argument_name_token1,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
  [3168] = 2,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(530), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3178] = 5,
    ACTIONS(510), 1,
      aux_sym_argument_name_token1,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_argument_name,
    STATE(211), 1,
      sym_arguments,
    STATE(238), 1,
      sym_returns,
  [3194] = 2,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(536), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3204] = 2,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(540), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3214] = 3,
    ACTIONS(542), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(128), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(544), 3,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
      aux_sym_block_comment_token3,
  [3226] = 2,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(232), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3236] = 2,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(236), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3246] = 2,
    ACTIONS(547), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(549), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3256] = 1,
    ACTIONS(551), 5,
      aux_sym_argument_name_token1,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
  [3264] = 1,
    ACTIONS(198), 5,
      anon_sym_DOT,
      anon_sym_BSLASH_STAR,
      aux_sym__ident_base_token1,
      sym_glob,
      anon_sym_RBRACE2,
  [3272] = 1,
    ACTIONS(230), 5,
      aux_sym_argument_name_token1,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
  [3280] = 1,
    ACTIONS(234), 5,
      aux_sym_argument_name_token1,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
  [3288] = 2,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(555), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3298] = 2,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(405), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3308] = 2,
    ACTIONS(230), 1,
      aux_sym__label_double_quoted_token1,
    ACTIONS(232), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
      sym_escape,
  [3318] = 2,
    ACTIONS(234), 1,
      aux_sym__label_double_quoted_token1,
    ACTIONS(236), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
      sym_escape,
  [3328] = 2,
    ACTIONS(230), 1,
      aux_sym__label_literal_token1,
    ACTIONS(232), 4,
      aux_sym__label_token_token1,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
      sym_escape,
  [3338] = 2,
    ACTIONS(234), 1,
      aux_sym__label_literal_token1,
    ACTIONS(236), 4,
      aux_sym__label_token_token1,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
      sym_escape,
  [3348] = 2,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      sym__eol,
    ACTIONS(559), 3,
      sym_comment,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_RBRACE,
  [3358] = 3,
    ACTIONS(561), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(122), 1,
      aux_sym_block_comment_repeat1,
    ACTIONS(563), 3,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
      aux_sym_block_comment_token3,
  [3370] = 1,
    ACTIONS(299), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_RBRACE2,
  [3377] = 4,
    ACTIONS(565), 1,
      anon_sym_SQUOTE,
    ACTIONS(567), 1,
      aux_sym__single_quoted_token1,
    ACTIONS(569), 1,
      sym_escape,
    STATE(150), 1,
      aux_sym__single_quoted_repeat1,
  [3390] = 4,
    ACTIONS(571), 1,
      anon_sym_DQUOTE2,
    ACTIONS(573), 1,
      aux_sym__double_quoted_token1,
    ACTIONS(575), 1,
      sym_escape,
    STATE(158), 1,
      aux_sym__double_quoted_repeat1,
  [3403] = 1,
    ACTIONS(374), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_RBRACE2,
  [3410] = 4,
    ACTIONS(510), 1,
      aux_sym_argument_name_token1,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_argument_name,
    STATE(244), 1,
      sym_arguments,
  [3423] = 1,
    ACTIONS(226), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_RBRACE2,
  [3430] = 4,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      aux_sym__single_quoted_token1,
    ACTIONS(583), 1,
      sym_escape,
    STATE(153), 1,
      aux_sym__single_quoted_repeat1,
  [3443] = 1,
    ACTIONS(289), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_RBRACE2,
  [3450] = 3,
    ACTIONS(585), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(362), 2,
      anon_sym_RPAREN,
      sym_connection,
  [3461] = 4,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      aux_sym__single_quoted_token1,
    ACTIONS(592), 1,
      sym_escape,
    STATE(153), 1,
      aux_sym__single_quoted_repeat1,
  [3474] = 1,
    ACTIONS(309), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_RBRACE2,
  [3481] = 2,
    ACTIONS(597), 1,
      sym_escape,
    ACTIONS(595), 3,
      aux_sym__label_token_token1,
      anon_sym_DOLLAR,
      anon_sym_DOT_DOT_DOT_DOLLAR,
  [3490] = 4,
    ACTIONS(599), 1,
      anon_sym_DQUOTE2,
    ACTIONS(601), 1,
      aux_sym__double_quoted_token1,
    ACTIONS(604), 1,
      sym_escape,
    STATE(156), 1,
      aux_sym__double_quoted_repeat1,
  [3503] = 1,
    ACTIONS(238), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_RBRACE2,
  [3510] = 4,
    ACTIONS(607), 1,
      anon_sym_DQUOTE2,
    ACTIONS(609), 1,
      aux_sym__double_quoted_token1,
    ACTIONS(611), 1,
      sym_escape,
    STATE(156), 1,
      aux_sym__double_quoted_repeat1,
  [3523] = 1,
    ACTIONS(327), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_RBRACE2,
  [3530] = 3,
    ACTIONS(585), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(348), 2,
      anon_sym_RPAREN,
      sym_connection,
  [3541] = 1,
    ACTIONS(354), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_RBRACE2,
  [3548] = 3,
    ACTIONS(613), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_identifier_chain_repeat1,
    ACTIONS(354), 2,
      anon_sym_RPAREN,
      sym_connection,
  [3559] = 4,
    ACTIONS(616), 1,
      anon_sym_SQUOTE,
    ACTIONS(618), 1,
      aux_sym__single_quoted_token1,
    ACTIONS(620), 1,
      sym_escape,
    STATE(165), 1,
      aux_sym__single_quoted_repeat1,
  [3572] = 4,
    ACTIONS(622), 1,
      anon_sym_DQUOTE2,
    ACTIONS(624), 1,
      aux_sym__double_quoted_token1,
    ACTIONS(626), 1,
      sym_escape,
    STATE(166), 1,
      aux_sym__double_quoted_repeat1,
  [3585] = 4,
    ACTIONS(581), 1,
      aux_sym__single_quoted_token1,
    ACTIONS(583), 1,
      sym_escape,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(153), 1,
      aux_sym__single_quoted_repeat1,
  [3598] = 4,
    ACTIONS(609), 1,
      aux_sym__double_quoted_token1,
    ACTIONS(611), 1,
      sym_escape,
    ACTIONS(630), 1,
      anon_sym_DQUOTE2,
    STATE(156), 1,
      aux_sym__double_quoted_repeat1,
  [3611] = 1,
    ACTIONS(370), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      anon_sym_RBRACE2,
  [3618] = 3,
    ACTIONS(632), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(634), 1,
      aux_sym_codeblock_content_token1,
    STATE(168), 1,
      aux_sym_codeblock_content_repeat1,
  [3628] = 3,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      sym_connection,
    STATE(169), 1,
      aux_sym__expr_repeat1,
  [3638] = 3,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_arguments_repeat2,
  [3648] = 3,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_arguments_repeat2,
  [3658] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      sym_argument_type,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [3668] = 3,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      aux_sym_codeblock_content_token1,
    STATE(175), 1,
      aux_sym_codeblock_content_repeat1,
  [3678] = 2,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(657), 2,
      ts_builtin_sym_end,
      sym__eol,
  [3686] = 3,
    ACTIONS(632), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(661), 1,
      aux_sym_codeblock_content_token1,
    STATE(175), 1,
      aux_sym_codeblock_content_repeat1,
  [3696] = 3,
    ACTIONS(664), 1,
      aux_sym_codeblock_content_token1,
    STATE(189), 1,
      aux_sym_codeblock_content_repeat1,
    STATE(237), 1,
      sym_codeblock_content,
  [3706] = 3,
    ACTIONS(666), 1,
      aux_sym_codeblock_content_token1,
    STATE(173), 1,
      aux_sym_codeblock_content_repeat1,
    STATE(239), 1,
      sym_codeblock_content,
  [3716] = 3,
    ACTIONS(362), 1,
      anon_sym_RBRACE2,
    ACTIONS(668), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_identifier_chain_repeat1,
  [3726] = 3,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 1,
      sym_connection,
    STATE(184), 1,
      aux_sym__expr_repeat1,
  [3736] = 3,
    ACTIONS(354), 1,
      anon_sym_RBRACE2,
    ACTIONS(672), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_identifier_chain_repeat1,
  [3746] = 3,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_arguments_repeat2,
  [3756] = 3,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_arguments_repeat2,
  [3766] = 3,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      sym_argument_type,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [3776] = 3,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 1,
      sym_connection,
    STATE(169), 1,
      aux_sym__expr_repeat1,
  [3786] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(682), 1,
      sym_argument_type,
    STATE(187), 1,
      aux_sym_arguments_repeat1,
  [3796] = 3,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_arguments_repeat2,
  [3806] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      sym_argument_type,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [3816] = 3,
    ACTIONS(348), 1,
      anon_sym_RBRACE2,
    ACTIONS(668), 1,
      anon_sym_DOT,
    STATE(178), 1,
      aux_sym_identifier_chain_repeat1,
  [3826] = 3,
    ACTIONS(653), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(688), 1,
      aux_sym_codeblock_content_token1,
    STATE(168), 1,
      aux_sym_codeblock_content_repeat1,
  [3836] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      sym_argument_type,
    STATE(172), 1,
      aux_sym_arguments_repeat1,
  [3846] = 2,
    ACTIONS(692), 1,
      ts_builtin_sym_end,
    ACTIONS(694), 1,
      sym__eol,
  [3853] = 1,
    ACTIONS(696), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3858] = 2,
    ACTIONS(694), 1,
      sym__eol,
    ACTIONS(698), 1,
      anon_sym_RBRACE,
  [3865] = 1,
    ACTIONS(700), 2,
      anon_sym_COMMA,
      sym_argument_type,
  [3870] = 1,
    ACTIONS(393), 2,
      anon_sym_RPAREN,
      sym_connection,
  [3875] = 2,
    ACTIONS(702), 1,
      anon_sym_LBRACK2,
    STATE(76), 1,
      sym_connection_identifier,
  [3882] = 2,
    ACTIONS(510), 1,
      aux_sym_argument_name_token1,
    STATE(202), 1,
      sym_argument_name,
  [3889] = 1,
    ACTIONS(632), 2,
      anon_sym_PIPE_PIPE,
      aux_sym_codeblock_content_token1,
  [3894] = 1,
    ACTIONS(632), 2,
      anon_sym_PIPE_PIPE_PIPE,
      aux_sym_codeblock_content_token1,
  [3899] = 1,
    ACTIONS(704), 2,
      aux_sym_connection_identifier_token1,
      sym_glob,
  [3904] = 2,
    ACTIONS(706), 1,
      anon_sym_LBRACK2,
    STATE(167), 1,
      sym_connection_identifier,
  [3911] = 1,
    ACTIONS(680), 2,
      anon_sym_COMMA,
      sym_argument_type,
  [3916] = 2,
    ACTIONS(694), 1,
      sym__eol,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [3923] = 1,
    ACTIONS(710), 2,
      aux_sym_connection_identifier_token1,
      sym_glob,
  [3928] = 2,
    ACTIONS(510), 1,
      aux_sym_argument_name_token1,
    STATE(190), 1,
      sym_argument_name,
  [3935] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(694), 1,
      sym__eol,
  [3942] = 1,
    ACTIONS(712), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3947] = 1,
    ACTIONS(714), 1,
      anon_sym_LBRACE2,
  [3951] = 1,
    ACTIONS(716), 1,
      ts_builtin_sym_end,
  [3955] = 1,
    ACTIONS(718), 1,
      anon_sym_RBRACE2,
  [3959] = 1,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [3963] = 1,
    ACTIONS(694), 1,
      sym__eol,
  [3967] = 1,
    ACTIONS(722), 1,
      aux_sym__label_codeblock_single_token1,
  [3971] = 1,
    ACTIONS(724), 1,
      anon_sym_RBRACK2,
  [3975] = 1,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
  [3979] = 1,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
  [3983] = 1,
    ACTIONS(728), 1,
      aux_sym__label_codeblock_ticks_token1,
  [3987] = 1,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
  [3991] = 1,
    ACTIONS(732), 1,
      anon_sym_RBRACE2,
  [3995] = 1,
    ACTIONS(734), 1,
      anon_sym_RBRACE2,
  [3999] = 1,
    ACTIONS(736), 1,
      anon_sym_RBRACK2,
  [4003] = 1,
    ACTIONS(738), 1,
      aux_sym_codeblock_content_token2,
  [4007] = 1,
    ACTIONS(740), 1,
      anon_sym_LBRACE2,
  [4011] = 1,
    ACTIONS(742), 1,
      anon_sym_RBRACE2,
  [4015] = 1,
    ACTIONS(744), 1,
      anon_sym_RBRACE2,
  [4019] = 1,
    ACTIONS(746), 1,
      anon_sym_RBRACE2,
  [4023] = 1,
    ACTIONS(748), 1,
      anon_sym_RBRACE2,
  [4027] = 1,
    ACTIONS(750), 1,
      anon_sym_RBRACE2,
  [4031] = 1,
    ACTIONS(752), 1,
      anon_sym_RBRACE2,
  [4035] = 1,
    ACTIONS(754), 1,
      anon_sym_RBRACE2,
  [4039] = 1,
    ACTIONS(756), 1,
      anon_sym_RBRACE2,
  [4043] = 1,
    ACTIONS(758), 1,
      anon_sym_RBRACE2,
  [4047] = 1,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
  [4051] = 1,
    ACTIONS(762), 1,
      anon_sym_BQUOTE_PIPE,
  [4055] = 1,
    ACTIONS(764), 1,
      aux_sym_codeblock_content_token2,
  [4059] = 1,
    ACTIONS(766), 1,
      sym_codeblock_language,
  [4063] = 1,
    ACTIONS(768), 1,
      anon_sym_PIPE_PIPE_PIPE,
  [4067] = 1,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [4071] = 1,
    ACTIONS(772), 1,
      anon_sym_PIPE_PIPE,
  [4075] = 1,
    ACTIONS(774), 1,
      anon_sym_PIPE,
  [4079] = 1,
    ACTIONS(776), 1,
      sym_codeblock_language,
  [4083] = 1,
    ACTIONS(778), 1,
      sym_codeblock_language,
  [4087] = 1,
    ACTIONS(780), 1,
      sym_codeblock_language,
  [4091] = 1,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
  [4095] = 1,
    ACTIONS(784), 1,
      anon_sym_LBRACE2,
  [4099] = 1,
    ACTIONS(786), 1,
      anon_sym_LBRACE2,
  [4103] = 1,
    ACTIONS(788), 1,
      anon_sym_LBRACE2,
  [4107] = 1,
    ACTIONS(790), 1,
      anon_sym_LBRACE2,
  [4111] = 1,
    ACTIONS(792), 1,
      anon_sym_LBRACE2,
  [4115] = 1,
    ACTIONS(794), 1,
      anon_sym_LBRACE2,
  [4119] = 1,
    ACTIONS(796), 1,
      anon_sym_LBRACE2,
  [4123] = 1,
    ACTIONS(798), 1,
      aux_sym__label_literal_token1,
  [4127] = 1,
    ACTIONS(800), 1,
      anon_sym_LBRACE2,
  [4131] = 1,
    ACTIONS(802), 1,
      anon_sym_LBRACE2,
  [4135] = 1,
    ACTIONS(804), 1,
      anon_sym_LBRACE2,
  [4139] = 1,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 88,
  [SMALL_STATE(4)] = 175,
  [SMALL_STATE(5)] = 262,
  [SMALL_STATE(6)] = 349,
  [SMALL_STATE(7)] = 429,
  [SMALL_STATE(8)] = 509,
  [SMALL_STATE(9)] = 564,
  [SMALL_STATE(10)] = 619,
  [SMALL_STATE(11)] = 671,
  [SMALL_STATE(12)] = 723,
  [SMALL_STATE(13)] = 775,
  [SMALL_STATE(14)] = 827,
  [SMALL_STATE(15)] = 879,
  [SMALL_STATE(16)] = 931,
  [SMALL_STATE(17)] = 983,
  [SMALL_STATE(18)] = 1035,
  [SMALL_STATE(19)] = 1087,
  [SMALL_STATE(20)] = 1139,
  [SMALL_STATE(21)] = 1191,
  [SMALL_STATE(22)] = 1243,
  [SMALL_STATE(23)] = 1295,
  [SMALL_STATE(24)] = 1347,
  [SMALL_STATE(25)] = 1399,
  [SMALL_STATE(26)] = 1447,
  [SMALL_STATE(27)] = 1495,
  [SMALL_STATE(28)] = 1543,
  [SMALL_STATE(29)] = 1591,
  [SMALL_STATE(30)] = 1613,
  [SMALL_STATE(31)] = 1640,
  [SMALL_STATE(32)] = 1667,
  [SMALL_STATE(33)] = 1692,
  [SMALL_STATE(34)] = 1717,
  [SMALL_STATE(35)] = 1741,
  [SMALL_STATE(36)] = 1765,
  [SMALL_STATE(37)] = 1785,
  [SMALL_STATE(38)] = 1805,
  [SMALL_STATE(39)] = 1823,
  [SMALL_STATE(40)] = 1847,
  [SMALL_STATE(41)] = 1865,
  [SMALL_STATE(42)] = 1889,
  [SMALL_STATE(43)] = 1906,
  [SMALL_STATE(44)] = 1931,
  [SMALL_STATE(45)] = 1946,
  [SMALL_STATE(46)] = 1971,
  [SMALL_STATE(47)] = 1986,
  [SMALL_STATE(48)] = 2001,
  [SMALL_STATE(49)] = 2026,
  [SMALL_STATE(50)] = 2041,
  [SMALL_STATE(51)] = 2066,
  [SMALL_STATE(52)] = 2091,
  [SMALL_STATE(53)] = 2104,
  [SMALL_STATE(54)] = 2117,
  [SMALL_STATE(55)] = 2142,
  [SMALL_STATE(56)] = 2167,
  [SMALL_STATE(57)] = 2191,
  [SMALL_STATE(58)] = 2207,
  [SMALL_STATE(59)] = 2231,
  [SMALL_STATE(60)] = 2253,
  [SMALL_STATE(61)] = 2273,
  [SMALL_STATE(62)] = 2287,
  [SMALL_STATE(63)] = 2309,
  [SMALL_STATE(64)] = 2323,
  [SMALL_STATE(65)] = 2343,
  [SMALL_STATE(66)] = 2357,
  [SMALL_STATE(67)] = 2379,
  [SMALL_STATE(68)] = 2393,
  [SMALL_STATE(69)] = 2417,
  [SMALL_STATE(70)] = 2436,
  [SMALL_STATE(71)] = 2455,
  [SMALL_STATE(72)] = 2472,
  [SMALL_STATE(73)] = 2485,
  [SMALL_STATE(74)] = 2502,
  [SMALL_STATE(75)] = 2519,
  [SMALL_STATE(76)] = 2536,
  [SMALL_STATE(77)] = 2549,
  [SMALL_STATE(78)] = 2566,
  [SMALL_STATE(79)] = 2579,
  [SMALL_STATE(80)] = 2596,
  [SMALL_STATE(81)] = 2609,
  [SMALL_STATE(82)] = 2622,
  [SMALL_STATE(83)] = 2638,
  [SMALL_STATE(84)] = 2654,
  [SMALL_STATE(85)] = 2670,
  [SMALL_STATE(86)] = 2686,
  [SMALL_STATE(87)] = 2698,
  [SMALL_STATE(88)] = 2714,
  [SMALL_STATE(89)] = 2730,
  [SMALL_STATE(90)] = 2746,
  [SMALL_STATE(91)] = 2760,
  [SMALL_STATE(92)] = 2774,
  [SMALL_STATE(93)] = 2790,
  [SMALL_STATE(94)] = 2802,
  [SMALL_STATE(95)] = 2814,
  [SMALL_STATE(96)] = 2832,
  [SMALL_STATE(97)] = 2848,
  [SMALL_STATE(98)] = 2859,
  [SMALL_STATE(99)] = 2872,
  [SMALL_STATE(100)] = 2889,
  [SMALL_STATE(101)] = 2902,
  [SMALL_STATE(102)] = 2915,
  [SMALL_STATE(103)] = 2926,
  [SMALL_STATE(104)] = 2937,
  [SMALL_STATE(105)] = 2950,
  [SMALL_STATE(106)] = 2965,
  [SMALL_STATE(107)] = 2976,
  [SMALL_STATE(108)] = 2987,
  [SMALL_STATE(109)] = 2998,
  [SMALL_STATE(110)] = 3009,
  [SMALL_STATE(111)] = 3020,
  [SMALL_STATE(112)] = 3031,
  [SMALL_STATE(113)] = 3046,
  [SMALL_STATE(114)] = 3059,
  [SMALL_STATE(115)] = 3070,
  [SMALL_STATE(116)] = 3081,
  [SMALL_STATE(117)] = 3092,
  [SMALL_STATE(118)] = 3102,
  [SMALL_STATE(119)] = 3118,
  [SMALL_STATE(120)] = 3128,
  [SMALL_STATE(121)] = 3138,
  [SMALL_STATE(122)] = 3148,
  [SMALL_STATE(123)] = 3160,
  [SMALL_STATE(124)] = 3168,
  [SMALL_STATE(125)] = 3178,
  [SMALL_STATE(126)] = 3194,
  [SMALL_STATE(127)] = 3204,
  [SMALL_STATE(128)] = 3214,
  [SMALL_STATE(129)] = 3226,
  [SMALL_STATE(130)] = 3236,
  [SMALL_STATE(131)] = 3246,
  [SMALL_STATE(132)] = 3256,
  [SMALL_STATE(133)] = 3264,
  [SMALL_STATE(134)] = 3272,
  [SMALL_STATE(135)] = 3280,
  [SMALL_STATE(136)] = 3288,
  [SMALL_STATE(137)] = 3298,
  [SMALL_STATE(138)] = 3308,
  [SMALL_STATE(139)] = 3318,
  [SMALL_STATE(140)] = 3328,
  [SMALL_STATE(141)] = 3338,
  [SMALL_STATE(142)] = 3348,
  [SMALL_STATE(143)] = 3358,
  [SMALL_STATE(144)] = 3370,
  [SMALL_STATE(145)] = 3377,
  [SMALL_STATE(146)] = 3390,
  [SMALL_STATE(147)] = 3403,
  [SMALL_STATE(148)] = 3410,
  [SMALL_STATE(149)] = 3423,
  [SMALL_STATE(150)] = 3430,
  [SMALL_STATE(151)] = 3443,
  [SMALL_STATE(152)] = 3450,
  [SMALL_STATE(153)] = 3461,
  [SMALL_STATE(154)] = 3474,
  [SMALL_STATE(155)] = 3481,
  [SMALL_STATE(156)] = 3490,
  [SMALL_STATE(157)] = 3503,
  [SMALL_STATE(158)] = 3510,
  [SMALL_STATE(159)] = 3523,
  [SMALL_STATE(160)] = 3530,
  [SMALL_STATE(161)] = 3541,
  [SMALL_STATE(162)] = 3548,
  [SMALL_STATE(163)] = 3559,
  [SMALL_STATE(164)] = 3572,
  [SMALL_STATE(165)] = 3585,
  [SMALL_STATE(166)] = 3598,
  [SMALL_STATE(167)] = 3611,
  [SMALL_STATE(168)] = 3618,
  [SMALL_STATE(169)] = 3628,
  [SMALL_STATE(170)] = 3638,
  [SMALL_STATE(171)] = 3648,
  [SMALL_STATE(172)] = 3658,
  [SMALL_STATE(173)] = 3668,
  [SMALL_STATE(174)] = 3678,
  [SMALL_STATE(175)] = 3686,
  [SMALL_STATE(176)] = 3696,
  [SMALL_STATE(177)] = 3706,
  [SMALL_STATE(178)] = 3716,
  [SMALL_STATE(179)] = 3726,
  [SMALL_STATE(180)] = 3736,
  [SMALL_STATE(181)] = 3746,
  [SMALL_STATE(182)] = 3756,
  [SMALL_STATE(183)] = 3766,
  [SMALL_STATE(184)] = 3776,
  [SMALL_STATE(185)] = 3786,
  [SMALL_STATE(186)] = 3796,
  [SMALL_STATE(187)] = 3806,
  [SMALL_STATE(188)] = 3816,
  [SMALL_STATE(189)] = 3826,
  [SMALL_STATE(190)] = 3836,
  [SMALL_STATE(191)] = 3846,
  [SMALL_STATE(192)] = 3853,
  [SMALL_STATE(193)] = 3858,
  [SMALL_STATE(194)] = 3865,
  [SMALL_STATE(195)] = 3870,
  [SMALL_STATE(196)] = 3875,
  [SMALL_STATE(197)] = 3882,
  [SMALL_STATE(198)] = 3889,
  [SMALL_STATE(199)] = 3894,
  [SMALL_STATE(200)] = 3899,
  [SMALL_STATE(201)] = 3904,
  [SMALL_STATE(202)] = 3911,
  [SMALL_STATE(203)] = 3916,
  [SMALL_STATE(204)] = 3923,
  [SMALL_STATE(205)] = 3928,
  [SMALL_STATE(206)] = 3935,
  [SMALL_STATE(207)] = 3942,
  [SMALL_STATE(208)] = 3947,
  [SMALL_STATE(209)] = 3951,
  [SMALL_STATE(210)] = 3955,
  [SMALL_STATE(211)] = 3959,
  [SMALL_STATE(212)] = 3963,
  [SMALL_STATE(213)] = 3967,
  [SMALL_STATE(214)] = 3971,
  [SMALL_STATE(215)] = 3975,
  [SMALL_STATE(216)] = 3979,
  [SMALL_STATE(217)] = 3983,
  [SMALL_STATE(218)] = 3987,
  [SMALL_STATE(219)] = 3991,
  [SMALL_STATE(220)] = 3995,
  [SMALL_STATE(221)] = 3999,
  [SMALL_STATE(222)] = 4003,
  [SMALL_STATE(223)] = 4007,
  [SMALL_STATE(224)] = 4011,
  [SMALL_STATE(225)] = 4015,
  [SMALL_STATE(226)] = 4019,
  [SMALL_STATE(227)] = 4023,
  [SMALL_STATE(228)] = 4027,
  [SMALL_STATE(229)] = 4031,
  [SMALL_STATE(230)] = 4035,
  [SMALL_STATE(231)] = 4039,
  [SMALL_STATE(232)] = 4043,
  [SMALL_STATE(233)] = 4047,
  [SMALL_STATE(234)] = 4051,
  [SMALL_STATE(235)] = 4055,
  [SMALL_STATE(236)] = 4059,
  [SMALL_STATE(237)] = 4063,
  [SMALL_STATE(238)] = 4067,
  [SMALL_STATE(239)] = 4071,
  [SMALL_STATE(240)] = 4075,
  [SMALL_STATE(241)] = 4079,
  [SMALL_STATE(242)] = 4083,
  [SMALL_STATE(243)] = 4087,
  [SMALL_STATE(244)] = 4091,
  [SMALL_STATE(245)] = 4095,
  [SMALL_STATE(246)] = 4099,
  [SMALL_STATE(247)] = 4103,
  [SMALL_STATE(248)] = 4107,
  [SMALL_STATE(249)] = 4111,
  [SMALL_STATE(250)] = 4115,
  [SMALL_STATE(251)] = 4119,
  [SMALL_STATE(252)] = 4123,
  [SMALL_STATE(253)] = 4127,
  [SMALL_STATE(254)] = 4131,
  [SMALL_STATE(255)] = 4135,
  [SMALL_STATE(256)] = 4139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_token, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_token, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ident_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ident, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident_repeat1, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ident_repeat1, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__single_top_level_identifier, 1, 0, 0), REDUCE(sym__ident_base, 1, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__single_top_level_identifier, 1, 0, 0), REDUCE(sym__ident_base, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ident_base, 1, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread_variable, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_spread_variable, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted, 3, 0, 0),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_top_level_identifier, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_top_level_identifier, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_token_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__label_double_quoted_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_double_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_double_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_double_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_double_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted, 3, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_constraints_repeat2, 2, 0, 0), SHIFT_REPEAT(132),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_constraints_repeat2, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_constraints_repeat2, 2, 0, 0), SHIFT_REPEAT(248),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_constraints_repeat2, 2, 0, 0), SHIFT_REPEAT(249),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_chain, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_chain, 2, 0, 0),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_reference, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection_reference, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_identifier, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection_identifier, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 2, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 2, 0, 0),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_block, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_block, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_literal, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_literal, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_literal, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_literal, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_codeblock_single, 4, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_codeblock_single, 4, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_constraints_repeat1, 2, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_constraints_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_constraints, 2, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_constraints, 2, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_constraints_repeat2, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_codeblock, 1, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_codeblock, 1, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_double_quoted, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_double_quoted, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_double_quoted, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_double_quoted, 3, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_constraints, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_constraints, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_codeblock_ticks, 4, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_codeblock_ticks, 4, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_codeblock_triple, 4, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_codeblock_triple, 4, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label_codeblock_double, 4, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label_codeblock_double, 4, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 7, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 7, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 8, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 8, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_constraint, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_block, 3, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_block, 3, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quoted_repeat1, 2, 0, 0),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__label_literal_repeat1, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_literal_repeat1, 2, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quoted_repeat1, 2, 0, 0),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quoted_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_content_repeat1, 2, 0, 0),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_content_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2, 0, 0), SHIFT_REPEAT(205),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock_content, 1, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 2, 0, 0),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_content_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_chain_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 4, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_name, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [716] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returns, 1, 0, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_d2(void) {
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
