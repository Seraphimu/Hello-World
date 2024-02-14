goods_dict = {
    '0de4010': '家电',
    '1fc5374': '户外',
    '34cf997': '办公',
    '45dec0a': '手机',
    'cfd2851': '电脑'
}
#删除户外：
del goods_dict['1fc5374']
#新增娱乐：
goods_dict['9a477a4'] = '娱乐'
#修改手机电脑为数码：
goods_dict['45dec0a'] = '数码'
goods_dict['cfd2851'] = '数码'
#输出字典：
print(goods_dict)