const PREC = {
  connection: 100,
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
      field("identifier", $.identifier),
      rseq(
        field("connection", $.connection),
        field("identifier", $.identifier),
      ),
      optional(field("label", $.label)),
      terminator,
    ),

    connection: _ => token(prec(PREC.connection, choice(
      /<-+>/,
      /<-+/,
      /-+>/,
      /--+/,
    ))),
    label: _ => seq(":", /.*/),

    identifier: $ => choice(
      $._ident,
      seq($._ident, rseq(".", $.field))
    ),
    field: $ => $._ident_base,

    _ident: $ => seq($._ident_base, rseq(/[\s\-]+/, $._ident_base)),
    _ident_base: _ => /[\p{L}\d\'_]+/,

    comment: _ => token(seq('#', /.*/)),
  }
});

