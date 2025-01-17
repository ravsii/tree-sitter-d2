/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  term: 10,
  connection: 9,
  conn_identifier: 8,
  block: 5,
  string: 4,
  label_predefined: 2,
  label: 1,
};

const opseq = (...rules) => optional(seq(...rules));
const rseq = (...x) => repeat(seq(...x));
const r1seq = (...x) => repeat1(seq(...x));

module.exports = grammar({
  name: 'd2',

  word: $ => $._ident_base,

  extras: $ => [
    $.comment,
    $.block_comment,
    $._eol,
    /\s/,
  ],

  rules: {
    source_file: $ => repeat(prec.left(choice(
      $._top_level_declaratioin,
      $.comment,
      $.block_comment,
    ))),

    comment: _ => token(seq('#', repeat(/./), /\n/)),
    block_comment: _ => seq('"""',
      // repeat(/./),
      repeat(choice(
        /[^"]/,
        /"[^"]/,
        /""[^"]/,
      )),
      '"""'),

    _top_level_declaratioin: $ => choice(
      $.declaration,
      $.import,
    ),

    declaration: $ => prec.right(-1, seq(
      choice(
        $._expr,
        $.connection_reference,
      ),
      optional(choice(
        seq(':', $.import),
        seq(':', optional($.label), optional($.block)),
      )),
      optional($._eol),
    )),


    _expr: $ => prec.right(seq(
      $.identifier,
      rseq(
        $.connection,
        $.identifier,
      ),
    )),

    method_declaration: $ => prec.right(100, seq(
      $.identifier,
      '(', optional($.arguments), ')',
      opseq(':', '(', optional($.returns), ')'),
    )),

    returns: $ => alias($.arguments, 'returns'),
    arguments: $ => choice(
      // arg type
      seq($.argument_name, $.argument_type),
      // arg type, arg type
      seq(
        $.argument_name, $.argument_type,
        r1seq(',', $.argument_name, $.argument_type),
      ),
      // arg1, arg2 type1, arg3, arg4 type2
      r1seq(
        $.argument_name, r1seq(',', $.argument_name),
        $.argument_type, optional(','),
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

    import: _ => token(seq(choice('@', '...@'), repeat1(/[^\s]/))),

    block: $ => prec(PREC.block, seq(
      token('{'),
      repeat($._block_declaration),
      token('}'),
    )),

    _block_declaration: $ => choice(
      $._top_level_declaratioin,
      $.method_declaration,
    ),

    label: $ => choice(
      $.label_codeblock,
      $._label_literal,
      $._label_constraints,
    ),

    label_codeblock: $ => choice(
      seq('|`', $.codeblock_language, alias(/[^`]*/, $.codeblock_content), '`|'),
      seq('|||', $.codeblock_language, $.codeblock_content, '|||'),
      seq('||', $.codeblock_language, $.codeblock_content, '||'),
      seq('|', $.codeblock_language, alias(/[^\|]*/, $.codeblock_content), '|'),
    ),

    codeblock_language: _ => token(/[a-zA-Z0-9]+/),
    codeblock_content: _ => repeat1(seq(/.+/, /\s*/)),
    _label_constraints: $ => seq(
      '[',
      repeat1(seq($.label_constraint, optional(';'))),
      ']',
    ),

    label_constraint: _ => token(/[a-zA-Z0-9_]+/),

    _label_literal: $ => prec.right(choice(
      $.integer,
      $.float,
      $.boolean,
      repeat1($._label_base),
      token(seq('"', /[^"]*/, '"')),
    )),

    _label_base: $ => choice(
      $._ident_base,
      token(prec(PREC.label, '\\{')),
      token(prec(PREC.label, /[\(\)\\:.\-%_#&\?\',\'*]+/)), // idk how to make it better
    ),

    connection_reference: $ => seq(
      '(', $._expr, ')',
      $.connection_identifier,
      optional($._fields),
    ),
    connection_identifier: _ => token(seq('[', /\d+/, ']')),

    identifier: $ => choice(
      $._identifier_base,
      $._single_quoted,
      $._double_quoted,
    ),

    _single_quoted: _ => prec(PREC.string,
      token(seq('\'', repeat(choice('\\\'', /[^']/)), '\'')),
    ),

    _double_quoted: _ => prec(PREC.string,
      token(seq('"', repeat(choice('\\"', /[^"]/)), '"')),
    ),

    _identifier_base: $ => prec.left(-1, seq($._ident, optional($._fields))),
    _fields: $ => r1seq('.', field('field', $.identifier)),
    _ident: $ => r1seq($._ident_base, optional(/[\s\',]+/)),
    _ident_base: _ => /([\p{L}\d\/\*_+\-]|\\#)+/u,

    escape_sequence: _ => token(choice(
      '\\\\',
      '\\\'',
      '\\"',
      '\\n',
      '\\t',
      '\\r',
      '\\b',
      '\\f',
      /\\u[0-9a-fA-F]{4}/,
      /\\x[0-9a-fA-F]{2}/,
    )),

    // We need extra space in the end to make sure it's not a string starting
    // with an integer.
    integer: _ => token(prec(PREC.label_predefined, /[\-+]?\d+?\s+/)),
    float: _ => token(prec(PREC.label_predefined, /[\-+]?\d+(\.\d+)?\s+/)),
    boolean: _ => token(prec(PREC.label_predefined, choice('true', 'false'))),

    _eol: _ => token(prec(PREC.term, choice(/\n/, /\r/, ';'))),
    _eol_or_space: $ => choice($._eol, repeat1(/\s/)),
  },
});

