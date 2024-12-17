#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 18

enum {
  sym__ident_base = 1,
  sym_comment = 2,
  anon_sym_COLON = 3,
  aux_sym_declaration_token1 = 4,
  anon_sym_LPAREN = 5,
  aux_sym_method_declaration_token1 = 6,
  anon_sym_RPAREN = 7,
  sym_connection = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  aux_sym_label_token1 = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_PIPE_BQUOTE = 14,
  aux_sym_label_codeblock_token1 = 15,
  anon_sym_BQUOTE_PIPE = 16,
  anon_sym_PIPE_PIPE_PIPE = 17,
  anon_sym_PIPE_PIPE = 18,
  anon_sym_PIPE = 19,
  aux_sym_label_codeblock_token2 = 20,
  sym__label_codeblock_lang = 21,
  aux_sym__label_codeblock_body_token1 = 22,
  aux_sym__label_codeblock_body_token2 = 23,
  anon_sym_SEMI = 24,
  sym_label_constraint = 25,
  anon_sym_BSLASH_LBRACE = 26,
  aux_sym__label_base_token1 = 27,
  sym_connection_identifier = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_identifier_token1 = 30,
  anon_sym_DOT = 31,
  aux_sym__ident_token1 = 32,
  sym_escape_sequence = 33,
  sym_source_file = 34,
  sym_declaration = 35,
  sym__expr = 36,
  sym_method_declaration = 37,
  sym_block = 38,
  sym_label = 39,
  sym_label_codeblock = 40,
  aux_sym__label_codeblock_body = 41,
  aux_sym__label_constraints = 42,
  sym__label_base = 43,
  sym_connection_refference = 44,
  sym_identifier = 45,
  sym__identifier_base = 46,
  aux_sym__fields = 47,
  aux_sym__ident = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym__expr_repeat1 = 50,
  aux_sym_block_repeat1 = 51,
  aux_sym_label_repeat1 = 52,
  aux_sym_identifier_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ident_base] = "_ident_base",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [aux_sym_declaration_token1] = "declaration_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_method_declaration_token1] = "method_declaration_token1",
  [anon_sym_RPAREN] = ")",
  [sym_connection] = "connection",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE_BQUOTE] = "|`",
  [aux_sym_label_codeblock_token1] = "label_codeblock_token1",
  [anon_sym_BQUOTE_PIPE] = "`|",
  [anon_sym_PIPE_PIPE_PIPE] = "|||",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PIPE] = "|",
  [aux_sym_label_codeblock_token2] = "label_codeblock_token2",
  [sym__label_codeblock_lang] = "_label_codeblock_lang",
  [aux_sym__label_codeblock_body_token1] = "_label_codeblock_body_token1",
  [aux_sym__label_codeblock_body_token2] = "_label_codeblock_body_token2",
  [anon_sym_SEMI] = ";",
  [sym_label_constraint] = "label_constraint",
  [anon_sym_BSLASH_LBRACE] = "\\{",
  [aux_sym__label_base_token1] = "_label_base_token1",
  [sym_connection_identifier] = "connection_identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_DOT] = ".",
  [aux_sym__ident_token1] = "_ident_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym__expr] = "_expr",
  [sym_method_declaration] = "method_declaration",
  [sym_block] = "block",
  [sym_label] = "label",
  [sym_label_codeblock] = "label_codeblock",
  [aux_sym__label_codeblock_body] = "_label_codeblock_body",
  [aux_sym__label_constraints] = "_label_constraints",
  [sym__label_base] = "_label_base",
  [sym_connection_refference] = "connection_refference",
  [sym_identifier] = "identifier",
  [sym__identifier_base] = "_identifier_base",
  [aux_sym__fields] = "_fields",
  [aux_sym__ident] = "_ident",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__expr_repeat1] = "_expr_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_label_repeat1] = "label_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ident_base] = sym__ident_base,
  [sym_comment] = sym_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_declaration_token1] = aux_sym_declaration_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_method_declaration_token1] = aux_sym_method_declaration_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_connection] = sym_connection,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE_BQUOTE] = anon_sym_PIPE_BQUOTE,
  [aux_sym_label_codeblock_token1] = aux_sym_label_codeblock_token1,
  [anon_sym_BQUOTE_PIPE] = anon_sym_BQUOTE_PIPE,
  [anon_sym_PIPE_PIPE_PIPE] = anon_sym_PIPE_PIPE_PIPE,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_label_codeblock_token2] = aux_sym_label_codeblock_token2,
  [sym__label_codeblock_lang] = sym__label_codeblock_lang,
  [aux_sym__label_codeblock_body_token1] = aux_sym__label_codeblock_body_token1,
  [aux_sym__label_codeblock_body_token2] = aux_sym__label_codeblock_body_token2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_label_constraint] = sym_label_constraint,
  [anon_sym_BSLASH_LBRACE] = anon_sym_BSLASH_LBRACE,
  [aux_sym__label_base_token1] = aux_sym__label_base_token1,
  [sym_connection_identifier] = sym_connection_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__ident_token1] = aux_sym__ident_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym__expr] = sym__expr,
  [sym_method_declaration] = sym_method_declaration,
  [sym_block] = sym_block,
  [sym_label] = sym_label,
  [sym_label_codeblock] = sym_label_codeblock,
  [aux_sym__label_codeblock_body] = aux_sym__label_codeblock_body,
  [aux_sym__label_constraints] = aux_sym__label_constraints,
  [sym__label_base] = sym__label_base,
  [sym_connection_refference] = sym_connection_refference,
  [sym_identifier] = sym_identifier,
  [sym__identifier_base] = sym__identifier_base,
  [aux_sym__fields] = aux_sym__fields,
  [aux_sym__ident] = aux_sym__ident,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__expr_repeat1] = aux_sym__expr_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_label_repeat1] = aux_sym_label_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__ident_base] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_method_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_connection] = {
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
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_codeblock_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_label_codeblock_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__label_codeblock_lang] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__label_codeblock_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_codeblock_body_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_label_constraint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__label_base_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_connection_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ident_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
  [sym_method_declaration] = {
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
  [aux_sym__label_codeblock_body] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__label_constraints] = {
    .visible = false,
    .named = false,
  },
  [sym__label_base] = {
    .visible = false,
    .named = true,
  },
  [sym_connection_refference] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_base] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__fields] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ident] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_block = 1,
  field_connection = 2,
  field_connection_identifier = 3,
  field_field = 4,
  field_identifier = 5,
  field_label = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block] = "block",
  [field_connection] = "connection",
  [field_connection_identifier] = "connection_identifier",
  [field_field] = "field",
  [field_identifier] = "identifier",
  [field_label] = "label",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 4},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 4},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_connection, 0, .inherited = true},
    {field_identifier, 0, .inherited = true},
  [2] =
    {field_identifier, 0},
  [3] =
    {field_field, 0, .inherited = true},
  [4] =
    {field_connection, 1, .inherited = true},
    {field_identifier, 0},
    {field_identifier, 1, .inherited = true},
  [7] =
    {field_field, 1, .inherited = true},
  [8] =
    {field_block, 2},
    {field_connection, 0, .inherited = true},
    {field_identifier, 0, .inherited = true},
  [11] =
    {field_connection, 0, .inherited = true},
    {field_identifier, 0, .inherited = true},
    {field_label, 2},
  [14] =
    {field_block, 2},
  [15] =
    {field_label, 2},
  [16] =
    {field_connection, 0},
    {field_identifier, 1},
  [18] =
    {field_connection, 0, .inherited = true},
    {field_connection, 1, .inherited = true},
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
  [22] =
    {field_field, 1},
  [23] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [25] =
    {field_connection, 1, .inherited = true},
    {field_connection_identifier, 3},
    {field_identifier, 1, .inherited = true},
  [28] =
    {field_block, 3},
    {field_connection, 0, .inherited = true},
    {field_identifier, 0, .inherited = true},
    {field_label, 2},
  [32] =
    {field_block, 3},
    {field_label, 2},
  [34] =
    {field_connection, 1, .inherited = true},
    {field_connection_identifier, 3},
    {field_field, 4, .inherited = true},
    {field_identifier, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 13,
  [18] = 14,
  [19] = 13,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 24,
  [28] = 22,
  [29] = 21,
  [30] = 13,
  [31] = 25,
  [32] = 13,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 25,
  [41] = 22,
  [42] = 34,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 38,
  [47] = 47,
  [48] = 48,
  [49] = 36,
  [50] = 23,
  [51] = 47,
  [52] = 48,
  [53] = 45,
  [54] = 43,
  [55] = 44,
  [56] = 23,
  [57] = 21,
  [58] = 25,
  [59] = 21,
  [60] = 22,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 63,
  [66] = 61,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 67,
  [72] = 72,
  [73] = 70,
  [74] = 74,
  [75] = 13,
  [76] = 72,
  [77] = 13,
  [78] = 78,
  [79] = 78,
  [80] = 80,
  [81] = 74,
  [82] = 80,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 86,
  [90] = 23,
  [91] = 91,
  [92] = 91,
  [93] = 84,
  [94] = 94,
  [95] = 86,
  [96] = 84,
  [97] = 88,
  [98] = 86,
  [99] = 21,
  [100] = 100,
  [101] = 85,
  [102] = 94,
  [103] = 83,
  [104] = 100,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 22,
  [110] = 107,
  [111] = 25,
  [112] = 112,
  [113] = 106,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 37,
  [118] = 114,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 112,
  [124] = 124,
  [125] = 105,
  [126] = 122,
  [127] = 120,
  [128] = 124,
  [129] = 119,
  [130] = 116,
  [131] = 115,
  [132] = 108,
  [133] = 112,
  [134] = 124,
  [135] = 135,
  [136] = 136,
  [137] = 48,
  [138] = 47,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 140,
  [144] = 33,
  [145] = 36,
  [146] = 38,
  [147] = 34,
  [148] = 43,
  [149] = 139,
  [150] = 141,
  [151] = 142,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 61,
  [156] = 154,
  [157] = 157,
  [158] = 158,
  [159] = 158,
  [160] = 152,
  [161] = 153,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 168,
  [172] = 166,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 165,
  [177] = 167,
  [178] = 164,
  [179] = 170,
  [180] = 162,
  [181] = 169,
  [182] = 182,
  [183] = 183,
  [184] = 175,
  [185] = 183,
  [186] = 182,
  [187] = 174,
  [188] = 173,
};

