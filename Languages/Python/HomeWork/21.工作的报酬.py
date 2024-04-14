def money(num):
    if num == 1:
        return 1
    return money(num-1)*2
for i in range(1, 16):
    print("第{}天的报酬是：{}".format(i, money(i)))