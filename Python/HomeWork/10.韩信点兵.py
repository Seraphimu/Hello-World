# 第一次10人一排，剩余一人    总数为 10 * 排数 - 1
# 总 == 10 * (x-1) + 9
# 求一个数字 ==》 除以 10 ~ 2 余数分别为 9 ~ 1
num = 0
while True:
    num+=1
    if(num % 10 == 9 and num % 9 == 8 and num % 8 == 7 and num % 7 == 6 and num % 6 == 5 and num % 5 == 4 and num % 4 ==3 and num % 3 == 2 and num % 2 ==1):
        break
print("韩信一共有{}".format(num))