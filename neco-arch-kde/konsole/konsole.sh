#!/bin/sh
cp -r src/. /etc/skel
cp -r kons/* /usr/share/konsole/

cat src/.config/konsolerc > ~/.config/konsolerc
# cp kons/* ~/.local/share/konsole/