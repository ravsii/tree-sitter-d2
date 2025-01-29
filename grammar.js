/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// FIXME: This will be refactored after fixing grammar's edge cases.
const PREC = {
  terminate: 1000,
  comment: 900,

  visibility_mark: 850,

  escape: 800,
  string: 500,

  variable: 100,

  colon_start: 80,

  ident_fix: 51,

  connection: 10,
  glob: 8,

  block: 5,

  identifier: 3,

  import: 1,
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
const repeat_sep = (rule, separator) => seq(rule, repeat(seq(separator, rule)));

/**
 * Creates a special rule for labels and identifiers, because can be pretty
 * much every character _including_ spaces, which makes it difficult to parse
 * with a simple set of rules or regexes.
 *
 * @param {RuleOrLiteral} rule
 */

const spaced_str = (rule) => choice(
  rule,
  seq(repeat1(seq(rule, /[ ]+/)), rule),
);

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

  extras: $ => [
    /\s+/,
  ],

  conflicts: $ => [
    [$._single_top_level_identifier, $.identifier],
  ],

  rules: {
    source_file: $ => seq(
      repeat(
        choice(
          seq($._declaration, $._eol),
          $._eol,
        ),
      ),
      optional($._declaration),
    ),

    // Comments can be parsed as declaration, but since we're a bit strict on
    // our _eof rule for correct parsing, we should also consider cases like
    // "x -> y # commend\n", where comment appears after declaration but before
    // _eol.
    // I'm not if that's something quality grammars do, but it works for now.
    _declaration: $ => seq(
      /\s*/,
      choice(
        $.declaration,
        $.import,
        $._variable,
        $.method_declaration,
        $.comment,
        $.block_comment,
      ),
      optional(choice(
        $.comment,
        $.block_comment,
      )),
    ),

    comment: _ => token(prec(PREC.comment, /#[^\n]+/)),
    block_comment: _ => seq(
      token(prec(PREC.comment, '"""')),
      repeat(choice(/[^"]/, /"[^"]/, /""[^"]/)),
      token(prec(PREC.comment, '"""')),
    ),

    declaration: $ => seq(
      $._expr,
      optional($._colon_block),
    ),

    _expr: $ => repeat_sep($._identifier, $.connection),

    _colon_block: $ => choice(
      seq(token(prec(PREC.label, ':')), $.label),
      seq(token(prec(PREC.label, ':')), $.block),
      seq(token(prec(PREC.label, ':')), $.import),
      seq(token(prec(PREC.label, ':')), $.label, $.block),
    ),

    method_declaration: $ => prec.right(99, seq(
      $.identifier,
      '(', optional($.arguments), ')',
      opseq(
        token.immediate(prec(PREC.colon_start, ':')),
        '(', optional($.returns), ')',
      ),
    )),

    // x int
    // x, y int
    // x int, y int
    // x, y int, z int32
    arguments: $ => repeat_sep(
      seq(
        repeat_sep($.argument_name, ','),
        $.argument_type,
      ),
      ',',
    ),
    returns: $ => alias($.arguments, 'returns'),

    argument_name: _ => token(/[a-zA-Z0-9_]+/),
    argument_type: _ => token(/[a-zA-Z0-9_\[\]]+/),

    connection: _ => choice(
      token(prec(PREC.connection, /<-+>/)),
      token(prec(PREC.connection, /<-+/)),
      token(prec(PREC.connection, /-+>/)),
      token(prec(PREC.connection, /--+/)),
    ),

    import: _ => token(prec(PREC.import, seq(
      choice('@', '...@'),
      repeat1(/[^\s]/),
    ))),

    block: $ => prec(PREC.block, seq(
      token(prec(PREC.block, '{')),
      seq(
        repeat(seq($._declaration, $._eol)),
        optional($._declaration),
      ),
      token(prec(PREC.block, '}')),
    )),

    label: $ => choice(
      $.label_codeblock,
      $._label_constraints,
      $._label_literal,
    ),

    label_codeblock: $ => choice(
      $._label_codeblock_ticks,
      $._label_codeblock_triple,
      $._label_codeblock_double,
      $._label_codeblock_single,
    ),

    _label_codeblock_ticks: $ => seq(
      token(prec(PREC.label, '|`')),
      optional($.codeblock_language), /\s/,
      alias(/[^`]*/, $.codeblock_content),
      token(prec(PREC.label, '`|')),
    ),

    _label_codeblock_triple: $ => seq(
      token(prec(PREC.label, '|||')),
      optional($.codeblock_language), /\s/,
      $.codeblock_content,
      token(prec(PREC.label, '|||')),
    ),

    _label_codeblock_double: $ => seq(
      token(prec(PREC.label, '||')),
      optional($.codeblock_language), /\s/,
      optional($.codeblock_content),
      token(prec(PREC.label, '||')),
    ),

    _label_codeblock_single: $ => seq(
      token(prec(PREC.label, '|')),
      optional($.codeblock_language), /\s/,
      alias(/[^\|]*/, $.codeblock_content),
      token(prec(PREC.label, '|')),
    ),

    codeblock_language: _ => /[a-zA-Z0-9]+/,
    codeblock_content: _ => repeat1(seq(/.+/, /\s*/)),

    _label_constraints: $ => seq(
      token(prec(PREC.label, '[')),
      repeat_sep($.label_constraint, token(';')),
      token(prec(PREC.label, ']')),
    ),

    label_constraint: $ => repeat1(choice(
      spaced_str(/[^\s;\]]+/),
      $._variable,
    )),

    _label_literal: $ => prec.right(choice(
      $.integer,
      $.float,
      $.boolean,
      $._label_double_quoted,
      $._single_quoted,
      spaced_str($._label_token),
    )),

    integer: _ => /[\-+]?\d+/,
    float: _ => /[\-+]?\d+\.\d+/,
    boolean: _ => choice('true', 'false'),

    _label_token: $ => prec.right(repeat1(choice(
      $.escape,
      /[^\s;|{}\\]+/,
      $._variable,
    ))),

    _label_double_quoted: $ => seq(
      token(prec(PREC.label, '"')),
      repeat(choice(
        token.immediate(prec(PREC.label, /[^"\n\\$]+/)),
        $.escape,
        $._variable,
      )),
      token(prec(PREC.label, '"')),
    ),

    _identifier: $ => prec.right(choice(
      $.identifier_chain,
      $._single_top_level_identifier,
    )),

    identifier_chain: $ => prec.right(sep1(
      $._single_top_level_identifier,
      token('.'),
    )),

    _single_top_level_identifier: $ => choice(
      $.identifier,
      $.global_glob,
      $.glob,
      $.recursive_glob,
      $.connection_reference,
    ),

    connection_reference: $ => seq(
      token('('), $._expr, token(')'),
      $.connection_identifier,
    ),

    connection_identifier: $ => seq(
      token('['), choice(/\d+/, $.glob), token(']'),
    ),

    identifier: $ => prec.right(seq(
      optional(choice(
        $._filters,
        $.visibility_mark,
      )),
      choice(
        spaced_str($._ident_base),
        $._single_quoted,
        $._double_quoted,
      ),
    )),

    _ident_base: $ => repeat1(choice(
      $.escape,
      $.glob,
      token(prec(PREC.identifier, /[^\s:.;&{}()!\\]/)), // All the special stuff
    )),

    glob: _ => token(prec(PREC.glob, '*')),
    recursive_glob: _ => token(prec(PREC.glob, '**')),
    global_glob: _ => token(prec(PREC.glob, '***')),

    _filters: $ => choice(
      $.glob_filter,
      $.inverse_glob_filter,
    ),
    glob_filter: _ => token('&'),
    inverse_glob_filter: _ => token('!&'),

    visibility_mark: _ => choice(
      token(prec(PREC.visibility_mark, '-')),
      token(prec(PREC.visibility_mark, '+')),
      token(prec(PREC.visibility_mark, '\\#')),
    ),

    _variable: $ => choice(
      $.variable,
      $.spread_variable,
    ),

    variable: $ => seq(
      token(prec(PREC.variable, '$')), token('{'),
      $._identifier,
      token('}'),
    ),

    spread_variable: $ => seq(
      token(prec(PREC.variable, '...$')), token('{'),
      $._identifier,
      token('}'),
    ),

    _single_quoted: $ => seq(
      token(prec(PREC.string, '\'')),
      repeat(choice(
        token.immediate(prec(PREC.string, /[^'\n\\]+/)),
        $.escape,
      )),
      token(prec(PREC.string, '\'')),
    ),

    _double_quoted: $ => seq(
      token(prec(PREC.string, '"')),
      repeat(choice(
        token.immediate(prec(PREC.string, /[^"\n\\]+/)),
        $.escape,
      )),
      token(prec(PREC.string, '"')),
    ),

    escape: _ => token.immediate(seq(
      // HACK: labels that start with an escape can't be parsed without it
      // But it shouldn't be here.
      /[ ]*/,
      token.immediate(prec(PREC.escape, '\\')),
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/,
      ),
    )),


    _eol: _ => choice(
      token(prec(PREC.terminate, /\n/)),
      token(prec(PREC.terminate, ';')),
      token(prec(PREC.terminate, '\0')),
    ),
  },
});

