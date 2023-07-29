# 实操篇

## 常用命令

### 001. 关机&重启命令

1. shutdown 命令

```bash
shutdown -h now    #立刻关机
shutdown -h 1      #1分钟后关机，不写的话默认一分钟
shutdown -r now    #r是reboot，重启的意思
```

2. halt命令

```bash
halt               #关机和 "shutdown -h now" 差不多
```

3. reboot命令

```bash
reboot             #立刻重启
```

4. sync命令（关机之前最好带，小心驶得万年船）

```bash
sync               #把内存数据同步到硬盘上防止数据丢失
```

### 002. 登陆&注销命令

切换用户

输入`su - <用户名>`然后输入密码

仅在运行级别3（多用户字符界面）下可以使用logout注销用户

在运行级别5的情况下可以使用`exit`命令退出终端

### 003. 用户管理

添加用户

```bash
useradd <用户名>                  #家目录默认在/home/用户名
useradd -d <路径> <用户名>         #d是directory的意思，中文为路径
```

修改密码

```bash
passwd <用户名>                    #不加用户名的话，默认给当前用户修改
```

显示当前目录指令——pwd

```bash
pwd                                #显示当前用户所在目录
```

删除用户（自己不能删除自己）

```bash
userdel <用户名>                    #仅删除用户
userdel -r <用户名>                 #连同家目录一块删除，要慎重
```

查询用户信息

```bash
id <用户名>
```

查看当前用户信息

```bash
whoami / who am i                   #显示第一次登陆到设备的用户
```

用户组

> 类似于角色，相同权限的一类用户。先将用户分配到组中，再给组分配权限。

添加组

> 添加用户时不指明组会创建一个和用户名一样的组

```bash
groupadd <组名>                        #添加一个组
useradd -g <用户组> <用户名>            #添加用户时直接添加到某个组中
```

删除组

```bash
groupdel <组名>                        #删除一个组
```

修改用户的组

```bash
usermod -g <用户组> <用户名>
```

用户和组的相关文件

`/etc/passwd`用户配置文件

用户名：口令：用户标识号：注释性描述：主目录：登陆shell

shell是内核和用户沟通的接口

`/etc/shadow`口令配置文件

`/etc/group`组配置文件

### 004. 运行级别

0：关机

1：单用户

2：多用户没有网络服务

3：多用户有网络服务

4：未使用

5：图形界面

6：系统重启

常用：3，5

指定运行级别

```bash
init [0, 1, 2, 3, 4, 5, 6]                #切换运行级别
systemctl get-default                     #查看当前级别
systemctl set-default multi-user.target   #默认3级别 
systemctl set-default graphical.target    #默认5级别
```

### 005. 找回root密码（经典面试题）<mark>【有点糊涂】</mark>

首先进入单用户
按e，然后linux16行尾输入init=/bin/sh
然后输入指令
mount -o remount,rw /
passwd
输入密码

touch / .autoreclabel
exec /sbin/init

### 006. 帮助指令

man
help

### 007. 文件目录指令

`pwd`指令，显示当前绝对路径

`cd`指令

`mkdir`指令

```bash
mkdir <目录>
#例如
mdkir test

mkdir -p <目录>     #可以创建多级目录
#例如
mkdir -p test/test_114514
```

`rmdir`指令
默认删除空目录

```bash
rmdir <空目录>

#要十分甚至是九分的小心
rm -rf <目录>       #强制递归删除
```

`touch`指令
创建一个空文件

```bash
touch <文件名>
```

`cp`指令

```bash
cp <选项> <要复制的文件或文件夹> <目标文件夹>

cp -r <要复制的文件或文件夹> <目标文件夹>       #递归复制

#文件重名强制覆盖不提醒
#小心驶得万年船
\cp -r <源> <目>
```

`mv`指令，重命名，移动

```bash
mv <旧文件名> <新文件名>        #同目录下重命名操作
mv <源> <目>                    #不同目录下是移动操作
mv <源> <目，新名称>            #移动并改名
```

`cat`指令

```bash
cat <选项> <要查看的文件>
cat -n <要查看的文件>       #添加行号
```

`|`管道命令
将前面的结果交给后面的指令处理

```bash
cat -n test.txt | more
```

`more`指令基于vi的过滤器

```
more <要查看的文件>
```

`less`命令：比`more`强大，动态加载

```bash
less <file name>
# 使用"/"可以查找内容
```

`echo`指令

```bash
echo <环境变量>
echo <字符串>
```

`head`指令

```bash
head -n <行数> <文件> #默认前十行
```

`tail` 指令：和`head`相反

```bash
#实时监控文件变化，控制台占据，退出输入Ctrl + C
tail -f <文件>
```

`>`输出重定向，`>>`追加

```bash
#例
ls -l >> a.txt # 将当前目录列表输入到a.txt中
cat 1.txt >> 2.txt #将1.txt中的内容追加到2.txt中
```

`ln`指令（link）连接，类似快捷方式

```bash
ln -s <源文件> <软链接名>
```

`history`指令

```bash
history <数字>
!<编号> 指行历史命令
```

### 008. 时间日期指令

`date`指令 - 显示当前日期

```bash
date "+%Y-%m-%d %H:%M:%S"
date -s <字符串时间>
```

`cal`指令 - 显示日历

```bash
cal <年份> #显示这一年日历
```

### 009. 查找指令

`find`指令

```bash
find <目录> <选项>
# -name <文件名>
# -size <文件大小>
# -user <用户名>
```

`locate`指令

```bash
updatedb # 先更新库
locate <文件名>

```

`which`指令

```bash
which <指令>
```

`grep` command

```bash
grep <选项> <查找内容> <文件>
grep -n #显示行号
grep -i #忽略大小写
```

###  010. 压缩指令

`gzip`指令

```bash
gzip <文件>
gunzip <压缩包>
```

`zip`指令

```bash
zip <目标文件名> <文件或路径>
# 例
zip -r myhome /home/*
unzip -d ./tmp /home/myhome
```

`tar` 指令

```bash
tar -<选项> <目标文件> <打包内容>

```

