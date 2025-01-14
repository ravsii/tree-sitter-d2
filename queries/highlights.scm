((comment) @comment @spell)

[
  (label)
  (label_codeblock)
] @string

(label_constraint) @keyword

((label_constraint) @constant
  (#any-of? @constant
    "primary_key"
    "foreign_key"
    "unique"
    "PK"
    "FK"
    "UNQ"
  )
)

(escape_sequence) @string.escape

(identifier) @function

((identifier) @function.builtin
  (#any-of? @function.builtin
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
