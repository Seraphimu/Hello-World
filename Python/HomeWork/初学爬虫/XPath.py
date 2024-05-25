#导入模块
import os
from lxml import etree


#文件夹操作
# os.mkdir("./222")
# os.rmdir("./222")
# os.chdir("././")
# print(os.getcwd())



#xml文本
text = '''
<bookstore>
<book category = "Fantasy Novels">
    <title lang = "English">Harry Potter</title>
    <author>J K. Rowling</author>
    <year>2005</year>
    <price>29.99</price>
</book>
<book category = "武侠小说">
    <title lang = "简体中文">天龙八部</title>
    <author>金庸</author>
    <year>2005</year>
    <price>40</price>
</book>
</bookstore>
'''

tree = etree.fromstring(text)
book = tree.xpath("//book")
# print(book)

category = book[1].xpath("./@category")     #category 写在元素后面的东西叫做属性
# print(category)
category2 = tree.xpath("//book[2]/@category")
# print(category2)
category_list = tree.xpath("//book/@category")
print(category_list)



#赋予tree转换功能，将字符串类型转换为元素类型
# book = etree.fromstring(text).xpath("/book")
# print(book)
# tree = etree.fromstring(text)
# # # print(type(tree))
# # # print(tree)
# book = tree.xpath("/book")
# # # print(type(book))
# # # print(book)




# 用xpath确定元素
title = book[0].xpath("./title")
print(type(title))
print(title)
print(title[0].tag)
# author = book[0].xpath("./author")
# #
# #
# #
# year = title[0].xpath("../year")
# # # print(year[0].tag)

# price = tree.xpath("//price")
# # # print(len(price))
# # # print(price[0].tag)
# all_elements = tree.xpath("//*")
# for el in all_elements:
#     print(el.tag)


# title = book[0].xpath("./title")
# print(title[0].text)
# author = book[0].xpath("./author")
# print(author[0].text)
# price = book[0].xpath("./price")
# print(price[0].text)

#title元素中所有的text文本返回
# title_text = tree.xpath("//title/text()")
# print(title_text)

# all_text = tree.xpath("//text()")
# print(all_text)


# son_text = tree.xpath("/book/*/text()")
# print(son_text)


# all_nodes = tree.xpath("//node()")
# print(all_nodes)