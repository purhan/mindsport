"GENERAL SETTINGS
syntax on
set number
set autoread
autocmd FocusGained,BufEnter,CursorHold,CursorHoldI * if mode() != 'c' | checktime | endif
set clipboard=unnamedplus
set tabstop=4
set shiftwidth=4
set softtabstop=4
set expandtab
set guifont=Consolas\ 12

"KEYBINDINGS
nmap <S-Up> v<Up>
nmap <S-Down> v<Down>
nmap <S-Left> v<Left>
nmap <S-Right> v<Right>
vmap <S-Up> <Up>
vmap <S-Down> <Down>
vmap <S-Left> <Left>
vmap <S-Right> <Right>
imap <S-Up> <Esc>v<Up>
imap <S-Down> <Esc>v<Down>
imap <S-Left> <Esc>v<Left>
imap <S-Right> <Esc>v<Right>
vmap <C-c> y<Esc>i
vmap <C-x> d<Esc>i
map <C-v> pi
map <S-End> V
imap <C-v> <Esc>pi
imap <C-z> <Esc>ui
map <C-a> ggVG
map <C-c> "+y
imap <silent><C-s> <Esc>:w<Enter>
map <silent><C-s> <Esc>:w<Enter>
map <silent><C-w> <C-C>:q!<CR>
noremap i a

" COMPILE RUN
map <C-b> <Esc>:w<CR>:!g++ -o compiled.o % -std=c++17 && ./compiled.o<Enter>

" VUNDLE PLUGINS
" ===========================
" TO INSTALL PLUGINS:
"   :source %
"   :PlugInstall
" ===========================
set nocompatible
filetype off
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'VundleVim/Vundle.vim'
Plugin 'morhetz/gruvbox'
Plugin 'vim-airline/vim-airline'
Plugin 'preservim/nerdtree'
" LINTING & FORMATTING
Plugin 'Chiel92/vim-autoformat'
Plugin 'dense-analysis/ale'
call vundle#end()
filetype plugin indent on
" Code Formatting
autocmd BufWritePost * :Autoformat
" Toggle NERDTree
nmap <C-e> :NERDTreeToggle<CR>

" THEMING
set guioptions-=r
colorscheme gruvbox
set bg=dark

" BRACKET COMPLETION
inoremap " ""<left>
inoremap ' ''<left>
inoremap ( ()<left>
inoremap [ []<left>
inoremap { {}<left>
inoremap {<CR> {<CR>}<ESC>O
inoremap {;<CR> {<CR>};<ESC>O
