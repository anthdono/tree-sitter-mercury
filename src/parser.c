#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  anon_sym_try = 30,
  anon_sym_then = 31,
  anon_sym_catch = 32,
  anon_sym_if = 33,
  anon_sym_else = 34,
  sym_unescaped_double_string_fragment = 35,
  sym_unescaped_single_string_fragment = 36,
  sym_escape_sequence = 37,
  anon_sym_DQUOTE = 38,
  anon_sym_SQUOTE = 39,
  sym_source_file = 40,
  sym__definition = 41,
  sym_main_predicate = 42,
  sym_predicate_arguments = 43,
  sym_declaration = 44,
  sym_term = 45,
  sym_type = 46,
  sym_comment = 47,
  sym_operator = 48,
  sym_boolean_literal = 49,
  sym_keyword = 50,
  sym_conditional_keyword = 51,
  sym_string = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_predicate_arguments_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
  aux_sym_string_repeat2 = 56,
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
  [anon_sym_try] = "try",
  [anon_sym_then] = "then",
  [anon_sym_catch] = "catch",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
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
  [sym_conditional_keyword] = "conditional_keyword",
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
  [anon_sym_try] = anon_sym_try,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
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
  [sym_conditional_keyword] = sym_conditional_keyword,
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
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [sym_conditional_keyword] = {
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
  [14] = 14,
  [15] = 8,
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
  [35] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
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
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
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
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == 'y') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_main);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
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
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 's') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_yes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_no);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_pred);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_import_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_implementation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_try);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_then);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_catch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 156:
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
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
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
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__definition] = STATE(2),
    [sym_main_predicate] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_type] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_operator] = STATE(2),
    [sym_boolean_literal] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_conditional_keyword] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [anon_sym_try] = ACTIONS(19),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_catch] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_main_predicate] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_type] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_boolean_literal] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_conditional_keyword] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [sym_identifier] = ACTIONS(27),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_pred] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import_module] = ACTIONS(9),
    [anon_sym_interface] = ACTIONS(9),
    [anon_sym_implementation] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(9),
    [anon_sym_try] = ACTIONS(19),
    [anon_sym_then] = ACTIONS(19),
    [anon_sym_catch] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_main_predicate] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_type] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_operator] = STATE(3),
    [sym_boolean_literal] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_conditional_keyword] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_main] = ACTIONS(31),
    [anon_sym_COLON_DASH] = ACTIONS(34),
    [anon_sym_is] = ACTIONS(37),
    [anon_sym_bool] = ACTIONS(40),
    [anon_sym_int] = ACTIONS(40),
    [anon_sym_float] = ACTIONS(40),
    [anon_sym_string] = ACTIONS(40),
    [anon_sym_list] = ACTIONS(40),
    [anon_sym_map] = ACTIONS(40),
    [anon_sym_exception] = ACTIONS(40),
    [aux_sym_comment_token1] = ACTIONS(43),
    [aux_sym_comment_token2] = ACTIONS(43),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_yes] = ACTIONS(49),
    [anon_sym_no] = ACTIONS(49),
    [anon_sym_pred] = ACTIONS(37),
    [anon_sym_module] = ACTIONS(37),
    [anon_sym_import_module] = ACTIONS(37),
    [anon_sym_interface] = ACTIONS(37),
    [anon_sym_implementation] = ACTIONS(37),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_try] = ACTIONS(52),
    [anon_sym_then] = ACTIONS(52),
    [anon_sym_catch] = ACTIONS(52),
    [anon_sym_if] = ACTIONS(52),
    [anon_sym_else] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(58),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_main] = ACTIONS(63),
    [anon_sym_COLON_DASH] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_is] = ACTIONS(63),
    [anon_sym_bool] = ACTIONS(63),
    [anon_sym_int] = ACTIONS(63),
    [anon_sym_float] = ACTIONS(63),
    [anon_sym_string] = ACTIONS(63),
    [anon_sym_list] = ACTIONS(63),
    [anon_sym_map] = ACTIONS(63),
    [anon_sym_exception] = ACTIONS(63),
    [aux_sym_comment_token1] = ACTIONS(61),
    [aux_sym_comment_token2] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_yes] = ACTIONS(63),
    [anon_sym_no] = ACTIONS(63),
    [anon_sym_pred] = ACTIONS(63),
    [anon_sym_module] = ACTIONS(63),
    [anon_sym_import_module] = ACTIONS(63),
    [anon_sym_interface] = ACTIONS(63),
    [anon_sym_implementation] = ACTIONS(63),
    [anon_sym_type] = ACTIONS(63),
    [anon_sym_try] = ACTIONS(63),
    [anon_sym_then] = ACTIONS(63),
    [anon_sym_catch] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_else] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(61),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_main] = ACTIONS(67),
    [anon_sym_COLON_DASH] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_is] = ACTIONS(67),
    [anon_sym_bool] = ACTIONS(67),
    [anon_sym_int] = ACTIONS(67),
    [anon_sym_float] = ACTIONS(67),
    [anon_sym_string] = ACTIONS(67),
    [anon_sym_list] = ACTIONS(67),
    [anon_sym_map] = ACTIONS(67),
    [anon_sym_exception] = ACTIONS(67),
    [aux_sym_comment_token1] = ACTIONS(65),
    [aux_sym_comment_token2] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_yes] = ACTIONS(67),
    [anon_sym_no] = ACTIONS(67),
    [anon_sym_pred] = ACTIONS(67),
    [anon_sym_module] = ACTIONS(67),
    [anon_sym_import_module] = ACTIONS(67),
    [anon_sym_interface] = ACTIONS(67),
    [anon_sym_implementation] = ACTIONS(67),
    [anon_sym_type] = ACTIONS(67),
    [anon_sym_try] = ACTIONS(67),
    [anon_sym_then] = ACTIONS(67),
    [anon_sym_catch] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_else] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(65),
  },
  [6] = {
    [sym_keyword] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_main] = ACTIONS(71),
    [anon_sym_COLON_DASH] = ACTIONS(69),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_bool] = ACTIONS(71),
    [anon_sym_int] = ACTIONS(71),
    [anon_sym_float] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(71),
    [anon_sym_list] = ACTIONS(71),
    [anon_sym_map] = ACTIONS(71),
    [anon_sym_exception] = ACTIONS(71),
    [aux_sym_comment_token1] = ACTIONS(69),
    [aux_sym_comment_token2] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_yes] = ACTIONS(71),
    [anon_sym_no] = ACTIONS(71),
    [anon_sym_pred] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(73),
    [anon_sym_import_module] = ACTIONS(73),
    [anon_sym_interface] = ACTIONS(73),
    [anon_sym_implementation] = ACTIONS(73),
    [anon_sym_type] = ACTIONS(73),
    [anon_sym_try] = ACTIONS(71),
    [anon_sym_then] = ACTIONS(71),
    [anon_sym_catch] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_else] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_main] = ACTIONS(77),
    [anon_sym_COLON_DASH] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_is] = ACTIONS(77),
    [anon_sym_bool] = ACTIONS(77),
    [anon_sym_int] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_string] = ACTIONS(77),
    [anon_sym_list] = ACTIONS(77),
    [anon_sym_map] = ACTIONS(77),
    [anon_sym_exception] = ACTIONS(77),
    [aux_sym_comment_token1] = ACTIONS(75),
    [aux_sym_comment_token2] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_yes] = ACTIONS(77),
    [anon_sym_no] = ACTIONS(77),
    [anon_sym_pred] = ACTIONS(77),
    [anon_sym_module] = ACTIONS(77),
    [anon_sym_import_module] = ACTIONS(77),
    [anon_sym_interface] = ACTIONS(77),
    [anon_sym_implementation] = ACTIONS(77),
    [anon_sym_type] = ACTIONS(77),
    [anon_sym_try] = ACTIONS(77),
    [anon_sym_then] = ACTIONS(77),
    [anon_sym_catch] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_else] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_main] = ACTIONS(81),
    [anon_sym_COLON_DASH] = ACTIONS(79),
    [anon_sym_is] = ACTIONS(81),
    [anon_sym_bool] = ACTIONS(81),
    [anon_sym_int] = ACTIONS(81),
    [anon_sym_float] = ACTIONS(81),
    [anon_sym_string] = ACTIONS(81),
    [anon_sym_list] = ACTIONS(81),
    [anon_sym_map] = ACTIONS(81),
    [anon_sym_exception] = ACTIONS(81),
    [aux_sym_comment_token1] = ACTIONS(79),
    [aux_sym_comment_token2] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_yes] = ACTIONS(81),
    [anon_sym_no] = ACTIONS(81),
    [anon_sym_pred] = ACTIONS(81),
    [anon_sym_module] = ACTIONS(81),
    [anon_sym_import_module] = ACTIONS(81),
    [anon_sym_interface] = ACTIONS(81),
    [anon_sym_implementation] = ACTIONS(81),
    [anon_sym_type] = ACTIONS(81),
    [anon_sym_try] = ACTIONS(81),
    [anon_sym_then] = ACTIONS(81),
    [anon_sym_catch] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_else] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_main] = ACTIONS(85),
    [anon_sym_COLON_DASH] = ACTIONS(83),
    [anon_sym_is] = ACTIONS(85),
    [anon_sym_bool] = ACTIONS(85),
    [anon_sym_int] = ACTIONS(85),
    [anon_sym_float] = ACTIONS(85),
    [anon_sym_string] = ACTIONS(85),
    [anon_sym_list] = ACTIONS(85),
    [anon_sym_map] = ACTIONS(85),
    [anon_sym_exception] = ACTIONS(85),
    [aux_sym_comment_token1] = ACTIONS(83),
    [aux_sym_comment_token2] = ACTIONS(83),
    [sym_identifier] = ACTIONS(85),
    [anon_sym_yes] = ACTIONS(85),
    [anon_sym_no] = ACTIONS(85),
    [anon_sym_pred] = ACTIONS(85),
    [anon_sym_module] = ACTIONS(85),
    [anon_sym_import_module] = ACTIONS(85),
    [anon_sym_interface] = ACTIONS(85),
    [anon_sym_implementation] = ACTIONS(85),
    [anon_sym_type] = ACTIONS(85),
    [anon_sym_try] = ACTIONS(85),
    [anon_sym_then] = ACTIONS(85),
    [anon_sym_catch] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_else] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_main] = ACTIONS(89),
    [anon_sym_COLON_DASH] = ACTIONS(87),
    [anon_sym_is] = ACTIONS(89),
    [anon_sym_bool] = ACTIONS(89),
    [anon_sym_int] = ACTIONS(89),
    [anon_sym_float] = ACTIONS(89),
    [anon_sym_string] = ACTIONS(89),
    [anon_sym_list] = ACTIONS(89),
    [anon_sym_map] = ACTIONS(89),
    [anon_sym_exception] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(87),
    [aux_sym_comment_token2] = ACTIONS(87),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_yes] = ACTIONS(89),
    [anon_sym_no] = ACTIONS(89),
    [anon_sym_pred] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(89),
    [anon_sym_import_module] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_implementation] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_then] = ACTIONS(89),
    [anon_sym_catch] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_main] = ACTIONS(93),
    [anon_sym_COLON_DASH] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(93),
    [anon_sym_bool] = ACTIONS(93),
    [anon_sym_int] = ACTIONS(93),
    [anon_sym_float] = ACTIONS(93),
    [anon_sym_string] = ACTIONS(93),
    [anon_sym_list] = ACTIONS(93),
    [anon_sym_map] = ACTIONS(93),
    [anon_sym_exception] = ACTIONS(93),
    [aux_sym_comment_token1] = ACTIONS(91),
    [aux_sym_comment_token2] = ACTIONS(91),
    [sym_identifier] = ACTIONS(93),
    [anon_sym_yes] = ACTIONS(93),
    [anon_sym_no] = ACTIONS(93),
    [anon_sym_pred] = ACTIONS(93),
    [anon_sym_module] = ACTIONS(93),
    [anon_sym_import_module] = ACTIONS(93),
    [anon_sym_interface] = ACTIONS(93),
    [anon_sym_implementation] = ACTIONS(93),
    [anon_sym_type] = ACTIONS(93),
    [anon_sym_try] = ACTIONS(93),
    [anon_sym_then] = ACTIONS(93),
    [anon_sym_catch] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_else] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_main] = ACTIONS(97),
    [anon_sym_COLON_DASH] = ACTIONS(95),
    [anon_sym_is] = ACTIONS(97),
    [anon_sym_bool] = ACTIONS(97),
    [anon_sym_int] = ACTIONS(97),
    [anon_sym_float] = ACTIONS(97),
    [anon_sym_string] = ACTIONS(97),
    [anon_sym_list] = ACTIONS(97),
    [anon_sym_map] = ACTIONS(97),
    [anon_sym_exception] = ACTIONS(97),
    [aux_sym_comment_token1] = ACTIONS(95),
    [aux_sym_comment_token2] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_yes] = ACTIONS(97),
    [anon_sym_no] = ACTIONS(97),
    [anon_sym_pred] = ACTIONS(97),
    [anon_sym_module] = ACTIONS(97),
    [anon_sym_import_module] = ACTIONS(97),
    [anon_sym_interface] = ACTIONS(97),
    [anon_sym_implementation] = ACTIONS(97),
    [anon_sym_type] = ACTIONS(97),
    [anon_sym_try] = ACTIONS(97),
    [anon_sym_then] = ACTIONS(97),
    [anon_sym_catch] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_else] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_main] = ACTIONS(101),
    [anon_sym_COLON_DASH] = ACTIONS(99),
    [anon_sym_is] = ACTIONS(101),
    [anon_sym_bool] = ACTIONS(101),
    [anon_sym_int] = ACTIONS(101),
    [anon_sym_float] = ACTIONS(101),
    [anon_sym_string] = ACTIONS(101),
    [anon_sym_list] = ACTIONS(101),
    [anon_sym_map] = ACTIONS(101),
    [anon_sym_exception] = ACTIONS(101),
    [aux_sym_comment_token1] = ACTIONS(99),
    [aux_sym_comment_token2] = ACTIONS(99),
    [sym_identifier] = ACTIONS(101),
    [anon_sym_yes] = ACTIONS(101),
    [anon_sym_no] = ACTIONS(101),
    [anon_sym_pred] = ACTIONS(101),
    [anon_sym_module] = ACTIONS(101),
    [anon_sym_import_module] = ACTIONS(101),
    [anon_sym_interface] = ACTIONS(101),
    [anon_sym_implementation] = ACTIONS(101),
    [anon_sym_type] = ACTIONS(101),
    [anon_sym_try] = ACTIONS(101),
    [anon_sym_then] = ACTIONS(101),
    [anon_sym_catch] = ACTIONS(101),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_else] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(31), 1,
      sym_type,
    ACTIONS(11), 7,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
  [16] = 1,
    ACTIONS(81), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      sym_identifier,
  [27] = 6,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_term,
    STATE(28), 1,
      sym_string,
    ACTIONS(107), 2,
      sym_identifier,
      sym_number,
  [47] = 5,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_string,
    STATE(29), 1,
      sym_term,
    ACTIONS(107), 2,
      sym_identifier,
      sym_number,
  [64] = 3,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat2,
    ACTIONS(109), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [75] = 3,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(113), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [86] = 3,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(115), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [97] = 3,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym_string_repeat2,
    ACTIONS(120), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [108] = 3,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      aux_sym_string_repeat2,
    ACTIONS(125), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [119] = 3,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_string_repeat1,
    ACTIONS(129), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [130] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_predicate_arguments_repeat1,
  [140] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_predicate_arguments_repeat1,
  [150] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_predicate_arguments_repeat1,
  [160] = 2,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_predicate_arguments,
  [167] = 1,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [172] = 1,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [177] = 1,
    ACTIONS(146), 1,
      anon_sym_COLON_DASH,
  [181] = 1,
    ACTIONS(148), 1,
      anon_sym_DOT,
  [185] = 1,
    ACTIONS(150), 1,
      anon_sym_COLON_DASH,
  [189] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [193] = 1,
    ACTIONS(154), 1,
      anon_sym_COLON_DASH,
  [197] = 1,
    ACTIONS(156), 1,
      anon_sym_COLON_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 16,
  [SMALL_STATE(16)] = 27,
  [SMALL_STATE(17)] = 47,
  [SMALL_STATE(18)] = 64,
  [SMALL_STATE(19)] = 75,
  [SMALL_STATE(20)] = 86,
  [SMALL_STATE(21)] = 97,
  [SMALL_STATE(22)] = 108,
  [SMALL_STATE(23)] = 119,
  [SMALL_STATE(24)] = 130,
  [SMALL_STATE(25)] = 140,
  [SMALL_STATE(26)] = 150,
  [SMALL_STATE(27)] = 160,
  [SMALL_STATE(28)] = 167,
  [SMALL_STATE(29)] = 172,
  [SMALL_STATE(30)] = 177,
  [SMALL_STATE(31)] = 181,
  [SMALL_STATE(32)] = 185,
  [SMALL_STATE(33)] = 189,
  [SMALL_STATE(34)] = 193,
  [SMALL_STATE(35)] = 197,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_keyword, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_keyword, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_predicate, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_predicate, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(21),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_predicate_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_predicate_arguments_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_arguments, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_arguments, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_arguments, 4),
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
