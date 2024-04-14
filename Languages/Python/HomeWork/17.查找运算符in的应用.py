list = ["C Prime Plus","C++ Prime Plus","Python核心编程"]
name = input("请输入你的书名：")
if name in list:                    #若输入的对象与列表中的对象对应则返回真值，否则返回假值`
    print("找到你的书名")
else:
    print("没找到你的书名")
