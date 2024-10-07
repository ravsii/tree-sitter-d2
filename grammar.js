const PREC = {
  term: 1000,

  connection: 100,
  conn_identifier: 90,

  block: 20,
  label: 10,
};

const terminator = token(prec(PREC.term,
  choice(/\n/, ';', '\0')));

const opseq = (...x) => optional(seq(...x))
const opfield = (...x) => optional(field(...x))
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
        $._expr,
      ),
      opseq(":",
        opfield("label", $.label),
        opfield("block", $.block),

      ),
      terminator,
    ),

    _expr: $ => seq(
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

    block: $ => prec(PREC.block, seq("{", repeat($.declaration), "}")),
    label: $ => prec(PREC.label, repeat1($._ident_base)),

    connection_refference: $ => seq(
      "(",
      $._expr,
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

