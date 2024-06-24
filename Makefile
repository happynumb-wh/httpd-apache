# --------------------------------------------------------
# The Source dir of the httpd dependencies
# --------------------------------------------------------

# Httpd file path
DIR_HTTPD 		= $(PWD)/httpd-2.4.59

# Pcre lib path
DIR_PCRE 		= $(PWD)/pcre-8.45
# Pcre2
DIR_PCRE2		= $(PWD)/pcre2

# Expat lib path, include XML
DIR_EXPAT 		= $(PWD)/libexpat/expat
DIR_LIBEXPAT	= $(PWD)/libexpat

# Apr dependence for httpd
DIR_APACHE		= /apache
DIR_APR 		= $(DIR_HTTPD)/srclib/apr
DIR_APR_UTIL 	= $(DIR_HTTPD)/srclib/apr-util
DIR_SRCLIB		= $(DIR_HTTPD)/srclib
DIR_LUA			= $(PWD)/lua-bin

# --------------------------------------------------------
# The target dir of the httpd dependencies
# --------------------------------------------------------
BUILD_PCRE  	= $(PWD)/apache/pcre
BUILD_PCRE2  	= $(PWD)/apache/pcre2
BUILD_EXPAT 	= $(PWD)/apache/expat
BUILD_APR  		= $(DIR_APR)
BUILD_APR_UTIL	= $(DIR_APR_UTIL)
BUILD_APACHE	= $(DIR_APACHE)

# --------------------------------------------------------
# The Compile
# --------------------------------------------------------
CORRESS_COMPILE ?= riscv64-unknown-linux-gnu

APACHE_MODULE   = 




.PHONY:all clean


all: $(DIR_APACHE)

# Decompress apr to srclib
$(BUILD_APR):
	@if [ ! -d $(BUILD_APR) ];\
	then\
		tar -xvf apr-1.7.4.tar.gz -C $(DIR_SRCLIB);\
		mv $(DIR_SRCLIB)/apr-1.7.4 $(DIR_SRCLIB)/apr;\
	fi

# Decompress apr-util to srclib
$(BUILD_APR_UTIL):
	@if [ ! -d $(BUILD_APR_UTIL) ];\
	then\
		tar -xvf apr-util-1.6.3.tar.gz -C $(DIR_SRCLIB);\
		mv $(DIR_SRCLIB)/apr-util-1.6.3 $(DIR_SRCLIB)/apr-util;\
	fi

# Compile pcre
$(BUILD_PCRE):
	cd $(DIR_PCRE) && mkdir -p build && cd build && ../configure --host=$(CORRESS_COMPILE) --prefix=$(BUILD_PCRE)
	$(MAKE) -C $(DIR_PCRE)/build && $(MAKE) -C $(DIR_PCRE)/build install

$(BUILD_PCRE2):
	cd $(DIR_PCRE2) && mkdir -p build && cd build && ../configure --host=$(CORRESS_COMPILE) --enable-shared --prefix=$(BUILD_PCRE2)
	$(MAKE) -C $(DIR_PCRE2)/build && $(MAKE) -C $(DIR_PCRE2)/build install



# Compile expat
$(BUILD_EXPAT):
ifeq ($(wildcard $(DIR_LIBEXPAT)/*),)
	git submodule update --init $(DIR_LIBEXPAT)
endif
	cd $(DIR_EXPAT) && ./buildconf.sh && mkdir -p build && cd build && ../configure --host=$(CORRESS_COMPILE) --prefix=$(BUILD_EXPAT)
	$(MAKE) -C $(DIR_EXPAT)/build && $(MAKE) -C $(DIR_EXPAT)/build install

# Compile the httpd apache server
$(DIR_APACHE): $(BUILD_APR) $(BUILD_APR_UTIL) $(BUILD_PCRE) $(BUILD_EXPAT) $(BUILD_PCRE2)
	mkdir -p apache
	cd $(DIR_HTTPD) && ./configure --host=$(CORRESS_COMPILE) --prefix=$(DIR_APACHE) $(APACHE_MODULE) --with-port=9001 --enable-charset-lite --with-included-apr --with-pcre=$(BUILD_PCRE2)/bin/pcre2-config --with-expat=$(BUILD_EXPAT) --enable-ssl --enable-heartbeat --enable-static-ab
	$(MAKE) -C $(DIR_HTTPD) && $(MAKE) -C $(DIR_HTTPD) install



clean:
	rm -rf $(BUILD_PCRE)
	rm -rf $(BUILD_PCRE2)
	rm -rf $(BUILD_EXPAT)
	rm -rf $(BUILD_APACHE)
	$(MAKE) -C $(DIR_HTTPD) clean
	$(MAKE) -C $(DIR_PCRE)/build clean
	$(MAKE) -C $(DIR_EXPAT)/build clean
	$(MAKE) -C $(DIR_HTTPD) distclean 
	$(MAKE) -C $(DIR_PCRE)/build distclean
	$(MAKE) -C $(DIR_EXPAT)/build distclean