'''
编写函数，实现输入一个自然数n，
如果n为奇数，输出表达式1+1/3+…+1/n的值;
如果n为偶数，输出表达式1/2+1/4+…+1/n的值(结果保留2位小数)。
'''
# 函数定义
def fun(n):
    sum = 0.0
    #为偶
    if n % 2 == 0:
        i = 2
    #为奇
    else:
        i = 1
    #求和
    while (i <= n):
        sum += 1 / i
        i += 2
    #返回
    return round(sum, 2)

num = int(input())
print(fun(num))