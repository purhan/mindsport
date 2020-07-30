"GENERAL SETTINGS
syntax on
set number
set autoread
autocmd FocusGained,BufEnter,CursorHold,CursorHoldI * if mode() != 'c' | checktime | endif

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
map <silent> <C-s> <Esc>:w
map <silent> <C-w> <C-C>:q!<CR>

" COMPILE RUN
map <C-b> <Esc>:!g++ -o compiled.o % -std=c++17 && ./compiled.o<Enter>
