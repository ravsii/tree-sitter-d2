/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  terminate: 10,
  comment: 9,
  variable: 6,
  string: 5,
  connection: 4,
  block: 3,
  label: 2,
  import: 1,
};

/**
 * Creates a special rule for labels and identifiers, because can be pretty
 * much every character _including_ spaces, which makes it difficult to parse
 * with a simple set of rules or regexes.
 *
 * @param {RuleOrLiteral} rule
 */

const spaced_str = (rule) => choice(
  rule,
  seq(repeat1(seq(rule, /[ \t]+/)), rule),
);

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
 * Creates a rule to match at least 2 occurrences of `rule` separated by
 * `separator`.
 *
 * @param {RuleOrLiteral} rule
 * @param {RuleOrLiteral} separator
 * @returns {SeqRule}
 */
const repeat_sep1 = (rule, separator) => seq(rule, repeat1(seq(separator, rule)));

module.exports = grammar({
  name: 'd2',

  extras: _ => [/\s+/],

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
    // I'm not sure if that's something quality grammars do, but it works for
    // now.
    _declaration: $ => seq(
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
      optional(seq(
        token.immediate(':'),
        '(', optional($.returns), ')',
      )),
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

    import: $ => seq(
      choice(
        token(prec(PREC.import, '@')),
        token(prec(PREC.import, '...@')),
      ),
      repeat1(choice(
        $._double_quoted,
        $._single_quoted,
        $.escape,
        /[^\n;}\\]+/,
      )),
    ),

    block: $ => seq(
      token(prec(PREC.block, '{')),
      seq(
        repeat(seq($._declaration, $._eol)),
        optional($._declaration),
      ),
      token(prec(PREC.block, '}')),
    ),

    label: $ => choice(
      $.label_codeblock,
      $._label_array,
      $._label_literal,
    ),

    // tree-sitter is a context-free parser, so it's impossible to catch cases
    // with custom start & end tokens (see #64)
    // We've hardcoded all the basic options and added fallback that could
    // catch some cases, but not all of them.
    label_codeblock: $ => choice(
      $._label_codeblock_single,
      $._label_codeblock_double,
      $._label_codeblock_triple,
      $._label_codeblock_ticks,
      $._label_codeblock_fallback,
    ),

    _label_codeblock_single: $ => seq(
      token(prec(PREC.label, '|')),
      optional($.codeblock_language), /\s/,
      optional(alias(/[^\|]*/, $.codeblock_content)),
      token(prec(PREC.label, '|')),
    ),

    _label_codeblock_double: $ => seq(
      token(prec(PREC.label, '||')),
      optional($.codeblock_language), /\s/,
      optional($.codeblock_content),
      token(prec(PREC.label, '||')),
    ),

    _label_codeblock_triple: $ => seq(
      token(prec(PREC.label, '|||')),
      optional($.codeblock_language), /\s/,
      optional($.codeblock_content),
      token(prec(PREC.label, '|||')),
    ),

    _label_codeblock_ticks: $ => seq(
      token(prec(PREC.label, '|`')),
      optional($.codeblock_language), /\s/,
      optional(alias(/[^`]*/, $.codeblock_content)),
      token(prec(PREC.label, '`|')),
    ),

    // Fallback label rule, when others failed.
    // It tries to catch cases with custom start & end labels,
    // but still could fail
    _label_codeblock_fallback: $ => seq(
      token(prec(PREC.label, /\|[^a-zA-Z0-9_\s]+/)),
      optional($.codeblock_language), /\s/,
      optional($.codeblock_content),
      token(prec(PREC.label, /[^a-zA-Z0-9_\s]+\|/)),
    ),

    codeblock_language: _ => /[a-zA-Z0-9_]+/,
    codeblock_content: _ => prec.right(
      repeat1(choice(/./, /\s/)),
    ),

    _label_array: $ => seq(
      token(prec(PREC.label, '[')),
      repeat_sep($.label_array, token(';')),
      token(prec(PREC.label, ']')),
    ),

    label_array: $ => repeat1(choice(
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

    _label_token: $ => repeat1(choice(
      /[^\s;|{}\\]+/,
      $._variable,
      $.escape,
    )),

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

    identifier_chain: $ => prec.right(repeat_sep1(
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
      token(/[^\s:.;&{}!\\]/), // All the special stuff
      $.glob,
      $.escape,
    )),

    glob: _ => token('*'),
    recursive_glob: _ => token('**'),
    global_glob: _ => token('***'),

    _filters: $ => choice(
      $.glob_filter,
      $.inverse_glob_filter,
    ),
    glob_filter: _ => token('&'),
    inverse_glob_filter: _ => token('!&'),

    visibility_mark: _ => choice(
      token('-'),
      token('+'),
      token('\\#'),
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
        token.immediate(/[^'\n\\]+/),
        $.escape,
      )),
      token(prec(PREC.string, '\'')),
    ),

    _double_quoted: $ => seq(
      token(prec(PREC.string, '"')),
      repeat(choice(
        token.immediate(/[^"\n\\]+/),
        $.escape,
      )),
      token(prec(PREC.string, '"')),
    ),

    escape: _ => seq(
      token('\\'),
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/,
      ),
    ),

    _eol: _ => choice(
      token(prec(PREC.terminate, /\n/)),
      token(prec(PREC.terminate, ';')),
      token(prec(PREC.terminate, '\0')),
    ),
  },
});

