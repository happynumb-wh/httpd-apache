#!/bin/sh

/home/wanghan/Workspace/QEMU-upgrade/upgrade-qemu/build/qemu-system-riscv64 -M virt -m 8G \
	-cpu rv64 \
    -nographic \
	-kernel /home/wanghan/Workspace/DASICS_ICT/riscv-linux-kernel/bbl-4.18\
	-drive file=rootfs.img,format=raw,id=hd0 \
    -device virtio-blk-device,drive=hd0 \
	-append "console=ttyS0 rw root=/dev/vda" \
	-bios none -s
