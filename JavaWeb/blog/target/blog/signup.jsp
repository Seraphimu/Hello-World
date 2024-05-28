<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>用户注册</title>
    </head>
    <body>
        <h1>用户注册</h1>
        <form action="SignUp" method="post">
            <p>账 号: <input type="text" name="userid"></p>
            <p>密 码: <input type="password" name="password_1"></p>
            <p>确 认: <input type="password" name="password_2"></p>
            <p><input type="submit" value="注册"></p>
        </form>
        <p>已有账号? 进行登陆: <a href="./login.jsp">登陆</a></p>
    </body>
</html>