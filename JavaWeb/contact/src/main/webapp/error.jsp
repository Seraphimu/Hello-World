<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!-- 启用el表达式 -->
<%@ page isELIgnored="false" %>
<!-- input的type不能乱填，有对应类型，name可以自定义 -->
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>错误</title>
</head>
<body>
    <!-- 用el表达式显示返回值 -->
    <p>${param.error}</p>
    <p><a href="./login.jsp">回到登陆</a></p>
    <p><a href="./signup.jsp">回到注册</a></p>
</body>
</html>