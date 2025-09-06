
Debian
====================
This directory contains files used to package venecoind/venecoin-qt
for Debian-based Linux systems. If you compile venecoind/venecoin-qt yourself, there are some useful files here.

## venecoin: URI support ##


venecoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install venecoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your venecoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/venecoin128.png` to `/usr/share/pixmaps`

venecoin-qt.protocol (KDE)

