module.exports = grammar({
  name: 'd2',

  rules: {
    source_file: $ => repeat(choice(
      $.direction,
      $.comment,
      $.shape_declaration,
      $.newline,
    )),

    comment: _ => token(seq('#', /.*/)),

    direction: $ => seq(
      "direction",
      $.colon,
      optional($.whitespace),
      $.direction_opts
    ),

    direction_opts: _ => choice(
      "up",
      "right",
      "left",
      "down"
    ),

    shape_declaration: $ => seq(
      $.identifier,
      optional(choice(
        $.colon,
        $.shape_label,
      )),
      optional($.whitespace),
      optional($.shape_body),
    ),

    shape_label: $ => seq(":", choice(
      seq("|", $.text, "|"),
      $.text,
    )),

    shape_body: $ => seq(
      "{",
      repeat(seq(
        optional($.whitespace),
        $.shape_param,
      )),
      optional($.whitespace),
      "}"
    ),

    shape_param: $ => prec.left(seq(
      $.identifier,
      $.colon,
      optional($.whitespace),
      $.param_value,
      optional(seq($.whitespace, $.shape_body)),
    )),

    // connection: _ => token(
    //   choice(
    //     seq("-", repeat1("-")),
    //     seq(optional("<"), repeat1("-"), optional(">"))
    //   )
    // ),

    identifier: $ => prec.left(seq(
      $._ident_regex,
      optional(seq(/ +/, $._ident_regex)),
      optional($.sub_identifier),
    )),
    sub_identifier: $ => prec.left(seq(
      ".", $.identifier,
    )),
    _ident_regex: _ => /[\p{L}0-9\-]+/i,
    param_value: _ => /[\w\-_]+/i,
    text: _ => /.*/,
    whitespace: _ => /\s+/,
    newline: _ => "\n",
    colon: _ => ":",
  }
});

