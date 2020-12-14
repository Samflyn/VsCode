#!/bin/bash
if [[ "${UID}" -eq 0 ]]; then
    chsh -s /usr/bin/fish sam
    echo 'FONT=lat2-16' >>/etc/vconsole.conf
    echo 'FONT_MAP=8859-2' >>/etc/vconsole.conf
    pacman -Rns linux linux-headers --noconfirm
    echo '' >>/etc/pacman.conf
    echo '[chaotic-aur]' >>/etc/pacman.conf
    echo 'Server = http://chaotic.bangl.de/$repo/$arch' >>/etc/pacman.conf
    echo 'Server = https://lonewolf.pedrohlc.com/$repo/$arch' >>/etc/pacman.conf
    pacman-key --keyserver hkp://keyserver.ubuntu.com -r 3056513887B78AEB 8A9E14A07010F7E3
    pacman-key --lsign-key 3056513887B78AEB
    pacman-key --lsign-key 8A9E14A07010F7E3
    pacman -Syyu
    pacman -S linux-tkg-bmq linux-tkg-bmq-headers nano crda yay pamac-aur-git --noconfirm
    echo GRUB_FORCE_HIDDEN_MENU='true' >>/etc/default/grub
    wget https://gist.githubusercontent.com/anonymous/8eb2019db2e278ba99be/raw/257f15100fd46aeeb8e33a7629b209d0a14b9975/gistfile1.sh -O /etc/grub.d/31_hold_shift
    chmod a+x /etc/grub.d/31_hold_shift
    grub-mkconfig -o /boot/grub/grub.cfg
    echo 'WIRELESS_REGDOM="IN"' >/etc/conf.d/wireless-regdom
    iw reg set IN
    iwconfig wlp6s0 power off
    pacman -S base base-devel xorg xorg-xinit tlp intel-ucode linux-firmware acpi_call-dkms archlinux-keyring --noconfirm
    systemctl enable tlp
    echo 'done...'
    exit 0
else
    echo 'Please run as sudo'
    exit 1
fi
