const PREC = {
  term: 1000,

  connection: 100,
  conn_identifier: 90,

  block: 20,

  label: 10,
};


const terminator = token(prec(PREC.term, choice(/\n/, ';', '\0')));

const opseq = (...x) => optional(seq(...x))
const opfield = (...x) => optional(field(...x))
const rseq = (...x) => repeat(seq(...x))
const r1seq = (...x) => repeat1(seq(...x))

module.exports = grammar({
  name: 'd2',

  word: $ => $._ident_base,

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

    comment: _ => token(seq('#', /.+/, '\n')),

    declaration: $ => prec.right(seq(
      choice(
        $._expr,
        $.connection_refference,
      ),
      opseq(
        ":",
        opfield("label", $.label),
        opfield("block", $.block),
      ),
      optional(terminator),
    )),

    _expr: $ => prec.right(seq(
      field("identifier", $.identifier),
      rseq(
        field("connection", $.connection),
        field("identifier", $.identifier),
      ),
    )),

    method_declaration: $ => prec.right(100, seq(
      $.identifier,
      "(", optional($.arguments), ")",
      opseq(":", "(", optional($.returns), ")")
    )),

    returns: $ => alias($.arguments, "returns"),
    arguments: $ => choice(
      // arg type
      seq($.argument_name, $.argument_type),
      // arg type, arg type
      seq(
        $.argument_name, $.argument_type,
        r1seq(",", $.argument_name, $.argument_type)
      ),
      // arg1, arg2 type1, arg3, arg4 type2
      r1seq(
        $.argument_name, r1seq(",", $.argument_name),
        $.argument_type,
        optional(","),
      ),
    ),
    argument_name: _ => token(/[a-zA-Z0-9_]+/),
    argument_type: _ => token(/[a-zA-Z0-9_\[\]]+/),

    connection: _ => token(prec(PREC.connection, choice(
      /<-+>/,
      /<-+/,
      /-+>/,
      /--+/,
    ))),

    block: $ => seq("{", repeat(choice(
      $.declaration,
      $.method_declaration,
    )),
      "}"),
    label: $ => prec.right(choice(
      $.label_codeblock,
      repeat1($._label_base),
      token(seq('"', /.*/, '"')),
      seq('[', $._label_constraints, ']'),
    )),

    label_codeblock: $ => choice(
      seq("|`", $._label_codeblock_lang, /[^`]*/, "`|"),
      seq("|||", $._label_codeblock_lang, $._label_codeblock_body, "|||"),
      seq("||", $._label_codeblock_lang, $._label_codeblock_body, "||"),
      seq("|", $._label_codeblock_lang, /[^\|]+/, "|"),
    ),

    _label_codeblock_lang: _ => token(/[a-zA-Z]+/),
    _label_codeblock_body: _ => repeat1(seq(/.+/, /\s*/)),
    _label_constraints: $ => repeat1(seq($.label_constraint, optional(";"))),

    label_constraint: _ => token(/[a-z_]+/),

    _label_base: $ => choice(
      $._ident_base,
      token(prec(PREC.label, "\\{")),
      token(prec(PREC.label, /[\(\)\\:\.\-%_#&\?\',\']+/)) // idk how to make it better
    ),

    connection_refference: $ => seq(
      "(", $._expr, ")",
      field("connection_identifier", $.connection_identifier),
      optional($._fields),
    ),
    connection_identifier: _ => token(seq("[", /\d+/, "]",)),

    identifier: $ => seq(
      choice(
        seq('"', repeat(choice($.escape_sequence, /[^"]/)), '"'),
        $._identifier_base,
      )),
    _identifier_base: $ => prec.left(-1, seq($._ident, optional($._fields))),
    _fields: $ => r1seq(".", field("field", $.identifier)),
    _ident: $ => r1seq($._ident_base, optional(/[\s\',]+/)),
    _ident_base: _ => /([\p{L}\d\/\*_+\-]|\\#)+/,

    escape_sequence: _ => token(choice(
      '\\\\',
      '\\"',
      '\\n',
      '\\t',
      '\\r',
      '\\b',
      '\\f',
      /\\u[0-9a-fA-F]{4}/,
      /\\x[0-9a-fA-F]{2}/
    )),
  }
});

