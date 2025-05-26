local M = {}

function M.setup()
  local ok, nvim_parsers = pcall(require, "nvim-treesitter.parsers")
  if not ok then
    vim.notify("tree-sitter-d2: can't import nvim-treesitter.parsers", vim.log.levels.WARN)
    return
  end

  --- @type ParserInfo[]
  local parsers

  if type(nvim_parsers.get_parser_configs) == "function" then
    parsers = nvim_parsers.get_parser_configs()
  else
    parsers = nvim_parsers
  end

  if type(parsers.d2) == "table" then -- already present
    return
  end

  local file = debug.getinfo(1).source:match("@(.*/)")
  local plugin_dir = vim.fn.fnamemodify(file, ":p:h:h:h")
  parsers.d2 = {
    install_info = {
      url = plugin_dir,
      files = { "src/parser.c" },
      branch = "main",
    },
    requires_generate_from_grammar = true,
  }
end

return M
