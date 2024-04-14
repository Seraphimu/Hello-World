def add(num1, num2):
    return num1 + num2
def sub(num1, num2):
    return num1 - num2
def mul(num1, num2):
    return num1 * num2
def div(num1, num2):
    return num1 /num2
def cal(num1, num2, char):
    if('+' == char):
        return add(num1, num2)
    if('-' == char):
        return sub(num1, num2)
    if('*' == char):
        return mul(num1, num2)
    if('/' == char):
        if(0 == num2):
            return "除数不能为0！"
        else:
            return div(num1, num2)

num1 = int(input("请输入一个整数："))
num2 = int(input("请再输入一个整数："))
char = input("请输入运算符：")
print(cal(num1, num2, char))