'''
火车站行李费的收费标准是50kg 以内(包括50kg)0.2元/kg，超过部分为0.5元/kg，
据输入的行李重量计算出应付的行李费，结果保留两位小数。
'''

# 存放重量
weight = float(input()) 
#存放价格
value = 0

#判断
if weight >= 50:
    value = 50 * 0.2 + (weight - 50) * 0.5
else:
    value = weight * 0.2
#输出
print(f"value is {value}")
