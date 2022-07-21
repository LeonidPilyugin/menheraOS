#!/bin/sh

# create neco sudo livecd user
groupadd -r autologin
useradd -m -G sys,network,power,lp,wheel,autologin -s /usr/bin/zsh neco
echo -e "neco\nneco" | passwd neco &> /dev/null

echo '
#
# [greeter]
# debug_mode          = Greeter theme debug mode.
# detect_theme_errors = Provide an option to load a fallback theme when theme errors are detected.
# screensaver_timeout = Blank the screen after this many seconds of inactivity.
# secure_mode         = Dont allow themes to make remote http requests.
# time_format         = A moment.js format string so the greeter can generate localized time for display.
# time_language       = Language to use when displaying the time or "auto" to use the systems language.
# webkit_theme        = Webkit theme to use.
#
# NOTE: See moment.js documentation for format string options: http://momentjs.com/docs/#/displaying/format/
#

[greeter]
debug_mode          = false
detect_theme_errors = true
screensaver_timeout = 300
secure_mode         = true
time_format         = LT
time_language       = auto
webkit_theme        = kawaii

#
# [branding]
# background_images = Path to directory that contains background images for use by themes.
# logo              = Path to logo image for use by greeter themes.
# user_image        = Default user image/avatar. This is used by themes for users that have no .face image.
#
# NOTE: Paths must be accessible to the lightdm system user account (so they cannot be anywhere in /home)
#

[branding]
background_images = /usr/share/backgrounds
logo              = /usr/share/pixmaps/archlinux-logo.svg
user_image        = /usr/share/pixmaps/archlinux-user.svg

' > /etc/lightdm/lightdm-webkit2-greeter.conf

#echo '#!/bin/sh
#dm-tool lock
#dm-tool switch-to-greeter
#' > /usr/lib/kscreenlocker_greet/switch-on-lock
#chmod +x /usr/lib/kscreenlocker_greet/switch-on-lock

# autoload kde
systemctl start lightdm.service && systemctl enable lightdm.service
#systemctl enable NetworkManager.service
