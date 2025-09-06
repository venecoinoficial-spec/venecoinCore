# venecoin Snap Packaging

Commands for building and uploading a venecoin Core Snap to the Snap Store. Anyone on amd64 (x86_64), arm64 (aarch64), or i386 (i686) should be able to build it themselves with these instructions. This would pull the official venecoin binaries from the releases page, verify them, and install them on a user's machine.

## Building Locally
```
sudo apt install snapd
sudo snap install --classic snapcraft
sudo snapcraft
```

### Installing Locally
```
snap install \*.snap --devmode
```

### To Upload to the Snap Store
```
snapcraft login
snapcraft register venecoin-core
snapcraft upload \*.snap
sudo snap install venecoin-core
```

### Usage
```
venecoin-unofficial.cli # for venecoin-cli
venecoin-unofficial.d # for venecoind
venecoin-unofficial.qt # for venecoin-qt
venecoin-unofficial.test # for test_venecoin
venecoin-unofficial.tx # for venecoin-tx
```

### Uninstalling
```
sudo snap remove venecoin-unofficial
```