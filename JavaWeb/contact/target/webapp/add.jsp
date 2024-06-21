<!-- 启用el表达式 -->
<%@ page isELIgnored="false" %>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>添加</title>
</head>
<body>
    <h1>输入要添加的联系人</h1>
    <p>欢迎您：${sessionScope.user.userId}</p>
    <form action="AddContact" method="post">
        <p>联系人的ID</p>
        <p><input type="text" name="userid"/></p>
        <p>联系人的email</p>
        <p><input type="text" name="email"/></p>
        <p><input type="submit" value="添加联系人"/></p>
    </form>
</body>
</html>