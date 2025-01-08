generate:
	tree-sitter generate

highlight: generate
	tree-sitter highlight ./test/highlight.d2

parse: generate
	clear
	tree-sitter parse test.d2

dparse: generate
	clear
	tree-sitter parse test.d2 -d

test: generate
	clear
	tree-sitter test

# watch uses 2 utility tools, reload for live reloading and watchexec to
# watch for changes on d2/js/scm files and perform "make highlight"
watch-install:
	brew install watchexec && npm i -g reload

watch-hl:
	watchexec --exts d2,js,scm -- make highlight

watch-parse:
	watchexec --exts d2,js,scm,txt -- make parse

watch-test:
	watchexec --exts d2,js,scm,txt -- make test

# Do not use this, this is for temporary testing until I find a better way to
# inject queries
queries:
	mkdir -p ~/.config/nvim/queries/d2/
	cp queries/* ~/.config/nvim/queries/d2/
watch-copy-queries:
	watchexec --exts d2,js,scm,txt -- make queries

.PHONY: all queries
