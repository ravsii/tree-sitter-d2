local M = {}

function M.setup()
  local ok, parsers = pcall(require, "nvim-treesitter.parsers")
  if not ok then
    vim.notify("tree-sitter-d2: can't import nvim-treesitter.parsers", vim.log.levels.WARN)
    return
  end

  ---@module "nvim-treesitter.parsers"
  ---@type table<string, ParserInfo>
  local parser_config = parsers.get_parser_configs()

  local file = debug.getinfo(1).source:match("@(.*/)")
  local plugin_dir = vim.fn.fnamemodify(file, ":p:h:h:h")
  parser_config.d2 = {
    install_info = {
      url = plugin_dir,
      files = { "src/parser.c" },
      branch = "main",
    },
    maintainers = { "@ravsii" },
    filetype = "d2",
  }

  vim.filetype.add({
    extension = {
      d2 = function()
        return "d2", function(bufnr)
          vim.bo[bufnr].commentstring = "# %s"
        end
      end,
    },
  })
end

return M
