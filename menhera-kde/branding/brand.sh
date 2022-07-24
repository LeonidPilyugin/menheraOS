#!/bin/sh
cat files/os-release > /usr/lib/os-release
cat files/issue > /etc/issue
cp -r images/* /usr/share/pixmaps/
rm -f /etc/arch-release
touch /etc/necoarch-release