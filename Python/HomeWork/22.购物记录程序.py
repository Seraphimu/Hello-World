goods_dict = {
    '牛奶' : 65,
    '面包' : 15,
    '可乐' : 39,
    '饼干' : 15,
    '糖果' : 24,
    '水果' : 35.8
}

#修改可乐：
goods_dict["可乐"] = 60
#输出：
long = len(goods_dict)
num = sum(goods_dict.values())
print("您购买了{}件商品，共计{}元。".format(long, num))