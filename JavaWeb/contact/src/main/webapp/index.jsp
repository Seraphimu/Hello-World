<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!-- 导入库： -->
<%@page import="com.example.contact.model.User" %>
<%@page import="com.example.contact.model.Contact" %>
<%@page import="java.util.ArrayList" %>
<%@taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!-- 启用el表达式 -->
<%@ page isELIgnored="false" %>
<!DOCTYPE html>
<html>
<head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <title>首页</title>
    <link rel="stylesheet" href="./css/tb.css" type="text/css">
</head>
<body>
    <h1>${sessionScope.user.userId}的通讯录</h1>
    <table>
        <tr>
            <td>用户名</td>
            <td>电子邮件</td>
            <td>所属</td>
        </tr>
        <!-- 打印内容 -->
        <tr>
            <c:forEach var="contact" items="${requestScope.contact}" varStatus="s">
                <c:choose>
                    <c:when test = "${sessionScope.user.userId == contact.getWho()}">
                        <td>${contact.getUserId()} &nbsp;&nbsp;&nbsp;&nbsp;</td>
                        <td>${contact.getEmail()} &nbsp;&nbsp;&nbsp;&nbsp;</td>
                        <td>${contact.getWho()} &nbsp;&nbsp;&nbsp;&nbsp;</td>
                    </c:when>
                </c:choose>
            </tr>
            </c:forEach>
        </tr>
    </table>
    <p><a href="./add.jsp">添加联系人</a></p>
    <p><a href="./delete.jsp">删除联系人</a></p>
</body>
</html>