'''
编写函数，接收一个字符串，判断该字符串是否为回文。
'''
def fun(str):
    #双指针
    i = 0
    j = len(str) - 1
    flag = 0
    #考虑串长度为奇数的情况
    while (i <= j):
        if (str[i] != str[j]):
            break
        i += 1
        j -= 1
    if (i > j):
        return True
    else:
        return False
str = input("请输入一个字符串：")
print(fun(str))