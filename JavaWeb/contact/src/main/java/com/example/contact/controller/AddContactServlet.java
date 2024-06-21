package com.example.contact.controller;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.example.contact.business.ContactBusiness;
import com.example.contact.business.ContactBusinessImpl;
import com.example.contact.model.Contact;
import com.example.contact.model.User;

@WebServlet("/AddContact")
public class AddContactServlet extends HttpServlet{
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("utf-8");
        String userId = request.getParameter("userid");
        String email = request.getParameter("email");
        User user = (User)(request.getSession().getAttribute("user"));
        String who = user.getuserId();
        //调用模型
        Contact myContact = new Contact(userId, email, who);
        myContact.setUserId(userId);
        myContact.setEmail(email);
        myContact.setWho(who);
        ContactBusiness business = new ContactBusinessImpl();
        int result = business.addContact(myContact);
        
        //转发视图
        if(result==0)
            response.sendRedirect("ShowContact");
        else
            response.sendRedirect("add.jsp");
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}
}