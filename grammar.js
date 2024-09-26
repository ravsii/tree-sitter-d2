const newline = /\n/;
const terminator = choice(newline, ';', '\0');

const opseq = (...x) => optional(seq(...x))

module.exports = grammar({
  name: 'd2',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $.declaration,
        $.comment,
      )
    ),

    declaration: $ => seq(
      $.identifier,
      opseq($.connection, $.identifier),
      optional($.label),
      terminator,
    ),

    connection: _ => "->",
    label: _ => seq(":", /.*/),

    identifier: $ => seq($._ident_recursive, opseq(".", $.field)),
    field: $ => $._ident_base,
    _ident_recursive: $ => seq(
      $._ident_base,
      opseq(/[\s\'\-\_]+/, $._ident_recursive),
    ),
    _ident_base: _ => /[\w]+/,

    comment: _ => token(seq('#', /.*/)),
  }
});

