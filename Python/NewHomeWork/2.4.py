'''
编写函数，实现输入一个整数，返回这个整数的阶乘值并输出。
'''
def fun(n):
    # 0和1的阶乘是1
    if (n == 0 or n == 1):
        return 1
    # 大于1的整数通过递归求解
    elif (n > 1):
        return n * fun(n - 1)
    # 小于0的数没有阶乘，返回 -1
    else:
        return -1
    
n = int(input())
print(fun(n))