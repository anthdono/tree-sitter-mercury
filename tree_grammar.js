module.exports = grammar({
    name: "mercury",

    rules: {
        source_file: ($) => repeat($._definition),
        _definition: ($) => choice($._expression, $.declaration, $.comment),

        _expression: ($) => choice(),

        declaration: ($) =>
            choice(
                $.module_declaration,
                $.type_declaration,
                $.interface_declaration,
                $.predicate_declaration,
                $.import_declaration
            ),

        import_declaration: ($) =>
            seq(
                $.declaration_operator,
                alias("import_module", $.keyword),
                choice($.identifier, $.type),
                $.end
            ),

        interface_declaration: ($) =>
            seq($.declaration_operator, alias("interface", $.keyword), "."),

        module_declaration: ($) =>
            seq(
                $.declaration_operator,
                alias(choice("module", "end_module"), $.keyword),
                repeat(seq(optional("."), $.identifier)),
                $.end
            ),

        type_declaration: ($) =>
            seq(
                $.declaration_operator,
                alias("type", $.keyword),
                repeat1(choice($._identifier_or_chained_identifiers)),
                optional($.parameters),
                choice(
                    seq(alias($.equality_operator, $.operator), $.type),
                    seq(
                        alias($.union_type_constructor_operator, $.operator),
                        repeat($.type_declaration_union_types)
                    )
                ),
                $.end
            ),

        type_declaration_union_types: ($) =>
            seq(

                choice($.type, seq($.identifier, optional($.arguments))),
                optional(alias($.or_operator, $.operator))
            ),

        predicate_declaration: ($) =>
            seq(
                $.declaration_operator,
                alias("pred", $.keyword),
                alias($.identifier, $.predicate_identifier),
                optional($.parameters),
                optional($.determinism),
                optional($.constraints),
                $.end
            ),

        predicate: ($) =>
            seq(
                repeat1(
                    choice($._identifier_or_chained_identifiers, $.variable)
                ),
                $.arguments,
                $.determinism,
                $.end
            ),

        parameters: ($) =>
            seq("(", $.parameter, repeat(seq(",", $.parameter)), ")"),

        parameter: ($) =>
            seq(
                repeat1(
                    choice($._identifier_or_chained_identifiers, $.variable)
                ),
                optional($.arguments),
                optional("::"),
                optional(alias($.mode, $.keyword))
            ),

        arguments: ($) =>
            seq("(", $.argument, repeat(seq(",", $.argument)), ")"),

        argument: ($) =>
            repeat1(
                choice(seq($._identifier_or_chained_identifiers, optional($.arguments)), $.variable, $.type)
            ),

        mode: ($) => choice("in", "out", "di", "uo"),

        determinism: ($) =>
            seq(
                "is",
                choice(
                    "det",
                    "multi",
                    "nondet",
                    "semidet",
                    "cc_nondet",
                    "cc_multi",
                    "erroneous",
                    "failure"
                )
            ),

        constraints: ($) =>
            seq("<=", "(", $.constraint, repeat(seq(",", $.constraint)), ")"),

        constraint: ($) => choice($.predicate),

        type: ($) => choice($.builtin_type),
        // generic_type: ($) => seq(_identifier_or_chained_identifiers),

        custom_type: ($) => /[a-z_][a-zA-Z0-9_]*/,

        builtin_type: ($) =>
            choice(
                "bool",
                "int",
                "float",
                "string",
                "list",
                "map",
                "exception",
                "char"
            ),

        comment: ($) =>
            choice(
                token(seq("%", /.*/)), // line comment
                token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")) // block comment
            ),

        operator: ($) =>
            choice(
                $.declaration_operator,
                $.equality_operator,
                $.union_type_constructor_operator,
                $.or_operator
            ),

        declaration_operator: ($) => token(":-"),
        equality_operator: ($) => "==",
        union_type_constructor_operator: ($) => "--->",
        or_operator: ($) => ";",

        end: ($) => token("."),

        variable: ($) => /[A-Z_][a-zA-Z0-9_]*/,

        _identifier_or_chained_identifiers: ($) =>
            choice(seq(".", $.identifier), $.identifier),

        identifier: ($) => /[a-z_][a-zA-Z0-9_]*/,

        number: ($) => /(\d+(\.\d*)?|\.\d+)([eE][+-]?\d+)?|0[xX][0-9a-fA-F]+/,

        string_escape_sequence: ($) =>
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
                                token.immediate(prec(1, /[^"\\]+/)),
                                $.substring
                            ),
                            $.string_escape_sequence
                        )
                    ),
                    '"'
                ),
                seq(
                    "'",
                    repeat(
                        choice(
                            alias(
                                token.immediate(prec(1, /[^'\\]+/)),
                                $.substring
                            ),
                            $.string_escape_sequence
                        )
                    ),
                    "'"
                )
            ),
    },
});
