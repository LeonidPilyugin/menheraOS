#!/bin/sh
sudo pacman -S python-pip --noconfirm
pip install dbus-python

CRL=$(curl https://raw.githubusercontent.com/pashazz/ksetwallpaper/master/ksetwallpaper.py)
sudo -u $USER python -c "$CRL" --file "$PWD/wpl.png"  --lock-screen
sudo -u $USER python -c "$CRL" --file "$PWD/wp.png"
