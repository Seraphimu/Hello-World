'''
某商场做周年庆活动，
购物满1000元以上，用户可以享受9折的优惠;
购物满2000元以上，可以享受8折的优惠;
购物满3000元以上可以享受7折的优惠。
请使用if-elif语句来判定某用户在享受折扣后需要支付的金额。
'''

# values = float(input("Please enter values that you were consused"))

# if values >= 1000 and values < 2000:
#     values *= 0.9
# elif values >= 2000 and values < 3000:
#     values *= 0.8
# elif values >= 3000:
#     values *= 0.7

# print(values)


# '''
# 输入一个数N，计算数列1/1+1/2+1/3+……+1/N的和，并保留两位小数。
# '''

# N = int(input("Please enter a number: "))

# i = 0
# sum = 0.0
# while i <= N:
#     sum += 1 / N
#     i += 1
# print(sum)


'''
输入一个正整数，统计该数各位数字之和。例:输入的正整数是89076，则显示30。
'''
num = int(input("Please enter an integer: "))
i = 1
sum = 0
while (i <= num):
    sum += num // i % 10
    i *= 10

print(sum)