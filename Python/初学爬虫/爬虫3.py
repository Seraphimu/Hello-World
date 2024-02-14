import requests
from lxml import etree
import tushare


url = "https://ssecurity.seentao.com/debug/security/security.info.get"

# headers = {
#     "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
#     "Accept-Encoding" : "gzip, deflate, br",
#     "Accept-Language": "zh-CN,zh;q=0.9",
#     "Cache-Control": "max-age=0",
#     "Connection": "keep-alive",
#     "Host": "ssecurity.seentao.com",
#     "If-Modified-Since": "Thu, 15 Jul 2021 17:42:09 GMT",
#     "If-None-Match" : 'W/"1400-17aab42f3b2"',
#     "sec-ch-ua": '"Google Chrome";v="95", "Chromium";v="95", ";Not A Brand";v="99"',
#     "sec-ch-ua-mobile": "?0",
#     "sec-ch-ua-platform": "Windows",
#     "Sec-Fetch-Dest": "document",
#     "Sec-Fetch-Mode": "navigate",
#     "Sec-Fetch-Site": "same-origin",
#     "Sec-Fetch-User": "?1",
#     "Upgrade-Insecure-Requests": "1",
#     "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36"
# }

# headers = {
#     'Accept': '*/*',
#     'Accept-Encoding': 'gzip, deflate, br',
#     'Accept-Language': 'zh-CN,zh;q=0.9',
#     'Connection': 'keep-alive',
#     'Content-Length' : '30',
#     'Content-Type': 'application/x-www-form-urlencoded',
#     'Host' : 'ssecurity.seentao.com',
#     'Origin' : 'https://ssecurity.seentao.com',
#     'Referer' : 'https://ssecurity.seentao.com/detail?id=601229&name=%E4%B8%8A%E6%B5%B7%E9%93%B6%E8%A1%8C&tabsType=1&year=5000',
#    ' User-Agent' : 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36'
# }






headers = {
    "Accept" : "*/*",
    "Accept-Encoding" : "gzip, deflate, br",
    "Accept-Language" : "zh-CN,zh;q=0.9",
    "Connection" : "keep-alive",
    "Content-Length" : "30",
    "Content-Type" : "application/x-www-form-urlencoded",
    "Cookie" : "671b750dad5f30d6eaf736b4cb910d35=YzQyNTA0NDNlZGFkNmU2NDY0MjQwOWQxODJlYzEzMmM=",
    "Host" : "ssecurity.seentao.com",
    "Origin" : "https://ssecurity.seentao.com",
    "Referer" : "https://ssecurity.seentao.com/detail?id=601229&name=%E4%B8%8A%E6%B5%B7%E9%93%B6%E8%A1%8C&tabsType=1&year=5000",
    "sec-ch-ua" : '"Google Chrome";v="95", "Chromium";v="95", ";Not A Brand";v="99"',
    "sec-ch-ua-mobile" : "?0",
    "sec-ch-ua-platform" : '"Windows"',
    "Sec-Fetch-Dest" : "empty",
    "Sec-Fetch-Mode" : "cors",
    "Sec-Fetch-Site" : "same-origin",
    "User-Agent" : "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36"
}


postdata = {
    "stockId": 600289,
    "reporttype": 5000
}
html = requests.post(url, headers=headers, data=postdata)
tree = etree.HTML(html.text)
page = eval(html.text)
all_gszwmc = []
for x in range(0,5):
    gszwmc = page["rows"][0]['value%s' % x]
    tree = etree.fromstring(gszwmc)
    gszwmc_list = tree.xpath("/div/text()")
    all_gszwmc = tree.extend(gszwmc_list)
print(all_gszwmc)