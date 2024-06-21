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
            <!-- 这里的name属性对应getParameter()方法中的值，不要对应错 -->
            <p>账 号: <input type="text" name="userid"></p>
            <!-- input的type不能乱填，有对应类型，name可以自定义 -->
            <p>密 码: <input type="password" name="passwdSet"></p>
            <p>确 认: <input type="password" name="passwdConfirm"></p>
            <p><input type="submit" value="注册"></p>
        </form>
        <p>已有账号? 进行登陆: <a href="./login.jsp">登陆</a></p>
    </body>
</html>