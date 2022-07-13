#!/bin/sh
cat files/os-release > /usr/lib/os-release
cat files/issue > /etc/issue
cp -r images/* /usr/share/pixmaps/
rm -f /etc/arch-release
touch /etc/necoarch-release

rm -r /etc/neofetch
mkdir /etc/neofetch
touch /etc/neofetch/config.conf
cat files/neoconf > /etc/neofetch/config.conf
cat files/neoconf > /home/*/.config/neofetch/config.conf
cp -r files/necologo /etc/neofetch/
