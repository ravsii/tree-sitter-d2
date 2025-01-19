/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  term: 11,
  connection: 10,
  conn_identifier: 9,
  glob: 8,
  identifier_chain: 7,
  identifier: 6,
  block: 5,
  string: 4,
  label_predefined: 2,
  label: 1,
};

/**
 * Shortcut for optional(seq(...rules))
 *
 * @param {...RuleOrLiteral} rules
 * @returns {ChoiceRule}
 */
const opseq = (...rules) => optional(seq(...rules));

/**
 * Shortcut for repeat(seq(...rules))
 *
 * @param {...RuleOrLiteral} rules
 * @returns {RepeatRule}
 */
// const rseq = (...rules) => repeat(seq(...rules));

/**
 * Shortcut for repeat1(seq(...rules))
 *
 * @param {...RuleOrLiteral} rules
 * @returns {Repeat1Rule}
 */
const r1seq = (...rules) => repeat1(seq(...rules));

/**
 * Creates a rule to match one or more occurrences of `rule` separated by
 * `separator`.
 *
 * @param {RuleOrLiteral} rule
 * @param {RuleOrLiteral} separator
 * @returns {SeqRule}
 */
const sep = (rule, separator) => seq(rule, repeat(seq(separator, rule)));

/**
 * Creates a rule to match at least 2 occurrences of `rule` separated by
 * `separator`.
 *
 * @param {RuleOrLiteral} rule
 * @param {RuleOrLiteral} separator
 * @returns {SeqRule}
 */
const sep1 = (rule, separator) => seq(rule, repeat1(seq(separator, rule)));

module.exports = grammar({
  name: 'd2',

  // word: $ => $._ident_base,

  extras: $ => [
    $.comment,
    $.block_comment,
    $._eol,
    /\s/,
  ],

  conflicts: $ => [
    [$._single_top_level_identifier, $._ident_base],
  ],

  rules: {
    source_file: $ => repeat(prec.left(choice(
      $._declaration,
      $.comment,
      $.block_comment,
    ))),

    comment: _ => token(seq('#', repeat(/./), /\n/)),
    block_comment: _ => seq(
      '"""',
      repeat(choice(/[^"]/, /"[^"]/, /""[^"]/)),
      '"""',
    ),

    _declaration: $ => choice(
      $.declaration,
      $.import,
      $._variable,
      $.method_declaration,
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

    _expr: $ => sep($._identifier, $.connection),

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
      repeat($._declaration),
      token('}'),
    )),

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

    label_constraint: $ => choice(
      token(/[a-zA-Z0-9_]+/),
      $._variable,
    ),

    _label_literal: $ => choice(
      $.integer,
      $.float,
      $.boolean,
      $._label_base,
      $._single_quoted,
      $._label_double_quoted,
    ),

    _label_base: $ => prec.right(repeat1(choice(
      /./,
      token(prec(PREC.label, '\\{')),
      token(prec(PREC.label,
        /[\p{L}\d:.%_#&?,*+/\-\(\)\\]+/u,
      )), // idk how to make it better for now
      token.immediate('\''),
      $._variable,
    ))),

    _label_double_quoted: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^"\n\\$]+/)),
        $.escape_sequence,
        $._variable,
      )),
      '"',
    ),

    connection_reference: $ => seq(
      '(', $._expr, ')',
      $.connection_identifier,
      optional($._fields),
    ),
    connection_identifier: $ => seq(
      '[',
      choice(/\d+/, $.glob),
      ']',
    ),

    _identifier: $ => prec.right(choice(
      $.identifier_chain,
      $._single_top_level_identifier,
    )),

    identifier_chain: $ => prec.right(sep1($._single_top_level_identifier, token('.'))),

    _single_top_level_identifier: $ => choice(
      $.glob,
      $.recursive_glob,
      $.global_glob,
      $.identifier,
    ),

    identifier: $ => prec.right(
      seq(
        optional($._filters),
        choice(
          $._ident,
          $._single_quoted,
          $._double_quoted,
        ),
      ),
    ),

    _fields: $ => r1seq('.', field('field', $.identifier)),

    _ident: $ => prec.right(r1seq(
      $._ident_base,
      optional(choice(
        token.immediate('\''),
        /[\s,]+/,
        '\\.',
      )),
    )),

    _ident_base: $ => choice(
      $.glob,
      '\\*',
      /([\p{L}\d\/_+\-]|\\#)+/u,
    ),

    glob: _ => prec(PREC.glob, token('*')),
    recursive_glob: _ => prec(PREC.glob, token('**')),
    global_glob: _ => prec(PREC.glob, token('***')),

    _filters: $ => choice(
      $.glob_filter,
      $.inverse_glob_filter,
    ),
    glob_filter: _ => token('&'),
    inverse_glob_filter: _ => token('!&'),

    _variable: $ => choice(
      $.variable,
      $.spread_variable,
    ),

    variable: $ => seq(
      token('$'), token('{'),
      $._identifier,
      '}',
    ),

    spread_variable: $ => seq(
      token('...$'), token('{'),
      $._identifier,
      '}',
    ),

    _single_quoted: $ => seq(
      '\'',
      repeat(choice(
        token.immediate(prec(1, /[^'\n\\]+/)),
        $.escape_sequence,
      )),
      '\'',
    ),
    _double_quoted: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^"\n\\]+/)),
        $.escape_sequence,
      )),
      '"',
    ),

    escape_sequence: _ => token.immediate(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/,
      ),
    )),

    // We need extra space in the end to make sure it's not a string starting
    // with an integer.
    integer: _ => token(prec(PREC.label_predefined, /[\-+]?\d+?\s+/)),
    float: _ => token(prec(PREC.label_predefined, /[\-+]?\d+(\.\d+)?\s+/)),
    boolean: _ => token(prec(PREC.label_predefined, choice('true', 'false'))),

    _eol: _ => token(prec(PREC.term, choice(/\n/, /\r/, ';'))),
    _eol_or_space: $ => choice($._eol, repeat(/\s/)),
  },
});

