package tree_sitter_d2_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_d2 "github.com/tree-sitter/tree-sitter-d2/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_d2.Language())
	if language == nil {
		t.Errorf("Error loading D2 grammar")
	}
}
