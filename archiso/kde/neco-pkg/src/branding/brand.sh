#!/bin/sh
cat files/os-release > $pkgdir/usr/lib/os-release
cat files/issue > $pkgdir/etc/issue
cp -r images/* $pkgdir/usr/share/pixmaps/
rm -f $pkgdir/etc/arch-release
touch $pkgdir/etc/necoarch-release

rm -r $pkgdir/etc/neofetch
mkdir $pkgdir/etc/neofetch
touch $pkgdir/etc/neofetch/config.conf
cat files/neoconf > $pkgdir/etc/neofetch/config.conf
cp -r files/necologo $pkgdir/etc/neofetch/
