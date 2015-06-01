#!/bin/zsh
main(){
  mkdir $1
  mkdir {$1/ino/,$1/fritzing/,$1/pi/,$1/images/}
  touch {$1/ino/$1.ino,$1/fritzing/,$1/pi/pi-$1.py,$1/images/,$1/README.md}
  cp examples/example.fzz $1/fritzing/pi-$1.fzz
  cp examples/example.fzz $1/fritzing/$1.fzz
}
if [ $# -eq 0 ]; then
  echo "please provide a name for a new sketch"
  exit
fi
main $1