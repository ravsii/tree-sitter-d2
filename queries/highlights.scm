((comment) @comment @spell)

[
 (label)
 (label_codeblock)
] @string

(escape_sequence) @string.escape

(identifier) @variable
(identifier
  (identifier) @variable.member)

((identifier) @constant.builtin
 (#match? @constant.builtin "^(bold|border-radius|direction|double-border|fill|fill-pattern|filled|font|font-color|font-size|italic|label|multiple|opacity|shadow|shape|source-arrowhead|stroke|stroke-dash|stroke-width|style|target-arrowhead|text-transform|underline)$"))

(connection) @operator
(integer) @number
(float) @number.float
(boolean) @boolean

(import) @module

(argument_name) @variable.parameter
(argument_type) @type


[
  "["
  "]"
  "{"
  "}"
  "|"
  "||"
  "|||"
  "|`"
  "`|"
] @punctuation.bracket
[
  "."
  ";"
  ":"
] @punctuation.delimiter
