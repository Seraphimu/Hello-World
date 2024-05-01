<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>猜数字</title>
    </head>
    <body>
        <h1>猜数字</h1>
        <!-- 在WEB-INF/web.xml中配置好Servlet的名称，与action中的参数一致 -->
        <form action="Guess" method="post">
                猜数字: <input type="input_number" name = "number"> <br>
                <input type="submit" value="猜"> <br>
                <p> ${message} </p>
        </form>
    </body>
</html>