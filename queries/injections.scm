(label_codeblock
  (codeblock_language) @injection.language
  (codeblock_content) @injection.content)

((label_codeblock
  (codeblock_language) @language
  (codeblock_content) @injection.content)
  (#eq? @language "md")
  (#set! injection.language "markdown"))
