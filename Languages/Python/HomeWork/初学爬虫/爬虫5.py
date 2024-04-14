import requests
from lxml import etree
url = "https://ssecurity.seentao.com/debug/security/security.list.get"
headers = {
    "Accept": "*/*",
    "Accept-Encoding": "gzip, deflate, br",
    "Accept-Language": "zh-CN,zh;q=0.9",
    "Connection": "keep-alive",
    "Content-Length": "15",
    "Content-Type": "application/x-www-form-urlencoded",
    "Host": "ssecurity.seentao.com",
    "Origin": "https://ssecurity.seentao.com",
    "Referer": "https://ssecurity.seentao.com/?qs=dXNlcklkPTY5NDk5Mzg4MzQ1OTkxMTgzJnVzZXJOYW1lPTE1NjU1NDc4MTkwJnVzZXJUeXBlPVBMQVRGT1JNJnVzZXJUb2tlbj0wNDgwZDZjZGVjOWRkYmJkOTkwNDE2YWQ2ZWE3MGMxNiZvcmdJZD0zMTk3ODYxMzk1NDMxNDI0MCZvcmdUeXBlPVNDSE9PTCZtZW1iZXJJZD02OTQ5OTM4ODM1MDE3MzIwNyZjYXNlVmVyc2lvbklkPTU5NjExMDc1MTQxNzA5ODQxJmNvdXJzZVZlcnNpb25JZD01OTYxNTc0MjAxOTUxMDI3NSZjb3Vyc2VDaGFwdGVySWQ9NTk2MTU3NDIwMjQ3NjEzNTcmY291cnNlU2VjdGlvbklkPTU5NjE1NzQyMDI3MzcwNTE0JmNvdXJzZVVuaXRJZD01OTYxNTc0MjAzMDUxMjE1MiZjb3Vyc2VFbGVtZW50SWQ9NTk2MTU3NDIwMzMxNDE3ODkmY2xhc3NJZD02OTU3MzQ3NTM1ODQ4NjU0NSZyZWFsTmFtZT0lRTYlOUQlOEUlRTYlOUQlQkUmbWVtYmVyVHlwZT1TVFVERU5UJnRlYW1JZD0mcG9zdElkPSZ0YXNrSWQ9NDY4NzkyNjQ0MzM3NzQ1OTImYWN0aXZpdHlJZD00Njg3OTMwMTMwNjQyNTM0NCZ2aXJ0dWFsRGF0ZT0mdGVhbVJhbms9MCZpc1RlYW1MZWFkZXI9MCZwbGF0Zm9ybUNvZGU9REJFJmJ1c2luZXNzVHlwZT1ub19wb3N0Jm1lbWJlclNvdXJjZVBvc3RJZHM9JmVudGVycHJpc2VJZD00Njg0MjEzODQ2MTczNjk2MCZpc09wZW5BbnN3ZXI9MSZicVJ1bGU9JmJpeklkPTQ2ODc5MzA2NTkxMjU2NTc2Jm9yaWdpbkJpeklkPTEwMTYmc291cmNlUG9zdElkPTQ2ODc4NjA4MTE3NDY1MDg4JmlzVGVhbUluaXQ9MA==",
    "sec-ch-ua": '"Google Chrome";v="95", "Chromium";v="95", ";Not A Brand";v="99"',
    "sec-ch-ua-mobile": "?0",
    "sec-ch-ua-platform": "Windows",
    "Sec-Fetch-Dest": "empty",
    "Sec-Fetch-Mode": "cors",
    "Sec-Fetch-Site": "same-origin",
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36",
}


html = requests.get(url, headers = headers)
print(html)
tree = etree.HTML(html.text)
name_list = tree.xpath("//div[@class='ant-card ant-card-bordered']")
print(name_list)