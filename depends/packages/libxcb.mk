package=libxcb
$(package)_version=1.16
$(package)_download_path=https://xorg.freedesktop.org/archive/individual/lib
$(package)_file_name=$(package)-$($(package)_version).tar.xz
$(package)_sha256_hash=4348566aa0fbf196db5e0a576321c65966189210cb51328ea2bb2be39c711d71
$(package)_dependencies=xcb_proto libXau

define $(package)_set_vars
$(package)_config_opts=--disable-static
endef



# Don't install xcb headers to the default path in order to work around a qt
# build issue: https://bugreports.qt.io/browse/QTBUG-34748
# When using qt's internal libxcb, it may end up finding the real headers in
# depends staging. Use a non-default path to avoid that.

define $(package)_config_cmds
  $($(package)_autoconf) --includedir=$(host_prefix)/include/xcb-shared
endef

define $(package)_build_cmds
  $(MAKE)
endef

define $(package)_stage_cmds
  $(MAKE) DESTDIR=$($(package)_staging_dir) install
endef

define $(package)_postprocess_cmds
  rm -rf share/man share/doc
endef
