package com.example.contact.controller;
import java.io.IOException;
import java.net.URLEncoder;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

//接口和实现的包都要导入
import com.example.contact.business.UserBusiness;
import com.example.contact.business.UserBusinessImpl;
import com.example.contact.dao.UserDao;

//指定action
@WebServlet("/SignUp")
public class SignUpServlet extends HttpServlet{
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//获取输入
        //输入从jsp的form表单中来
        request.setCharacterEncoding("utf-8");
        String errorMessage="";
        //对应账号那个框的输入
        String userId = request.getParameter("userid");
        //对应密码那个框的输入
        String passwdSet = request.getParameter("passwdSet");
        //对应确认密码那个框的输入
        String passwdConfirm = request.getParameter("passwdConfirm");

        //调用模型并转发视图
        //调用相应的模型，这里是注册
        //并返回注册的状态（成功、失败及其原因）
        //创建UserBusiness对象
        UserBusiness business = new UserBusinessImpl();

        //调用注册方法，把从输入框中获取的输入做为参数传递给signUp方法
        int result = business.signUp(userId, passwdSet, passwdConfirm);

        System.out.println("result = " + result);
        System.out.println(userId + passwdSet + passwdConfirm);
        //转发视图
        if(result == UserDao.signUpPasswdDifferent){
            //设置errorMessage的值
            errorMessage = URLEncoder.encode("两次输入的密码不同","utf-8");
            response.sendRedirect("error.jsp?error=" + errorMessage);
        }
        else if(result == UserDao.signUpUserExist){
            //设置errorMessage的值
            errorMessage = URLEncoder.encode("用户名已经存在","utf-8");
            response.sendRedirect("error.jsp?error=" + errorMessage);
        }
        else if (result == UserDao.nullPasswd) {
            //设置errorMessage的值
            errorMessage = URLEncoder.encode("空密码","utf-8");
            response.sendRedirect("error.jsp?error=" + errorMessage);
        }
        else if(result == UserDao.signUpSuccess) {
            //注册成功直接跳转到登陆页面
            response.sendRedirect("login.jsp");
        }
        else{
            //设置errorMessage的值
            errorMessage = URLEncoder.encode("注册用户出错","utf-8");
            //设定error的值，在jsp中用el表达式显示
            response.sendRedirect("error.jsp?error=" + errorMessage);
        }
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}
}