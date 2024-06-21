import random as rd     # 给random对象起个叫rd的别名
from datetime import time as tm


# join函数

# <string>.join(<single string>)
# 在每个字符中间加上<string>，也就是用<string>把一个一个一个字符拼接起来，说白就是字符串的拼接

# str = "114514"
# sep = ','
# newStr = sep.join(str)
# print(newStr)
# # L = [1, 1, 4, 5, 1, 4, 1, 9, 1, 9, 8, 1, 0]
# L = ["1", "1", "4", "5", "1", "4"]
# S = str = "逸一时，误一世，忆久忆久罢一龄（悲）"
# separator = "---"
# # print(separator.join(S))
# print(S.join(L))


# # split()函数

# # x = "1, 1, 4, 5, 1, 4"
# x = "1 1 4 5 14 1919810"
# # x.split(" ", 2)
# print(x.split(" ", 3))  # split(<分割依据>, <分割次数>)
# print(x.split())
# print(type(x.split(" ")))

# 返回一个列表类型，分割一次得到两个项，分割两次得到三个项，分割N次得到N + 1个项
# x = "一个，一个一个，一个"
# newX = x.split("，", 1)
# print(newX)










# 字符串、列表的打印
# str = "逸一时，误一世，忆久忆久罢一龄（悲）"
# List = [1, 1, 4, 5, 1, 4, 1, 9, 1, 9, 8, 1, 0]
# # for i in str:
# #     print(type(i))
# #     print(i)

# for i in List:
#     print(i, end = " ") # end用来设置字符串结尾的字符

# print()

# str = "逸一时，误一世，忆久忆久罢一龄（悲）"
# for i in str:
#     newStr = i
# print(i)




# # 字符串的区间访问

# s = "田所浩二"
# print(s[0:4: 2])
# <string>[<start>: <end>: <step>]










# # Python格式化输出 gformat()
# # 书上写错了罢（恼），只有format()方法，哪来的gformat()？？

# x = 114514
# y = 1919810

# print("{0}, {1}".format(x, y))
# print(f"{x} + {y} = {x + y}")       # f string








# chr()函数和ord()函数

# print(chr(97))    # 把ASCII码转换为一个一个一个字符
# print(ord('a'))   # 把一个一个一个字符转换为ASCII码或者其他编码

# print(chr(65))
# print(ord('A'))


# 列表特殊方式创建
# List_1 = [i * 3 for i in 'Python'] # 用i去遍历"Python"中的每一个字符，*n就是列表中的一个项有n个当前遍历到的字符
# print(List_1)

# List_2 = [m + n for m in "AB" for n in "CD"]    #遍历两个字符串，把两个字符串中的子串两两拼接
# print(List_2)

# List_3 = [m + n + o + p for m in "114" for n in "514" for o in "191" for p in "810"]
# print(List_3)
# print(len(List_3))


# 列表的遍历

# # 列表的序列从0到n - 1
# List_3 = [1, 1, 4, 5, 1, 4, 1, 9, 1, 9, 8, 1, 0]
# # 下面的操作价于把List_3从最后一个元素到第一个元素，按步长为-1遍历
# # # 应该是因为倒过来遍历它的下标是从-1开始向后依次递减的，所以得这样搞
# for i in List_3[12: 0: -1]:
#     print(i)
# # print(List_3[-14])    # 越界

# print(List_3[12: 0: -1])

# print(List_3[1: 5: 2])
# print(List_3[: : -3])
# print(List_3[: : 0])  # ValueError: slice step cannot be zero
# List[<start>: <end>: <step>]
# 前两个参数可选，若不写，根据步长的正负来挑选是从头到尾还是从尾到头，步长不能为0


# # max()函数
# # 返回一个序列的最大值？

# # x = 114514  # TypeError: 'int' object is not iterable，说明参数必须是一个一个一个可迭代类型
# # x = "114514"
# # x = {"田所浩二": "下北泽", "佐佐木淳平":"会员制餐厅"} # 比的应该是一个一个一个的ASCII值罢（喜）
# # x = [1, 1, 4, 5, 1, 4]
# # x = (1, 1, 4, 5, 1, 4)
# x = {1, 9, 1, 9, 8, 1, 0}
# max_x = max(x)
# print(max_x)
# for i in x:
#     print(i)



# ## len()函数
# # 返回一个数据的长度，会返回字符串的长度，列表的参数个数等
# x = (1, 145, 14)
# size_x = len(x)
# d = {"田所浩二": "下北泽", "佐佐木淳平":"会员制餐厅"}
# size_d = len(d)
# # print(size_x)
# print(size_d)




# 随机数函数测试

# # 使用random()产生的随机数在(0, 1)的开区间之间
# for i in range(1, 10000000):
#     x = rd.random()
#     if (x > 1):
#         print(x)

# # 使用randint()函数可以产生[a, b]闭区间的整数
# for i in range(1, 6):
#     x = rd.randint(0, 5)
#     print(x)







# 列表的运算

# x = [1, 2, 3]
# def f_1(x):
#     x = x + [4]       #修改不能
# f_1(x)
# print(x)

# def f_2(x):
#     x += [4]    #对列表类型原地修改
# f_2(x)
# print(x)

# x = [1, 1, 4, 5]

# # def f(x):
# #     x += [1, 4]
# # f(x)
# # print(x)

# def f(x):
#     # x.append(1)
#     x = x + [1, 4]
# f(x)
# print(x)

# # 非引用类型参数

# x = 10
# y = 20

# # 无法修改其值
# # def exchange(x, y):
# #     x, y = y, x
# # exchange(x, y)
# # print(x, y)

# # 这样也行，就是有点不讲武德
# def exchange(x, y):
#     x, y = y, x
#     return x, y
# x, y = exchange(x, y)
# print(x, y)













# # 表达式测试

# bool_a = 114 <= 514 <= 1919810
# bool_a_1 = 114 <= 514 and 514 <= 1919810
# print(bool_a)
# print(bool_a_1)

# bool_b = 114 >= 514 >= 1919810
# print(bool_b)










#变量的定义

# x = (y = 1)   #这种定义不合语法






























# eval()函数的用法
# eval()函数会返回其计算表达式的值
# print(eval("1" + "1"))  #字符串拼接
# # print(eval("1" + 1))    # 语法错误
# print(eval("1 + 1"))
# print(eval("5/2"))        # 小黑子是罢（恼）
# print(eval("6/3"))        # 小黑子是罢（恼）


# print("eval(\"5/2\")的类型：")
# print(type(eval("5 / 2")))
# print("eval(\"6/3\")的类型：")
# print(type(eval("6 / 3")))
# print(eval("1" + "1"))
# print("eval(\"1\" + \"1\")的类型：")
# print(type(eval("1" + "1")))

# print("eval(\"Hello\" + \"World\")的类型：")
# print(type(eval('"Hello" + "World"')))
# print(eval('"Hello" + "World"'))

