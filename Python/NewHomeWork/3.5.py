'''
从键盘输入一个列表，计算并输出列表元素的平均值。
'''
numbers = []

while True:
    number = input()
    if number.strip() == "":
        break
    numbers.append(float(number))

ave = sum(numbers) / len(numbers)
print(ave)