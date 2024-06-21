'''
火车站行李费的收费标准是50kg 以内(包括50kg)0.2元/kg，超过部分为0.5元/kg，
据输入的行李重量计算出应付的行李费，结果保留两位小数。
'''
# w = eval(input("请输入重量"))
# v = 0
# # 超过50kg
# if (w > 50):
#     v = (w - 50) * 0.5 + 50 * 0.2
# # 未超过50kg
# else:
#     v = w * 0.2

# print(v)

'''
判断输入的整数是否是自然数，
如果不是自然数，则显示“请输入一个自然数”，
否则，判断该整数的奇偶性后显示“奇数”或“偶数”。
'''

# n = eval(input("请输入一个一个一个整数: "))

# if (n < 0):
#     print("请输入一个自然数")
# elif (n % 2 is 0):
#     print(f"{n}是个偶数")
# else:
#     print(f"{n}是个奇数")

'''
某商场做周年庆活动，
购物满1000元以上，用户可以享受9折的优惠;
购物满2000元以上，可以享受8折的优惠;
购物满3000元以上可以享受7折的优惠。
请使用if-elif语句来判定某用户在享受折扣后需要支付的金额。
'''

# v = eval(input("请输入金额: "))
# if (v >= 1000 and v < 2000):
#     v *= 0.9
# elif (v >= 2000 and v < 3000):
#     v *= 0.8
# elif (v >= 3000):
#     v *= 0.7

# # if (1000 <= v < 2000):
# #     v *= 0.9
# # elif (2000 <= v < 3000):
# #     v *= 0.8
# # elif (v >= 3000):
# #     v *= 0.7
# print(v)


'''
输入一个数N，计算数列1/1+1/2+1/3+……+1/N的和，并保留两位小数。
'''

# N = eval(input("请输入一个数"))
# s = 0.0
# for i in range(1, N + 1):
#     s += 1 / i
# s = round(s, 2)
# print(s)

'''
输入一个正整数，统计该数各位数字之和。例:输入的正整数是89076，则显示30。
'''

# n = eval(input("请输入一个正整数"))

# i = 1
# s = 0
# while (i <= n):
#     s += n // i % 10
#     i *= 10
# print(s)

'''
编写函数，实现输入一个自然数n，
如果n为奇数，输出表达式1+1/3+…+1/n的值;
如果n为偶数，输出表达式1/2+1/4+…+1/n的值(结果保留2位小数)。
'''
# n = eval(input("请输入一个数"))
# s = 0.0
# if (n % 2 != 0):
#     for i in range (1, n + 1, 2):
#         s += 1 / i
# else:
#     for i in range (2, n + 1, 2):
#         s += 1 / i
# s = round(s, 2)
# print(s)

'''
编写函数，接收一个字符串，判断该字符串是否为回文。
'''

# def f(str):
#     tmpStr = str[:: -1]
#     if (str == tmpStr):
#         # print(tmpStr)
#         # print(type(tmpStr))
#         return "回文"
#     else:
#         return "不回文"
# print(f("11211"))



# '''
# 编写函数，实现输入一个整数，返回这个整数的阶乘值并输出。
# '''

# def f(n):
#     if (n < 0):
#         return -1
#     elif (n == 0 or n == 1):
#         return 1
#     else:
#         return n * f(n - 1)
# print(f(5))


# '''
# 编写函数实现级数的计算，M(i) = 1+1/2+1/3+……+1/i。
# '''

# n = eval(input("请输入一个整数"))
# s = 0
# for i in range(1, n + 1):
#     s += 1 / i
# print(s)


'''
从键盘输入一个列表，计算并输出列表元素的平均值。
'''


# List = []
# while 1:
#     n = input()
#     if (n.strip() == ""):
#         break
#     else:
#         List.append(float(n))
# ave = sum(List) / len(List)
# print(ave)

# s = input("请输入一个字符串")

# r_s = s.replace("Py", "Python")

# print(r_s)


# x = [1, 1, 4, 5]
# x.remove(1)
# print(x)
List = [1, 1, 4, 5, 1, 4, 1, 9, 1, 9, 8, 1, 0]
List[1:3] = [2]
print(List)