#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  anon_sym_POUNDelse = 6,
  anon_sym_POUNDendif = 7,
  anon_sym_SEMI = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_COLON = 11,
  sym_integer = 12,
  anon_sym_LBRACK = 13,
  anon_sym_DOT_DOT = 14,
  anon_sym_RBRACK = 15,
  sym__bare_string = 16,
  anon_sym_DQUOTE = 17,
  aux_sym__quoted_string_token1 = 18,
  aux_sym__tagged_string_token1 = 19,
  sym_start_text_tag = 20,
  sym_end_text_tag = 21,
  sym_document = 22,
  sym_macro = 23,
  sym__include_macro = 24,
  sym_path = 25,
  sym__if_macro = 26,
  sym_condition = 27,
  sym_named_scope = 28,
  sym_type = 29,
  sym_name = 30,
  sym_block = 31,
  sym_pair = 32,
  sym_key = 33,
  sym__value = 34,
  sym_range = 35,
  sym_string = 36,
  sym__quoted_string = 37,
  sym__tagged_string = 38,
  aux_sym_document_repeat1 = 39,
  aux_sym__if_macro_repeat1 = 40,
  aux_sym__tagged_string_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_POUNDifdef] = "#ifdef",
  [anon_sym_POUNDifndef] = "#ifndef",
  [anon_sym_POUNDelse] = "#else",
  [anon_sym_POUNDendif] = "#endif",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_integer] = "integer",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_RBRACK] = "]",
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
  [sym_block] = "block",
  [sym_pair] = "pair",
  [sym_key] = "key",
  [sym__value] = "_value",
  [sym_range] = "range",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym__tagged_string] = "_tagged_string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__if_macro_repeat1] = "_if_macro_repeat1",
  [aux_sym__tagged_string_repeat1] = "_tagged_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_POUNDifdef] = anon_sym_POUNDifdef,
  [anon_sym_POUNDifndef] = anon_sym_POUNDifndef,
  [anon_sym_POUNDelse] = anon_sym_POUNDelse,
  [anon_sym_POUNDendif] = anon_sym_POUNDendif,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_integer] = sym_integer,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_block] = sym_block,
  [sym_pair] = sym_pair,
  [sym_key] = sym_key,
  [sym__value] = sym__value,
  [sym_range] = sym_range,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym__tagged_string] = sym__tagged_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__if_macro_repeat1] = aux_sym__if_macro_repeat1,
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
  [anon_sym_POUNDelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDendif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_block] = {
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
  [sym_range] = {
    .visible = true,
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
  [aux_sym__if_macro_repeat1] = {
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
    {field_name, 1},
    {field_type, 0},
  [6] =
    {field_key, 0},
    {field_value, 2},
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
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 8,
  [20] = 12,
  [21] = 2,
  [22] = 22,
  [23] = 22,
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
  [35] = 35,
  [36] = 26,
  [37] = 24,
  [38] = 25,
  [39] = 31,
  [40] = 30,
  [41] = 27,
  [42] = 32,
  [43] = 29,
  [44] = 28,
  [45] = 33,
  [46] = 34,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 50,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 34,
  [59] = 56,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 62,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 61,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 62,
  [77] = 72,
  [78] = 60,
  [79] = 79,
  [80] = 80,
  [81] = 60,
  [82] = 82,
  [83] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '0') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POUNDifdef);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUNDifndef);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUNDelse);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUNDendif);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '0') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__bare_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_start_text_tag);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_end_text_tag);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 67},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 67},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 67},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_POUNDifdef] = ACTIONS(1),
    [anon_sym_POUNDifndef] = ACTIONS(1),
    [anon_sym_POUNDelse] = ACTIONS(1),
    [anon_sym_POUNDendif] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__bare_string] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_start_text_tag] = ACTIONS(1),
    [sym_end_text_tag] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(74),
    [sym_macro] = STATE(10),
    [sym__include_macro] = STATE(39),
    [sym__if_macro] = STATE(40),
    [sym_named_scope] = STATE(10),
    [sym_type] = STATE(48),
    [sym_pair] = STATE(10),
    [sym_key] = STATE(68),
    [aux_sym_document_repeat1] = STATE(10),
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
      aux_sym_document_token1,
    ACTIONS(20), 1,
      anon_sym_POUNDinclude,
    ACTIONS(28), 1,
      sym__bare_string,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(23), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(26), 3,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
    STATE(2), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [40] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(31), 1,
      aux_sym_document_token1,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(37), 1,
      anon_sym_POUNDelse,
    ACTIONS(39), 1,
      anon_sym_POUNDendif,
    STATE(20), 1,
      aux_sym__if_macro_repeat1,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(2), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [84] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(31), 1,
      aux_sym_document_token1,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(41), 1,
      anon_sym_POUNDelse,
    ACTIONS(43), 1,
      anon_sym_POUNDendif,
    STATE(12), 1,
      aux_sym__if_macro_repeat1,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(2), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [128] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(47), 1,
      anon_sym_POUNDelse,
    ACTIONS(49), 1,
      anon_sym_POUNDendif,
    STATE(18), 1,
      aux_sym__if_macro_repeat1,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(3), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [172] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(51), 1,
      aux_sym_document_token1,
    ACTIONS(53), 1,
      anon_sym_POUNDelse,
    ACTIONS(55), 1,
      anon_sym_POUNDendif,
    STATE(17), 1,
      aux_sym__if_macro_repeat1,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(4), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [216] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(31), 1,
      aux_sym_document_token1,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(2), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [254] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(39), 1,
      anon_sym_POUNDendif,
    ACTIONS(59), 1,
      aux_sym_document_token1,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(20), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [292] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_document_token1,
    ACTIONS(64), 1,
      anon_sym_POUNDinclude,
    ACTIONS(70), 1,
      anon_sym_POUNDendif,
    ACTIONS(72), 1,
      sym__bare_string,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(67), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(9), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [330] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_POUNDinclude,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_document_token1,
    STATE(39), 1,
      sym__include_macro,
    STATE(40), 1,
      sym__if_macro,
    STATE(48), 1,
      sym_type,
    STATE(68), 1,
      sym_key,
    ACTIONS(13), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(21), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [368] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(79), 1,
      aux_sym_document_token1,
    ACTIONS(81), 1,
      anon_sym_POUNDendif,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(13), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [406] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(81), 1,
      anon_sym_POUNDendif,
    ACTIONS(83), 1,
      aux_sym_document_token1,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(9), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [444] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(83), 1,
      aux_sym_document_token1,
    ACTIONS(85), 1,
      anon_sym_POUNDendif,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(9), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [482] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(83), 1,
      aux_sym_document_token1,
    ACTIONS(87), 1,
      anon_sym_POUNDendif,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(9), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [520] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(89), 1,
      aux_sym_document_token1,
    ACTIONS(91), 1,
      anon_sym_POUNDendif,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(14), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [558] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(93), 1,
      aux_sym_document_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(7), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [596] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(43), 1,
      anon_sym_POUNDendif,
    ACTIONS(83), 1,
      aux_sym_document_token1,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(9), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [634] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(39), 1,
      anon_sym_POUNDendif,
    ACTIONS(83), 1,
      aux_sym_document_token1,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(9), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [672] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(43), 1,
      anon_sym_POUNDendif,
    ACTIONS(97), 1,
      aux_sym_document_token1,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(12), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [710] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(33), 1,
      anon_sym_POUNDinclude,
    ACTIONS(83), 1,
      aux_sym_document_token1,
    ACTIONS(91), 1,
      anon_sym_POUNDendif,
    STATE(30), 1,
      sym__if_macro,
    STATE(31), 1,
      sym__include_macro,
    STATE(47), 1,
      sym_type,
    STATE(83), 1,
      sym_key,
    ACTIONS(35), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(9), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [748] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym__bare_string,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      aux_sym_document_token1,
    ACTIONS(104), 1,
      anon_sym_POUNDinclude,
    STATE(39), 1,
      sym__include_macro,
    STATE(40), 1,
      sym__if_macro,
    STATE(48), 1,
      sym_type,
    STATE(68), 1,
      sym_key,
    ACTIONS(107), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(21), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [786] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      sym__bare_string,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      sym_start_text_tag,
    STATE(75), 2,
      sym__quoted_string,
      sym__tagged_string,
    STATE(72), 3,
      sym__value,
      sym_range,
      sym_string,
  [814] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      sym__bare_string,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      sym_start_text_tag,
    ACTIONS(120), 1,
      sym_integer,
    STATE(75), 2,
      sym__quoted_string,
      sym__tagged_string,
    STATE(77), 3,
      sym__value,
      sym_range,
      sym_string,
  [842] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_document_token1,
    ACTIONS(124), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [858] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_document_token1,
    ACTIONS(128), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [874] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym_document_token1,
    ACTIONS(132), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [890] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_document_token1,
    ACTIONS(136), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [906] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym_document_token1,
    ACTIONS(140), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [922] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_document_token1,
    ACTIONS(144), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [938] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_document_token1,
    ACTIONS(148), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [954] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_document_token1,
    ACTIONS(152), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [970] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym_document_token1,
    ACTIONS(156), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [986] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym_document_token1,
    ACTIONS(160), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [1002] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_document_token1,
    ACTIONS(164), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [1018] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_document_token1,
    ACTIONS(168), 6,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      sym__bare_string,
  [1033] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(132), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1047] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(124), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1061] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(128), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1075] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(152), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1089] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(148), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1103] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(136), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1117] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(156), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1131] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(144), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1145] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(140), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1159] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(160), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1173] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(164), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym__bare_string,
    STATE(56), 1,
      sym_name,
    STATE(63), 1,
      sym__quoted_string,
  [1203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym__bare_string,
    STATE(59), 1,
      sym_name,
    STATE(63), 1,
      sym__quoted_string,
  [1219] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(172), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(175), 1,
      sym_end_text_tag,
    STATE(49), 1,
      aux_sym__tagged_string_repeat1,
  [1232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym__quoted_string,
    STATE(29), 1,
      sym_path,
  [1245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(181), 1,
      sym__bare_string,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
  [1258] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(187), 1,
      sym_end_text_tag,
    STATE(53), 1,
      aux_sym__tagged_string_repeat1,
  [1271] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(191), 1,
      sym_end_text_tag,
    STATE(49), 1,
      aux_sym__tagged_string_repeat1,
  [1284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_path,
    STATE(44), 1,
      sym__quoted_string,
  [1297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__bare_string,
    STATE(6), 1,
      sym_condition,
  [1307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
  [1317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__bare_string,
    STATE(5), 1,
      sym_condition,
  [1327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [1335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
  [1345] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym__quoted_string_token1,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_SEMI,
  [1359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_DOT_DOT,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_integer,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_SEMI,
  [1394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SEMI,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SEMI,
  [1422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_SEMI,
  [1429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_integer,
  [1443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [1450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SEMI,
  [1457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_SEMI,
  [1471] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(235), 1,
      aux_sym__quoted_string_token1,
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SEMI,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
  [1492] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym__quoted_string_token1,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_SEMI,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 254,
  [SMALL_STATE(9)] = 292,
  [SMALL_STATE(10)] = 330,
  [SMALL_STATE(11)] = 368,
  [SMALL_STATE(12)] = 406,
  [SMALL_STATE(13)] = 444,
  [SMALL_STATE(14)] = 482,
  [SMALL_STATE(15)] = 520,
  [SMALL_STATE(16)] = 558,
  [SMALL_STATE(17)] = 596,
  [SMALL_STATE(18)] = 634,
  [SMALL_STATE(19)] = 672,
  [SMALL_STATE(20)] = 710,
  [SMALL_STATE(21)] = 748,
  [SMALL_STATE(22)] = 786,
  [SMALL_STATE(23)] = 814,
  [SMALL_STATE(24)] = 842,
  [SMALL_STATE(25)] = 858,
  [SMALL_STATE(26)] = 874,
  [SMALL_STATE(27)] = 890,
  [SMALL_STATE(28)] = 906,
  [SMALL_STATE(29)] = 922,
  [SMALL_STATE(30)] = 938,
  [SMALL_STATE(31)] = 954,
  [SMALL_STATE(32)] = 970,
  [SMALL_STATE(33)] = 986,
  [SMALL_STATE(34)] = 1002,
  [SMALL_STATE(35)] = 1018,
  [SMALL_STATE(36)] = 1033,
  [SMALL_STATE(37)] = 1047,
  [SMALL_STATE(38)] = 1061,
  [SMALL_STATE(39)] = 1075,
  [SMALL_STATE(40)] = 1089,
  [SMALL_STATE(41)] = 1103,
  [SMALL_STATE(42)] = 1117,
  [SMALL_STATE(43)] = 1131,
  [SMALL_STATE(44)] = 1145,
  [SMALL_STATE(45)] = 1159,
  [SMALL_STATE(46)] = 1173,
  [SMALL_STATE(47)] = 1187,
  [SMALL_STATE(48)] = 1203,
  [SMALL_STATE(49)] = 1219,
  [SMALL_STATE(50)] = 1232,
  [SMALL_STATE(51)] = 1245,
  [SMALL_STATE(52)] = 1258,
  [SMALL_STATE(53)] = 1271,
  [SMALL_STATE(54)] = 1284,
  [SMALL_STATE(55)] = 1297,
  [SMALL_STATE(56)] = 1307,
  [SMALL_STATE(57)] = 1317,
  [SMALL_STATE(58)] = 1327,
  [SMALL_STATE(59)] = 1335,
  [SMALL_STATE(60)] = 1345,
  [SMALL_STATE(61)] = 1352,
  [SMALL_STATE(62)] = 1359,
  [SMALL_STATE(63)] = 1366,
  [SMALL_STATE(64)] = 1373,
  [SMALL_STATE(65)] = 1380,
  [SMALL_STATE(66)] = 1387,
  [SMALL_STATE(67)] = 1394,
  [SMALL_STATE(68)] = 1401,
  [SMALL_STATE(69)] = 1408,
  [SMALL_STATE(70)] = 1415,
  [SMALL_STATE(71)] = 1422,
  [SMALL_STATE(72)] = 1429,
  [SMALL_STATE(73)] = 1436,
  [SMALL_STATE(74)] = 1443,
  [SMALL_STATE(75)] = 1450,
  [SMALL_STATE(76)] = 1457,
  [SMALL_STATE(77)] = 1464,
  [SMALL_STATE(78)] = 1471,
  [SMALL_STATE(79)] = 1478,
  [SMALL_STATE(80)] = 1485,
  [SMALL_STATE(81)] = 1492,
  [SMALL_STATE(82)] = 1499,
  [SMALL_STATE(83)] = 1506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_macro_repeat1, 2), SHIFT_REPEAT(9),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_macro_repeat1, 2), SHIFT_REPEAT(50),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_macro_repeat1, 2), SHIFT_REPEAT(57),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_macro_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_macro_repeat1, 2), SHIFT_REPEAT(51),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 6, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 6, .production_id = 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_scope, 4, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_scope, 4, .production_id = 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 3, .production_id = 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 3, .production_id = 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, .production_id = 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4, .production_id = 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_macro, 2, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__include_macro, 2, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 5, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 5, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 4, .production_id = 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 4, .production_id = 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tagged_string_repeat1, 2), SHIFT_REPEAT(49),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tagged_string_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagged_string, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [227] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagged_string, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
