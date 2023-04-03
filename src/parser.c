#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_POUNDinclude = 3,
  anon_sym_POUNDifdef = 4,
  anon_sym_POUNDifndef = 5,
  anon_sym_POUNDendif = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_SEMI = 9,
  anon_sym_COLON = 10,
  sym_integer = 11,
  sym__bare_string = 12,
  anon_sym_DQUOTE = 13,
  aux_sym__quoted_string_token1 = 14,
  aux_sym__tagged_string_token1 = 15,
  sym_start_text_tag = 16,
  sym_end_text_tag = 17,
  sym_document = 18,
  sym_macro = 19,
  sym__include_macro = 20,
  sym_path = 21,
  sym__if_macro = 22,
  sym_condition = 23,
  sym_named_scope = 24,
  sym_type = 25,
  sym_name = 26,
  sym_pair = 27,
  sym_key = 28,
  sym__value = 29,
  sym_string = 30,
  sym__quoted_string = 31,
  sym__tagged_string = 32,
  aux_sym_document_repeat1 = 33,
  aux_sym_named_scope_repeat1 = 34,
  aux_sym__tagged_string_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_POUNDifdef] = "#ifdef",
  [anon_sym_POUNDifndef] = "#ifndef",
  [anon_sym_POUNDendif] = "#endif",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [sym_integer] = "integer",
  [sym__bare_string] = "_bare_string",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [aux_sym__tagged_string_token1] = "_tagged_string_token1",
  [sym_start_text_tag] = "start_text_tag",
  [sym_end_text_tag] = "end_text_tag",
  [sym_document] = "document",
  [sym_macro] = "macro",
  [sym__include_macro] = "_include_macro",
  [sym_path] = "path",
  [sym__if_macro] = "_if_macro",
  [sym_condition] = "condition",
  [sym_named_scope] = "named_scope",
  [sym_type] = "type",
  [sym_name] = "name",
  [sym_pair] = "pair",
  [sym_key] = "key",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym__tagged_string] = "_tagged_string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_named_scope_repeat1] = "named_scope_repeat1",
  [aux_sym__tagged_string_repeat1] = "_tagged_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_POUNDifdef] = anon_sym_POUNDifdef,
  [anon_sym_POUNDifndef] = anon_sym_POUNDifndef,
  [anon_sym_POUNDendif] = anon_sym_POUNDendif,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_integer] = sym_integer,
  [sym__bare_string] = sym__bare_string,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [aux_sym__tagged_string_token1] = aux_sym__tagged_string_token1,
  [sym_start_text_tag] = sym_start_text_tag,
  [sym_end_text_tag] = sym_end_text_tag,
  [sym_document] = sym_document,
  [sym_macro] = sym_macro,
  [sym__include_macro] = sym__include_macro,
  [sym_path] = sym_path,
  [sym__if_macro] = sym__if_macro,
  [sym_condition] = sym_condition,
  [sym_named_scope] = sym_named_scope,
  [sym_type] = sym_type,
  [sym_name] = sym_name,
  [sym_pair] = sym_pair,
  [sym_key] = sym_key,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym__tagged_string] = sym__tagged_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_named_scope_repeat1] = aux_sym_named_scope_repeat1,
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
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDifdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDifndef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDendif] = {
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
  [aux_sym__tagged_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_start_text_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_text_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__include_macro] = {
    .visible = false,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym__if_macro] = {
    .visible = false,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_named_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [aux_sym_named_scope_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tagged_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_condition = 1,
  field_key = 2,
  field_name = 3,
  field_path = 4,
  field_type = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
  [field_key] = "key",
  [field_name] = "name",
  [field_path] = "path",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 0, .inherited = true},
  [1] =
    {field_condition, 0, .inherited = true},
  [2] =
    {field_path, 1},
  [3] =
    {field_condition, 1},
  [4] =
    {field_key, 0},
    {field_value, 2},
  [6] =
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 2,
  [7] = 4,
  [8] = 3,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 9,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 16,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 19,
  [27] = 25,
  [28] = 23,
  [29] = 21,
  [30] = 30,
  [31] = 18,
  [32] = 17,
  [33] = 22,
  [34] = 24,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 19,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 48,
  [56] = 50,
  [57] = 49,
  [58] = 58,
  [59] = 48,
  [60] = 58,
  [61] = 51,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 51,
  [66] = 52,
  [67] = 67,
  [68] = 67,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(49);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUNDifdef);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUNDifndef);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUNDendif);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '0') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__bare_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_start_text_tag);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_end_text_tag);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 58},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 58},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 58},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_POUNDifdef] = ACTIONS(1),
    [anon_sym_POUNDifndef] = ACTIONS(1),
    [anon_sym_POUNDendif] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym__bare_string] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_start_text_tag] = ACTIONS(1),
    [sym_end_text_tag] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(62),
    [sym_macro] = STATE(5),
    [sym__include_macro] = STATE(21),
    [sym__if_macro] = STATE(22),
    [sym_named_scope] = STATE(5),
    [sym_type] = STATE(38),
    [sym_pair] = STATE(5),
    [sym_key] = STATE(52),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_POUNDinclude] = ACTIONS(11),
    [anon_sym_POUNDifdef] = ACTIONS(13),
    [anon_sym_POUNDifndef] = ACTIONS(13),
    [sym__bare_string] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(22), 1,
      anon_sym_POUNDinclude,
    ACTIONS(28), 1,
      sym__bare_string,
    STATE(21), 1,
      sym__include_macro,
    STATE(22), 1,
      sym__if_macro,
    STATE(38), 1,
      sym_type,
    STATE(52), 1,
      sym_key,
    ACTIONS(25), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(2), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [38] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(31), 1,
      aux_sym_document_token1,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(37), 1,
      anon_sym_POUNDendif,
    STATE(29), 1,
      sym__include_macro,
    STATE(33), 1,
      sym__if_macro,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(6), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [76] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(39), 1,
      aux_sym_document_token1,
    ACTIONS(41), 1,
      anon_sym_POUNDendif,
    STATE(29), 1,
      sym__include_macro,
    STATE(33), 1,
      sym__if_macro,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(3), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [114] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_POUNDinclude,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    STATE(21), 1,
      sym__include_macro,
    STATE(22), 1,
      sym__if_macro,
    STATE(38), 1,
      sym_type,
    STATE(52), 1,
      sym_key,
    ACTIONS(13), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(2), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [152] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym__bare_string,
    ACTIONS(47), 1,
      aux_sym_document_token1,
    ACTIONS(50), 1,
      anon_sym_POUNDinclude,
    ACTIONS(56), 1,
      anon_sym_POUNDendif,
    STATE(29), 1,
      sym__include_macro,
    STATE(33), 1,
      sym__if_macro,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    ACTIONS(53), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(6), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [190] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(58), 1,
      aux_sym_document_token1,
    ACTIONS(60), 1,
      anon_sym_POUNDendif,
    STATE(29), 1,
      sym__include_macro,
    STATE(33), 1,
      sym__if_macro,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(8), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [228] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(31), 1,
      aux_sym_document_token1,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(62), 1,
      anon_sym_POUNDendif,
    STATE(29), 1,
      sym__include_macro,
    STATE(33), 1,
      sym__if_macro,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(6), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [266] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(64), 1,
      aux_sym_document_token1,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    STATE(12), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_named_scope_repeat1,
  [290] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(68), 1,
      aux_sym_document_token1,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    STATE(9), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_named_scope_repeat1,
  [314] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__bare_string,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_start_text_tag,
    STATE(53), 2,
      sym__quoted_string,
      sym__tagged_string,
    STATE(56), 2,
      sym__value,
      sym_string,
  [338] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(80), 1,
      aux_sym_document_token1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      sym__bare_string,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    STATE(12), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_named_scope_repeat1,
  [362] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(88), 1,
      aux_sym_document_token1,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    STATE(14), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_named_scope_repeat1,
  [386] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(64), 1,
      aux_sym_document_token1,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    STATE(12), 3,
      sym_named_scope,
      sym_pair,
      aux_sym_named_scope_repeat1,
  [410] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym__bare_string,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      sym_start_text_tag,
    ACTIONS(94), 1,
      sym_integer,
    STATE(50), 2,
      sym__value,
      sym_string,
    STATE(53), 2,
      sym__quoted_string,
      sym__tagged_string,
  [434] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_document_token1,
    ACTIONS(98), 6,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [449] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_document_token1,
    ACTIONS(102), 6,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [464] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_document_token1,
    ACTIONS(106), 6,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [479] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym_document_token1,
    ACTIONS(110), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      sym__bare_string,
  [493] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(98), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [507] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(114), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [521] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(118), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [535] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(122), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [549] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(126), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [563] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(128), 1,
      aux_sym_document_token1,
    ACTIONS(130), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      sym__bare_string,
  [577] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(110), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [591] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(130), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [605] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_document_token1,
    ACTIONS(122), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      sym__bare_string,
  [619] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym_document_token1,
    ACTIONS(114), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      sym__bare_string,
  [633] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_document_token1,
    ACTIONS(134), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      sym__bare_string,
  [647] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(106), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [661] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(102), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [675] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym_document_token1,
    ACTIONS(118), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      sym__bare_string,
  [689] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(124), 1,
      aux_sym_document_token1,
    ACTIONS(126), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      sym__bare_string,
  [703] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_document_token1,
    ACTIONS(138), 5,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDendif,
      sym__bare_string,
  [717] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(138), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym__bare_string,
    STATE(63), 1,
      sym__quoted_string,
    STATE(67), 1,
      sym_name,
  [747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym__bare_string,
    STATE(63), 1,
      sym__quoted_string,
    STATE(68), 1,
      sym_name,
  [763] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(144), 1,
      sym_end_text_tag,
    STATE(43), 1,
      aux_sym__tagged_string_repeat1,
  [776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_path,
    STATE(35), 1,
      sym__quoted_string,
  [789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_path,
    STATE(36), 1,
      sym__quoted_string,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(152), 1,
      sym__bare_string,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
  [815] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(156), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(159), 1,
      sym_end_text_tag,
    STATE(43), 1,
      aux_sym__tagged_string_repeat1,
  [828] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(163), 1,
      sym_end_text_tag,
    STATE(39), 1,
      aux_sym__tagged_string_repeat1,
  [841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__bare_string,
    STATE(7), 1,
      sym_condition,
  [851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__bare_string,
    STATE(4), 1,
      sym_condition,
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
  [876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_SEMI,
  [883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SEMI,
  [890] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym__quoted_string_token1,
  [897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_SEMI,
  [911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SEMI,
  [918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
  [925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SEMI,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SEMI,
  [946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SEMI,
  [960] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__quoted_string_token1,
  [967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
  [981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SEMI,
  [988] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym__quoted_string_token1,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COLON,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
  [1009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 314,
  [SMALL_STATE(12)] = 338,
  [SMALL_STATE(13)] = 362,
  [SMALL_STATE(14)] = 386,
  [SMALL_STATE(15)] = 410,
  [SMALL_STATE(16)] = 434,
  [SMALL_STATE(17)] = 449,
  [SMALL_STATE(18)] = 464,
  [SMALL_STATE(19)] = 479,
  [SMALL_STATE(20)] = 493,
  [SMALL_STATE(21)] = 507,
  [SMALL_STATE(22)] = 521,
  [SMALL_STATE(23)] = 535,
  [SMALL_STATE(24)] = 549,
  [SMALL_STATE(25)] = 563,
  [SMALL_STATE(26)] = 577,
  [SMALL_STATE(27)] = 591,
  [SMALL_STATE(28)] = 605,
  [SMALL_STATE(29)] = 619,
  [SMALL_STATE(30)] = 633,
  [SMALL_STATE(31)] = 647,
  [SMALL_STATE(32)] = 661,
  [SMALL_STATE(33)] = 675,
  [SMALL_STATE(34)] = 689,
  [SMALL_STATE(35)] = 703,
  [SMALL_STATE(36)] = 717,
  [SMALL_STATE(37)] = 731,
  [SMALL_STATE(38)] = 747,
  [SMALL_STATE(39)] = 763,
  [SMALL_STATE(40)] = 776,
  [SMALL_STATE(41)] = 789,
  [SMALL_STATE(42)] = 802,
  [SMALL_STATE(43)] = 815,
  [SMALL_STATE(44)] = 828,
  [SMALL_STATE(45)] = 841,
  [SMALL_STATE(46)] = 851,
  [SMALL_STATE(47)] = 861,
  [SMALL_STATE(48)] = 869,
  [SMALL_STATE(49)] = 876,
  [SMALL_STATE(50)] = 883,
  [SMALL_STATE(51)] = 890,
  [SMALL_STATE(52)] = 897,
  [SMALL_STATE(53)] = 904,
  [SMALL_STATE(54)] = 911,
  [SMALL_STATE(55)] = 918,
  [SMALL_STATE(56)] = 925,
  [SMALL_STATE(57)] = 932,
  [SMALL_STATE(58)] = 939,
  [SMALL_STATE(59)] = 946,
  [SMALL_STATE(60)] = 953,
  [SMALL_STATE(61)] = 960,
  [SMALL_STATE(62)] = 967,
  [SMALL_STATE(63)] = 974,
  [SMALL_STATE(64)] = 981,
  [SMALL_STATE(65)] = 988,
  [SMALL_STATE(66)] = 995,
  [SMALL_STATE(67)] = 1002,
  [SMALL_STATE(68)] = 1009,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_scope_repeat1, 2), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_scope_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_scope_repeat1, 2), SHIFT_REPEAT(42),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_scope, 6, .production_id = 6),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_scope, 6, .production_id = 6),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_scope, 5, .production_id = 6),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_scope, 5, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4, .production_id = 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 3, .production_id = 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 3, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_macro, 2, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__include_macro, 2, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 4, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 4, .production_id = 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tagged_string_repeat1, 2), SHIFT_REPEAT(43),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tagged_string_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagged_string, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagged_string, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
