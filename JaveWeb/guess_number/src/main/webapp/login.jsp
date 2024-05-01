<%-- 
    Document   : login
    Created on : 2024-4-15, 8:14:47
    Author     : Administrator
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>留言板</title>
    </head>
    <body>
        <h1>欢迎使用留言板</h1>
        <form action="Login" method="post">
                用户名: <input type="userid" name = "userid"> <br>
                密码: <input type="password" name= "password"> <br>
                <input type="submit" value="登陆"> <input type="submit" value="清除"> <br>
        </form>
    </body>
</html>
