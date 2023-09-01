[TOC]

# `apache` 交叉编译安装流程

该仓库用于交叉编译 `RISCV` 版本的 `apache`，源码下载链接 [https://dlcdn.apache.org/httpd/httpd-2.4.57.tar.bz2](https://dlcdn.apache.org/httpd/httpd-2.4.57.tar.bz2) 。交叉编译器使用 `riscv64-unknown-l`
`inux-gnu`

`apache` 安装的官方文档地址：

`https://httpd.apache.org/docs/2.4`

## 环境配置

由于在交叉编译中，`httpd` 在 `configure` 时会现场编译可执行文件随后运行以获得参数信息。如果在 `x86`  的机器上进行编译，则无法进行 `configure`。因此需要借助 `qemu` 模拟器实现。

下载 `qemu` 源码包，该实例中使用的是 `7.0.0` 版本。  使用如下的 `configure` 参数并编译：

```bash
cd qemu-7.0.0
./configure --target-list=riscv64-softmmu,riscv64-linux-user
make -j`nproc`
```

随后可以在 `qemu-7.0.0/build/riscv64-linux-user` 中找到可执行文件 `qemu-riscv64`，该文件可以简单的模拟执行 `RISCV64` 的可执行文件。

由于 `qemu-riscv64` 在执行时会使用本机上的路径和环境变量，因此需要进行如下配置

### 动态链接器路径指定

将交叉编译工具链的动态链接器链接到本机的 `/usr/lib` 目录中，链接器的路径为：

```bash
sysroot/lib/ld-linux-riscv64-lp64d.so.1
```

### 动态库路径添加

需要为运行交叉编译的可执行文件添加动态库路径支持：

动态库所在的文件夹与链接器一致

```bash
export LD_LIBRARY_PATH=$RV64LUX/sysroot/lib:$LD_LIBRARY_PATH
```

### 操作系统添加可执行格式

为了使得操作系统能够通过 `./`  方式运行 `riscv64` 架构的可执行文件，需要为操作系统注册，详情可参考：[https://docs.kernel.org/admin-guide/binfmt-misc.html](https://docs.kernel.org/admin-guide/binfmt-misc.html)。通过如下方式：

需要将 `qemu-riscv64` 的路径设置为自己本机上的路径

```bash
~$: cd /proc/sys/fs/binfmt_misc	# 进入binfmt_misc
/proc/sys/fs/binfmt_misc$:su #进入 root
/proc/sys/fs/binfmt_misc$:echo ':riscv-qemu:M::\x7fELF\x02\x01\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x00\xf3\x00\x01\x00\x00\x00::/home/qemu/qemu-7.0.0/build/riscv64-linux-user/qemu-riscv64:' > register

```

随后可以看到在 `/proc/sys/fs/binfmt_misc` 下多了一个名为 `riscv-qemu` 的特殊文件，可以通过如下方式取消：

```bash
/proc/sys/fs/binfmt_misc$:echo -1 > qemu-riscv
```

这样，当执行 `RISCV` 格式的 `ELF` 文件时，将会自动使用 `qemu-riscv64` 作为解释器执行了。

## 编译

随后执行 `make` 即可编译得到相关的目标文件，位于 `apache` 文件夹中，相关依赖的 `pcre` 以及 `XML` 解析库都已经放到了仓库中 
