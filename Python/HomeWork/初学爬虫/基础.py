# #第一部分，变量赋值
# #1、数字赋值
# year = 2021
# month = 11
# day = 11
# print("{},{},{}".format(year,month,day))
# #2、字符串赋值
# country = 'China'
# province = 'Anhui'
# city = 'Hefei'
# web = 'https://cloud.seentao.com/'
# print("{}\n{}\n{}\n{}\n".format(country,province,city,web))
# #3、重复赋值:
# put = 0
# put = 1
# put = 2
# print(put)
# #4、变量名区分大小写:
# num = 10
# Num = 20
# NUM = 3
# print("{},{},{}".format(num,Num,NUM))

# #第二部分、数字的计算和类型转换
# #1、数字类型的计算
# #1)
# print(12 + 5)
# print(12 - 5)
# print(12 * 5)
# print(12 / 5)
# print(12 % 5)
# print(12 // 5)
# #2)
# print(9.0 + 2.0)
# print(9.0 - 2.0)
# print(9.0 * 2.0)
# print(9.0 / 2.0)
# print(9.0 % 2.0)
# print(9.0 // 2.0)
# #3)
# print(3 ** 3)
# print((3+4+5+6)/4)
# #2、数字类型转换
# print(int(3.1415))
# print(float(23))
# #3、使用round函数
# print(round(3.1415,2))
# print(round(9.62545,3))

# #第三部分，字符串
# #1、定义字符串
# print('财务大数据，让数据说话')
# print('财务大数据\n让数据说话')
# print('财务大数据，让数据"说话"')
# #2、字符串的拼接
# #1)字符串和字符串的拼接
# print('Hello' + 'World')
# #2)字符串与变量拼接
# word = 'Hello'
# print(word + 'World')
# #3)字符串与数字拼接
# s1 = '净利润'
# s2 = 1000
# print(s1 + str(s2))
#第四部分，常用语句
# #1、if语句
# number = input('请输入班级人数')
# if(int(number) > 20):
#     print("人数为{},大于20人".format(number))
# if(int(number) <= 20):
#     print("人数为{},小于20人".format(number))
# print('汇报完毕')
# #else if语句
# amount = int(input('请输入你上个月的零花钱金额：'))
# if(amount > 600):
#     print('上个月零花钱为{},超过了600元'.format(amount))
# else:
#     print('上个月零花钱为{},未超过600元'.format(amount))

# #if……else if……语句
# salary = int(input('请输入您的工资：'))
# tax = salary - 5000
# if(5000 >= salary):
#     print('不需要交税。')
# elif(0 < tax < 3000):
#     print('应当缴纳{}元'.format(tax*0.03))
# elif(3000 < tax < 12000):
#     print('应当缴纳{}元'.format(tax*0.1-210))
# elif(12000 < tax < 25000):
#     print('应当缴纳{}元'.format(tax*0.2-1410))
# elif(25000 < tax < 35000):
#     print('应当缴纳{}元'.format(tax*0.25-2660))
# elif(35000 < tax < 55000):
#     print('应当缴纳{}元'.format(tax*0.3*4410))
# elif(55000 < tax < 80000):
#     print('应当缴纳{}元'.format(tax*0.35*7160))
# elif(80000 < tax):
#     print('应当缴纳{}元'.format(tax*0.45-15160))

# #4、if嵌套
# rank = int(input('请输入你的排名：'))
# if(rank > 20):
#     print('不可评奖学金。')
# elif(rank < 20+1):
#     grade = input('请输入挂科情况，输入“是”，表示挂科，输入“否”则表示不挂科：')
#     if('是' != grade and '否' !=grade):
#         print('输入错误，请重新输入：')
#     if('否' == grade):
#         print('可评奖学金。')
#     elif('是' == grade):
#         print('不可评奖学金。')

#循环
#打印1~50之间的奇数
# i = 1
# while(i < 51):
#     if(i % 2 != 0):
#         print(i)
#     i += 1

# for i in range(1,51,2):
#     print(i)


# #九九乘法表
# for i in range(1,10):
#     for j in range(1, i+1):
#         print('{} * {} = {}\t'.format(i, j, i*j), end = '')
#     print()


#穷举备选方案

# for watermelon in range(1,10):
#     for apple in range(1,100):
#         pear = 100 - apple - watermelon
#         if (400 == 4*apple + 2*pear + 40*watermelon):
#             print(f'西瓜{watermelon}个,苹果{apple}个,梨子{pear}个')

#while打印1~50之间的奇数
i = 1
while(i < 51):
    print(i)
    i += 2