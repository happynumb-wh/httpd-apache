# APACHE-RISCV-BUSYBOX

## 制作根目录文件系统

只需要利用  `busybox` 工具制作标准的文件系统即可。非常的容易



## 探索 apache 如何安装到原生的 linux 目录下并正常工作

1. 首先需要将 apache 编译出来的各种东西安装到什么地方?
2. `apache` 是不是必须需要对应的 `group` 文件？
   1. 必须需要是 `apache:apache` 权限的用户模式



### 问题

1. 怎么知道一个安装包到底被安装到了什么地方？
1. 4.18 的内核卡在 `getrandom` 上
1. `apache` 在运行时需要一个 `User` 或者是 `group`，一般默认的配置是 `deamon` ，也就是守护者进程模式





# TIPS

## 脚本化工作方式



# BUG

1. `ifconfig` 已经过时了，不再使用，转而使用 `ip` 命令

```bash
ip addr show  # 列出所有网络的信息
ip link set dev lo up #启用本地环回
ip addr add 127.0.0.1/8 dev lo #本地环回绑定到 127.0.0.1 上
```

