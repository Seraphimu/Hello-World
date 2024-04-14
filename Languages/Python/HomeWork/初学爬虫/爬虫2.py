import requests
from lxml import etree
import pandas as pd
import openpyxl
url = "http://vip.stock.finance.sina.com.cn/corp/go.php.vCI_CorpManager/stockid/600900.phtml"
headers = {
    "Accept":"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
    "Accept-Encoding": "gzip, deflate",
    "Accept-Language": "zh-CN,zh;q=0.9",
    "Cache-Control": "max-age=0",
    "Connection": "keep-alive",
    "Cookie": "MONEY-FINANCE-SINA-COM-CN-WEB5=; FINA_V_S_2=sh600900; UOR=,vip.stock.finance.sina.com.cn,; ULV=1636968503936:1:1:1::",
    "Host": "vip.stock.finance.sina.com.cn",
    "If-Modified-Since": "Mon, 15 Nov 2021 10:49:16 GMT",
    "Upgrade-Insecure-Requests":"1",
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36"
}
html = requests.get(url,headers = headers)
encoding = "gb18030"
# print(html.text)
tree = etree.HTML(html.text)
name_list = tree.xpath("//td[@class='ccl'][1]/div/a")
job_list = tree.xpath("//td[@class='ccl'][2]/div")
start_list = tree.xpath("//td[@class='ccl'][3]/div")
end_list = tree.xpath("//td[@class='ccl'][4]/div")



name_list = [name.text for name in name_list]
job_list = [job.text for job in job_list]
start_list = [start.text for start in start_list]
end_list = [end.text for end in end_list]


# for name,job,start,end in zip(name_list,job_list,start_list,end_list):
# #for name, job, start, end in zip(name_list, job_list, start_list, end_list):
#     print("姓名" + "职务" + "就职时间" + "离职时间")
#     print("{},{},{},{}".format(name, job, start, end))
# # print(name_list, job_list, start_list, end_list)
# # print(type(name_list))



# file = "D:\\文件\\学习\\财务\\2233.xlsx"
# df = pd.DataFrame(data = [name_list, job_list, start_list, end_list]).T
# df
# df.columns = ["姓名", "职务", "就职时间", "离职时间"]
# df.to_excel(file)
# print(df)



# file = r"D:\文件\学习\财务\222.csv"
# with open(file,'w',encoding= 'gb18030') as f:
#     f.write(''''姓名','职务','起始日期','终止日期'\n''')
#     for name,job,start,end in zip(name_list,job_list,start_list,end_list):
#         f.write('''{},{},{},{}\n'''.format(name, job, start, end))
# print("所有输出结果" + file)