static inline bool sym__ident_base_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < '/'
                  ? c == '*'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__ident_base_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < '_'
                ? (c < '/'
                  ? c == '*'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__ident_base_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '/'
                  ? c == '*'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('%' <= lookahead && lookahead <= '\'') ||
          lookahead == ',' ||
          lookahead == '?') ADVANCE(83);
      if (sym__ident_base_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == ',') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (sym__ident_base_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(55);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 20:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (sym__ident_base_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 21:
      if (eof) ADVANCE(26);
      if (lookahead == 0 ||
          lookahead == ';') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('%' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(83);
      if (sym__ident_base_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 22:
      if (eof) ADVANCE(26);
      if (lookahead == 0 ||
          lookahead == ';') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('%' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(83);
      if (sym__ident_base_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 23:
      if (eof) ADVANCE(26);
      if (lookahead == 0 ||
          lookahead == ';') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (sym__ident_base_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == 0 ||
          lookahead == ';') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',') ADVANCE(96);
      if (sym__ident_base_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == 0 ||
          lookahead == ';') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '-') ADVANCE(96);
      if (sym__ident_base_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(54);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(65);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_declaration_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_declaration_token1);
      if (lookahead == 0 ||
          lookahead == ';') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_method_declaration_token1);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_method_declaration_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '(') ADVANCE(1);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_method_declaration_token1);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_method_declaration_token1);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_connection);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_connection);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE_BQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_label_codeblock_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '`') ADVANCE(1);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_label_codeblock_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '`') ADVANCE(1);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_label_codeblock_token1);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_label_codeblock_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BQUOTE_PIPE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '|') ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '|') ADVANCE(58);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_label_codeblock_token2);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '|') ADVANCE(1);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_label_codeblock_token2);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '|') ADVANCE(1);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_label_codeblock_token2);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_label_codeblock_token2);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token1);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token1);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token1);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token1);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token1);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token1);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__label_codeblock_body_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_label_constraint);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__label_base_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '#' ||
          ('%' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == '\\' ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__label_base_token1);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '#' ||
          ('%' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__label_base_token1);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == '#' ||
          ('%' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == '\\') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__label_base_token1);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '#' ||
          ('%' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == '\\' ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__label_base_token1);
      if (lookahead == '#' ||
          ('%' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '?' ||
          lookahead == '\\' ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_connection_identifier);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == ',') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == 0 ||
          lookahead == ';') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == 0 ||
          lookahead == ';') ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__ident_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == '-') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__ident_base);
      if (sym__ident_base_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(sym__label_codeblock_lang);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 20},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 20},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 20},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 20},
  [147] = {.lex_state = 20},
  [148] = {.lex_state = 20},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 53},
  [165] = {.lex_state = 38},
  [166] = {.lex_state = 20},
  [167] = {.lex_state = 75},
  [168] = {.lex_state = 20},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 20},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 20},
  [173] = {.lex_state = 20},
  [174] = {.lex_state = 20},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 38},
  [177] = {.lex_state = 75},
  [178] = {.lex_state = 53},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 20},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 20},
  [184] = {.lex_state = 20},
  [185] = {.lex_state = 20},
  [186] = {.lex_state = 20},
  [187] = {.lex_state = 20},
  [188] = {.lex_state = 20},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ident_base] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_connection] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym__label_codeblock_lang] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(1),
    [aux_sym__label_base_token1] = ACTIONS(1),
    [sym_connection_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(163),
    [sym_declaration] = STATE(12),
    [sym__expr] = STATE(79),
    [sym_method_declaration] = STATE(80),
    [sym_connection_refference] = STATE(80),
    [sym_identifier] = STATE(54),
    [sym__identifier_base] = STATE(34),
    [aux_sym__ident] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__ident_base] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_declaration_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_label_token1,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(31), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      sym_label,
    STATE(70), 1,
      sym_label_codeblock,
    STATE(102), 1,
      sym_block,
    STATE(15), 2,
      sym__label_base,
      aux_sym_label_repeat1,
    ACTIONS(15), 3,
      anon_sym_BSLASH_LBRACE,
      aux_sym__label_base_token1,
      sym__ident_base,
    ACTIONS(19), 3,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [51] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_label_token1,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(31), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(35), 1,
      aux_sym_declaration_token1,
    STATE(62), 1,
      sym_label,
    STATE(70), 1,
      sym_label_codeblock,
    STATE(104), 1,
      sym_block,
    STATE(15), 2,
      sym__label_base,
      aux_sym_label_repeat1,
    ACTIONS(15), 3,
      anon_sym_BSLASH_LBRACE,
      aux_sym__label_base_token1,
      sym__ident_base,
    ACTIONS(37), 3,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [102] = 15,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym_declaration_token1,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      aux_sym_label_token1,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      sym_label,
    STATE(73), 1,
      sym_label_codeblock,
    STATE(100), 1,
      sym_block,
    STATE(20), 2,
      sym__label_base,
      aux_sym_label_repeat1,
    ACTIONS(37), 3,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
    ACTIONS(41), 3,
      anon_sym_BSLASH_LBRACE,
      aux_sym__label_base_token1,
      sym__ident_base,
  [153] = 15,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      aux_sym_label_token1,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_PIPE_BQUOTE,
    ACTIONS(53), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 1,
      anon_sym_PIPE,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_declaration_token1,
    STATE(65), 1,
      sym_label,
    STATE(73), 1,
      sym_label_codeblock,
    STATE(94), 1,
      sym_block,
    STATE(20), 2,
      sym__label_base,
      aux_sym_label_repeat1,
    ACTIONS(19), 3,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
    ACTIONS(41), 3,
      anon_sym_BSLASH_LBRACE,
      aux_sym__label_base_token1,
      sym__ident_base,
  [204] = 11,
    ACTIONS(63), 1,
      sym__ident_base,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym__ident,
    STATE(42), 1,
      sym__identifier_base,
    STATE(43), 1,
      sym_identifier,
    STATE(78), 1,
      sym__expr,
    STATE(10), 2,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(82), 2,
      sym_method_declaration,
      sym_connection_refference,
  [240] = 11,
    ACTIONS(63), 1,
      sym__ident_base,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__ident,
    STATE(42), 1,
      sym__identifier_base,
    STATE(43), 1,
      sym_identifier,
    STATE(78), 1,
      sym__expr,
    STATE(9), 2,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(82), 2,
      sym_method_declaration,
      sym_connection_refference,
  [276] = 11,
    ACTIONS(63), 1,
      sym__ident_base,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__ident,
    STATE(42), 1,
      sym__identifier_base,
    STATE(43), 1,
      sym_identifier,
    STATE(78), 1,
      sym__expr,
    STATE(7), 2,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(82), 2,
      sym_method_declaration,
      sym_connection_refference,
  [312] = 11,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__ident_base,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym__ident,
    STATE(42), 1,
      sym__identifier_base,
    STATE(43), 1,
      sym_identifier,
    STATE(78), 1,
      sym__expr,
    STATE(9), 2,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(82), 2,
      sym_method_declaration,
      sym_connection_refference,
  [348] = 11,
    ACTIONS(63), 1,
      sym__ident_base,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__ident,
    STATE(42), 1,
      sym__identifier_base,
    STATE(43), 1,
      sym_identifier,
    STATE(78), 1,
      sym__expr,
    STATE(9), 2,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(82), 2,
      sym_method_declaration,
      sym_connection_refference,
  [384] = 11,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym__ident_base,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym__ident,
    STATE(34), 1,
      sym__identifier_base,
    STATE(54), 1,
      sym_identifier,
    STATE(79), 1,
      sym__expr,
    STATE(11), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(80), 2,
      sym_method_declaration,
      sym_connection_refference,
  [420] = 11,
    ACTIONS(7), 1,
      sym__ident_base,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__ident,
    STATE(34), 1,
      sym__identifier_base,
    STATE(54), 1,
      sym_identifier,
    STATE(79), 1,
      sym__expr,
    STATE(11), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(80), 2,
      sym_method_declaration,
      sym_connection_refference,
  [456] = 5,
    ACTIONS(110), 1,
      sym__ident_base,
    STATE(28), 1,
      aux_sym__fields,
    STATE(29), 1,
      aux_sym__ident,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(112), 6,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      anon_sym_DOT,
  [478] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_declaration_token1,
    STATE(14), 2,
      sym__label_base,
      aux_sym_label_repeat1,
    ACTIONS(114), 3,
      anon_sym_BSLASH_LBRACE,
      aux_sym__label_base_token1,
      sym__ident_base,
    ACTIONS(119), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [500] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_declaration_token1,
    STATE(14), 2,
      sym__label_base,
      aux_sym_label_repeat1,
    ACTIONS(121), 3,
      anon_sym_BSLASH_LBRACE,
      aux_sym__label_base_token1,
      sym__ident_base,
    ACTIONS(125), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [522] = 6,
    ACTIONS(110), 1,
      sym__ident_base,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym__fields,
    STATE(29), 1,
      aux_sym__ident,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(112), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
  [546] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_declaration_token1,
    ACTIONS(129), 1,
      sym__ident_base,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym__ident,
    STATE(22), 1,
      aux_sym__fields,
    ACTIONS(112), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [572] = 4,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    STATE(18), 2,
      sym__label_base,
      aux_sym_label_repeat1,
    ACTIONS(133), 3,
      anon_sym_BSLASH_LBRACE,
      aux_sym__label_base_token1,
      sym__ident_base,
    ACTIONS(119), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [592] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_declaration_token1,
    ACTIONS(129), 1,
      sym__ident_base,
    STATE(21), 1,
      aux_sym__ident,
    STATE(22), 1,
      aux_sym__fields,
    ACTIONS(112), 6,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
  [616] = 4,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    STATE(18), 2,
      sym__label_base,
      aux_sym_label_repeat1,
    ACTIONS(136), 3,
      anon_sym_BSLASH_LBRACE,
      aux_sym__label_base_token1,
      sym__ident_base,
    ACTIONS(125), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__ident_base,
    ACTIONS(143), 1,
      aux_sym_declaration_token1,
    STATE(21), 1,
      aux_sym__ident,
    ACTIONS(141), 6,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
  [657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(147), 1,
      aux_sym_declaration_token1,
    STATE(25), 1,
      aux_sym__fields,
    ACTIONS(145), 6,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym__ident_token1,
    ACTIONS(149), 8,
      anon_sym_COLON,
      aux_sym_declaration_token1,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [695] = 4,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      aux_sym__ident_token1,
    ACTIONS(149), 7,
      sym_comment,
      anon_sym_COLON,
      aux_sym_declaration_token1,
      sym_connection,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_declaration_token1,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym__fields,
    ACTIONS(159), 6,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [735] = 3,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      aux_sym__ident_token1,
    ACTIONS(149), 8,
      sym_comment,
      anon_sym_COLON,
      aux_sym_declaration_token1,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym__ident_token1,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 7,
      anon_sym_COLON,
      aux_sym_declaration_token1,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [771] = 4,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym__fields,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(145), 6,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      sym__ident_base,
  [790] = 4,
    ACTIONS(168), 1,
      sym__ident_base,
    STATE(29), 1,
      aux_sym__ident,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(141), 6,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      anon_sym_DOT,
  [809] = 5,
    ACTIONS(171), 1,
      sym__ident_base,
    STATE(59), 1,
      aux_sym__ident,
    STATE(60), 1,
      aux_sym__fields,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(112), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DOT,
  [830] = 4,
    ACTIONS(173), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym__fields,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(159), 6,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      sym__ident_base,
  [849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_declaration_token1,
    ACTIONS(176), 1,
      sym__ident_base,
    STATE(41), 1,
      aux_sym__fields,
    STATE(57), 1,
      aux_sym__ident,
    ACTIONS(112), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_declaration_token1,
    ACTIONS(178), 7,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [888] = 2,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(184), 7,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [902] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(178), 7,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [916] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_declaration_token1,
    ACTIONS(190), 1,
      sym_connection,
    STATE(47), 1,
      aux_sym__expr_repeat1,
    ACTIONS(186), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_declaration_token1,
    ACTIONS(141), 7,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_declaration_token1,
    ACTIONS(192), 7,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [968] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(141), 7,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_declaration_token1,
    ACTIONS(196), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym__fields,
    ACTIONS(159), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1002] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_declaration_token1,
    ACTIONS(199), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym__fields,
    ACTIONS(145), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_declaration_token1,
    ACTIONS(184), 7,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [1038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_connection,
    ACTIONS(203), 1,
      aux_sym_declaration_token1,
    STATE(36), 1,
      aux_sym__expr_repeat1,
    ACTIONS(201), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(207), 1,
      aux_sym_declaration_token1,
    STATE(40), 1,
      aux_sym__fields,
    ACTIONS(205), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(211), 1,
      aux_sym_declaration_token1,
    STATE(44), 1,
      aux_sym__fields,
    ACTIONS(209), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1098] = 2,
    ACTIONS(194), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(192), 7,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [1112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_declaration_token1,
    ACTIONS(217), 1,
      sym_connection,
    STATE(47), 1,
      aux_sym__expr_repeat1,
    ACTIONS(213), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym_declaration_token1,
    ACTIONS(220), 7,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [1148] = 4,
    ACTIONS(224), 1,
      sym_connection,
    STATE(51), 1,
      aux_sym__expr_repeat1,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(186), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1166] = 3,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      aux_sym__ident_token1,
    ACTIONS(149), 7,
      sym_comment,
      anon_sym_COLON,
      aux_sym_declaration_token1,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [1182] = 4,
    ACTIONS(226), 1,
      sym_connection,
    STATE(51), 1,
      aux_sym__expr_repeat1,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(213), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1200] = 2,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(220), 7,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [1214] = 4,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym__fields,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(209), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1232] = 4,
    ACTIONS(224), 1,
      sym_connection,
    STATE(49), 1,
      aux_sym__expr_repeat1,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(201), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1250] = 4,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym__fields,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(205), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym__ident_token1,
    ACTIONS(149), 7,
      anon_sym_COLON,
      aux_sym_declaration_token1,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      sym__ident_base,
  [1284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_declaration_token1,
    ACTIONS(231), 1,
      sym__ident_base,
    STATE(57), 1,
      aux_sym__ident,
    ACTIONS(141), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
  [1304] = 4,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym__fields,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(159), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1322] = 4,
    ACTIONS(237), 1,
      sym__ident_base,
    STATE(59), 1,
      aux_sym__ident,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(141), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_DOT,
  [1340] = 4,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym__fields,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(145), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym_declaration_token1,
    ACTIONS(240), 6,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      aux_sym_declaration_token1,
    STATE(85), 1,
      sym_block,
    ACTIONS(244), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      aux_sym_declaration_token1,
    STATE(83), 1,
      sym_block,
    ACTIONS(248), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1411] = 5,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      aux_sym_declaration_token1,
    STATE(101), 1,
      sym_block,
    ACTIONS(244), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1430] = 5,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      aux_sym_declaration_token1,
    STATE(103), 1,
      sym_block,
    ACTIONS(248), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1449] = 2,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(240), 6,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_connection,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1462] = 2,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(262), 5,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1474] = 7,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__ident_base,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym__ident,
    STATE(147), 1,
      sym__identifier_base,
    STATE(148), 1,
      sym_identifier,
    STATE(184), 1,
      sym__expr,
  [1496] = 7,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__ident_base,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym__ident,
    STATE(147), 1,
      sym__identifier_base,
    STATE(148), 1,
      sym_identifier,
    STATE(175), 1,
      sym__expr,
  [1518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_declaration_token1,
    ACTIONS(125), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym_declaration_token1,
    ACTIONS(262), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_declaration_token1,
    ACTIONS(268), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1560] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(125), 5,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_declaration_token1,
    ACTIONS(272), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1586] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__ident_base,
    ACTIONS(276), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym__ident,
    STATE(109), 1,
      aux_sym__fields,
    ACTIONS(108), 2,
      anon_sym_RPAREN,
      sym_connection,
  [1606] = 2,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(268), 5,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1618] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__ident_base,
    STATE(99), 1,
      aux_sym__ident,
    STATE(109), 1,
      aux_sym__fields,
    ACTIONS(108), 3,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
  [1636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_COLON,
    ACTIONS(282), 1,
      aux_sym_declaration_token1,
    ACTIONS(278), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1652] = 4,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      anon_sym_COLON,
    ACTIONS(288), 1,
      aux_sym_declaration_token1,
    ACTIONS(278), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1668] = 4,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      aux_sym_declaration_token1,
    ACTIONS(292), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1684] = 2,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(272), 5,
      sym_comment,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(300), 1,
      aux_sym_declaration_token1,
    ACTIONS(292), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym_declaration_token1,
    ACTIONS(302), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1725] = 6,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__ident_base,
    STATE(16), 1,
      aux_sym__ident,
    STATE(34), 1,
      sym__identifier_base,
    STATE(66), 1,
      sym_identifier,
  [1744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_declaration_token1,
    ACTIONS(308), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1757] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      sym__ident_base,
    STATE(32), 1,
      aux_sym__ident,
    STATE(42), 1,
      sym__identifier_base,
    STATE(48), 1,
      sym_identifier,
  [1776] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      sym__ident_base,
    STATE(19), 1,
      aux_sym__ident,
    STATE(42), 1,
      sym__identifier_base,
    STATE(48), 1,
      sym_identifier,
  [1795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_declaration_token1,
    ACTIONS(316), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1808] = 6,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__ident_base,
    STATE(13), 1,
      aux_sym__ident,
    STATE(34), 1,
      sym__identifier_base,
    STATE(52), 1,
      sym_identifier,
  [1827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym__ident_token1,
    ACTIONS(149), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      sym__ident_base,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_declaration_token1,
    ACTIONS(322), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1853] = 2,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(322), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1864] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      sym__ident_base,
    STATE(17), 1,
      aux_sym__ident,
    STATE(42), 1,
      sym__identifier_base,
    STATE(61), 1,
      sym_identifier,
  [1883] = 3,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      aux_sym_declaration_token1,
    ACTIONS(328), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1896] = 6,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym__ident_base,
    STATE(30), 1,
      aux_sym__ident,
    STATE(34), 1,
      sym__identifier_base,
    STATE(52), 1,
      sym_identifier,
  [1915] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__ident_base,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym__ident,
    STATE(147), 1,
      sym__identifier_base,
    STATE(155), 1,
      sym_identifier,
  [1934] = 2,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      aux_sym_declaration_token1,
    ACTIONS(316), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1945] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__ident_base,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym__ident,
    STATE(137), 1,
      sym_identifier,
    STATE(147), 1,
      sym__identifier_base,
  [1964] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__ident_base,
    STATE(99), 1,
      aux_sym__ident,
    ACTIONS(143), 3,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
  [1979] = 3,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 1,
      aux_sym_declaration_token1,
    ACTIONS(339), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [1992] = 3,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      aux_sym_declaration_token1,
    ACTIONS(308), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      aux_sym_declaration_token1,
    ACTIONS(328), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2018] = 3,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 1,
      aux_sym_declaration_token1,
    ACTIONS(302), 4,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_declaration_token1,
    ACTIONS(339), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2044] = 1,
    ACTIONS(355), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2052] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2060] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(357), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2070] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(359), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2080] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym__fields,
    ACTIONS(147), 2,
      anon_sym_RPAREN,
      sym_connection,
  [2094] = 1,
    ACTIONS(357), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2102] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym__fields,
    ACTIONS(161), 2,
      anon_sym_RPAREN,
      sym_connection,
  [2116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(366), 2,
      aux_sym_identifier_token1,
      sym_escape_sequence,
  [2130] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(39), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2140] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(59), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2150] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(368), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2160] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(370), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2170] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(143), 4,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
      sym__ident_base,
  [2180] = 1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2188] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(372), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2198] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(374), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(378), 2,
      aux_sym_identifier_token1,
      sym_escape_sequence,
  [2222] = 1,
    ACTIONS(381), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(385), 2,
      aux_sym_identifier_token1,
      sym_escape_sequence,
  [2244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(389), 2,
      aux_sym_identifier_token1,
      sym_escape_sequence,
  [2258] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(355), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2268] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(381), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2278] = 1,
    ACTIONS(374), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(389), 2,
      aux_sym_identifier_token1,
      sym_escape_sequence,
  [2300] = 1,
    ACTIONS(372), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2308] = 1,
    ACTIONS(370), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2316] = 1,
    ACTIONS(368), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2324] = 1,
    ACTIONS(359), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__ident_base,
  [2332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(395), 2,
      aux_sym_identifier_token1,
      sym_escape_sequence,
  [2346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(389), 2,
      aux_sym_identifier_token1,
      sym_escape_sequence,
  [2360] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    ACTIONS(401), 1,
      sym_label_constraint,
    STATE(135), 1,
      aux_sym__label_constraints,
  [2373] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(404), 2,
      anon_sym_RBRACK,
      sym_label_constraint,
  [2384] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(222), 3,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
  [2393] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 1,
      sym_connection,
    STATE(138), 1,
      aux_sym__expr_repeat1,
  [2406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(413), 1,
      aux_sym__label_codeblock_body_token1,
    STATE(139), 1,
      aux_sym__label_codeblock_body,
  [2419] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    ACTIONS(418), 1,
      sym_label_constraint,
    STATE(135), 1,
      aux_sym__label_constraints,
  [2432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(422), 1,
      aux_sym__label_codeblock_body_token1,
    STATE(149), 1,
      aux_sym__label_codeblock_body,
  [2445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(424), 1,
      aux_sym__label_codeblock_body_token1,
    STATE(139), 1,
      aux_sym__label_codeblock_body,
  [2458] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_label_constraint,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      aux_sym__label_constraints,
  [2471] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
  [2480] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      sym_connection,
    STATE(138), 1,
      aux_sym__expr_repeat1,
  [2493] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
  [2502] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_RPAREN,
      sym_connection,
      anon_sym_DOT,
  [2511] = 4,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      sym_connection,
    STATE(145), 1,
      aux_sym__expr_repeat1,
  [2524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_PIPE_PIPE_PIPE,
    ACTIONS(430), 1,
      aux_sym__label_codeblock_body_token1,
    STATE(149), 1,
      aux_sym__label_codeblock_body,
  [2537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym__label_codeblock_body_token1,
    ACTIONS(433), 1,
      anon_sym_PIPE_PIPE_PIPE,
    STATE(149), 1,
      aux_sym__label_codeblock_body,
  [2550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym__label_codeblock_body_token1,
    ACTIONS(433), 1,
      anon_sym_PIPE_PIPE,
    STATE(139), 1,
      aux_sym__label_codeblock_body,
  [2563] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_label_constraint,
    STATE(140), 1,
      aux_sym__label_constraints,
  [2573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_PIPE_PIPE_PIPE,
      aux_sym__label_codeblock_body_token1,
  [2581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym__label_codeblock_body_token1,
    STATE(150), 1,
      aux_sym__label_codeblock_body,
  [2591] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      sym_connection,
  [2599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym__label_codeblock_body_token1,
    STATE(141), 1,
      aux_sym__label_codeblock_body,
  [2609] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_RBRACK,
      sym_label_constraint,
  [2617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym__label_codeblock_body_token1,
    STATE(142), 1,
      aux_sym__label_codeblock_body,
  [2627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym__label_codeblock_body_token1,
    STATE(151), 1,
      aux_sym__label_codeblock_body,
  [2637] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_label_constraint,
    STATE(143), 1,
      aux_sym__label_constraints,
  [2647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_PIPE_PIPE,
      aux_sym__label_codeblock_body_token1,
  [2655] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
  [2662] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
  [2669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      aux_sym_label_codeblock_token1,
  [2676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      aux_sym_method_declaration_token1,
  [2683] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_BQUOTE_PIPE,
  [2690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym__label_codeblock_body_token2,
  [2697] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_connection_identifier,
  [2704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_label_codeblock_token2,
  [2711] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_PIPE,
  [2718] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_connection_identifier,
  [2725] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_BQUOTE_PIPE,
  [2732] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym__label_codeblock_lang,
  [2739] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym__label_codeblock_lang,
  [2746] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym_method_declaration_token1,
  [2760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym__label_codeblock_body_token2,
  [2767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      aux_sym_label_codeblock_token1,
  [2774] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_PIPE,
  [2781] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      aux_sym_label_codeblock_token2,
  [2795] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__label_codeblock_lang,
  [2802] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__label_codeblock_lang,
  [2809] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
  [2816] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__label_codeblock_lang,
  [2823] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__label_codeblock_lang,
  [2830] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__label_codeblock_lang,
  [2837] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__label_codeblock_lang,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 312,
  [SMALL_STATE(10)] = 348,
  [SMALL_STATE(11)] = 384,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 478,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 546,
  [SMALL_STATE(18)] = 572,
  [SMALL_STATE(19)] = 592,
  [SMALL_STATE(20)] = 616,
  [SMALL_STATE(21)] = 636,
  [SMALL_STATE(22)] = 657,
  [SMALL_STATE(23)] = 678,
  [SMALL_STATE(24)] = 695,
  [SMALL_STATE(25)] = 714,
  [SMALL_STATE(26)] = 735,
  [SMALL_STATE(27)] = 752,
  [SMALL_STATE(28)] = 771,
  [SMALL_STATE(29)] = 790,
  [SMALL_STATE(30)] = 809,
  [SMALL_STATE(31)] = 830,
  [SMALL_STATE(32)] = 849,
  [SMALL_STATE(33)] = 872,
  [SMALL_STATE(34)] = 888,
  [SMALL_STATE(35)] = 902,
  [SMALL_STATE(36)] = 916,
  [SMALL_STATE(37)] = 936,
  [SMALL_STATE(38)] = 952,
  [SMALL_STATE(39)] = 968,
  [SMALL_STATE(40)] = 982,
  [SMALL_STATE(41)] = 1002,
  [SMALL_STATE(42)] = 1022,
  [SMALL_STATE(43)] = 1038,
  [SMALL_STATE(44)] = 1058,
  [SMALL_STATE(45)] = 1078,
  [SMALL_STATE(46)] = 1098,
  [SMALL_STATE(47)] = 1112,
  [SMALL_STATE(48)] = 1132,
  [SMALL_STATE(49)] = 1148,
  [SMALL_STATE(50)] = 1166,
  [SMALL_STATE(51)] = 1182,
  [SMALL_STATE(52)] = 1200,
  [SMALL_STATE(53)] = 1214,
  [SMALL_STATE(54)] = 1232,
  [SMALL_STATE(55)] = 1250,
  [SMALL_STATE(56)] = 1268,
  [SMALL_STATE(57)] = 1284,
  [SMALL_STATE(58)] = 1304,
  [SMALL_STATE(59)] = 1322,
  [SMALL_STATE(60)] = 1340,
  [SMALL_STATE(61)] = 1358,
  [SMALL_STATE(62)] = 1373,
  [SMALL_STATE(63)] = 1392,
  [SMALL_STATE(64)] = 1411,
  [SMALL_STATE(65)] = 1430,
  [SMALL_STATE(66)] = 1449,
  [SMALL_STATE(67)] = 1462,
  [SMALL_STATE(68)] = 1474,
  [SMALL_STATE(69)] = 1496,
  [SMALL_STATE(70)] = 1518,
  [SMALL_STATE(71)] = 1532,
  [SMALL_STATE(72)] = 1546,
  [SMALL_STATE(73)] = 1560,
  [SMALL_STATE(74)] = 1572,
  [SMALL_STATE(75)] = 1586,
  [SMALL_STATE(76)] = 1606,
  [SMALL_STATE(77)] = 1618,
  [SMALL_STATE(78)] = 1636,
  [SMALL_STATE(79)] = 1652,
  [SMALL_STATE(80)] = 1668,
  [SMALL_STATE(81)] = 1684,
  [SMALL_STATE(82)] = 1696,
  [SMALL_STATE(83)] = 1712,
  [SMALL_STATE(84)] = 1725,
  [SMALL_STATE(85)] = 1744,
  [SMALL_STATE(86)] = 1757,
  [SMALL_STATE(87)] = 1776,
  [SMALL_STATE(88)] = 1795,
  [SMALL_STATE(89)] = 1808,
  [SMALL_STATE(90)] = 1827,
  [SMALL_STATE(91)] = 1840,
  [SMALL_STATE(92)] = 1853,
  [SMALL_STATE(93)] = 1864,
  [SMALL_STATE(94)] = 1883,
  [SMALL_STATE(95)] = 1896,
  [SMALL_STATE(96)] = 1915,
  [SMALL_STATE(97)] = 1934,
  [SMALL_STATE(98)] = 1945,
  [SMALL_STATE(99)] = 1964,
  [SMALL_STATE(100)] = 1979,
  [SMALL_STATE(101)] = 1992,
  [SMALL_STATE(102)] = 2005,
  [SMALL_STATE(103)] = 2018,
  [SMALL_STATE(104)] = 2031,
  [SMALL_STATE(105)] = 2044,
  [SMALL_STATE(106)] = 2052,
  [SMALL_STATE(107)] = 2060,
  [SMALL_STATE(108)] = 2070,
  [SMALL_STATE(109)] = 2080,
  [SMALL_STATE(110)] = 2094,
  [SMALL_STATE(111)] = 2102,
  [SMALL_STATE(112)] = 2116,
  [SMALL_STATE(113)] = 2130,
  [SMALL_STATE(114)] = 2140,
  [SMALL_STATE(115)] = 2150,
  [SMALL_STATE(116)] = 2160,
  [SMALL_STATE(117)] = 2170,
  [SMALL_STATE(118)] = 2180,
  [SMALL_STATE(119)] = 2188,
  [SMALL_STATE(120)] = 2198,
  [SMALL_STATE(121)] = 2208,
  [SMALL_STATE(122)] = 2222,
  [SMALL_STATE(123)] = 2230,
  [SMALL_STATE(124)] = 2244,
  [SMALL_STATE(125)] = 2258,
  [SMALL_STATE(126)] = 2268,
  [SMALL_STATE(127)] = 2278,
  [SMALL_STATE(128)] = 2286,
  [SMALL_STATE(129)] = 2300,
  [SMALL_STATE(130)] = 2308,
  [SMALL_STATE(131)] = 2316,
  [SMALL_STATE(132)] = 2324,
  [SMALL_STATE(133)] = 2332,
  [SMALL_STATE(134)] = 2346,
  [SMALL_STATE(135)] = 2360,
  [SMALL_STATE(136)] = 2373,
  [SMALL_STATE(137)] = 2384,
  [SMALL_STATE(138)] = 2393,
  [SMALL_STATE(139)] = 2406,
  [SMALL_STATE(140)] = 2419,
  [SMALL_STATE(141)] = 2432,
  [SMALL_STATE(142)] = 2445,
  [SMALL_STATE(143)] = 2458,
  [SMALL_STATE(144)] = 2471,
  [SMALL_STATE(145)] = 2480,
  [SMALL_STATE(146)] = 2493,
  [SMALL_STATE(147)] = 2502,
  [SMALL_STATE(148)] = 2511,
  [SMALL_STATE(149)] = 2524,
  [SMALL_STATE(150)] = 2537,
  [SMALL_STATE(151)] = 2550,
  [SMALL_STATE(152)] = 2563,
  [SMALL_STATE(153)] = 2573,
  [SMALL_STATE(154)] = 2581,
  [SMALL_STATE(155)] = 2591,
  [SMALL_STATE(156)] = 2599,
  [SMALL_STATE(157)] = 2609,
  [SMALL_STATE(158)] = 2617,
  [SMALL_STATE(159)] = 2627,
  [SMALL_STATE(160)] = 2637,
  [SMALL_STATE(161)] = 2647,
  [SMALL_STATE(162)] = 2655,
  [SMALL_STATE(163)] = 2662,
  [SMALL_STATE(164)] = 2669,
  [SMALL_STATE(165)] = 2676,
  [SMALL_STATE(166)] = 2683,
  [SMALL_STATE(167)] = 2690,
  [SMALL_STATE(168)] = 2697,
  [SMALL_STATE(169)] = 2704,
  [SMALL_STATE(170)] = 2711,
  [SMALL_STATE(171)] = 2718,
  [SMALL_STATE(172)] = 2725,
  [SMALL_STATE(173)] = 2732,
  [SMALL_STATE(174)] = 2739,
  [SMALL_STATE(175)] = 2746,
  [SMALL_STATE(176)] = 2753,
  [SMALL_STATE(177)] = 2760,
  [SMALL_STATE(178)] = 2767,
  [SMALL_STATE(179)] = 2774,
  [SMALL_STATE(180)] = 2781,
  [SMALL_STATE(181)] = 2788,
  [SMALL_STATE(182)] = 2795,
  [SMALL_STATE(183)] = 2802,
  [SMALL_STATE(184)] = 2809,
  [SMALL_STATE(185)] = 2816,
  [SMALL_STATE(186)] = 2823,
  [SMALL_STATE(187)] = 2830,
  [SMALL_STATE(188)] = 2837,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_base, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_base, 1),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_repeat1, 2), SHIFT_REPEAT(14),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_label_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_repeat1, 2), SHIFT_REPEAT(18),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident, 2), SHIFT_REPEAT(23),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ident, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_base, 2, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_base, 2, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ident, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ident, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__fields, 2, .production_id = 13),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fields, 2, .production_id = 13),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fields, 2, .production_id = 13), SHIFT_REPEAT(87),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident, 2), SHIFT_REPEAT(26),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fields, 2, .production_id = 13), SHIFT_REPEAT(89),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 2, .production_id = 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 2, .production_id = 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fields, 2, .production_id = 13), SHIFT_REPEAT(86),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, .production_id = 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection_refference, 5, .production_id = 17),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_refference, 5, .production_id = 17),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_connection_refference, 4, .production_id = 14),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_connection_refference, 4, .production_id = 14),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, .production_id = 11),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_repeat1, 2, .production_id = 11),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, .production_id = 11), SHIFT_REPEAT(93),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__fields, 2, .production_id = 12),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fields, 2, .production_id = 12),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, .production_id = 11), SHIFT_REPEAT(84),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident, 2), SHIFT_REPEAT(56),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fields, 2, .production_id = 13), SHIFT_REPEAT(95),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__ident, 2), SHIFT_REPEAT(50),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expr_repeat1, 2, .production_id = 10),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expr_repeat1, 2, .production_id = 10),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3, .production_id = 9),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3, .production_id = 7),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 9),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_codeblock, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_codeblock, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 16),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 6),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3, .production_id = 6),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ident, 2), SHIFT_REPEAT(90),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 8),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3, .production_id = 8),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 16),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 1),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fields, 2, .production_id = 13), SHIFT_REPEAT(98),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 7),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 8),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 9),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(121),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 16),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_constraints, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_constraints, 2), SHIFT_REPEAT(136),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_constraints, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expr_repeat1, 2, .production_id = 11), SHIFT_REPEAT(96),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__label_codeblock_body, 2),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_codeblock_body, 2), SHIFT_REPEAT(167),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__label_codeblock_body, 2), SHIFT_REPEAT(177),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [437] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_d2(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__ident_base,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
