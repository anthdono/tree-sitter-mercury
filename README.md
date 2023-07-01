## installation and setup

#### using packer.nvim

1.  add the following to neovim's config

```lua
use("https://github.com/anthdono/tree-sitter-mercury")
```

2. run ```:PackerSync``` in neovim
    > on unix systems this should clone the repository to: ~/.local/share/nvim/site/pack/packer/start/tree-sitter-mercury
3. as of writing, upstream vim does not recognise the mercury language and it's filetype. the default behaviour when opening a file with a .m extension is to set the filetype to matlab. this can be overcome by adding the following snippet to your neovim config:

```lua
-- introduce the mercury language and it's filetype to vim
vim.filetype.add({
    extension = {
        m = "mercury",
    },
    filename = {
        [".m"] = "mercury",
    },
    pattern = {
        ["\\.m$"] = "mercury",
    },
})

```

5. similarly to vim, treesitter is unfamiliar with the mercury language and it's filetype. to overcome this the following snippet should be added to your neovim config:

```lua
-- register the mercury langauge and it's filetype with treesitter
vim.treesitter.language.register("mercury", "m")
```

6. to add the mercury parser to treesitter, the following snippet should be
   added to neovim's config

```lua
require("nvim-treesitter.parsers").get_parser_configs().mercury = {
    install_info = {
        -- replace the following string with the local repository's path
        url = "/Users/<username>/.local/share/nvim/site/pack/packer/start/tree-sitter-mercury",
        files = { "src/parser.c" },
        generate_requires_npm = false,
        requires_generate_from_grammar = false,
    },
    filetype = "m",
}
```

7. the parser is now installed, however nvim-treesitter lacks the neccesary highlight queries required to utilise the mercury treesitter parser for syntax highlighting. the tree-sitter-mercury repository contains custom nvim-treesitter highlight queries, which is best installed via symlinking. this can be done with the following bash command:
```zsh
# locate the nvim-treesitter package, if installed with packer, it should be at:
# ~/.local/share/nvim/site/pack/packer/start/nvim-treesitter

# navigate to the directory where nvim-treesitter contains it's queries
cd ~/.local/share/nvim/site/pack/packer/start/nvim-treesitter/queries
# create a symlink here that points to tree-sitter-mercury/queries/mercury
ln -s ~/.local/share/nvim/site/pack/packer/start/tree-sitter-mercury/queries/mercury
```
8. run ```:TSInstall mercury``` within neovim. 
> ```:TSInstall mercury``` will likely need to be rerun everytime
> tree-sitter-mercury is updated via ```:PackerSync``` or equivalent
