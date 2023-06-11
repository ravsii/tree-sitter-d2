#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_direction = 2,
  anon_sym_up = 3,
  anon_sym_right = 4,
  anon_sym_left = 5,
  anon_sym_down = 6,
  anon_sym_COLON = 7,
  anon_sym_PIPE = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  aux_sym_identifier_token1 = 11,
  anon_sym_DOT = 12,
  sym__ident_regex = 13,
  sym_param_value = 14,
  sym_text = 15,
  sym_whitespace = 16,
  sym_newline = 17,
  sym_source_file = 18,
  sym_direction = 19,
  sym_direction_opts = 20,
  sym_shape_declaration = 21,
  sym_shape_label = 22,
  sym_shape_body = 23,
  sym_shape_param = 24,
  sym_identifier = 25,
  sym_sub_identifier = 26,
  sym_colon = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_shape_body_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_direction] = "direction",
  [anon_sym_up] = "up",
  [anon_sym_right] = "right",
  [anon_sym_left] = "left",
  [anon_sym_down] = "down",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_DOT] = ".",
  [sym__ident_regex] = "_ident_regex",
  [sym_param_value] = "param_value",
  [sym_text] = "text",
  [sym_whitespace] = "whitespace",
  [sym_newline] = "newline",
  [sym_source_file] = "source_file",
  [sym_direction] = "direction",
  [sym_direction_opts] = "direction_opts",
  [sym_shape_declaration] = "shape_declaration",
  [sym_shape_label] = "shape_label",
  [sym_shape_body] = "shape_body",
  [sym_shape_param] = "shape_param",
  [sym_identifier] = "identifier",
  [sym_sub_identifier] = "sub_identifier",
  [sym_colon] = "colon",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_shape_body_repeat1] = "shape_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__ident_regex] = sym__ident_regex,
  [sym_param_value] = sym_param_value,
  [sym_text] = sym_text,
  [sym_whitespace] = sym_whitespace,
  [sym_newline] = sym_newline,
  [sym_source_file] = sym_source_file,
  [sym_direction] = sym_direction,
  [sym_direction_opts] = sym_direction_opts,
  [sym_shape_declaration] = sym_shape_declaration,
  [sym_shape_label] = sym_shape_label,
  [sym_shape_body] = sym_shape_body,
  [sym_shape_param] = sym_shape_param,
  [sym_identifier] = sym_identifier,
  [sym_sub_identifier] = sym_sub_identifier,
  [sym_colon] = sym_colon,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_shape_body_repeat1] = aux_sym_shape_body_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym__ident_regex] = {
    .visible = false,
    .named = true,
  },
  [sym_param_value] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
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
  [sym_shape_label] = {
    .visible = true,
    .named = true,
  },
  [sym_shape_body] = {
    .visible = true,
    .named = true,
  },
  [sym_shape_param] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shape_body_repeat1] = {
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
  [20] = 17,
  [21] = 18,
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
  [33] = 33,
  [34] = 34,
  [35] = 2,
  [36] = 34,
  [37] = 33,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 29,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 4,
  [46] = 27,
  [47] = 31,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 32,
  [53] = 49,
  [54] = 54,
  [55] = 8,
  [56] = 9,
  [57] = 10,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 58,
};

