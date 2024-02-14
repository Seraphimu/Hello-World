import requests
from lxml import etree
import pandas as pd
import tushare


file = r"D:\文件\学习\财务\2233.csv"

stock_basic = tushare.get_stock_basics()
print(stock_basic)
# stock_basic = stock_basic.sample(axis=0, n=10)



# name_xpath = "//td[@class='ccl'][1]/div/a"
# job_xpath = "//td[@class='ccl'][2]/div"
# start_xpath = "//td[@class='ccl'][3]/div"
# end_xpath = "//td[@class='ccl'][4]/div"



# headers = {
#     "Accept":"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
#     "Accept-Encoding": "gzip, deflate",
#     "Accept-Language": "zh-CN,zh;q=0.9",
#     "Cache-Control": "max-age=0",
#     "Connection": "keep-alive",
#     "Host": "vip.stock.finance.sina.com.cn",
#     "If-Modified-Since": "Mon, 15 Nov 2021 10:49:16 GMT",
#     "Upgrade-Insecure-Requests":"1",
#     "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36"
# }

# with open(file, "w", encoding='gb18030') as f:
#     f.write('''"股票代码", "姓名","职务", "起始日期", "结束日期"''')

# for stk in stock_basic.index:
#     print("正在抓取公司{}".format(stk))
#     url = "http://vip.stock.finance.sina.com.cn/corp/go.php.vCI_CorpManager/stockid/{}.phtml".format(stk)
#     html = request.get(url, headers = headers)
#     html.encoding = 'gb18030'
#     tree = etree.HTML(html.text)

#     name_list = tree.xpath(name_xpath)
#     job_list = job.xpath(job_xpath)
#     start_list = start.xpath(start_xpath)
#     end_list = end.xpath(end_xpath)
#     stock_list = [stk]*len(name_list)
#     all_name.extend(name_list)
#     all_job.extend(job_list)
#     all_start.extend(start_list)
#     all_end.extend(end_list)
#     for name, job, start, end in zip(name_list, job_list, start_listt, end_list):
#         info = '''{},{},{},{},{},'''.format(stk, name, job, start, end)
#         f.write(info)
# print("抓取完毕")




# # all_name = []
# # all_job = []
# # all_start = []
# # all_end = []
# # all_stock = []

# # file = r"D:\文件\学习\财务\2233.csv"




# # file = r"D:\文件\学习\财务\2233.xlsx"
# # df = pd.DataFrame(data = [all_stkod, all_name, all_job, all_start, all_end]).T
# # df.columns = ["股票代码", "姓名","职务", "起始日期", "结束日期"]
# # df.to_excel(file)
