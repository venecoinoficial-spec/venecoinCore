package=expat
$(package)_version=2.6.2
$(package)_download_path=https://github.com/libexpat/libexpat/releases/download/R_2_6_2
$(package)_file_name=$(package)-$($(package)_version).tar.bz2
$(package)_sha256_hash=9C7C1B5DCBC3C237C500A8FB1493E14D9582146DD9B42AA8D3FFB856A3B927E0

define $(package)_config_cmds
  $($(package)_autoconf)
endef

define $(package)_build_cmds
  $(MAKE)
endef

define $(package)_stage_cmds
  $(MAKE) DESTDIR=$($(package)_staging_dir) install
endef

define $(package)_postprocess_cmds
  rm -rf share lib/cmake lib/*.la
endef
