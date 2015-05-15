#!/bin/zsh
#

makefolders(){

  arg1=$1
  # arg2=$2

  mkdir $1/images
  mkdir $1/fritzing
  mkdir $1/pi
  mkdir $1/ino
}

movefiles(){

  mv $1/*.ino $1/ino/
  mv $1/*.fzz $1/fritzing/
  mv $1/*.py  $1/pi/
  mv $1/*.jpg $1/images/
  mv $1/*.png $1/images/

}

main (){



for D in *; do
    if [ -d "${D}" ]; then
        echo "${D}"   # your processing here
        makefolders "${D}"
        movefiles "${D}"
    fi
done

rm -r bin/ino/
rm -r bin/fritzing/
rm -r bin/pi/
rm -r bin/images/

  # for D in *; do [ -d "${D}" ] && echo "${D}"; done
  # find . -type d -exec sh -c '(cd {} && touch)' ';'

}

main