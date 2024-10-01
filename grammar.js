const PREC = {
  connection: 100,
  conn_identifier: 90,
  identifier: 50,
};

const newline = /\n/;
const terminator = choice(newline, ';', '\0');

const opseq = (...x) => optional(seq(...x))
const rseq = (...x) => repeat(seq(...x))
const r1seq = (...x) => repeat1(seq(...x))

module.exports = grammar({
  name: 'd2',

  extras: $ => [
    $.comment,
    /\s+/,
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $.declaration,
        $.comment,
      )
    ),

    declaration: $ => seq(
      choice(
        $.connection_refference,
        $.expr,
      ),
      repeat(field("label", $.label)),
      terminator,
    ),

    expr: $ => seq(
      field("identifier", $.identifier),
      rseq(
        field("connection", $.connection),
        field("identifier", $.identifier),
      ),
    ),

    connection: _ => token(prec(PREC.connection, choice(
      /<-+>/,
      /<-+/,
      /-+>/,
      /--+/,
    ))),
    label: _ => seq(":", /.*/),

    connection_refference: $ => seq(
      "(",
      $.expr,
      ")",
      field("connection_identifier", $.connection_identifier),
      optional($._fields),
    ),
    connection_identifier: _ => token(seq("[", /\d+/, "]",)),

    identifier: $ => prec.left(-1, seq(
      $._ident,
      optional($._fields),
    )),
    _fields: $ => r1seq(".", field("field", $.identifier)),
    _ident: $ => seq($._ident_base, rseq(/[\s\-\'_]+/, $._ident_base)),
    _ident_base: _ => /[\p{L}\d]+/,

    comment: _ => token(seq('#', /.*/)),
  }
});

