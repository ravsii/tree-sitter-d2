module.exports = grammar({
  name: 'd2',

  rules: {
    source_file: $ => repeat(choice(
      // $.direction,
      $.expression,
      $._comment,
    )),

    extras: $ => choice(
      $._comment,
      /\s+/,
    ),

    direction: _ => seq("direction", ":", choice(
      "up",
      "right",
      "left",
      "down"
    )),

    expression: $ => prec.right(seq(
      optional("("),
      repeat1(choice(
        $.identifier,
        $.connection,
      )),
      optional(")"),
      optional(seq(
        $.connection_identifier,
        $.sub_identifier
      )),
      optional($.label),
      optional(choice(/\n+/, ";")),
    )),



    label: _ => seq(":", choice(
      // seq("|", /.+/, "|"),
      /.+/,
    )),

    // shape_body: $ => prec.right(seq(
    //   "{",
    //   /\s*/,
    //   repeat(seq(/\s*/, $.shape_param)),
    //   /\s*/,
    //   "}"
    // )),

    // shape_param: $ => seq(
    //   $.identifier,
    //   /\s*/,
    //   ":",
    //   optional(/\s+/),
    //   $.param_value,
    //   optional($.param_body),
    // ),

    // param_body: $ => seq("{", /.+/, "}"),

    // building blocks

    identifier: $ => prec.right(repeat1(
      choice(
        $._ident_regex,
        $.sub_identifier,
        "-",
      )
    )),

    sub_identifier: $ => seq(".", $.identifier),

    // Trust me it's better that way than doing it via seq's/repeat's
    connection: _ => choice(
      /--+/,
      /<-+/,
      /-+>/,
      /<-+>/,

      // Multiline arrows
      seq(/--+/, /\\\n+\s+/, /--+/),
      seq(/<-+/, /\\\n+\s+/, /--+/),
      seq(/--+/, /\\\n+\s+/, /-+>/),
      seq(/<-+/, /\\\n+\s+/, /-+>/),
    ),

    connection_identifier: _ => /\[\d+\]/,

    // param_value: _ => /[\w\-_]+/i,

    // const-like rules

    _ident_regex: _ => /[\p{L}0-9_"' ]+/,

    _comment: _ => token(seq('#', /.*\n/)),
  }
});

