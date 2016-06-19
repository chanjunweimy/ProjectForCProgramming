### Vim Shortcuts 
Vim is my favourite editor. Here are some keyboard shortcuts I use, and would like to use but occasionally forget about it. I also add in my favourite plugins. If you're still very confused and perplex by this fantastic editor, [Your problem with Vim is that you don't grok vi](https://gist.github.com/nifl/1178878). There are also lots more articles on Vim tricks, like from [zzapper](http://zzapper.co.uk/vimtips.html), [Cats Who Code](http://zzapper.co.uk/vimtips.html) and [Positive Programming](https://takac.github.io/assets/grammar-slide.html). And if you're still wanting more cheatsheets, just [search on Github](https://github.com/search?utf8=✓&q=vim+cheatsheets).

#### General
Command | Operation  
--- | --- 
`:q`    | quit
`:w`    | save
`:wq`   | save and quit
`:q!`   | force close - not to save changes 
`esc`   | exit current mode editor is in

#### Edit
Command | Operation  
--- | --- 
`u`         | Undo
`Ctrl-r`    | Redo
            |
`o`         | Edit in a new line below
`Ctrl-o`    | Edit in a new line above
`a`         | Append text after cursor
`A`         | Append text at end of line
`i`         | Insert text before cursor
`I`         | Insert text before first non-blank in the line
`r`         | Replace the letter under the cursor. I.e. `rw` replaces the letter under the cursor to w
`cw`        | Delete current letter under cursor and set to insert mode
`cc`        | Delete current line under cursor and set to insert mode
`s`         | Delete current letter under cursor and set to insert mode
`S`         | Delete current line under cursor and set to insert mode
`dd`        | Delete current line 
`5dd`       | Delete 5 lines including current line 
            |
`gg=G`      | Auto indent (works best for C/C++, Java and like languages. Doesn't work so well for languages like Python.
            |
`:g/^#/d`   | Delete all lines that start with #. `d` is for delete. `g` is for global. `^#` is the regex for 'starting with #'
`:g/^$/d`   | Delete all empty lines. `^$` is the regex for 'empty lines'

#### Navigation
Command | Operation  
--- | ---             
`hjkl`      | Left, Down, Up, Right navigation
`0`         | Go to start of line
`$`         | Go to end of line 
`w`         | Next word
`b`         | Previous word
`E`         | End of word
`ea`        | Append at end of word 
`5gg`       | Jump to line 5
`G`         | Jump to last line 
`gg`        | Jump to first line 
`(`         | Previous sentence 
`)`         | Next sentence 

#### Search
Command | Operation  
--- | ---             
`*`           | Search word under cursor
`/<word>`     | Search for word
`n`           | Next search result
`N`           | Previous search result
              | 
              | Find and Replace 
`:s/x/y/`     | Replace `x` with `y` at the first occurrence only
`:s/x/y/g`    | Replace `x` with `y` at all occurrences in that line 
`:%s/x/y/g`   | Replace `x` with `y` at all occurrences in the whole file 

### Dark Corners 
Command | Operation
--- | ---
`:w !sudo tee %` | Get sudo permission for editing the current file when you forgot to get the permission earlier

#### Plugins
* [YouCompleteMe](https://github.com/Valloric/YouCompleteMe)
* [Syntastic](https://github.com/scrooloose/syntastic)
* [Nerdtree](https://github.com/scrooloose/nerdtree)
* [Scrooloose](https://github.com/scrooloose) has a lot of awesome plugins
* [Vim Awesome](http://vimawesome.com) with a whole list of awesome plugins
* [Vim Colours](http://vimcolors.com) to change the colour scheme of the editor
