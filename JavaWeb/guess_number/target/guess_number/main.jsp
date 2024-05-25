<%-- 
    Document   : main
    Created on : 2024-4-15, 8:58:47
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
        <h1>Hello 
            <%
                //Object convert to String Type.
                String userid = (String)request.getAttribute("userid");
                out.print(userid);
            %>
        </h1>
    </body>
</html>
