#!/bin/sh
sudo cat files/os-release > /usr/lib/os-release
sudo cat files/issue > /etc/issue
sudo cp -r images/* /usr/share/pixmaps/
sudo rm -f /etc/arch-release
sudo touch /etc/necoarch-release

sudo rm -r /etc/neofetch
sudo mkdir /etc/neofetch
sudo touch /etc/neofetch/config.conf
sudo cat files/neoconf > /etc/neofetch/config.conf
sudo cat files/neoconf > /home/*/.config/neofetch/config.conf
sudo cp -r files/necologo /etc/neofetch/
