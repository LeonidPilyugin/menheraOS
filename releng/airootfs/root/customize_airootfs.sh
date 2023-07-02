!#/bin/sh

grub-mkconfig -o /boot/grub/grub.cfg

# create neco sudo livecd user
groupadd -r autologin
useradd -m -G sys,network,power,lp,wheel,autologin -s /usr/bin/zsh menhera
echo -e "menhera\nmenhera" | passwd menhera &> /dev/null

# autoload kde
systemctl start sddm.service && systemctl enable sddm.service
systemctl enable NetworkManager.service
