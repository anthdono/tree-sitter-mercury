module.exports = grammar({
    name: "mercury",

    rules: {
        source_file: ($) => repeat($._definition),

        _definition: ($) =>
            choice(
                $.main_predicate,
                $.declaration,
                $.operator,
                $.keyword,
                $.string,
                $.comment,
                $.type,
                $.boolean_literal,
                $.identifier,
            ),

        main_predicate: ($) =>
            seq(
                alias("main", $.identifier),
                $.predicate_arguments,
                ":-"
            ),

        predicate_definition: ($) =>
            seq(
                $.uppercase_identifier,
                $.predicate_arguments,
                ":-"
            ),

        predicate_arguments: ($) =>
            seq(
                "(",
                optional(seq($.argument, repeat(seq(",", $.argument)))),
                ")"
            ),

        argument: ($) =>
            choice(
                $.identifier,
                seq("!", $.identifier)
            ),

        declaration: ($) =>
            prec(1, seq(":-", $.keyword, choice($.identifier, $.type), ".")),

        predicate: ($) =>
            seq(
                $.uppercase_identifier,
                $.predicate_arguments,
                choice("is", "where"),
                $.goal_expression,
                "."
            ),

        predicate_arguments: ($) =>
            seq("(", optional(seq($.term, repeat(seq(",", $.term)))), ")"),

        term: ($) =>
            choice(
                $.identifier,
                $.number,
                $.string
            ),

        goal_expression: ($) => choice(),

        type: ($) =>
            choice(
                "bool",
                "int",
                "float",
                "string",
                "list",
                "map",
                "exception"
            ),

        comment: ($) =>
            choice(
                token(seq("%", /.*/)), // line comment
                token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")) // block comment
            ),
        operator: ($) => choice(":-"),
        identifier: ($) => /[a-z_][a-zA-Z0-9_]*/,
        boolean_literal: ($) =>
            choice(
                seq("yes"),
                seq("no")
            ),
        uppercase_identifier: ($) => /[A-Z][a-zA-Z0-9_]*/,
        number: ($) => /(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?|0[xX][0-9a-fA-F]+/,
        keyword: ($) =>
            choice(
                "pred",
                "module",
                "import_module",
                "interface",
                "implementation",
                "type",
                "is"
            ),
        unescaped_double_string_fragment: ($) =>
            token.immediate(prec(1, /[^"\\]+/)),
        unescaped_single_string_fragment: ($) =>
            token.immediate(prec(1, /[^'\\]+/)),
        escape_sequence: ($) =>
            token.immediate(
                seq(
                    "\\",
                    choice(
                        /[^xu0-7]/,
                        /[0-7]{1,3}/,
                        /x[0-9a-fA-F]{2}/,
                        /u[0-9a-fA-F]{4}/,
                        /u{[0-9a-fA-F]+}/
                    )
                )
            ),
        string: ($) =>
            choice(
                seq(
                    '"',
                    repeat(
                        choice(
                            alias(
                                $.unescaped_double_string_fragment,
                                $.string_fragment
                            ),
                            $.escape_sequence
                        )
                    ),
                    '"'
                ),
                seq(
                    "'",
                    repeat(
                        choice(
                            alias(
                                $.unescaped_single_string_fragment,
                                $.string_fragment
                            ),
                            $.escape_sequence
                        )
                    ),
                    "'"
                )
            ),
    },
});
