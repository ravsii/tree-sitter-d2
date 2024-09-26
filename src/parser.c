#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_declaration_token1 = 1,
  anon_sym_SEMI = 2,
  anon_sym_NULL = 3,
  sym_connection = 4,
  anon_sym_COLON = 5,
  aux_sym_label_token1 = 6,
  anon_sym_DOT = 7,
  aux_sym__ident_recursive_token1 = 8,
  sym__ident_base = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym_declaration = 12,
  sym_label = 13,
  sym_identifier = 14,
  sym_field = 15,
  sym__ident_recursive = 16,
  aux_sym_source_file_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_declaration_token1] = "declaration_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_NULL] = "\0",
  [sym_connection] = "connection",
  [anon_sym_COLON] = ":",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_DOT] = ".",
  [aux_sym__ident_recursive_token1] = "_ident_recursive_token1",
  [sym__ident_base] = "_ident_base",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym_label] = "label",
  [sym_identifier] = "identifier",
  [sym_field] = "field",
  [sym__ident_recursive] = "_ident_recursive",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_declaration_token1] = aux_sym_declaration_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_NULL] = anon_sym_NULL,
  [sym_connection] = sym_connection,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__ident_recursive_token1] = aux_sym__ident_recursive_token1,
  [sym__ident_base] = sym__ident_base,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym_label] = sym_label,
  [sym_identifier] = sym_identifier,
  [sym_field] = sym_field,
  [sym__ident_recursive] = sym__ident_recursive,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ident_recursive_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__ident_base] = {
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
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__ident_recursive] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if ((!eof && lookahead == 00)) ADVANCE(8);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        0, 8,
        '\n', 5,
        '#', 18,
        '-', 15,
        '.', 13,
        ':', 10,
        ';', 7,
        '\'', 16,
        '_', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(9);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_declaration_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_declaration_token1);
      if (lookahead == '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_connection);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__ident_recursive_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\'' ||
          lookahead == '_') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__ident_recursive_token1);
      if (lookahead == '>') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '_') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__ident_recursive_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '_') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__ident_base);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [sym_connection] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__ident_base] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_declaration] = STATE(6),
    [sym_identifier] = STATE(4),
    [sym__ident_recursive] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__ident_base] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(13), 1,
      aux_sym__ident_recursive_token1,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(11), 6,
      aux_sym_declaration_token1,
      anon_sym_SEMI,
      anon_sym_NULL,
      sym_connection,
      anon_sym_COLON,
      anon_sym_DOT,
  [15] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym__ident_base,
    ACTIONS(22), 1,
      sym_comment,
    STATE(4), 1,
      sym_identifier,
    STATE(5), 1,
      sym__ident_recursive,
    STATE(3), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [35] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_declaration_token1,
    ACTIONS(29), 1,
      sym_connection,
    ACTIONS(31), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym_label,
    ACTIONS(27), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
  [55] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_declaration_token1,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(35), 4,
      anon_sym_SEMI,
      anon_sym_NULL,
      sym_connection,
      anon_sym_COLON,
  [71] = 6,
    ACTIONS(7), 1,
      sym__ident_base,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_comment,
    STATE(4), 1,
      sym_identifier,
    STATE(5), 1,
      sym__ident_recursive,
    STATE(3), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [91] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(43), 1,
      aux_sym_declaration_token1,
    ACTIONS(45), 5,
      anon_sym_SEMI,
      anon_sym_NULL,
      sym_connection,
      anon_sym_COLON,
      anon_sym_DOT,
  [105] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      aux_sym_declaration_token1,
    STATE(14), 1,
      sym_label,
    ACTIONS(49), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
  [122] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_declaration_token1,
    ACTIONS(53), 4,
      anon_sym_SEMI,
      anon_sym_NULL,
      sym_connection,
      anon_sym_COLON,
  [135] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_declaration_token1,
    ACTIONS(57), 4,
      anon_sym_SEMI,
      anon_sym_NULL,
      sym_connection,
      anon_sym_COLON,
  [148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__ident_base,
    STATE(5), 1,
      sym__ident_recursive,
    STATE(8), 1,
      sym_identifier,
  [161] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_declaration_token1,
    ACTIONS(61), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
  [172] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_declaration_token1,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
  [183] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_declaration_token1,
    ACTIONS(69), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
  [194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym__ident_base,
    STATE(10), 1,
      sym_field,
  [204] = 1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym__ident_base,
      sym_comment,
  [210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__ident_base,
    STATE(7), 1,
      sym__ident_recursive,
  [220] = 1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym__ident_base,
      sym_comment,
  [226] = 1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      sym__ident_base,
      sym_comment,
  [232] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym__ident_base,
      sym_comment,
  [238] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_label_token1,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 148,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 172,
  [SMALL_STATE(14)] = 183,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 210,
  [SMALL_STATE(18)] = 220,
  [SMALL_STATE(19)] = 226,
  [SMALL_STATE(20)] = 232,
  [SMALL_STATE(21)] = 238,
  [SMALL_STATE(22)] = 245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ident_recursive, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ident_recursive, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ident_recursive, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
