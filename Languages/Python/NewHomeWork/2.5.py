'''
编写函数实现级数的计算，M(i) = 1+1/2+1/3+……+1/i。
'''
def fun(n):
    i = 1
    sum = 0.0
    while (i <= n):
        sum += 1 / i
        #记得加自增
        i += 1
    return round(sum, 2)

n = int(input(""))
print(fun(n))