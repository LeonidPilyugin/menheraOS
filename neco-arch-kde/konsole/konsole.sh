#!/bin/sh
sudo cp -r src/. /etc/skel
sudo cp -r kons/* /usr/share/konsole/

cat src/.config/konsolerc > ~/.config/konsolerc
# cp kons/* ~/.local/share/konsole/