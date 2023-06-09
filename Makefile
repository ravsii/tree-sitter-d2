update: generate highlight

generate:
	tree-sitter generate

highlight: generate
	tree-sitter highlight --html test_small.d2 > test_small.html

parse: generate
	tree-sitter parse test_small.d2

# watch uses 2 utility tools, reload for live reloading and watchexec to
# watch for changes on d2/js/scm files and perform "make highlight"
watch-install:
	brew install watchexec && npm i -g reload

watch-hl:
	watchexec --exts d2,js,scm -- make highlight & \
	reload


watch-parse:
	watchexec --exts d2,js,scm -- make parse
