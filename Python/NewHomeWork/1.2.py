'''
判断输入的整数是否是自然数，
如果不是自然数，则显示“请输入一个自然数”，
否则，判断该整数的奇偶性后显示“奇数”或“偶数”。
'''

# 存放数
num = int(input())

# 不是自然数
if num < 0:
    print("请输入一个自然数")
# 是偶数
elif num % 2 == 0:
    print("偶数")
# 是奇数
else:
    print("奇数")
