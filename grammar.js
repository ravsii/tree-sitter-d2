module.exports = grammar({
  name: 'd2',

  rules: {
    source_file: $ => repeat(choice(
      $.direction,
      $.comment,
      $.shape_declaration,
      $.whitespace,
      $.newline,
    )),

    comment: _ => token(seq('#', /.*/)),

    direction: $ => seq("direction", ":", $.direction_opts),
    direction_opts: _ => choice(
      "up",
      "right",
      "left",
      "down"
    ),

    shape_declaration: $ => choice(
      seq(
        $.shape_name,
        optional(
          seq($.connection, $.shape_name)),
        // optional($.shape_label),
        // optional(seq("{", $.shape_body, "}")),
      ),
      seq($.shape_name, ";")
    ),
    shape_name: _ => /[а-яА-Я\w]+/,
    shape_label: $ => seq(":", choice(
      seq("|", $.text, "|"),
      $.text,
    )),
    shape_body: _ => /w+/,

    connection: _ => token(choice(
      seq("-", repeat1("-")),
      seq(optional("<"), repeat1("-"), optional(">"))
    )),


    text: _ => /.*/,
    whitespace: _ => /[ \t]+/,
    newline: _ => /(\n)+/,
  }
});