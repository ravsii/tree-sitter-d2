generate:
	tree-sitter generate

highlight: generate
	clear
	tree-sitter highlight ./test/showcase.d2

parse: generate
	clear
	tree-sitter parse test.d2

dparse: generate
	clear
	tree-sitter parse test.d2 -d

Dparse: generate
	clear
	tree-sitter parse test.d2 -D

test: generate
	clear
	tree-sitter test

# The `watch-*` commands utilize an excellent tool called `watchexec`, a
# hot-reload CLI tool. It allows you to re-execute tests or highlights
# automatically upon saving (while running them in a separate window, tab,
# pane, etc.), eliminating the need to manually type `make test` each time.
#
# Installation instructions:
#   https://github.com/watchexec/watchexec/blob/main/doc/packages.md

watch-hl:
	watchexec --exts d2,js,scm -- make highlight

watch-parse:
	watchexec --exts d2,js,scm,txt -- make parse

watch-test:
	watchexec --exts d2,js,scm,txt -- make test 

# Do not use this, this is for temporary testing until I find a better way to
# inject queries.
.PHONY: queries
queries:
	mkdir -p ~/.config/nvim/queries/d2/
	cp queries/* ~/.config/nvim/queries/d2/
