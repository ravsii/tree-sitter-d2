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
  (#any-of? @constant.builtin
    "3d"
    "animated"
    "bold"
    "border-radius"
    "class"
    "classes"
    "constraint"
    "d2-config"
    "direction"
    "double-border"
    "fill"
    "fill-pattern"
    "filled"
    "font"
    "font-color"
    "font-size"
    "height"
    "italic"
    "label"
    "layers"
    "link"
    "multiple"
    "near"
    "opacity"
    "scenarios"
    "shadow"
    "shape"
    "source-arrowhead"
    "steps"
    "stroke"
    "stroke-dash"
    "stroke-width"
    "style"
    "target-arrowhead"
    "text-transform"
    "tooltip"
    "underline"
    "vars"
    "width"
  )
)

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
