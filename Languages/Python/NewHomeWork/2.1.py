'''
编写函数，实现返回两个数的平方和与n的乘积。
'''
def fun(x, y):
    pow_sum = pow(x, 2) + pow(y, 2)
    mul = x * y
    return pow_sum, mul
x = float(input())
y = float(input())
print(fun(x, y))