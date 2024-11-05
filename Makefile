generate:
	tree-sitter generate

highlight: generate
	tree-sitter highlight --html test.d2 > test.html

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
	watchexec --exts d2,js,scm -- make highlight & \
	reload

watch-parse:
	watchexec --exts d2,js,scm,txt -- make parse

watch-test:
	watchexec --exts d2,js,scm,txt -- make test
