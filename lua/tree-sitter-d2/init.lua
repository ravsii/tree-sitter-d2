local M = {}

function M.setup()
  local ok, parsers = pcall(require, "nvim-treesitter.parsers")
  if not ok then
    vim.notify("tree-sitter-d2: can't import nvim-treesitter.parsers", vim.log.levels.WARN)
    return
  end

  -- doesn't exist in new versions
  local is_old = type(parsers.get_parser_configs) == "function"

  local file = debug.getinfo(1).source:match("@(.*/)")
  local plugin_dir = vim.fn.fnamemodify(file, ":p:h:h:h")
  if is_old then
    M.setup_master(parsers, plugin_dir)
  else
    M.setup_main(plugin_dir)
  end
end

function M.setup_master(parsers, plugin_dir)
  parsers.get_parser_configs().d2 = {
    install_info = {
      url = plugin_dir,
      files = { "src/parser.c" },
      branch = "main",
    },
    requires_generate_from_grammar = true,
  }
end

function M.setup_main(plugin_dir)
  vim.api.nvim_create_autocmd("User", {
    pattern = "TSUpdate",
    callback = function()
      require("nvim-treesitter.parsers").d2 = {
        install_info = { path = plugin_dir },
      }
    end,
  })

  vim.treesitter.language.register("d2", "d2")
  vim.api.nvim_create_autocmd("FileType", {
    pattern = { "d2" },
    callback = function()
      vim.treesitter.start()
    end,
  })
end

return M
