import datetime #导入当前时间
print('请输入你的姓名：')
name = input()
print('请输入你的出生年份：')
year = input()
age = datetime.date.today().year - int(year)
print('您好！',name,'。','您',age,'岁')