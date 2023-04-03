#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_SEMI = 10,
  anon_sym_COLON = 11,
  sym_integer = 12,
  sym__bare_string = 13,
  anon_sym_DQUOTE = 14,
  aux_sym__quoted_string_token1 = 15,
  aux_sym__tagged_string_token1 = 16,
  sym_start_text_tag = 17,
  sym_end_text_tag = 18,
  sym_document = 19,
  sym_macro = 20,
  sym__include_macro = 21,
  sym_path = 22,
  sym__if_macro = 23,
  sym_condition = 24,
  sym_named_scope = 25,
  sym_type = 26,
  sym_name = 27,
  sym_pair = 28,
  sym_key = 29,
  sym__value = 30,
  sym_string = 31,
  sym__quoted_string = 32,
  sym__tagged_string = 33,
  aux_sym_document_repeat1 = 34,
  aux_sym__if_macro_repeat1 = 35,
  aux_sym__tagged_string_repeat1 = 36,
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
  [5] = 2,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 13,
  [18] = 7,
  [19] = 4,
  [20] = 8,
  [21] = 11,
  [22] = 22,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 31,
  [40] = 37,
  [41] = 25,
  [42] = 32,
  [43] = 35,
  [44] = 36,
  [45] = 30,
  [46] = 34,
  [47] = 24,
  [48] = 33,
  [49] = 29,
  [50] = 28,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 53,
  [59] = 24,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
  [73] = 64,
  [74] = 72,
  [75] = 65,
  [76] = 64,
  [77] = 77,
  [78] = 62,
  [79] = 65,
  [80] = 66,
  [81] = 67,
  [82] = 82,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(50);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUNDifdef);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUNDifndef);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUNDelse);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POUNDendif);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '0') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__bare_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__bare_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(65);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__tagged_string_token1);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_start_text_tag);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_end_text_tag);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 61},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 61},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 61},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
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
    [sym_document] = STATE(71),
    [sym_macro] = STATE(12),
    [sym__include_macro] = STATE(41),
    [sym__if_macro] = STATE(43),
    [sym_named_scope] = STATE(12),
    [sym_type] = STATE(52),
    [sym_pair] = STATE(12),
    [sym_key] = STATE(66),
    [aux_sym_document_repeat1] = STATE(12),
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
  [0] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(17), 1,
      aux_sym_document_token1,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(23), 1,
      anon_sym_POUNDelse,
    ACTIONS(25), 1,
      anon_sym_POUNDendif,
    STATE(18), 1,
      aux_sym__if_macro_repeat1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(4), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [44] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(27), 1,
      aux_sym_document_token1,
    ACTIONS(29), 1,
      anon_sym_POUNDelse,
    ACTIONS(31), 1,
      anon_sym_POUNDendif,
    STATE(9), 1,
      aux_sym__if_macro_repeat1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(2), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [88] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_document_token1,
    ACTIONS(36), 1,
      anon_sym_POUNDinclude,
    ACTIONS(44), 1,
      sym__bare_string,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(39), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(42), 3,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
    STATE(4), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [128] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(17), 1,
      aux_sym_document_token1,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(47), 1,
      anon_sym_POUNDelse,
    ACTIONS(49), 1,
      anon_sym_POUNDendif,
    STATE(7), 1,
      aux_sym__if_macro_repeat1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(4), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [172] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(51), 1,
      aux_sym_document_token1,
    ACTIONS(53), 1,
      anon_sym_POUNDelse,
    ACTIONS(55), 1,
      anon_sym_POUNDendif,
    STATE(10), 1,
      aux_sym__if_macro_repeat1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(5), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [216] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(57), 1,
      aux_sym_document_token1,
    ACTIONS(59), 1,
      anon_sym_POUNDendif,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(22), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [254] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(59), 1,
      anon_sym_POUNDendif,
    ACTIONS(61), 1,
      aux_sym_document_token1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(15), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [292] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(25), 1,
      anon_sym_POUNDendif,
    ACTIONS(57), 1,
      aux_sym_document_token1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(22), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [330] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(49), 1,
      anon_sym_POUNDendif,
    ACTIONS(57), 1,
      aux_sym_document_token1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(22), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [368] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(49), 1,
      anon_sym_POUNDendif,
    ACTIONS(63), 1,
      aux_sym_document_token1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(7), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [406] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_POUNDinclude,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym_document_token1,
    STATE(41), 1,
      sym__include_macro,
    STATE(43), 1,
      sym__if_macro,
    STATE(52), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    ACTIONS(13), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(19), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [444] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(17), 1,
      aux_sym_document_token1,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(4), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [482] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(57), 1,
      aux_sym_document_token1,
    ACTIONS(71), 1,
      anon_sym_POUNDendif,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(22), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [520] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(57), 1,
      aux_sym_document_token1,
    ACTIONS(73), 1,
      anon_sym_POUNDendif,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(22), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [558] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(75), 1,
      aux_sym_document_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(17), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [596] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(17), 1,
      aux_sym_document_token1,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(4), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [634] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(57), 1,
      aux_sym_document_token1,
    ACTIONS(81), 1,
      anon_sym_POUNDendif,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(22), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [672] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__bare_string,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym_document_token1,
    ACTIONS(88), 1,
      anon_sym_POUNDinclude,
    STATE(41), 1,
      sym__include_macro,
    STATE(43), 1,
      sym__if_macro,
    STATE(52), 1,
      sym_type,
    STATE(66), 1,
      sym_key,
    ACTIONS(91), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(19), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [710] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(81), 1,
      anon_sym_POUNDendif,
    ACTIONS(94), 1,
      aux_sym_document_token1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(14), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [748] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(25), 1,
      anon_sym_POUNDendif,
    ACTIONS(96), 1,
      aux_sym_document_token1,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(18), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [786] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym_document_token1,
    ACTIONS(101), 1,
      anon_sym_POUNDinclude,
    ACTIONS(107), 1,
      anon_sym_POUNDendif,
    ACTIONS(109), 1,
      sym__bare_string,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(104), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(22), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym__if_macro_repeat1,
  [824] = 11,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__bare_string,
    ACTIONS(19), 1,
      anon_sym_POUNDinclude,
    ACTIONS(112), 1,
      aux_sym_document_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym__include_macro,
    STATE(35), 1,
      sym__if_macro,
    STATE(51), 1,
      sym_type,
    STATE(80), 1,
      sym_key,
    ACTIONS(21), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    STATE(13), 4,
      sym_macro,
      sym_named_scope,
      sym_pair,
      aux_sym_document_repeat1,
  [862] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym_document_token1,
    ACTIONS(118), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [878] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_document_token1,
    ACTIONS(122), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [894] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym__bare_string,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_start_text_tag,
    STATE(62), 2,
      sym__value,
      sym_string,
    STATE(77), 2,
      sym__quoted_string,
      sym__tagged_string,
  [918] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__bare_string,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_start_text_tag,
    ACTIONS(132), 1,
      sym_integer,
    STATE(77), 2,
      sym__quoted_string,
      sym__tagged_string,
    STATE(78), 2,
      sym__value,
      sym_string,
  [942] = 3,
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
  [958] = 3,
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
  [974] = 3,
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
  [990] = 3,
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
  [1006] = 3,
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
  [1022] = 3,
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
  [1038] = 3,
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
  [1054] = 3,
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
  [1070] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_document_token1,
    ACTIONS(168), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [1086] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym_document_token1,
    ACTIONS(172), 7,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      anon_sym_RBRACE,
      sym__bare_string,
  [1102] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_document_token1,
    ACTIONS(176), 6,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      anon_sym_POUNDelse,
      anon_sym_POUNDendif,
      sym__bare_string,
  [1117] = 3,
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
  [1131] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(172), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1145] = 3,
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
  [1159] = 3,
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
  [1187] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(168), 4,
      anon_sym_POUNDinclude,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym__bare_string,
  [1201] = 3,
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
  [1215] = 3,
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
  [1229] = 3,
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
  [1243] = 3,
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
  [1257] = 3,
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
  [1271] = 3,
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
  [1285] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym__bare_string,
    STATE(68), 1,
      sym__quoted_string,
    STATE(81), 1,
      sym_name,
  [1301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      sym__bare_string,
    STATE(67), 1,
      sym_name,
    STATE(68), 1,
      sym__quoted_string,
  [1317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym__quoted_string,
    STATE(44), 1,
      sym_path,
  [1330] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(185), 1,
      sym_end_text_tag,
    STATE(54), 1,
      aux_sym__tagged_string_repeat1,
  [1343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_COLON,
    ACTIONS(189), 1,
      sym__bare_string,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
  [1356] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(195), 1,
      sym_end_text_tag,
    STATE(57), 1,
      aux_sym__tagged_string_repeat1,
  [1369] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym__tagged_string_token1,
    ACTIONS(199), 1,
      sym_end_text_tag,
    STATE(54), 1,
      aux_sym__tagged_string_repeat1,
  [1382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_path,
    STATE(37), 1,
      sym__quoted_string,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [1403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__bare_string,
    STATE(3), 1,
      sym_condition,
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__bare_string,
    STATE(6), 1,
      sym_condition,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_SEMI,
  [1430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SEMI,
  [1437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
  [1444] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__quoted_string_token1,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COLON,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SEMI,
  [1479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_SEMI,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SEMI,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
  [1507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SEMI,
  [1514] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym__quoted_string_token1,
  [1521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SEMI,
  [1535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SEMI,
  [1542] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym__quoted_string_token1,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COLON,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
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
  [SMALL_STATE(23)] = 824,
  [SMALL_STATE(24)] = 862,
  [SMALL_STATE(25)] = 878,
  [SMALL_STATE(26)] = 894,
  [SMALL_STATE(27)] = 918,
  [SMALL_STATE(28)] = 942,
  [SMALL_STATE(29)] = 958,
  [SMALL_STATE(30)] = 974,
  [SMALL_STATE(31)] = 990,
  [SMALL_STATE(32)] = 1006,
  [SMALL_STATE(33)] = 1022,
  [SMALL_STATE(34)] = 1038,
  [SMALL_STATE(35)] = 1054,
  [SMALL_STATE(36)] = 1070,
  [SMALL_STATE(37)] = 1086,
  [SMALL_STATE(38)] = 1102,
  [SMALL_STATE(39)] = 1117,
  [SMALL_STATE(40)] = 1131,
  [SMALL_STATE(41)] = 1145,
  [SMALL_STATE(42)] = 1159,
  [SMALL_STATE(43)] = 1173,
  [SMALL_STATE(44)] = 1187,
  [SMALL_STATE(45)] = 1201,
  [SMALL_STATE(46)] = 1215,
  [SMALL_STATE(47)] = 1229,
  [SMALL_STATE(48)] = 1243,
  [SMALL_STATE(49)] = 1257,
  [SMALL_STATE(50)] = 1271,
  [SMALL_STATE(51)] = 1285,
  [SMALL_STATE(52)] = 1301,
  [SMALL_STATE(53)] = 1317,
  [SMALL_STATE(54)] = 1330,
  [SMALL_STATE(55)] = 1343,
  [SMALL_STATE(56)] = 1356,
  [SMALL_STATE(57)] = 1369,
  [SMALL_STATE(58)] = 1382,
  [SMALL_STATE(59)] = 1395,
  [SMALL_STATE(60)] = 1403,
  [SMALL_STATE(61)] = 1413,
  [SMALL_STATE(62)] = 1423,
  [SMALL_STATE(63)] = 1430,
  [SMALL_STATE(64)] = 1437,
  [SMALL_STATE(65)] = 1444,
  [SMALL_STATE(66)] = 1451,
  [SMALL_STATE(67)] = 1458,
  [SMALL_STATE(68)] = 1465,
  [SMALL_STATE(69)] = 1472,
  [SMALL_STATE(70)] = 1479,
  [SMALL_STATE(71)] = 1486,
  [SMALL_STATE(72)] = 1493,
  [SMALL_STATE(73)] = 1500,
  [SMALL_STATE(74)] = 1507,
  [SMALL_STATE(75)] = 1514,
  [SMALL_STATE(76)] = 1521,
  [SMALL_STATE(77)] = 1528,
  [SMALL_STATE(78)] = 1535,
  [SMALL_STATE(79)] = 1542,
  [SMALL_STATE(80)] = 1549,
  [SMALL_STATE(81)] = 1556,
  [SMALL_STATE(82)] = 1563,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_macro_repeat1, 2), SHIFT_REPEAT(22),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_macro_repeat1, 2), SHIFT_REPEAT(58),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_macro_repeat1, 2), SHIFT_REPEAT(61),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_macro_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_macro_repeat1, 2), SHIFT_REPEAT(55),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_scope, 6, .production_id = 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_scope, 6, .production_id = 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 6, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 6, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_scope, 5, .production_id = 6),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_scope, 5, .production_id = 6),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 5, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 5, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 4, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 4, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_macro, 3, .production_id = 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_macro, 3, .production_id = 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_macro, 2, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__include_macro, 2, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tagged_string_repeat1, 2), SHIFT_REPEAT(54),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tagged_string_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagged_string, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagged_string, 3),
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
