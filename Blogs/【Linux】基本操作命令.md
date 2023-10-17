# Linux基础操作命令：

- [Linux基础操作命令：](#linux基础操作命令)
  - [关机重启命令：](#关机重启命令)
  - [用户切换:](#用户切换)
  - [注销：](#注销)
  - [用户管理：](#用户管理)
    - [添加用户：](#添加用户)

## 关机重启命令：
```bash
shutdown -h now		#立刻关机	
shutdown -h 1		#1分钟后关机	
shutdown -r now		#现在重启计算机		
halt			#立刻关机与shutdown -h now 作用相同	
reboot			#现在重启计算机	
sync			#将内存数据同步到磁盘	
#注意细节：   
建议关机重启之前都执行一次sync命令，小心驶得万年船。  
```

## 用户切换: 
`su - <username>` 	
## 注销：
`logout     #在图形界面下无效`

## 用户管理：
### 添加用户：
```bash
#语法：
useradd <username>
#例如添加用户tom：
useradd tom
```