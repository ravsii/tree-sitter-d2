; keywords
; [
 ; "bold"
 ; "border-radius"
 ; "direction"
 ; "double-border"
 ; "fill"
 ; "fill-pattern"
 ; "filled"
 ; "font"
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

; comments
(comment) @comment

; strings
(label) @string
(escape_sequence) @escape

; d2 syntax
(identifier) @function
(connection) @operator

; uml methods
(arguments (argument_name) @variable.parametr)
(arguments (argument_type) @type)

; punctuation
[
  "["
  "]"
  "{"
  "}"
  "|"
] @punctuation.bracket
"." @punctuation.delimiter
