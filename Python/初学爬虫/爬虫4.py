import requests
from lxml import etree
url = "http://vip.stock.finance.sina.com.cn/corp/go.php.vCI_CorpManager/stockid/600900.phtml"

headers = {
    "Accept" : "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
    "Accept-Encoding ": "gzip, deflate",
    "Accept-Language" : "zh-CN,zh;q=0.9",
    "Cache-Control" : "max-age=0",
    "Connection" : "keep-alive",
    "Host" : "vip.stock.finance.sina.com.cn",
    # "If-Modified-Since" : "Wed, 17 Nov 2021 01:17:50 GMT",
    "Upgrade-Insecure-Requests" : "1",
    "User-Agent" : "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36",
}
# headers = {
#     "Accept":"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
#     "Accept-Encoding": "gzip, deflate",
#     "Accept-Language": "zh-CN,zh;q=0.9",
#     "Cache-Control": "max-age=0",
#     "Connection": "keep-alive",
#     "Host": "vip.stock.finance.sina.com.cn",
#     # "If-Modified-Since": "Mon, 15 Nov 2021 10:49:16 GMT",
#     "Upgrade-Insecure-Requests":"1",
#     "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36"
# }
html = requests.get(url, headers = headers)
html.encoding = "gb18030"

print(html.text)
