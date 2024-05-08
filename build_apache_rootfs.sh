#!/bin/sh

sudo mount -w rootfs.img rootfs

# Copy apache execution files
sudo cp -R apache/bin/* rootfs/bin


# Copy running library
sudo cp -R apache/lib/* rootfs/libs
sudo cp -R pcre/lib/* rootfs/libs
sudo cp -R expat/lib/* rootfs/libs


# Copy apache modules/conf
sduo mkdir -p rootfs/etc/httpd
sudo cp -R apache/conf rootfs/etc/httpd
sudo cp -R apache/modules rootfs/etc/httpd

sync
sudo umount rootfs

