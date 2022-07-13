#!/bin/sh
# install zsh
sudo pacman -S zsh --noconfirm
# install oh-my-zsh (theme manager)
export ZSH=/opt/oh-my-zsh
export RUNZSH="no"
export CHSH="no"
sudo sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
# install autosuggestions plugin
git clone https://github.com/zsh-users/zsh-autosuggestions.git $ZSH/plugins/zsh-autosuggestions
# install syntax highlighting plugin
git clone https://github.com/zsh-users/zsh-syntax-highlighting.git $ZSH/plugins/zsh-syntax-highlighting
# copy theme
sudo cp src/kawaii.zsh-theme $ZSH/themes/kawaii.zsh-theme
# change shell
# chsh -s $(which zsh)
# copy .zshrc
sudo cp src/.zshrc /etc/skel/.zshrc
sudo -u $USER cp src/.zshrc ~/.zshrc
