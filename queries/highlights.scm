; keywords
; [
 ; "bold"
 ; "border-radius"
 ; "direction"
 ; "double-border"
 ; "fill"
 ; "fill-pattern"
 ; "filled" "font"
 ; "font-color"
 ; "font-size"
 ; "italic"
 ; "label"
 ; "multiple"
 ; "opacity"
 ; "shadow"
 ; "shape"
 ; "source-arrowhead"
 ; "stroke"
 ; "stroke-dash"
 ; "stroke-width"
 ; "style"
 ; "target-arrowhead"
 ; "text-transform"
 ; "underline"
; ] @keyword

(comment) @comment

(label) @string
(escape_sequence) @escape

(identifier) @variable
(identifier
  (identifier) @variable.member)
(connection) @operator
(integer) @number
; (bool) @constant.builtin

(argument_name) @variable.parameter
(argument_type) @type

[
  "["
  "]"
  "{"
  "}"
  "|"
] @punctuation.bracket
"." @punctuation.delimiter
