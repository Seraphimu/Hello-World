'''
输入一个正整数，统计该数各位数字之和。例:输入的正整数是89076，则显示30。
'''
num = int(input())
sum = 0
i = 1
# num / 1 % 10：个位
# num / 10 % 10 十位
# ……
while (i <= num):
    sum += num // i % 10    # 整除
    i *= 10
print(sum)