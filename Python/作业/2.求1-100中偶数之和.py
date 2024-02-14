num = 0
for i in range(1, 100+1):
    if(i % 2 != 0):
        continue
    num += i
print("1~100中的偶数和为,{}".format(num))