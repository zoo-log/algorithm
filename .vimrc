" ===========================
"  Vundle Setup
" ===========================
set nocompatible              " be iMproved, required
filetype off                  " required

set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

" Plugins
Plugin 'VundleVim/Vundle.vim'

call vundle#end()            " required
filetype plugin indent on    " required

" ===========================
"  General Settings
" ===========================
syntax on                       " Enable syntax highlighting
set number                     " Show line numbers
set mouse=a                    " Enable mouse support
set clipboard=unnamedplus      " Use system clipboard
set encoding=utf-8
set fileencoding=utf-8

" ===========================
"  Tabs & Indentation
" ===========================
set tabstop=4                  " Number of spaces that a <Tab> counts for
set shiftwidth=4               " Number of spaces for autoindent
set expandtab                  " Convert tabs to spaces
set autoindent
set smartindent

" ===========================
"  UI Enhancements
" ===========================
set showmatch                  " Highlight matching brackets
set wildmenu                   " Enhanced command-line completion
set showcmd                    " Show partial commands in the bottom bar

" ===========================
"  Search Settings
" ===========================
set ignorecase                 " Ignore case when searching
set smartcase                  " Override 'ignorecase' if search includes uppercase
set incsearch                  " Show matches as you type
set hlsearch                   " Highlight matches

" ===========================
"  Colorscheme
" ===========================
set background=dark
colorscheme gruvbox

" ===========================
"  Key Mappings
" ===========================

" ===========================
"  Misc
" ===========================

