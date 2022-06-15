#!/bin/bash
sudo pacman -S python-pip --noconfirm
pip install dbus-python



CRL=$(curl https://raw.githubusercontent.com/pashazz/ksetwallpaper/master/ksetwallpaper.py)
python -c "$CRL" --file "$PWD/w.png"