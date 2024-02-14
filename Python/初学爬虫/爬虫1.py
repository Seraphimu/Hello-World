import requests
from lxml import etree
import pandas as pd
import excel
url = "http://vip.stock.finance.sina.com.cn/corp/go.php.vCI_CorpManager/stockid/600900.phtml"
headers = {
    "Accept":"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
    "Accept-Encoding": "gzip, deflate",
    "Accept-Language": "zh-CN,zh;q=0.9",
    "Cache-Control": "max-age=0",
    "Connection": "keep-alive",
    "Host": "vip.stock.finance.sina.com.cn",
    "If-Modified-Since": "Mon, 15 Nov 2021 10:49:16 GMT",
    "Upgrade-Insecure-Requests":"1",
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36"
}
html = requests.get(url,headers = headers)
html.encoding = "gb18030"


tree = etree.HTML(html.text)
name_list = tree.xpath("//td[@class='ccl'][1]/div/a")
job_list = tree.xpath("//td[@class='ccl'][2]/div")
start_list = tree.xpath("//td[@class='ccl'][3]/div")
end_list = tree.xpath("//td[@class='ccl'][4]/div")
code_list = tree.xpath("/html/body/div[@class='wrap main_wrap clearfix']/div[@class='R']/div[@class='r-title']/a")



name_list = [name.text for name in name_list]
job_list = [job.text for job in job_list]
start_list = [start.text for start in start_list]
end_list = [end.text for end in end_list]
code_list = [code.text for code in code_list]




#打印出来
# for name,job,start,end in zip(name_list,job_list,start_list,end_list):
#     print("{},{},{},{}".format(name,job,start,end))





#输出csv文件
# file = r"D:\文件\学习\财务\222.csv"
# with open(file,'w',encoding= 'gb18030') as f:
#     f.write(''''姓名','职务','起始日期','终止日期'\n''')
#     for name,job,start,end in zip(name_list,job_list,start_list,end_list):
#         f.write('''{},{},{},{}\n'''.format(name, job, start, end))
# print("所有输出结果" + file)




#输出excel文件
file = r"D:\文件\学习\财务\222.xlsx"
df = pd.DataFrame(data = [code_list, name_list, job_list, start_list, end_list]).T
df.columns = ['股票代码','姓名','职务','起始日期','终止日期']
df.to_excel(file)