static inline bool sym__ident_regex_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
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
      if (eof) ADVANCE(29);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_direction);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_direction);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'c') ADVANCE(61);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'c') ADVANCE(62);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'e') ADVANCE(47);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'e') ADVANCE(48);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'i') ADVANCE(59);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'i') ADVANCE(57);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'i') ADVANCE(60);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'i') ADVANCE(58);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'n') ADVANCE(32);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'n') ADVANCE(33);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'o') ADVANCE(55);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'o') ADVANCE(56);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'r') ADVANCE(49);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 'r') ADVANCE(50);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 't') ADVANCE(52);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__ident_regex);
      if (lookahead == 't') ADVANCE(54);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__ident_regex);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__ident_regex);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_param_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_text);
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (sym__ident_regex_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 69},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 23},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym_direction] = STATE(6),
    [sym_shape_declaration] = STATE(6),
    [sym_identifier] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_direction] = ACTIONS(7),
    [sym__ident_regex] = ACTIONS(9),
    [sym_newline] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_sub_identifier,
    ACTIONS(15), 7,
      sym_comment,
      anon_sym_direction,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__ident_regex,
      sym_whitespace,
      sym_newline,
  [22] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_whitespace,
    STATE(30), 1,
      sym_shape_body,
    STATE(11), 2,
      sym_shape_label,
      sym_colon,
    ACTIONS(23), 4,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
      sym_newline,
  [48] = 4,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_sub_identifier,
    ACTIONS(33), 7,
      sym_comment,
      anon_sym_direction,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__ident_regex,
      sym_whitespace,
      sym_newline,
  [67] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(37), 6,
      sym_comment,
      anon_sym_direction,
      anon_sym_LBRACE,
      sym__ident_regex,
      sym_whitespace,
      sym_newline,
  [85] = 7,
    ACTIONS(7), 1,
      anon_sym_direction,
    ACTIONS(9), 1,
      sym__ident_regex,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_newline,
    STATE(3), 1,
      sym_identifier,
    STATE(7), 3,
      sym_direction,
      sym_shape_declaration,
      aux_sym_source_file_repeat1,
  [109] = 7,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_direction,
    ACTIONS(57), 1,
      sym__ident_regex,
    ACTIONS(60), 1,
      sym_newline,
    STATE(3), 1,
      sym_identifier,
    STATE(7), 3,
      sym_direction,
      sym_shape_declaration,
      aux_sym_source_file_repeat1,
  [133] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 7,
      sym_comment,
      anon_sym_direction,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__ident_regex,
      sym_whitespace,
      sym_newline,
  [146] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 7,
      sym_comment,
      anon_sym_direction,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__ident_regex,
      sym_whitespace,
      sym_newline,
  [159] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 7,
      sym_comment,
      anon_sym_direction,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__ident_regex,
      sym_whitespace,
      sym_newline,
  [172] = 5,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_whitespace,
    STATE(22), 1,
      sym_shape_body,
    ACTIONS(77), 4,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
      sym_newline,
  [191] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_shape_body,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(77), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [207] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_shape_body,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(83), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [223] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 6,
      sym_comment,
      anon_sym_direction,
      anon_sym_LBRACE,
      sym__ident_regex,
      sym_whitespace,
      sym_newline,
  [235] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 6,
      sym_comment,
      anon_sym_direction,
      anon_sym_LBRACE,
      sym__ident_regex,
      sym_whitespace,
      sym_newline,
  [247] = 5,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      sym__ident_regex,
    ACTIONS(98), 1,
      sym_whitespace,
    STATE(48), 1,
      sym_identifier,
    STATE(16), 2,
      sym_shape_param,
      aux_sym_shape_body_repeat1,
  [264] = 5,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym__ident_regex,
    ACTIONS(105), 1,
      sym_whitespace,
    STATE(48), 1,
      sym_identifier,
    STATE(16), 2,
      sym_shape_param,
      aux_sym_shape_body_repeat1,
  [281] = 5,
    ACTIONS(103), 1,
      sym__ident_regex,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      sym_whitespace,
    STATE(48), 1,
      sym_identifier,
    STATE(20), 2,
      sym_shape_param,
      aux_sym_shape_body_repeat1,
  [298] = 3,
    ACTIONS(113), 1,
      sym_whitespace,
    STATE(26), 1,
      sym_direction_opts,
    ACTIONS(111), 4,
      anon_sym_up,
      anon_sym_right,
      anon_sym_left,
      anon_sym_down,
  [311] = 5,
    ACTIONS(103), 1,
      sym__ident_regex,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      sym_whitespace,
    STATE(48), 1,
      sym_identifier,
    STATE(16), 2,
      sym_shape_param,
      aux_sym_shape_body_repeat1,
  [328] = 5,
    ACTIONS(103), 1,
      sym__ident_regex,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym_whitespace,
    STATE(48), 1,
      sym_identifier,
    STATE(17), 2,
      sym_shape_param,
      aux_sym_shape_body_repeat1,
  [345] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(83), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [355] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(125), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [365] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(129), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [375] = 2,
    STATE(28), 1,
      sym_direction_opts,
    ACTIONS(131), 4,
      anon_sym_up,
      anon_sym_right,
      anon_sym_left,
      anon_sym_down,
  [385] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(135), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [395] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(139), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [405] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(143), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [415] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(147), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [425] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(77), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [435] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(151), 3,
      sym_comment,
      anon_sym_direction,
      sym__ident_regex,
  [445] = 2,
    ACTIONS(35), 1,
      sym_whitespace,
    ACTIONS(37), 4,
      anon_sym_up,
      anon_sym_right,
      anon_sym_left,
      anon_sym_down,
  [455] = 4,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 1,
      sym__ident_regex,
    STATE(40), 1,
      sym_shape_param,
    STATE(48), 1,
      sym_identifier,
  [468] = 4,
    ACTIONS(155), 1,
      sym__ident_regex,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_shape_param,
    STATE(48), 1,
      sym_identifier,
  [481] = 4,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_identifier_token1,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(57), 1,
      sym_sub_identifier,
  [494] = 4,
    ACTIONS(155), 1,
      sym__ident_regex,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_shape_param,
    STATE(48), 1,
      sym_identifier,
  [507] = 4,
    ACTIONS(155), 1,
      sym__ident_regex,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_shape_param,
    STATE(48), 1,
      sym_identifier,
  [520] = 3,
    ACTIONS(155), 1,
      sym__ident_regex,
    STATE(40), 1,
      sym_shape_param,
    STATE(48), 1,
      sym_identifier,
  [530] = 2,
    ACTIONS(169), 1,
      sym_whitespace,
    ACTIONS(167), 2,
      anon_sym_RBRACE,
      sym__ident_regex,
  [538] = 2,
    ACTIONS(171), 1,
      sym_whitespace,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      sym__ident_regex,
  [546] = 2,
    ACTIONS(145), 1,
      sym_whitespace,
    ACTIONS(147), 2,
      anon_sym_RBRACE,
      sym__ident_regex,
  [554] = 2,
    ACTIONS(175), 1,
      sym_whitespace,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      sym__ident_regex,
  [562] = 2,
    ACTIONS(179), 1,
      sym_whitespace,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      sym__ident_regex,
  [570] = 2,
    ACTIONS(183), 1,
      sym_whitespace,
    ACTIONS(181), 2,
      anon_sym_RBRACE,
      sym__ident_regex,
  [578] = 3,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(55), 1,
      sym_sub_identifier,
  [588] = 2,
    ACTIONS(137), 1,
      sym_whitespace,
    ACTIONS(139), 2,
      anon_sym_RBRACE,
      sym__ident_regex,
  [596] = 2,
    ACTIONS(149), 1,
      sym_whitespace,
    ACTIONS(151), 2,
      anon_sym_RBRACE,
      sym__ident_regex,
  [604] = 2,
    ACTIONS(187), 1,
      anon_sym_COLON,
    STATE(50), 1,
      sym_colon,
  [611] = 2,
    ACTIONS(189), 1,
      sym__ident_regex,
    STATE(9), 1,
      sym_identifier,
  [618] = 2,
    ACTIONS(191), 1,
      sym_param_value,
    ACTIONS(193), 1,
      sym_whitespace,
  [625] = 2,
    ACTIONS(195), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym_colon,
  [632] = 2,
    ACTIONS(35), 1,
      sym_whitespace,
    ACTIONS(37), 1,
      sym_param_value,
  [639] = 2,
    ACTIONS(155), 1,
      sym__ident_regex,
    STATE(56), 1,
      sym_identifier,
  [646] = 1,
    ACTIONS(197), 1,
      anon_sym_PIPE,
  [650] = 1,
    ACTIONS(63), 1,
      anon_sym_COLON,
  [654] = 1,
    ACTIONS(67), 1,
      anon_sym_COLON,
  [658] = 1,
    ACTIONS(71), 1,
      anon_sym_COLON,
  [662] = 1,
    ACTIONS(199), 1,
      sym__ident_regex,
  [666] = 1,
    ACTIONS(201), 1,
      sym_text,
  [670] = 1,
    ACTIONS(203), 1,
      sym_param_value,
  [674] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [678] = 1,
    ACTIONS(207), 1,
      sym__ident_regex,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 191,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 223,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 247,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 298,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 328,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 395,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 415,
  [SMALL_STATE(30)] = 425,
  [SMALL_STATE(31)] = 435,
  [SMALL_STATE(32)] = 445,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 468,
  [SMALL_STATE(35)] = 481,
  [SMALL_STATE(36)] = 494,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 520,
  [SMALL_STATE(39)] = 530,
  [SMALL_STATE(40)] = 538,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 554,
  [SMALL_STATE(43)] = 562,
  [SMALL_STATE(44)] = 570,
  [SMALL_STATE(45)] = 578,
  [SMALL_STATE(46)] = 588,
  [SMALL_STATE(47)] = 596,
  [SMALL_STATE(48)] = 604,
  [SMALL_STATE(49)] = 611,
  [SMALL_STATE(50)] = 618,
  [SMALL_STATE(51)] = 625,
  [SMALL_STATE(52)] = 632,
  [SMALL_STATE(53)] = 639,
  [SMALL_STATE(54)] = 646,
  [SMALL_STATE(55)] = 650,
  [SMALL_STATE(56)] = 654,
  [SMALL_STATE(57)] = 658,
  [SMALL_STATE(58)] = 662,
  [SMALL_STATE(59)] = 666,
  [SMALL_STATE(60)] = 670,
  [SMALL_STATE(61)] = 674,
  [SMALL_STATE(62)] = 678,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_declaration, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_declaration, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colon, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_identifier, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_identifier, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_declaration, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_declaration, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_declaration, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_declaration, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_label, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_label, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_label, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_label, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shape_body_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shape_body_repeat1, 2), SHIFT_REPEAT(35),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shape_body_repeat1, 2), SHIFT_REPEAT(38),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_declaration, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_declaration, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_opts, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_opts, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_body, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_body, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_body, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_body, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_body, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_body, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_param, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_param, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shape_body_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_param, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_param, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_param, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_param, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shape_param, 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape_param, 6),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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