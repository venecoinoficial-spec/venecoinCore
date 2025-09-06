Arch Linux build guide
----------------------

**Last tested with:** 1.14.6-dev (as of 22884709)
**Test date:** 2022/07/15

This example lists the steps necessary to setup and build a command line only
venecoind on archlinux:

```sh
pacman -S git base-devel boost libevent python db
git clone https://github.com/venecoin/venecoin.git
cd venecoin/
./autogen.sh
./configure --without-gui --without-miniupnpc
make
```
