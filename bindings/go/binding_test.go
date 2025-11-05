package tree_sitter_dockerfile_test

import (
	"testing"

	tree_sitter_dockerfile "github.com/camdencheek/tree-sitter-dockerfile/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dockerfile.Language())
	if language == nil {
		t.Errorf("Error loading Dockerfile grammar")
	}
}
