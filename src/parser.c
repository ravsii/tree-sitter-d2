#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_direction = 2,
  anon_sym_COLON = 3,
  anon_sym_up = 4,
  anon_sym_right = 5,
  anon_sym_left = 6,
  anon_sym_down = 7,
  anon_sym_SEMI = 8,
  sym_shape_name = 9,
  anon_sym_PIPE = 10,
  sym_shape_body = 11,
  sym_connection = 12,
  sym_whitespace = 13,
  sym_newline = 14,
  sym_source_file = 15,
  sym_direction = 16,
  sym_direction_opts = 17,
  sym_shape_declaration = 18,
  aux_sym_source_file_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_direction] = "direction",
  [anon_sym_COLON] = ":",
  [anon_sym_up] = "up",
  [anon_sym_right] = "right",
  [anon_sym_left] = "left",
  [anon_sym_down] = "down",
  [anon_sym_SEMI] = ";",
  [sym_shape_name] = "shape_name",
  [anon_sym_PIPE] = "|",
  [sym_shape_body] = "shape_body",
  [sym_connection] = "connection",
  [sym_whitespace] = "whitespace",
  [sym_newline] = "newline",
  [sym_source_file] = "source_file",
  [sym_direction] = "direction",
  [sym_direction_opts] = "direction_opts",
  [sym_shape_declaration] = "shape_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_shape_name] = sym_shape_name,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_shape_body] = sym_shape_body,
  [sym_connection] = sym_connection,
  [sym_whitespace] = sym_whitespace,
  [sym_newline] = sym_newline,
  [sym_source_file] = sym_source_file,
  [sym_direction] = sym_direction,
  [sym_direction_opts] = sym_direction_opts,
  [sym_shape_declaration] = sym_shape_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_direction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_shape_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_shape_body] = {
    .visible = true,
    .named = true,
  },
  [sym_connection] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_opts] = {
    .visible = true,
    .named = true,
  },
  [sym_shape_declaration] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'w') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_direction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_shape_name);
      if (lookahead == 'c') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_shape_name);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_shape_name);
      if (lookahead == 'i') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_shape_name);
      if (lookahead == 'i') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_shape_name);
      if (lookahead == 'n') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_shape_name);
      if (lookahead == 'o') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_shape_name);
      if (lookahead == 'r') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_shape_name);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_shape_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (1040 <= lookahead && lookahead <= 1103)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_shape_body);
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_connection);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_connection);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 20},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_shape_body] = ACTIONS(1),
    [sym_connection] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_direction] = STATE(2),
    [sym_shape_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_direction] = ACTIONS(7),
    [sym_shape_name] = ACTIONS(9),
    [sym_whitespace] = ACTIONS(5),
    [sym_newline] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_direction,
    ACTIONS(9), 1,
      sym_shape_name,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 3,
      sym_comment,
      sym_whitespace,
      sym_newline,
    STATE(3), 3,
      sym_direction,
      sym_shape_declaration,
      aux_sym_source_file_repeat1,
  [20] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      anon_sym_direction,
    ACTIONS(23), 1,
      sym_shape_name,
    ACTIONS(17), 3,
      sym_comment,
      sym_whitespace,
      sym_newline,
    STATE(3), 3,
      sym_direction,
      sym_shape_declaration,
      aux_sym_source_file_repeat1,
  [40] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_SEMI,
    ACTIONS(32), 1,
      sym_connection,
    ACTIONS(28), 5,
      sym_comment,
      anon_sym_direction,
      sym_shape_name,
      sym_whitespace,
      sym_newline,
  [57] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 5,
      sym_comment,
      anon_sym_direction,
      sym_shape_name,
      sym_whitespace,
      sym_newline,
  [68] = 2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 5,
      sym_comment,
      anon_sym_direction,
      sym_shape_name,
      sym_whitespace,
      sym_newline,
  [79] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 5,
      sym_comment,
      anon_sym_direction,
      sym_shape_name,
      sym_whitespace,
      sym_newline,
  [90] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 5,
      sym_comment,
      anon_sym_direction,
      sym_shape_name,
      sym_whitespace,
      sym_newline,
  [101] = 2,
    STATE(7), 1,
      sym_direction_opts,
    ACTIONS(50), 4,
      anon_sym_up,
      anon_sym_right,
      anon_sym_left,
      anon_sym_down,
  [111] = 1,
    ACTIONS(52), 1,
      anon_sym_COLON,
  [115] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [119] = 1,
    ACTIONS(56), 1,
      sym_shape_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 101,
  [SMALL_STATE(10)] = 111,
  [SMALL_STATE(11)] = 115,
  [SMALL_STATE(12)] = 119,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_declaration, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_declaration, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_declaration, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_declaration, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_opts, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_opts, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_declaration, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_declaration, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
