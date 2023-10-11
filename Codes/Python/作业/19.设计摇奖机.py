num1_list = ['0', '1', '0', '1', '1', '0', '1', '0', '1', '0']
num2_list = ['0', '1', '1', '1', '0', '0', '1', '0', '0', '1']
num3_list = ['1', '0', '1', '1', '0', '1', '1', '0', '1', '1']
print("请输入三个数字：")
num1 = input()
num2 = input()
num3 = input()
if((num1_list[num1]=='1' and num2_list[num2]=='1' and num3_list[num3]=='1') or (num1_list[num1]=='0' and num2_list[num2]=='0' and num3_list[num3]=='0')):
    print("恭喜你，中奖了，兑换码为：{}{}{}".format(num1_list[num1], num2_list[num2], num3_list[num3]))
else:
    print("没中奖，下次再来")
