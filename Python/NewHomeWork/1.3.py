'''
某商场做周年庆活动，
购物满1000元以上，用户可以享受9折的优惠;
购物满2000元以上，可以享受8折的优惠;
购物满3000元以上可以享受7折的优惠。
请使用if-elif语句来判定某用户在享受折扣后需要支付的金额。
'''

values = float(input())

if values >= 1000 and values < 2000:
    values *= 0.9
elif values >= 2000 and values < 3000:
    values *= 0.8
elif values >= 3000:
    values *= 0.7     

# if 1000 <= values < 2000:
#     values *= 0.9
# elif 2000 <= values < 3000:
#     values *= 0.8
# elif values >= 3000:
#     values *= 0.7 

print(f"values is {values}")