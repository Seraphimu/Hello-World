package com.example.contact.controller;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.example.contact.business.UserBusiness;
import com.example.contact.business.UserBusinessImpl;
import com.example.contact.dao.UserDao;
import com.example.contact.model.User;

@WebServlet("/Login")
public class LoginServlet extends HttpServlet{
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException {
        request.setCharacterEncoding("UTF-8");
        //和name属性中的值对应
        String userId = request.getParameter("userid");
        String passwd = request.getParameter("passwd");
        //根据输入调用模型
        UserBusiness business = new UserBusinessImpl();
        int result = business.login(userId, passwd);

        //根据返回结果，转发视图
        if (result == UserDao.loginSuccess) {
            HttpSession session = request.getSession();
            session.setAttribute("user", new User(userId, passwd));
            //登陆到首页，发送输入至ShowContactServet，该Servlet根据输入，调用index界面
            response.sendRedirect("ShowContact");
        }
        else {
            response.sendRedirect("login.jsp");
        }
    }

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}
}
