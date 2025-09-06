package=qrencode
$(package)_version=3.4.4
$(package)_download_path=https://github.com/fukuchi/libqrencode/archive/refs/tags/
$(package)_file_name=libqrencode-$($(package)_version).tar.gz
$(package)_sha256_hash=ab7cdf84e3707573a39e116ebd33faa513b306201941df3f5e691568368d87bf

define $(package)_set_vars
$(package)_config_opts=--disable-shared -without-tools --disable-sdltest
$(package)_config_opts_linux=--with-pic
endef

define $(package)_config_cmds
  sed -i.bak 's/AM_PATH_SDL/#AM_PATH_SDL/' configure.ac && \
  sed -i.bak 's/AM_ICONV_LINK/#AM_ICONV_LINK/' configure.ac && \
  autoreconf -fi && \
  $($(package)_autoconf)
endef

define $(package)_build_cmds
  $(MAKE)
endef

define $(package)_stage_cmds
  $(MAKE) DESTDIR=$($(package)_staging_dir) install
endef
