#!/bin/sh

cp -rf kawaii/ $pkgdir/usr/share/sddm/themes/
cat conf > $pkgdir/etc/sddm.conf.d/nyaga.conf
