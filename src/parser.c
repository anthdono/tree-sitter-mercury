#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 2
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_import_module = 1,
  anon_sym_interface = 2,
  anon_sym_DOT = 3,
  anon_sym_implementation = 4,
  anon_sym_module = 5,
  anon_sym_end_module = 6,
  anon_sym_type = 7,
  anon_sym_pred = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_COLON_COLON = 12,
  anon_sym_in = 13,
  anon_sym_out = 14,
  anon_sym_di = 15,
  anon_sym_uo = 16,
  anon_sym_is = 17,
  anon_sym_det = 18,
  anon_sym_multi = 19,
  anon_sym_nondet = 20,
  anon_sym_semidet = 21,
  anon_sym_cc_nondet = 22,
  anon_sym_cc_multi = 23,
  anon_sym_erroneous = 24,
  anon_sym_failure = 25,
  anon_sym_LT_EQ = 26,
  aux_sym_custom_type_token1 = 27,
  anon_sym_bool = 28,
  anon_sym_int = 29,
  anon_sym_float = 30,
  anon_sym_string = 31,
  anon_sym_list = 32,
  anon_sym_map = 33,
  anon_sym_exception = 34,
  anon_sym_char = 35,
  aux_sym_comment_token1 = 36,
  aux_sym_comment_token2 = 37,
  sym_declaration_operator = 38,
  sym_equality_operator = 39,
  sym_union_type_constructor_operator = 40,
  sym_or_operator = 41,
  sym_variable = 42,
  sym_number = 43,
  sym_string_escape_sequence = 44,
  anon_sym_DQUOTE = 45,
  anon_sym_SQUOTE = 46,
  sym_source_file = 47,
  sym__definition = 48,
  sym__expression = 49,
  sym_declaration = 50,
  sym_import_declaration = 51,
  sym_interface_declaration = 52,
  sym_implementation_declaration = 53,
  sym_module_declaration = 54,
  sym_type_declaration = 55,
  sym_type_declaration_union_types = 56,
  sym_predicate_declaration = 57,
  sym_parameters = 58,
  sym_parameter = 59,
  sym_arguments = 60,
  sym_argument = 61,
  sym_mode = 62,
  sym_determinism = 63,
  sym_constraints = 64,
  sym_constraint = 65,
  sym_type = 66,
  sym_builtin_type = 67,
  sym_comment = 68,
  sym_end = 69,
  sym__identifier_or_chained_identifiers = 70,
  sym_identifier = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_module_declaration_repeat1 = 73,
  aux_sym_type_declaration_repeat1 = 74,
  aux_sym_type_declaration_repeat2 = 75,
  aux_sym_predicate_repeat1 = 76,
  aux_sym_parameters_repeat1 = 77,
  aux_sym_arguments_repeat1 = 78,
  aux_sym_argument_repeat1 = 79,
  aux_sym_constraints_repeat1 = 80,
  aux_sym_constraint_repeat1 = 81,
  alias_sym_operator = 82,
  alias_sym_predicate_identifier = 83,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import_module] = "keyword",
  [anon_sym_interface] = "keyword",
  [anon_sym_DOT] = ".",
  [anon_sym_implementation] = "keyword",
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
  [sym_implementation_declaration] = "implementation_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_type_declaration_union_types] = "type_declaration_union_types",
  [sym_predicate_declaration] = "predicate_declaration",
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
  [aux_sym_constraint_repeat1] = "constraint_repeat1",
  [alias_sym_operator] = "operator",
  [alias_sym_predicate_identifier] = "predicate_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import_module] = anon_sym_import_module,
  [anon_sym_interface] = anon_sym_import_module,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_implementation] = anon_sym_import_module,
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
  [sym_implementation_declaration] = sym_implementation_declaration,
  [sym_module_declaration] = sym_module_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_type_declaration_union_types] = sym_type_declaration_union_types,
  [sym_predicate_declaration] = sym_predicate_declaration,
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
  [aux_sym_constraint_repeat1] = aux_sym_constraint_repeat1,
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
  [anon_sym_implementation] = {
    .visible = true,
    .named = true,
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
  [sym_implementation_declaration] = {
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
  [aux_sym_constraint_repeat1] = {
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
  [5] = 4,
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 13,
  [27] = 27,
  [28] = 28,
  [29] = 19,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 21,
  [47] = 22,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 19,
  [56] = 13,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 13,
  [66] = 66,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 85,
  [88] = 88,
  [89] = 82,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 93,
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
      if (eof) ADVANCE(154);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(245);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(244);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '_') ADVANCE(221);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '_') ADVANCE(221);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(240);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == ':') ADVANCE(167);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(167);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(242);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 141:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 142:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 143:
      if (lookahead == '{') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 144:
      if (lookahead == '}') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(245);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(244);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '(') ADVANCE(164);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '_') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_import_module);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_implementation);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_end_module);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_pred);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_di);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_di);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_uo);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_uo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_det);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_multi);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_nondet);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_semidet);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_cc_nondet);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_cc_multi);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_erroneous);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_failure);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'a') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'a') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'c') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'g') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'h') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'i') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'n') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'n') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'p') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'p') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'u') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (lookahead == 'x') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_custom_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_exception);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_exception);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_declaration_operator);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_union_type_constructor_operator);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_or_operator);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 254:
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
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 153},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 153},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 153},
  [40] = {.lex_state = 153},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 153},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 153},
  [45] = {.lex_state = 153},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 153},
  [51] = {.lex_state = 153},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 153},
  [55] = {.lex_state = 153},
  [56] = {.lex_state = 153},
  [57] = {.lex_state = 153},
  [58] = {.lex_state = 153},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 153},
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
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 153},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 153},
  [94] = {.lex_state = 153},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 153},
  [109] = {.lex_state = 153},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 153},
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
    [anon_sym_implementation] = ACTIONS(1),
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
    [sym__definition] = STATE(16),
    [sym__expression] = STATE(16),
    [sym_declaration] = STATE(16),
    [sym_import_declaration] = STATE(62),
    [sym_interface_declaration] = STATE(62),
    [sym_implementation_declaration] = STATE(62),
    [sym_module_declaration] = STATE(62),
    [sym_type_declaration] = STATE(62),
    [sym_predicate_declaration] = STATE(62),
    [sym_comment] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
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
    STATE(18), 1,
      sym_builtin_type,
    ACTIONS(12), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(2), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(12), 2,
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
    STATE(18), 1,
      sym_builtin_type,
    ACTIONS(25), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(2), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(12), 2,
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
    STATE(18), 1,
      sym_builtin_type,
    STATE(89), 1,
      sym_argument,
    STATE(3), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(12), 2,
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
    STATE(18), 1,
      sym_builtin_type,
    STATE(82), 1,
      sym_argument,
    STATE(3), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(12), 2,
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
    STATE(18), 1,
      sym_builtin_type,
    STATE(104), 1,
      sym_argument,
    STATE(3), 2,
      sym_type,
      aux_sym_argument_repeat1,
    STATE(12), 2,
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
  [172] = 10,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_COLON_COLON,
    ACTIONS(45), 1,
      aux_sym_custom_type_token1,
    ACTIONS(47), 1,
      sym_variable,
    STATE(35), 1,
      sym_arguments,
    STATE(110), 1,
      sym_mode,
    ACTIONS(39), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(17), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
    ACTIONS(43), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [209] = 8,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(18), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(67), 1,
      sym_end,
    STATE(15), 2,
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
  [242] = 8,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(18), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(69), 1,
      sym_end,
    STATE(15), 2,
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
  [275] = 8,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(18), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(66), 1,
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
  [308] = 8,
    ACTIONS(27), 1,
      aux_sym_custom_type_token1,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(18), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(75), 1,
      sym_end,
    STATE(9), 2,
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
  [341] = 4,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_arguments,
    ACTIONS(51), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(55), 10,
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
  [365] = 2,
    ACTIONS(57), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or_operator,
    ACTIONS(59), 10,
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
  [385] = 5,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_declaration_operator,
    ACTIONS(63), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(14), 5,
      sym__definition,
      sym__expression,
      sym_declaration,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(62), 6,
      sym_import_declaration,
      sym_interface_declaration,
      sym_implementation_declaration,
      sym_module_declaration,
      sym_type_declaration,
      sym_predicate_declaration,
  [411] = 7,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      aux_sym_custom_type_token1,
    STATE(18), 1,
      sym_builtin_type,
    STATE(24), 1,
      sym_identifier,
    STATE(27), 1,
      sym_type,
    STATE(15), 2,
      sym_type_declaration_union_types,
      aux_sym_type_declaration_repeat2,
    ACTIONS(74), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [441] = 5,
    ACTIONS(7), 1,
      sym_declaration_operator,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(14), 5,
      sym__definition,
      sym__expression,
      sym_declaration,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(62), 6,
      sym_import_declaration,
      sym_interface_declaration,
      sym_implementation_declaration,
      sym_module_declaration,
      sym_type_declaration,
      sym_predicate_declaration,
  [467] = 6,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      aux_sym_custom_type_token1,
    ACTIONS(89), 1,
      sym_variable,
    STATE(17), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
    ACTIONS(82), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
    ACTIONS(84), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [494] = 2,
    ACTIONS(92), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or_operator,
    ACTIONS(94), 10,
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
  [513] = 2,
    ACTIONS(96), 4,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(98), 10,
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
  [532] = 2,
    ACTIONS(100), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or_operator,
    ACTIONS(102), 10,
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
  [551] = 2,
    ACTIONS(104), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_or_operator,
    ACTIONS(106), 10,
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
  [570] = 2,
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
  [589] = 2,
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
  [607] = 5,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_DOT,
    ACTIONS(118), 1,
      sym_or_operator,
    STATE(28), 1,
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
  [631] = 4,
    ACTIONS(120), 1,
      aux_sym_custom_type_token1,
    STATE(18), 1,
      sym_builtin_type,
    STATE(99), 2,
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
  [652] = 2,
    ACTIONS(57), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
    ACTIONS(59), 6,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
      aux_sym_custom_type_token1,
      sym_variable,
  [668] = 3,
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
  [686] = 3,
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
  [704] = 2,
    ACTIONS(96), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
    ACTIONS(98), 6,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
      aux_sym_custom_type_token1,
      sym_variable,
  [720] = 2,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(130), 9,
      aux_sym_custom_type_token1,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [735] = 3,
    STATE(18), 1,
      sym_builtin_type,
    STATE(103), 1,
      sym_type,
    ACTIONS(132), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [752] = 3,
    STATE(18), 1,
      sym_builtin_type,
    STATE(95), 1,
      sym_type,
    ACTIONS(132), 8,
      anon_sym_bool,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_list,
      anon_sym_map,
      anon_sym_exception,
      anon_sym_char,
  [769] = 2,
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
  [784] = 7,
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
    STATE(91), 1,
      sym_parameters,
    STATE(36), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_type_declaration_repeat1,
  [808] = 4,
    ACTIONS(150), 1,
      anon_sym_COLON_COLON,
    STATE(105), 1,
      sym_mode,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(152), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [825] = 4,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      aux_sym_custom_type_token1,
    ACTIONS(157), 3,
      anon_sym_LPAREN,
      sym_equality_operator,
      sym_union_type_constructor_operator,
    STATE(36), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_type_declaration_repeat1,
  [842] = 1,
    ACTIONS(162), 8,
      anon_sym_det,
      anon_sym_multi,
      anon_sym_nondet,
      anon_sym_semidet,
      anon_sym_cc_nondet,
      anon_sym_cc_multi,
      anon_sym_erroneous,
      anon_sym_failure,
  [853] = 8,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_is,
    ACTIONS(166), 1,
      anon_sym_LT_EQ,
    STATE(49), 1,
      sym_parameters,
    STATE(64), 1,
      sym_end,
    STATE(68), 1,
      sym_determinism,
    STATE(107), 1,
      sym_constraints,
  [878] = 6,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(98), 1,
      sym_arguments,
    STATE(101), 1,
      sym_constraint,
    STATE(42), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_constraint_repeat1,
  [899] = 6,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(86), 1,
      sym_constraint,
    STATE(98), 1,
      sym_arguments,
    STATE(42), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_constraint_repeat1,
  [920] = 3,
    STATE(100), 1,
      sym_mode,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(152), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [934] = 5,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(92), 1,
      sym_arguments,
    STATE(50), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_constraint_repeat1,
  [952] = 3,
    STATE(105), 1,
      sym_mode,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(152), 4,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [966] = 5,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      aux_sym_custom_type_token1,
    ACTIONS(172), 1,
      sym_variable,
    STATE(84), 1,
      sym_parameter,
    STATE(7), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
  [984] = 5,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      aux_sym_custom_type_token1,
    ACTIONS(172), 1,
      sym_variable,
    STATE(96), 1,
      sym_parameter,
    STATE(7), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_predicate_repeat1,
  [1002] = 1,
    ACTIONS(104), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [1012] = 1,
    ACTIONS(108), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_in,
      anon_sym_out,
      anon_sym_di,
      anon_sym_uo,
  [1022] = 6,
    ACTIONS(174), 1,
      anon_sym_import_module,
    ACTIONS(176), 1,
      anon_sym_interface,
    ACTIONS(178), 1,
      anon_sym_implementation,
    ACTIONS(182), 1,
      anon_sym_type,
    ACTIONS(184), 1,
      anon_sym_pred,
    ACTIONS(180), 2,
      anon_sym_module,
      anon_sym_end_module,
  [1042] = 6,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_is,
    ACTIONS(166), 1,
      anon_sym_LT_EQ,
    STATE(63), 1,
      sym_determinism,
    STATE(74), 1,
      sym_end,
    STATE(106), 1,
      sym_constraints,
  [1061] = 4,
    ACTIONS(186), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      aux_sym_custom_type_token1,
    STATE(50), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_constraint_repeat1,
  [1076] = 3,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1089] = 1,
    ACTIONS(196), 5,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_LT_EQ,
      sym_equality_operator,
      sym_union_type_constructor_operator,
  [1097] = 1,
    ACTIONS(198), 5,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_LT_EQ,
      sym_equality_operator,
      sym_union_type_constructor_operator,
  [1105] = 4,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(73), 1,
      sym_end,
    STATE(76), 2,
      sym_identifier,
      aux_sym_module_declaration_repeat1,
  [1119] = 1,
    ACTIONS(96), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      aux_sym_custom_type_token1,
      sym_equality_operator,
      sym_union_type_constructor_operator,
  [1127] = 1,
    ACTIONS(57), 5,
      anon_sym_DOT,
      anon_sym_LPAREN,
      aux_sym_custom_type_token1,
      sym_equality_operator,
      sym_union_type_constructor_operator,
  [1135] = 3,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(34), 3,
      sym__identifier_or_chained_identifiers,
      sym_identifier,
      aux_sym_type_declaration_repeat1,
  [1147] = 4,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(60), 1,
      sym_end,
    STATE(54), 2,
      sym_identifier,
      aux_sym_module_declaration_repeat1,
  [1161] = 1,
    ACTIONS(202), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1168] = 1,
    ACTIONS(204), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1175] = 1,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1182] = 1,
    ACTIONS(208), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1189] = 4,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(166), 1,
      anon_sym_LT_EQ,
    STATE(78), 1,
      sym_end,
    STATE(97), 1,
      sym_constraints,
  [1202] = 1,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1209] = 1,
    ACTIONS(57), 4,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_is,
      anon_sym_LT_EQ,
  [1216] = 1,
    ACTIONS(212), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1223] = 1,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1230] = 4,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(166), 1,
      anon_sym_LT_EQ,
    STATE(74), 1,
      sym_end,
    STATE(106), 1,
      sym_constraints,
  [1243] = 1,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1250] = 1,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1257] = 1,
    ACTIONS(218), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1264] = 1,
    ACTIONS(220), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1271] = 1,
    ACTIONS(222), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1278] = 1,
    ACTIONS(224), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1285] = 1,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1292] = 3,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(231), 1,
      aux_sym_custom_type_token1,
    STATE(76), 2,
      sym_identifier,
      aux_sym_module_declaration_repeat1,
  [1303] = 1,
    ACTIONS(234), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1310] = 1,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym_declaration_operator,
  [1317] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_constraints_repeat1,
  [1327] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_arguments_repeat1,
  [1337] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_parameters_repeat1,
  [1347] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_arguments_repeat1,
  [1357] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_parameters_repeat1,
  [1367] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_parameters_repeat1,
  [1377] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_arguments_repeat1,
  [1387] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_constraints_repeat1,
  [1397] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_arguments_repeat1,
  [1407] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_constraints_repeat1,
  [1417] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_arguments_repeat1,
  [1427] = 1,
    ACTIONS(275), 2,
      anon_sym_DOT,
      aux_sym_custom_type_token1,
  [1432] = 2,
    ACTIONS(277), 1,
      sym_equality_operator,
    ACTIONS(279), 1,
      sym_union_type_constructor_operator,
  [1439] = 1,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1444] = 2,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(55), 1,
      sym_identifier,
  [1451] = 2,
    ACTIONS(283), 1,
      aux_sym_custom_type_token1,
    STATE(19), 1,
      sym_identifier,
  [1458] = 2,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(67), 1,
      sym_end,
  [1465] = 1,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1470] = 2,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(59), 1,
      sym_end,
  [1477] = 1,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1482] = 2,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(72), 1,
      sym_end,
  [1489] = 1,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1494] = 1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1499] = 1,
    ACTIONS(289), 2,
      anon_sym_DOT,
      anon_sym_LT_EQ,
  [1504] = 2,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(69), 1,
      sym_end,
  [1511] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1516] = 1,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1521] = 2,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(78), 1,
      sym_end,
  [1528] = 2,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(74), 1,
      sym_end,
  [1535] = 2,
    ACTIONS(170), 1,
      aux_sym_custom_type_token1,
    STATE(29), 1,
      sym_identifier,
  [1542] = 2,
    ACTIONS(291), 1,
      aux_sym_custom_type_token1,
    STATE(38), 1,
      sym_identifier,
  [1549] = 1,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1554] = 1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1559] = 2,
    ACTIONS(142), 1,
      aux_sym_custom_type_token1,
    STATE(90), 1,
      sym_identifier,
  [1566] = 1,
    ACTIONS(295), 1,
      anon_sym_DOT,
  [1570] = 1,
    ACTIONS(297), 1,
      anon_sym_DOT,
  [1574] = 1,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
  [1578] = 1,
    ACTIONS(301), 1,
      anon_sym_DOT,
  [1582] = 1,
    ACTIONS(303), 1,
      anon_sym_DOT,
  [1586] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 209,
  [SMALL_STATE(9)] = 242,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 341,
  [SMALL_STATE(13)] = 365,
  [SMALL_STATE(14)] = 385,
  [SMALL_STATE(15)] = 411,
  [SMALL_STATE(16)] = 441,
  [SMALL_STATE(17)] = 467,
  [SMALL_STATE(18)] = 494,
  [SMALL_STATE(19)] = 513,
  [SMALL_STATE(20)] = 532,
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 570,
  [SMALL_STATE(23)] = 589,
  [SMALL_STATE(24)] = 607,
  [SMALL_STATE(25)] = 631,
  [SMALL_STATE(26)] = 652,
  [SMALL_STATE(27)] = 668,
  [SMALL_STATE(28)] = 686,
  [SMALL_STATE(29)] = 704,
  [SMALL_STATE(30)] = 720,
  [SMALL_STATE(31)] = 735,
  [SMALL_STATE(32)] = 752,
  [SMALL_STATE(33)] = 769,
  [SMALL_STATE(34)] = 784,
  [SMALL_STATE(35)] = 808,
  [SMALL_STATE(36)] = 825,
  [SMALL_STATE(37)] = 842,
  [SMALL_STATE(38)] = 853,
  [SMALL_STATE(39)] = 878,
  [SMALL_STATE(40)] = 899,
  [SMALL_STATE(41)] = 920,
  [SMALL_STATE(42)] = 934,
  [SMALL_STATE(43)] = 952,
  [SMALL_STATE(44)] = 966,
  [SMALL_STATE(45)] = 984,
  [SMALL_STATE(46)] = 1002,
  [SMALL_STATE(47)] = 1012,
  [SMALL_STATE(48)] = 1022,
  [SMALL_STATE(49)] = 1042,
  [SMALL_STATE(50)] = 1061,
  [SMALL_STATE(51)] = 1076,
  [SMALL_STATE(52)] = 1089,
  [SMALL_STATE(53)] = 1097,
  [SMALL_STATE(54)] = 1105,
  [SMALL_STATE(55)] = 1119,
  [SMALL_STATE(56)] = 1127,
  [SMALL_STATE(57)] = 1135,
  [SMALL_STATE(58)] = 1147,
  [SMALL_STATE(59)] = 1161,
  [SMALL_STATE(60)] = 1168,
  [SMALL_STATE(61)] = 1175,
  [SMALL_STATE(62)] = 1182,
  [SMALL_STATE(63)] = 1189,
  [SMALL_STATE(64)] = 1202,
  [SMALL_STATE(65)] = 1209,
  [SMALL_STATE(66)] = 1216,
  [SMALL_STATE(67)] = 1223,
  [SMALL_STATE(68)] = 1230,
  [SMALL_STATE(69)] = 1243,
  [SMALL_STATE(70)] = 1250,
  [SMALL_STATE(71)] = 1257,
  [SMALL_STATE(72)] = 1264,
  [SMALL_STATE(73)] = 1271,
  [SMALL_STATE(74)] = 1278,
  [SMALL_STATE(75)] = 1285,
  [SMALL_STATE(76)] = 1292,
  [SMALL_STATE(77)] = 1303,
  [SMALL_STATE(78)] = 1310,
  [SMALL_STATE(79)] = 1317,
  [SMALL_STATE(80)] = 1327,
  [SMALL_STATE(81)] = 1337,
  [SMALL_STATE(82)] = 1347,
  [SMALL_STATE(83)] = 1357,
  [SMALL_STATE(84)] = 1367,
  [SMALL_STATE(85)] = 1377,
  [SMALL_STATE(86)] = 1387,
  [SMALL_STATE(87)] = 1397,
  [SMALL_STATE(88)] = 1407,
  [SMALL_STATE(89)] = 1417,
  [SMALL_STATE(90)] = 1427,
  [SMALL_STATE(91)] = 1432,
  [SMALL_STATE(92)] = 1439,
  [SMALL_STATE(93)] = 1444,
  [SMALL_STATE(94)] = 1451,
  [SMALL_STATE(95)] = 1458,
  [SMALL_STATE(96)] = 1465,
  [SMALL_STATE(97)] = 1470,
  [SMALL_STATE(98)] = 1477,
  [SMALL_STATE(99)] = 1482,
  [SMALL_STATE(100)] = 1489,
  [SMALL_STATE(101)] = 1494,
  [SMALL_STATE(102)] = 1499,
  [SMALL_STATE(103)] = 1504,
  [SMALL_STATE(104)] = 1511,
  [SMALL_STATE(105)] = 1516,
  [SMALL_STATE(106)] = 1521,
  [SMALL_STATE(107)] = 1528,
  [SMALL_STATE(108)] = 1535,
  [SMALL_STATE(109)] = 1542,
  [SMALL_STATE(110)] = 1549,
  [SMALL_STATE(111)] = 1554,
  [SMALL_STATE(112)] = 1559,
  [SMALL_STATE(113)] = 1566,
  [SMALL_STATE(114)] = 1570,
  [SMALL_STATE(115)] = 1574,
  [SMALL_STATE(116)] = 1578,
  [SMALL_STATE(117)] = 1582,
  [SMALL_STATE(118)] = 1586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(94),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(13),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(20),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat2, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_declaration_repeat2, 2), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_declaration_repeat2, 2), SHIFT_REPEAT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_predicate_repeat1, 2), SHIFT_REPEAT(108),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_predicate_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_predicate_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_predicate_repeat1, 2), SHIFT_REPEAT(26),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_predicate_repeat1, 2), SHIFT_REPEAT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_or_chained_identifiers, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_or_chained_identifiers, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_union_types, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_union_types, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_union_types, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_union_types, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_union_types, 2, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_union_types, 2, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_union_types, 3, .production_id = 5),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_union_types, 3, .production_id = 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(93),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(56),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(93),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(56),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_declaration, 7, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_declaration, 4, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_declaration, 5, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 4),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(112),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2), SHIFT_REPEAT(56),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implementation_declaration, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_declaration, 6, .production_id = 1),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(39),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(6),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(45),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_determinism, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 4),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
