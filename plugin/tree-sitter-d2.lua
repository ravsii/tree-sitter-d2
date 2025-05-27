require("tree-sitter-d2").setup()

vim.filetype.add({
  extension = {
    d2 = function()
      return "d2", function(bufnr)
        vim.bo[bufnr].commentstring = "# %s"
      end
    end,
  },
})
