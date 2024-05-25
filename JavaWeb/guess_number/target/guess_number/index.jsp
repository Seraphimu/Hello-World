<!-- jsp文件 -->
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
                <!-- input中的type是属性，text表示文档，name和servlet中Parameter方法的参数对应  -->
                猜数字: <input type="text" name = "input_number"> <br>
                <input type="submit" value="猜"> <br>
                <!-- 显示结果 -->
                <p> ${message} </p>
                <p> ${count} </p>
        </form>
    </body>
</html>
