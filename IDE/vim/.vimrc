"GENERAL SETTINGS
syntax on
set number
set autoread
autocmd FocusGained,BufEnter,CursorHold,CursorHoldI * if mode() != 'c' | checktime | endif
set clipboard=unnamedplus

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

" COMPILE RUN
map <C-b> <Esc>:w<CR>:!g++ -o compiled.o % -std=c++17 && ./compiled.o<Enter>

" VUNDLE PLUGINS
set nocompatible
filetype off
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'VundleVim/Vundle.vim'
Plugin 'morhetz/gruvbox'
Plugin 'vim-airline/vim-airline'
" LINTING & FORMATTING
Plugin 'Chiel92/vim-autoformat'
Plugin 'dense-analysis/ale'
call vundle#end()
filetype plugin indent on
"au BufWrite * :gg=G
" ===========================
" TO INSTALL PLUGINS:
"   :source %
"   :PlugInstall
" ===========================

" THEMING
set guioptions-=r
colorscheme gruvbox
set bg=dark

" CURSOR
if has("autocmd")
  au VimEnter,InsertLeave * silent execute '!echo -ne "\e[2 q"' | redraw!
  au InsertEnter,InsertChange *
\ silent execute '!echo -ne "\e[6 q"' | redraw! |
au VimLeave * silent execute '!echo -ne "\e[ q"' | redraw!
endif