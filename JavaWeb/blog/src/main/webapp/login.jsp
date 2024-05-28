<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>用户登录</title>
    </head>
    <body>
        <h1>用户登录</h1>
        <form action="Login" method="post">
            <p>账 号: <input type="text" name="userid"/> </p>
            <p>密 码: <input type="password" name="password"/> </p>
            <p><input type="submit" value="登录"/>&nbsp;<input type="reset" value="重填"/> </p>
        </form>
        <p><a href="signup.jsp">用户注册</a></p>
    </body>
</html>