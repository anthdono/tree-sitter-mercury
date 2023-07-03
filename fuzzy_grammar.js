// module.exports = grammar({
//     name: "mercury",
// 
//     rules: {
//         source_file: ($) => repeat($._definition),
//         _definition: ($) =>
//             choice(
//                 $.keyword,
//                 $.comment,
//                 $.conditional,
//                 $.number,
//                 $.string,
//                 $.builtin_type
//             ),
// 
//         keyword: ($) =>
//             choice(
//                 // seq("module", $._separator),
//                 // seq("import_module", optional($._separator)),
//                 "interface",
//                 "type",
//                 "pred",
//                 "implementation",
//                 "func",
//                 seq(
//                     "is",
//                     choice(
//                         "det",
//                         "multi",
//                         "nondet",
//                         "semidet",
//                         "cc_nondet",
//                         "cc_multi",
//                         "erroneous",
//                         "failure"
//                     )
//                 )
//                 // choice(" in ", " out ", " di ", " uo ")
//             ),
// 
//         builtin_type: ($) =>
//             choice(
//                 "bool",
//                 "int",
//                 "float",
//                 "string",
//                 "list",
//                 "map",
//                 "exception",
//                 "char"
//             ),
// 
//         conditional: ($) => choice("if", "else", "then"),
// 
//         text: ($) => /[a-z_][a-zA-Z0-9_]*/,
//         number: ($) => /(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?|0[xX][0-9a-fA-F]+/,
// 
//         comment: ($) =>
//             choice(
//                 token(seq("%", /.*/)), // line comment
//                 token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")) // block comment
//             ),
// 
//         string_escape_sequence: ($) =>
//             token.immediate(
//                 seq(
//                     "\\",
//                     choice(
//                         /[^xu0-7]/,
//                         /[0-7]{1,3}/,
//                         /x[0-9a-fA-F]{2}/,
//                         /u[0-9a-fA-F]{4}/,
//                         /u{[0-9a-fA-F]+}/
//                     )
//                 )
//             ),
//         string: ($) =>
//             choice(
//                 seq(
//                     '"',
//                     repeat(
//                         choice(
//                             alias(
//                                 token.immediate(prec(1, /[^"\\]+/)),
//                                 $.substring
//                             ),
//                             $.string_escape_sequence
//                         )
//                     ),
//                     '"'
//                 ),
//                 seq(
//                     "'",
//                     repeat(
//                         choice(
//                             alias(
//                                 token.immediate(prec(1, /[^'\\]+/)),
//                                 $.substring
//                             ),
//                             $.string_escape_sequence
//                         )
//                     ),
//                     "'"
//                 )
//             ),
//     },
// });
