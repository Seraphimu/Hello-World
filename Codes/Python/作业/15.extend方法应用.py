list1 = ["C Prime Plus", "计算机网络自顶向下"]
list2 = ["Linux就该真么学", 89.00, "Python从入门到精通",70.20]
print("添加前：",list1)
list1.extend(list2)                                     #extend可以将序列即列表加入到列表尾部
list1.extend(["Unix环境高级编程","Python核心编程"])
print("添加后：",list1)
