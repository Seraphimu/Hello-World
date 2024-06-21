package com.example.contact.controller;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.example.contact.business.ContactBusinessImpl;
import com.example.contact.business.ContactBusiness;
import com.example.contact.model.Contact;

@WebServlet("/ShowContact")
public class ShowContactServlet extends HttpServlet {
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		//调用模型
        ContactBusiness business = new ContactBusinessImpl();
        ArrayList<Contact> contactList = business.disContact();
        
        //转发视图，contact为index中el表达式的变量，给contact设定值，然后在index中利用JSTL表达式打印值
        request.setAttribute("contact", contactList);
        RequestDispatcher rd = request.getRequestDispatcher("index.jsp");
        rd.forward(request, response);
	}
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}
}