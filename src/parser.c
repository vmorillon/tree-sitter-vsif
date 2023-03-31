#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  anon_sym_COLON = 6,
  sym_integer = 7,
  sym__bare_string = 8,
  anon_sym_DQUOTE = 9,
  aux_sym__quoted_string_token1 = 10,
  anon_sym_LTtext_GT = 11,
  aux_sym__tagged_string_token1 = 12,
  anon_sym_LT_SLASHtext_GT = 13,
  sym_document = 14,
  sym_named_scope = 15,
  sym_pair = 16,
  sym_key = 17,
  sym__value = 18,
  sym_string = 19,
  sym__quoted_string = 20,
  sym__tagged_string = 21,
  aux_sym_document_repeat1 = 22,
  aux_sym__tagged_string_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [sym_integer] = "integer",
  [sym__bare_string] = "_bare_string",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [anon_sym_LTtext_GT] = "<text>",
  [aux_sym__tagged_string_token1] = "_tagged_string_token1",
  [anon_sym_LT_SLASHtext_GT] = "</text>",
  [sym_document] = "document",
  [sym_named_scope] = "named_scope",
  [sym_pair] = "pair",
  [sym_key] = "key",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym__tagged_string] = "_tagged_string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__tagged_string_repeat1] = "_tagged_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_integer] = sym_integer,
  [sym__bare_string] = sym__bare_string,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [anon_sym_LTtext_GT] = anon_sym_LTtext_GT,
  [aux_sym__tagged_string_token1] = aux_sym__tagged_string_token1,
  [anon_sym_LT_SLASHtext_GT] = anon_sym_LT_SLASHtext_GT,
  [sym_document] = sym_document,
  [sym_named_scope] = sym_named_scope,
  [sym_pair] = sym_pair,
  [sym_key] = sym_key,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym__tagged_string] = sym__tagged_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__tagged_string_repeat1] = aux_sym__tagged_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__bare_string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LTtext_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__tagged_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHtext_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_named_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__tagged_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tagged_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_name = 2,
  field_type = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
  [2] =
    {field_name, 1},
    {field_type, 0},
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 15,
  [19] = 14,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 33,
  [38] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'x') ADVANCE(13);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__bare_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LTtext_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtext_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym__bare_string] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LTtext_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHtext_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(35),
    [sym_named_scope] = STATE(7),
    [sym_pair] = STATE(7),
    [sym_key] = STATE(34),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__bare_string] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LTtext_GT,
    STATE(27), 2,
      sym__quoted_string,
      sym__tagged_string,
    STATE(30), 2,
      sym__value,
      sym_string,
  [24] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LTtext_GT,
    ACTIONS(21), 1,
      sym_integer,
    STATE(27), 2,
      sym__quoted_string,
      sym__tagged_string,
    STATE(38), 2,
      sym__value,
      sym_string,
  [48] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_document_token1,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      sym__bare_string,
    STATE(36), 1,
      sym_key,
    STATE(8), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [69] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_document_token1,
    ACTIONS(27), 1,
      sym__bare_string,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_key,
    STATE(8), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [90] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__bare_string,
    ACTIONS(31), 1,
      aux_sym_document_token1,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_key,
    STATE(5), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [111] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__bare_string,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_document_token1,
    STATE(34), 1,
      sym_key,
    STATE(9), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [132] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_document_token1,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      sym__bare_string,
    STATE(36), 1,
      sym_key,
    STATE(8), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [153] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(52), 1,
      sym__bare_string,
    STATE(34), 1,
      sym_key,
    STATE(9), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [174] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__bare_string,
    ACTIONS(55), 1,
      aux_sym_document_token1,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_key,
    STATE(4), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [195] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(61), 1,
      anon_sym_LT_SLASHtext_GT,
    STATE(12), 1,
      aux_sym__tagged_string_repeat1,
  [208] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(66), 1,
      anon_sym_LT_SLASHtext_GT,
    STATE(12), 1,
      aux_sym__tagged_string_repeat1,
  [221] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(70), 1,
      anon_sym_LT_SLASHtext_GT,
    STATE(11), 1,
      aux_sym__tagged_string_repeat1,
  [234] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym_document_token1,
    ACTIONS(74), 2,
      anon_sym_RBRACE,
      sym__bare_string,
  [245] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(76), 1,
      aux_sym_document_token1,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      sym__bare_string,
  [256] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_document_token1,
    ACTIONS(82), 2,
      anon_sym_RBRACE,
      sym__bare_string,
  [267] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym__bare_string,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [278] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__bare_string,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [289] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym__bare_string,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COLON,
    ACTIONS(86), 1,
      sym__bare_string,
  [310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_COLON,
    ACTIONS(88), 1,
      sym__bare_string,
  [320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_SEMI,
  [327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_SEMI,
  [334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_SEMI,
  [341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_SEMI,
  [348] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__quoted_string_token1,
  [355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SEMI,
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
  [369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_SEMI,
  [383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
  [390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_SEMI,
  [397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
  [404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COLON,
  [411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COLON,
  [425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
  [432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 221,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 289,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 320,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 341,
  [SMALL_STATE(26)] = 348,
  [SMALL_STATE(27)] = 355,
  [SMALL_STATE(28)] = 362,
  [SMALL_STATE(29)] = 369,
  [SMALL_STATE(30)] = 376,
  [SMALL_STATE(31)] = 383,
  [SMALL_STATE(32)] = 390,
  [SMALL_STATE(33)] = 397,
  [SMALL_STATE(34)] = 404,
  [SMALL_STATE(35)] = 411,
  [SMALL_STATE(36)] = 418,
  [SMALL_STATE(37)] = 425,
  [SMALL_STATE(38)] = 432,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tagged_string_repeat1, 2), SHIFT_REPEAT(12),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tagged_string_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_scope, 6, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_scope, 6, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_scope, 5, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_scope, 5, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagged_string, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagged_string, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vsif(void) {
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
