#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 2
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_import_module = 1,
  anon_sym_interface = 2,
  anon_sym_DOT = 3,
  anon_sym_module = 4,
  anon_sym_end_module = 5,
  anon_sym_type = 6,
  anon_sym_pred = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COLON_COLON = 11,
  anon_sym_in = 12,
  anon_sym_out = 13,
  anon_sym_di = 14,
  anon_sym_uo = 15,
  anon_sym_is = 16,
  anon_sym_det = 17,
  anon_sym_multi = 18,
  anon_sym_nondet = 19,
  anon_sym_semidet = 20,
  anon_sym_cc_nondet = 21,
  anon_sym_cc_multi = 22,
  anon_sym_erroneous = 23,
  anon_sym_failure = 24,
  anon_sym_LT_EQ = 25,
  aux_sym_custom_type_token1 = 26,
  anon_sym_bool = 27,
  anon_sym_int = 28,
  anon_sym_float = 29,
  anon_sym_string = 30,
  anon_sym_list = 31,
  anon_sym_map = 32,
  anon_sym_exception = 33,
  anon_sym_char = 34,
  aux_sym_comment_token1 = 35,
  aux_sym_comment_token2 = 36,
  sym_declaration_operator = 37,
  sym_equality_operator = 38,
  sym_union_type_constructor_operator = 39,
  sym_or_operator = 40,
  sym_variable = 41,
  sym_number = 42,
  sym_string_escape_sequence = 43,
  anon_sym_DQUOTE = 44,
  anon_sym_SQUOTE = 45,
  sym_source_file = 46,
  sym__definition = 47,
  sym__expression = 48,
  sym_declaration = 49,
  sym_import_declaration = 50,
  sym_interface_declaration = 51,
  sym_module_declaration = 52,
  sym_type_declaration = 53,
  sym_type_declaration_union_types = 54,
  sym_predicate_declaration = 55,
  sym_predicate = 56,
  sym_parameters = 57,
  sym_parameter = 58,
  sym_arguments = 59,
  sym_argument = 60,
  sym_mode = 61,
  sym_determinism = 62,
  sym_constraints = 63,
  sym_constraint = 64,
  sym_type = 65,
  sym_builtin_type = 66,
  sym_comment = 67,
  sym_end = 68,
  sym__identifier_or_chained_identifiers = 69,
  sym_identifier = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_module_declaration_repeat1 = 72,
  aux_sym_type_declaration_repeat1 = 73,
  aux_sym_type_declaration_repeat2 = 74,
  aux_sym_predicate_repeat1 = 75,
  aux_sym_parameters_repeat1 = 76,
  aux_sym_arguments_repeat1 = 77,
  aux_sym_argument_repeat1 = 78,
  aux_sym_constraints_repeat1 = 79,
  alias_sym_operator = 80,
  alias_sym_predicate_identifier = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import_module] = "keyword",
  [anon_sym_interface] = "keyword",
  [anon_sym_DOT] = ".",
  [anon_sym_module] = "keyword",
  [anon_sym_end_module] = "keyword",
  [anon_sym_type] = "keyword",
  [anon_sym_pred] = "keyword",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_di] = "di",
  [anon_sym_uo] = "uo",
  [anon_sym_is] = "is",
  [anon_sym_det] = "det",
  [anon_sym_multi] = "multi",
  [anon_sym_nondet] = "nondet",
  [anon_sym_semidet] = "semidet",
  [anon_sym_cc_nondet] = "cc_nondet",
  [anon_sym_cc_multi] = "cc_multi",
  [anon_sym_erroneous] = "erroneous",
  [anon_sym_failure] = "failure",
  [anon_sym_LT_EQ] = "<=",
  [aux_sym_custom_type_token1] = "custom_type_token1",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym_list] = "list",
  [anon_sym_map] = "map",
  [anon_sym_exception] = "exception",
  [anon_sym_char] = "char",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_declaration_operator] = "declaration_operator",
  [sym_equality_operator] = "equality_operator",
  [sym_union_type_constructor_operator] = "union_type_constructor_operator",
  [sym_or_operator] = "or_operator",
  [sym_variable] = "variable",
  [sym_number] = "number",
  [sym_string_escape_sequence] = "string_escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__expression] = "_expression",
  [sym_declaration] = "declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_type_declaration_union_types] = "type_declaration_union_types",
  [sym_predicate_declaration] = "predicate_declaration",
  [sym_predicate] = "predicate",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym_mode] = "keyword",
  [sym_determinism] = "determinism",
  [sym_constraints] = "constraints",
  [sym_constraint] = "constraint",
  [sym_type] = "type",
  [sym_builtin_type] = "builtin_type",
  [sym_comment] = "comment",
  [sym_end] = "end",
  [sym__identifier_or_chained_identifiers] = "_identifier_or_chained_identifiers",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_declaration_repeat1] = "module_declaration_repeat1",
  [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
  [aux_sym_type_declaration_repeat2] = "type_declaration_repeat2",
  [aux_sym_predicate_repeat1] = "predicate_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_constraints_repeat1] = "constraints_repeat1",
  [alias_sym_operator] = "operator",
  [alias_sym_predicate_identifier] = "predicate_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import_module] = anon_sym_import_module,
  [anon_sym_interface] = anon_sym_import_module,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_module] = anon_sym_import_module,
  [anon_sym_end_module] = anon_sym_import_module,
  [anon_sym_type] = anon_sym_import_module,
  [anon_sym_pred] = anon_sym_import_module,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_di] = anon_sym_di,
  [anon_sym_uo] = anon_sym_uo,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_det] = anon_sym_det,
  [anon_sym_multi] = anon_sym_multi,
  [anon_sym_nondet] = anon_sym_nondet,
  [anon_sym_semidet] = anon_sym_semidet,
  [anon_sym_cc_nondet] = anon_sym_cc_nondet,
  [anon_sym_cc_multi] = anon_sym_cc_multi,
  [anon_sym_erroneous] = anon_sym_erroneous,
  [anon_sym_failure] = anon_sym_failure,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [aux_sym_custom_type_token1] = aux_sym_custom_type_token1,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_exception] = anon_sym_exception,
  [anon_sym_char] = anon_sym_char,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_declaration_operator] = sym_declaration_operator,
  [sym_equality_operator] = sym_equality_operator,
  [sym_union_type_constructor_operator] = sym_union_type_constructor_operator,
  [sym_or_operator] = sym_or_operator,
  [sym_variable] = sym_variable,
  [sym_number] = sym_number,
  [sym_string_escape_sequence] = sym_string_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__expression] = sym__expression,
  [sym_declaration] = sym_declaration,
  [sym_import_declaration] = sym_import_declaration,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_type_declaration_union_types] = sym_type_declaration_union_types,
  [sym_predicate_declaration] = sym_predicate_declaration,
  [sym_predicate] = sym_predicate,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [sym_mode] = anon_sym_import_module,
  [sym_determinism] = sym_determinism,
  [sym_constraints] = sym_constraints,
  [sym_constraint] = sym_constraint,
  [sym_type] = sym_type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_comment] = sym_comment,
  [sym_end] = sym_end,
  [sym__identifier_or_chained_identifiers] = sym__identifier_or_chained_identifiers,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_declaration_repeat1] = aux_sym_module_declaration_repeat1,
  [aux_sym_type_declaration_repeat1] = aux_sym_type_declaration_repeat1,
  [aux_sym_type_declaration_repeat2] = aux_sym_type_declaration_repeat2,
  [aux_sym_predicate_repeat1] = aux_sym_predicate_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_constraints_repeat1] = aux_sym_constraints_repeat1,
  [alias_sym_operator] = alias_sym_operator,
  [alias_sym_predicate_identifier] = alias_sym_predicate_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import_module] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_end_module] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pred] = {
    .visible = true,
    .named = true,
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_di] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_det] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nondet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_semidet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cc_nondet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cc_multi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_erroneous] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_failure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_custom_type_token1] = {
    .visible = false,
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
  [anon_sym_char] = {
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
  [sym_declaration_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type_constructor_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_or_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string_escape_sequence] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_union_types] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_determinism] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_or_chained_identifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_predicate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_operator] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_predicate_identifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_predicate_identifier,
  },
  [2] = {
    [3] = alias_sym_operator,
  },
  [3] = {
    [1] = alias_sym_operator,
  },
  [4] = {
    [4] = alias_sym_operator,
  },
  [5] = {
    [2] = alias_sym_operator,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    alias_sym_predicate_identifier,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 18,
  [27] = 27,
  [28] = 12,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 22,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 16,
  [43] = 43,
  [44] = 20,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 12,
  [51] = 51,
  [52] = 18,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 12,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 80,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 95,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 95,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(147);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(238);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(237);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == ':') ADVANCE(159);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(159);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(234);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(235);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(221);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 134:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 136:
      if (lookahead == '{') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 137:
      if (lookahead == '}') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 145:
      if (eof) ADVANCE(147);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(157);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(238);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(145)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(237);
      END_STATE();
    case 146:
      if (eof) ADVANCE(147);
      if (lookahead == '%') ADVANCE(231);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_import_module);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_end_module);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_pred);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_di);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_di);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_uo);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_uo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_det);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_nondet);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_semidet);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_cc_nondet);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_cc_multi);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_erroneous);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_failure);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'a') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'a') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'a') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'c') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'g') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'h') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'i') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'n') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'p') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'p') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'x') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_declaration_operator);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_union_type_constructor_operator);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_or_operator);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 146},
  [35] = {.lex_state = 146},
  [36] = {.lex_state = 146},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 146},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 146},
  [44] = {.lex_state = 146},
  [45] = {.lex_state = 146},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 146},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 146},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 146},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 146},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 146},
  [58] = {.lex_state = 146},
  [59] = {.lex_state = 146},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 146},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 146},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 146},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 146},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 146},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 146},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 146},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import_module] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_end_module] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_pred] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_di] = ACTIONS(1),
    [anon_sym_uo] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_det] = ACTIONS(1),
    [anon_sym_multi] = ACTIONS(1),
    [anon_sym_nondet] = ACTIONS(1),
    [anon_sym_semidet] = ACTIONS(1),
    [anon_sym_cc_nondet] = ACTIONS(1),
    [anon_sym_cc_multi] = ACTIONS(1),
    [anon_sym_erroneous] = ACTIONS(1),
    [anon_sym_failure] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_exception] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [sym_declaration_operator] = ACTIONS(1),
    [sym_equality_operator] = ACTIONS(1),
    [sym_union_type_constructor_operator] = ACTIONS(1),
    [sym_or_operator] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(118),
    [sym__definition] = STATE(19),
    [sym__expression] = STATE(19),
    [sym_declaration] = STATE(19),
    [sym_import_declaration] = STATE(62),
    [sym_interface_declaration] = STATE(62),
    [sym_module_declaration] = STATE(62),
    [sym_type_declaration] = STATE(62),
    [sym_predicate_declaration] = STATE(62),
    [sym_comment] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(5),
    [sym_declaration_operator] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(14), 1,
      aux_sym_custom_type_token1,
    ACTIONS(20), 1,
      sym_variable,
    STATE(17), 1,
      sym_builtin_type,
    ACTIONS(12), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(2), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(14), 2,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
    ACTIONS(17), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [35] = 8,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(31), 1,
      sym_variable,
    STATE(17), 1,
      sym_builtin_type,
    ACTIONS(25), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(2), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(14), 2,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
    ACTIONS(29), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [70] = 8,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(33), 1,
      sym_variable,
    STATE(17), 1,
      sym_builtin_type,
    STATE(81), 1,
      sym_argument,
    STATE(3), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(14), 2,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
    ACTIONS(29), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [104] = 8,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(33), 1,
      sym_variable,
    STATE(17), 1,
      sym_builtin_type,
    STATE(102), 1,
      sym_argument,
    STATE(3), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(14), 2,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
    ACTIONS(29), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [138] = 8,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(33), 1,
      sym_variable,
    STATE(17), 1,
      sym_builtin_type,
    STATE(83), 1,
      sym_argument,
    STATE(3), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(14), 2,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
    ACTIONS(29), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [172] = 8,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(17), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(71), 1,
      sym_end,
    STATE(10), 2,
      sym_type_declaration_union_types,
      aux_sym_type_declaration_repeat2,
    ACTIONS(29), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [205] = 8,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(17), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(74), 1,
      sym_end,
    STATE(13), 2,
      sym_type_declaration_union_types,
      aux_sym_type_declaration_repeat2,
    ACTIONS(29), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [238] = 10,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(47), 1,
      aux_sym_custom_type_token1,
    ACTIONS(49), 1,
      sym_variable,
    STATE(39), 1,
      sym_arguments,
    STATE(112), 1,
      sym_mode,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(20), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
    ACTIONS(45), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [275] = 8,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(17), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(60), 1,
      sym_end,
    STATE(13), 2,
      sym_type_declaration_union_types,
      aux_sym_type_declaration_repeat2,
    ACTIONS(29), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [308] = 8,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(17), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(65), 1,
      sym_end,
    STATE(8), 2,
      sym_type_declaration_union_types,
      aux_sym_type_declaration_repeat2,
    ACTIONS(29), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [341] = 2,
    ACTIONS(51), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or_operator,
    ACTIONS(53), 10,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
      sym_variable,
  [361] = 7,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      aux_sym_custom_type_token1,
    STATE(17), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(13), 2,
      sym_type_declaration_union_types,
      aux_sym_type_declaration_repeat2,
    ACTIONS(60), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [391] = 4,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_arguments,
    ACTIONS(63), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(67), 10,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
      sym_variable,
  [415] = 2,
    ACTIONS(69), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or_operator,
    ACTIONS(71), 10,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
      sym_variable,
  [434] = 2,
    ACTIONS(73), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or_operator,
    ACTIONS(75), 10,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
      sym_variable,
  [453] = 2,
    ACTIONS(77), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or_operator,
    ACTIONS(79), 10,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
      sym_variable,
  [472] = 2,
    ACTIONS(81), 4,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(83), 10,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
      sym_variable,
  [491] = 5,
    ACTIONS(7), 1,
      sym_declaration_operator,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(21), 5,
      sym__definition,
      sym__expression,
      sym_declaration,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(62), 5,
      sym_import_declaration,
      sym_interface_declaration,
      sym_module_declaration,
      sym_type_declaration,
      sym_predicate_declaration,
  [516] = 6,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      aux_sym_custom_type_token1,
    ACTIONS(97), 1,
      sym_variable,
    STATE(20), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
    ACTIONS(90), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
    ACTIONS(92), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [543] = 5,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym_declaration_operator,
    ACTIONS(102), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(21), 5,
      sym__definition,
      sym__expression,
      sym_declaration,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(62), 5,
      sym_import_declaration,
      sym_interface_declaration,
      sym_module_declaration,
      sym_type_declaration,
      sym_predicate_declaration,
  [568] = 2,
    ACTIONS(108), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or_operator,
    ACTIONS(110), 10,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
      sym_variable,
  [587] = 2,
    ACTIONS(12), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(112), 10,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
      sym_variable,
  [605] = 5,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_DOT,
    ACTIONS(118), 1,
      sym_or_operator,
    STATE(29), 1,
      sym_arguments,
    ACTIONS(116), 9,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [629] = 4,
    ACTIONS(120), 1,
      aux_sym_custom_type_token1,
    STATE(17), 1,
      sym_builtin_type,
    STATE(89), 2,
      sym_type,
      sym_identifier,
    ACTIONS(29), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [650] = 2,
    ACTIONS(81), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
    ACTIONS(83), 6,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
      aux_sym_custom_type_token1,
      sym_variable,
  [666] = 3,
    ACTIONS(114), 1,
      anon_sym_DOT,
    ACTIONS(118), 1,
      sym_or_operator,
    ACTIONS(116), 9,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [684] = 2,
    ACTIONS(51), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
    ACTIONS(53), 6,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
      aux_sym_custom_type_token1,
      sym_variable,
  [700] = 3,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(126), 1,
      sym_or_operator,
    ACTIONS(124), 9,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [718] = 3,
    STATE(17), 1,
      sym_builtin_type,
    STATE(94), 1,
      sym_type,
    ACTIONS(128), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [735] = 2,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(132), 9,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [750] = 2,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(136), 9,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [765] = 3,
    STATE(17), 1,
      sym_builtin_type,
    STATE(106), 1,
      sym_type,
    ACTIONS(128), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [782] = 7,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    ACTIONS(144), 1,
      sym_equality_operator,
    ACTIONS(146), 1,
      sym_union_type_constructor_operator,
    STATE(104), 1,
      sym_parameters,
    STATE(35), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_type_declaration_repeat1,
  [806] = 4,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(153), 1,
      aux_sym_custom_type_token1,
    ACTIONS(151), 3,
      anon_sym_LPAREN,
      sym_equality_operator,
      sym_union_type_constructor_operator,
    STATE(35), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_type_declaration_repeat1,
  [823] = 6,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    ACTIONS(156), 1,
      sym_variable,
    STATE(111), 1,
      sym_arguments,
    STATE(44), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
  [844] = 1,
    ACTIONS(108), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
      anon_sym_is,
  [855] = 1,
    ACTIONS(158), 8,
      anon_sym_det,
      anon_sym_multi,
      anon_sym_nondet,
      anon_sym_semidet,
      anon_sym_cc_nondet,
      anon_sym_cc_multi,
      anon_sym_erroneous,
      anon_sym_failure,
  [866] = 4,
    ACTIONS(162), 1,
      anon_sym_COLON_COLON,
    STATE(90), 1,
      sym_mode,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(164), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [883] = 6,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    ACTIONS(166), 1,
      sym_variable,
    STATE(92), 1,
      sym_predicate,
    STATE(98), 1,
      sym_constraint,
    STATE(36), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
  [904] = 8,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_is,
    ACTIONS(170), 1,
      anon_sym_LT_EQ,
    STATE(49), 1,
      sym_parameters,
    STATE(61), 1,
      sym_determinism,
    STATE(72), 1,
      sym_end,
    STATE(109), 1,
      sym_constraints,
  [929] = 1,
    ACTIONS(73), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
      anon_sym_is,
  [940] = 6,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    ACTIONS(166), 1,
      sym_variable,
    STATE(79), 1,
      sym_constraint,
    STATE(92), 1,
      sym_predicate,
    STATE(36), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
  [961] = 5,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      aux_sym_custom_type_token1,
    ACTIONS(178), 1,
      sym_variable,
    STATE(44), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
  [979] = 5,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      aux_sym_custom_type_token1,
    ACTIONS(183), 1,
      sym_variable,
    STATE(84), 1,
      sym_parameter,
    STATE(9), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
  [997] = 3,
    STATE(97), 1,
      sym_mode,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(164), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [1011] = 3,
    STATE(90), 1,
      sym_mode,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(164), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [1025] = 5,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      aux_sym_custom_type_token1,
    ACTIONS(183), 1,
      sym_variable,
    STATE(108), 1,
      sym_parameter,
    STATE(9), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
  [1043] = 6,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(168), 1,
      anon_sym_is,
    ACTIONS(170), 1,
      anon_sym_LT_EQ,
    STATE(63), 1,
      sym_end,
    STATE(75), 1,
      sym_determinism,
    STATE(96), 1,
      sym_constraints,
  [1062] = 2,
    ACTIONS(53), 1,
      sym_variable,
    ACTIONS(51), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      aux_sym_custom_type_token1,
      sym_equality_operator,
      sym_union_type_constructor_operator,
  [1073] = 5,
    ACTIONS(187), 1,
      anon_sym_import_module,
    ACTIONS(189), 1,
      anon_sym_interface,
    ACTIONS(193), 1,
      anon_sym_type,
    ACTIONS(195), 1,
      anon_sym_pred,
    ACTIONS(191), 2,
      anon_sym_module,
      anon_sym_end_module,
  [1090] = 2,
    ACTIONS(83), 1,
      sym_variable,
    ACTIONS(81), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      aux_sym_custom_type_token1,
      sym_equality_operator,
      sym_union_type_constructor_operator,
  [1101] = 1,
    ACTIONS(197), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1110] = 3,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1123] = 1,
    ACTIONS(199), 5,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_LT_EQ,
      sym_equality_operator,
      sym_union_type_constructor_operator,
  [1131] = 1,
    ACTIONS(201), 5,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_LT_EQ,
      sym_equality_operator,
      sym_union_type_constructor_operator,
  [1139] = 4,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(68), 1,
      sym_end,
    STATE(59), 2,
      sym_identifier,
      aux_sym_module_declaration_repeat1,
  [1153] = 3,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(34), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_type_declaration_repeat1,
  [1165] = 4,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(73), 1,
      sym_end,
    STATE(76), 2,
      sym_identifier,
      aux_sym_module_declaration_repeat1,
  [1179] = 1,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1186] = 4,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LT_EQ,
    STATE(63), 1,
      sym_end,
    STATE(96), 1,
      sym_constraints,
  [1199] = 1,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1206] = 1,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1213] = 1,
    ACTIONS(211), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1220] = 1,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1227] = 1,
    ACTIONS(51), 4,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_is,
      anon_sym_LT_EQ,
  [1234] = 1,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1241] = 1,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1248] = 1,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1255] = 1,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1262] = 1,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1269] = 1,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1276] = 1,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1283] = 1,
    ACTIONS(229), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1290] = 4,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      anon_sym_LT_EQ,
    STATE(77), 1,
      sym_end,
    STATE(100), 1,
      sym_constraints,
  [1303] = 3,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      aux_sym_custom_type_token1,
    STATE(76), 2,
      sym_identifier,
      aux_sym_module_declaration_repeat1,
  [1314] = 1,
    ACTIONS(237), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1321] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1331] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_constraints_repeat1,
  [1341] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1351] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_arguments_repeat1,
  [1361] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_parameters_repeat1,
  [1371] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_arguments_repeat1,
  [1381] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_parameters_repeat1,
  [1391] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_constraints_repeat1,
  [1401] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_parameters_repeat1,
  [1411] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_constraints_repeat1,
  [1421] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
  [1431] = 2,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(69), 1,
      sym_end,
  [1438] = 1,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1443] = 1,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1448] = 1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1453] = 1,
    ACTIONS(280), 2,
      anon_sym_DOT,
      aux_sym_custom_type_token1,
  [1458] = 2,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(60), 1,
      sym_end,
  [1465] = 2,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(52), 1,
      sym_identifier,
  [1472] = 2,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(77), 1,
      sym_end,
  [1479] = 1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1484] = 1,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1489] = 2,
    ACTIONS(284), 1,
      aux_sym_custom_type_token1,
    STATE(18), 1,
      sym_identifier,
  [1496] = 2,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(70), 1,
      sym_end,
  [1503] = 2,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(105), 1,
      sym_end,
  [1510] = 1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1515] = 2,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(93), 1,
      sym_identifier,
  [1522] = 2,
    ACTIONS(286), 1,
      sym_equality_operator,
    ACTIONS(288), 1,
      sym_union_type_constructor_operator,
  [1529] = 1,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1534] = 2,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(74), 1,
      sym_end,
  [1541] = 2,
    ACTIONS(181), 1,
      aux_sym_custom_type_token1,
    STATE(26), 1,
      sym_identifier,
  [1548] = 1,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1553] = 2,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(63), 1,
      sym_end,
  [1560] = 2,
    ACTIONS(292), 1,
      aux_sym_custom_type_token1,
    STATE(41), 1,
      sym_identifier,
  [1567] = 2,
    ACTIONS(168), 1,
      anon_sym_is,
    STATE(101), 1,
      sym_determinism,
  [1574] = 1,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1579] = 1,
    ACTIONS(294), 2,
      anon_sym_DOT,
      anon_sym_LT_EQ,
  [1584] = 1,
    ACTIONS(296), 1,
      anon_sym_DOT,
  [1588] = 1,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
  [1592] = 1,
    ACTIONS(300), 1,
      anon_sym_DOT,
  [1596] = 1,
    ACTIONS(302), 1,
      anon_sym_DOT,
  [1600] = 1,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 341,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 391,
  [SMALL_STATE(15)] = 415,
  [SMALL_STATE(16)] = 434,
  [SMALL_STATE(17)] = 453,
  [SMALL_STATE(18)] = 472,
  [SMALL_STATE(19)] = 491,
  [SMALL_STATE(20)] = 516,
  [SMALL_STATE(21)] = 543,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 587,
  [SMALL_STATE(24)] = 605,
  [SMALL_STATE(25)] = 629,
  [SMALL_STATE(26)] = 650,
  [SMALL_STATE(27)] = 666,
  [SMALL_STATE(28)] = 684,
  [SMALL_STATE(29)] = 700,
  [SMALL_STATE(30)] = 718,
  [SMALL_STATE(31)] = 735,
  [SMALL_STATE(32)] = 750,
  [SMALL_STATE(33)] = 765,
  [SMALL_STATE(34)] = 782,
  [SMALL_STATE(35)] = 806,
  [SMALL_STATE(36)] = 823,
  [SMALL_STATE(37)] = 844,
  [SMALL_STATE(38)] = 855,
  [SMALL_STATE(39)] = 866,
  [SMALL_STATE(40)] = 883,
  [SMALL_STATE(41)] = 904,
  [SMALL_STATE(42)] = 929,
  [SMALL_STATE(43)] = 940,
  [SMALL_STATE(44)] = 961,
  [SMALL_STATE(45)] = 979,
  [SMALL_STATE(46)] = 997,
  [SMALL_STATE(47)] = 1011,
  [SMALL_STATE(48)] = 1025,
  [SMALL_STATE(49)] = 1043,
  [SMALL_STATE(50)] = 1062,
  [SMALL_STATE(51)] = 1073,
  [SMALL_STATE(52)] = 1090,
  [SMALL_STATE(53)] = 1101,
  [SMALL_STATE(54)] = 1110,
  [SMALL_STATE(55)] = 1123,
  [SMALL_STATE(56)] = 1131,
  [SMALL_STATE(57)] = 1139,
  [SMALL_STATE(58)] = 1153,
  [SMALL_STATE(59)] = 1165,
  [SMALL_STATE(60)] = 1179,
  [SMALL_STATE(61)] = 1186,
  [SMALL_STATE(62)] = 1199,
  [SMALL_STATE(63)] = 1206,
  [SMALL_STATE(64)] = 1213,
  [SMALL_STATE(65)] = 1220,
  [SMALL_STATE(66)] = 1227,
  [SMALL_STATE(67)] = 1234,
  [SMALL_STATE(68)] = 1241,
  [SMALL_STATE(69)] = 1248,
  [SMALL_STATE(70)] = 1255,
  [SMALL_STATE(71)] = 1262,
  [SMALL_STATE(72)] = 1269,
  [SMALL_STATE(73)] = 1276,
  [SMALL_STATE(74)] = 1283,
  [SMALL_STATE(75)] = 1290,
  [SMALL_STATE(76)] = 1303,
  [SMALL_STATE(77)] = 1314,
  [SMALL_STATE(78)] = 1321,
  [SMALL_STATE(79)] = 1331,
  [SMALL_STATE(80)] = 1341,
  [SMALL_STATE(81)] = 1351,
  [SMALL_STATE(82)] = 1361,
  [SMALL_STATE(83)] = 1371,
  [SMALL_STATE(84)] = 1381,
  [SMALL_STATE(85)] = 1391,
  [SMALL_STATE(86)] = 1401,
  [SMALL_STATE(87)] = 1411,
  [SMALL_STATE(88)] = 1421,
  [SMALL_STATE(89)] = 1431,
  [SMALL_STATE(90)] = 1438,
  [SMALL_STATE(91)] = 1443,
  [SMALL_STATE(92)] = 1448,
  [SMALL_STATE(93)] = 1453,
  [SMALL_STATE(94)] = 1458,
  [SMALL_STATE(95)] = 1465,
  [SMALL_STATE(96)] = 1472,
  [SMALL_STATE(97)] = 1479,
  [SMALL_STATE(98)] = 1484,
  [SMALL_STATE(99)] = 1489,
  [SMALL_STATE(100)] = 1496,
  [SMALL_STATE(101)] = 1503,
  [SMALL_STATE(102)] = 1510,
  [SMALL_STATE(103)] = 1515,
  [SMALL_STATE(104)] = 1522,
  [SMALL_STATE(105)] = 1529,
  [SMALL_STATE(106)] = 1534,
  [SMALL_STATE(107)] = 1541,
  [SMALL_STATE(108)] = 1548,
  [SMALL_STATE(109)] = 1553,
  [SMALL_STATE(110)] = 1560,
  [SMALL_STATE(111)] = 1567,
  [SMALL_STATE(112)] = 1574,
  [SMALL_STATE(113)] = 1579,
  [SMALL_STATE(114)] = 1584,
  [SMALL_STATE(115)] = 1588,
  [SMALL_STATE(116)] = 1592,
  [SMALL_STATE(117)] = 1596,
  [SMALL_STATE(118)] = 1600,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(99),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(12),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(15),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat2, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_declaration_repeat2, 2), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_declaration_repeat2, 2), SHIFT_REPEAT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_or_chained_identifiers, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_or_chained_identifiers, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_predicate_repeat1, 2), SHIFT_REPEAT(107),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_predicate_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_predicate_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_predicate_repeat1, 2), SHIFT_REPEAT(28),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_predicate_repeat1, 2), SHIFT_REPEAT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_union_types, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_union_types, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_union_types, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_union_types, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_union_types, 3, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_union_types, 3, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_union_types, 2, .production_id = 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_union_types, 2, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(95),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(50),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_predicate_repeat1, 2), SHIFT_REPEAT(95),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_predicate_repeat1, 2), SHIFT_REPEAT(50),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_predicate_repeat1, 2), SHIFT_REPEAT(44),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_declaration, 5, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_declaration, 7, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_declaration, 4, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(103),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(50),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_declaration, 6, .production_id = 1),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(48),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(40),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_determinism, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 5),
  [304] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
