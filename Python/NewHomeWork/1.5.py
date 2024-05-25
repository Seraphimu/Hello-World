'''
输入一个数N，计算数列1/1+1/2+1/3+……+1/N的和，并保留两位小数。
'''
N = int(input())
sum = 0.0

for i in range (1, N + 1):
    sum += 1 / i
#四舍五入保留两位小数
sum = round(sum, 2)

print(sum)