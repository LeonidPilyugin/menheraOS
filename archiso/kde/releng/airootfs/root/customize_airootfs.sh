#!/bin/sh

#cat os-release > /usr/lib/os-release
#rm os-release

# create neco sudo livecd user
useradd -m -G sys,network,power,lp,wheel -s /usr/bin/zsh neco
echo -e "neco\nneco" | passwd neco &> /dev/null

# autoload kde
systemctl enable sddm.service
systemctl enable NetworkManager.service
