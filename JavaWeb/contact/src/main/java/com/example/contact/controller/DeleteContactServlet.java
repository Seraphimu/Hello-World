package com.example.contact.controller;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.example.contact.business.ContactBusiness;
import com.example.contact.business.ContactBusinessImpl;
import com.example.contact.dao.ContactDao;

@WebServlet("/DeleteContact")
public class DeleteContactServlet extends HttpServlet{
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//获取用户输入
        request.setCharacterEncoding("utf-8");
        //输入要删除的id
        String userId = request.getParameter("userid");
        //调用模型
        ContactBusiness business = new ContactBusinessImpl();
        int result = business.deleteContact(userId);
        
        //转发视图
        if(result == ContactDao.deleteSuccess)
            response.sendRedirect("ShowContact");
        else
            response.sendRedirect("delete.jsp");
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}
}
