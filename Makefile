update: generate highlight

generate:
	tree-sitter generate

highlight:
	tree-sitter highlight --html test_small.d2 > test_small.html

parse:
	tree-sitter parse test_small.d2