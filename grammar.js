module.exports = grammar({
  name: 'd2',

  rules: {
    source_file: $ => repeat(choice(
      // $.direction,
      $.expression,
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

    expression: $ => seq(
      $.shape_title,
      optional($.shape_label),
      /\n+/,
    ),

    shape_title: $ => prec.right(repeat1(choice(
      $.connection,
      $.identifier,
    ))),

    shape_label: $ => seq(":", choice(
      seq("|", /.+/, "|"),
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

    identifier: $ => seq(
      $._ident_regex,
      // repeat(seq(/\s+/, $._ident_regex)),
      // optional($.sub_identifier),
    ),

    sub_identifier: $ => seq(".", $.identifier),

    connection: _ => token(choice(
      seq("-", repeat1("-")),
      seq("<", repeat1("-")),
      seq(repeat1("-"), ">"),
      seq("<", repeat1("-"), ">"),
    )),

    param_value: _ => /[\w\-_]+/i,

    // const-like rules

    _ident_regex: _ => /[\p{L}0-9\-]+/,

    _comment: _ => token(seq('#', /.*/)),
  }
});

