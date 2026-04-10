vim.api.nvim_create_autocmd("PackChanged", {
  callback = function(ev)
    local name, kind = ev.data.spec.name, ev.data.kind
    if kind ~= "install" and kind ~= "update" then
      return
    end

    if name == "nvim-treesitter" then
      if not ev.data.active then
        vim.cmd.packadd("nvim-treesitter")
      end
      vim.cmd("TSUpdate")
    end

    if name == "tree-sitter-d2" then
      if not ev.data.active then
        vim.cmd.packadd("tree-sitter-d2")
      end
      vim.system({ "make", "nvim-install" }, { cwd = ev.data.path })
    end
  end,
})

vim.pack.add({
  { src = "https://github.com/nvim-treesitter/nvim-treesitter" },
  { src = "https://github.com/ravsii/tree-sitter-d2", version = vim.version.range("*") },
})
