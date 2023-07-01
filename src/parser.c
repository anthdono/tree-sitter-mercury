#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_main = 1,
  anon_sym_COLON_DASH = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_BANG = 6,
  anon_sym_DOT = 7,
  anon_sym_is = 8,
  anon_sym_where = 9,
  anon_sym_bool = 10,
  anon_sym_int = 11,
  anon_sym_float = 12,
  anon_sym_string = 13,
  anon_sym_list = 14,
  anon_sym_map = 15,
  anon_sym_exception = 16,
  aux_sym_comment_token1 = 17,
  aux_sym_comment_token2 = 18,
  sym_identifier = 19,
  anon_sym_yes = 20,
  anon_sym_no = 21,
  sym_uppercase_identifier = 22,
  sym_number = 23,
  anon_sym_pred = 24,
  anon_sym_module = 25,
  anon_sym_import_module = 26,
  anon_sym_interface = 27,
  anon_sym_implementation = 28,
  anon_sym_type = 29,
  sym_unescaped_double_string_fragment = 30,
  sym_unescaped_single_string_fragment = 31,
  sym_escape_sequence = 32,
  anon_sym_DQUOTE = 33,
  anon_sym_SQUOTE = 34,
  sym_source_file = 35,
  sym__definition = 36,
  sym_main_predicate = 37,
  sym_predicate_arguments = 38,
  sym_declaration = 39,
  sym_term = 40,
  sym_type = 41,
  sym_comment = 42,
  sym_operator = 43,
  sym_boolean_literal = 44,
  sym_keyword = 45,
  sym_string = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_predicate_arguments_repeat1 = 48,
  aux_sym_string_repeat1 = 49,
  aux_sym_string_repeat2 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_main] = "identifier",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_is] = "is",
  [anon_sym_where] = "where",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym_list] = "list",
  [anon_sym_map] = "map",
  [anon_sym_exception] = "exception",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_identifier] = "identifier",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [sym_uppercase_identifier] = "uppercase_identifier",
  [sym_number] = "number",
  [anon_sym_pred] = "pred",
  [anon_sym_module] = "module",
  [anon_sym_import_module] = "import_module",
  [anon_sym_interface] = "interface",
  [anon_sym_implementation] = "implementation",
  [anon_sym_type] = "type",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_main_predicate] = "main_predicate",
  [sym_predicate_arguments] = "predicate_arguments",
  [sym_declaration] = "declaration",
  [sym_term] = "term",
  [sym_type] = "type",
  [sym_comment] = "comment",
  [sym_operator] = "operator",
  [sym_boolean_literal] = "boolean_literal",
  [sym_keyword] = "keyword",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_predicate_arguments_repeat1] = "predicate_arguments_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_main] = sym_identifier,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_exception] = anon_sym_exception,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_identifier] = sym_identifier,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [sym_uppercase_identifier] = sym_uppercase_identifier,
  [sym_number] = sym_number,
  [anon_sym_pred] = anon_sym_pred,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_import_module] = anon_sym_import_module,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_implementation] = anon_sym_implementation,
  [anon_sym_type] = anon_sym_type,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_unescaped_single_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_main_predicate] = sym_main_predicate,
  [sym_predicate_arguments] = sym_predicate_arguments,
  [sym_declaration] = sym_declaration,
  [sym_term] = sym_term,
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
  [sym_operator] = sym_operator,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_keyword] = sym_keyword,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_predicate_arguments_repeat1] = aux_sym_predicate_arguments_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_main] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exception] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [sym_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implementation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_main_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_predicate_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
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
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_main);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 's') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_yes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_pred);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_import_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_implementation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
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
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_main] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_exception] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [sym_uppercase_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_pred] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_import_module] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_implementation] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__definition] = STATE(3),
    [sym_main_predicate] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_type] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_boolean_literal] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_main] = ACTIONS(5),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [anon_sym_is] = ACTIONS(9),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_list] = ACTIONS(11),
    [anon_sym_map] = ACTIONS(11),
    [anon_sym_exception] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_pred] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import_module] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_implementation] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_main_predicate] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_type] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_main] = ACTIONS(25),
    [anon_sym_COLON_DASH] = ACTIONS(28),
    [anon_sym_is] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(34),
    [anon_sym_int] = ACTIONS(34),
    [anon_sym_float] = ACTIONS(34),
    [anon_sym_string] = ACTIONS(34),
    [anon_sym_list] = ACTIONS(34),
    [anon_sym_map] = ACTIONS(34),
    [anon_sym_exception] = ACTIONS(34),
    [aux_sym_comment_token1] = ACTIONS(37),
    [aux_sym_comment_token2] = ACTIONS(37),
    [sym_identifier] = ACTIONS(40),
    [anon_sym_yes] = ACTIONS(43),
    [anon_sym_no] = ACTIONS(43),
    [anon_sym_pred] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_import_module] = ACTIONS(31),
    [anon_sym_interface] = ACTIONS(31),
    [anon_sym_implementation] = ACTIONS(31),
    [anon_sym_type] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_SQUOTE] = ACTIONS(49),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_main_predicate] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_type] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_main] = ACTIONS(5),
    [anon_sym_COLON_DASH] = ACTIONS(7),
    [anon_sym_is] = ACTIONS(9),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(11),
    [anon_sym_float] = ACTIONS(11),
    [anon_sym_string] = ACTIONS(11),
    [anon_sym_list] = ACTIONS(11),
    [anon_sym_map] = ACTIONS(11),
    [anon_sym_exception] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(13),
    [sym_identifier] = ACTIONS(54),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_pred] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import_module] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_implementation] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_main] = ACTIONS(58),
    [anon_sym_COLON_DASH] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_is] = ACTIONS(58),
    [anon_sym_bool] = ACTIONS(58),
    [anon_sym_int] = ACTIONS(58),
    [anon_sym_float] = ACTIONS(58),
    [anon_sym_string] = ACTIONS(58),
    [anon_sym_list] = ACTIONS(58),
    [anon_sym_map] = ACTIONS(58),
    [anon_sym_exception] = ACTIONS(58),
    [aux_sym_comment_token1] = ACTIONS(56),
    [aux_sym_comment_token2] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [anon_sym_yes] = ACTIONS(58),
    [anon_sym_no] = ACTIONS(58),
    [anon_sym_pred] = ACTIONS(58),
    [anon_sym_module] = ACTIONS(58),
    [anon_sym_import_module] = ACTIONS(58),
    [anon_sym_interface] = ACTIONS(58),
    [anon_sym_implementation] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(56),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_main] = ACTIONS(62),
    [anon_sym_COLON_DASH] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_is] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_int] = ACTIONS(62),
    [anon_sym_float] = ACTIONS(62),
    [anon_sym_string] = ACTIONS(62),
    [anon_sym_list] = ACTIONS(62),
    [anon_sym_map] = ACTIONS(62),
    [anon_sym_exception] = ACTIONS(62),
    [aux_sym_comment_token1] = ACTIONS(60),
    [aux_sym_comment_token2] = ACTIONS(60),
    [sym_identifier] = ACTIONS(62),
    [anon_sym_yes] = ACTIONS(62),
    [anon_sym_no] = ACTIONS(62),
    [anon_sym_pred] = ACTIONS(62),
    [anon_sym_module] = ACTIONS(62),
    [anon_sym_import_module] = ACTIONS(62),
    [anon_sym_interface] = ACTIONS(62),
    [anon_sym_implementation] = ACTIONS(62),
    [anon_sym_type] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(60),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(13), 1,
      sym_keyword,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(68), 7,
      anon_sym_is,
      anon_sym_pred,
      anon_sym_module,
      anon_sym_import_module,
      anon_sym_interface,
      anon_sym_implementation,
      anon_sym_type,
    ACTIONS(66), 11,
      anon_sym_main,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
  [34] = 2,
    ACTIONS(70), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(72), 18,
      anon_sym_main,
      anon_sym_is,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_pred,
      anon_sym_module,
      anon_sym_import_module,
      anon_sym_interface,
      anon_sym_implementation,
      anon_sym_type,
  [64] = 2,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(76), 18,
      anon_sym_main,
      anon_sym_is,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_pred,
      anon_sym_module,
      anon_sym_import_module,
      anon_sym_interface,
      anon_sym_implementation,
      anon_sym_type,
  [93] = 2,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(80), 18,
      anon_sym_main,
      anon_sym_is,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_pred,
      anon_sym_module,
      anon_sym_import_module,
      anon_sym_interface,
      anon_sym_implementation,
      anon_sym_type,
  [122] = 2,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(84), 18,
      anon_sym_main,
      anon_sym_is,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_pred,
      anon_sym_module,
      anon_sym_import_module,
      anon_sym_interface,
      anon_sym_implementation,
      anon_sym_type,
  [151] = 2,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(88), 18,
      anon_sym_main,
      anon_sym_is,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_pred,
      anon_sym_module,
      anon_sym_import_module,
      anon_sym_interface,
      anon_sym_implementation,
      anon_sym_type,
  [180] = 2,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(92), 18,
      anon_sym_main,
      anon_sym_is,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_pred,
      anon_sym_module,
      anon_sym_import_module,
      anon_sym_interface,
      anon_sym_implementation,
      anon_sym_type,
  [209] = 3,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(30), 1,
      sym_type,
    ACTIONS(11), 7,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
  [225] = 1,
    ACTIONS(76), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      sym_identifier,
  [236] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_term,
    STATE(27), 1,
      sym_string,
    ACTIONS(98), 2,
      sym_identifier,
      sym_number,
  [256] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_string,
    STATE(28), 1,
      sym_term,
    ACTIONS(98), 2,
      sym_identifier,
      sym_number,
  [273] = 3,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_string_repeat1,
    ACTIONS(100), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [284] = 3,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat2,
    ACTIONS(104), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [295] = 3,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(108), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [306] = 3,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(110), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [317] = 3,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat2,
    ACTIONS(115), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [328] = 3,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      aux_sym_string_repeat2,
    ACTIONS(120), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [339] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_predicate_arguments_repeat1,
  [349] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_predicate_arguments_repeat1,
  [359] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_predicate_arguments_repeat1,
  [369] = 2,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_predicate_arguments,
  [376] = 1,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [381] = 1,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [386] = 1,
    ACTIONS(137), 1,
      anon_sym_COLON_DASH,
  [390] = 1,
    ACTIONS(139), 1,
      anon_sym_DOT,
  [394] = 1,
    ACTIONS(141), 1,
      anon_sym_COLON_DASH,
  [398] = 1,
    ACTIONS(143), 1,
      anon_sym_COLON_DASH,
  [402] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
  [406] = 1,
    ACTIONS(147), 1,
      anon_sym_COLON_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 64,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 151,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 209,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 236,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 273,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 295,
  [SMALL_STATE(20)] = 306,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 328,
  [SMALL_STATE(23)] = 339,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 359,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 376,
  [SMALL_STATE(28)] = 381,
  [SMALL_STATE(29)] = 386,
  [SMALL_STATE(30)] = 390,
  [SMALL_STATE(31)] = 394,
  [SMALL_STATE(32)] = 398,
  [SMALL_STATE(33)] = 402,
  [SMALL_STATE(34)] = 406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_predicate, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_predicate, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(21),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_predicate_arguments_repeat1, 2), SHIFT_REPEAT(16),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_predicate_arguments_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_arguments, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_arguments, 3),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_arguments, 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mercury(void) {
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
