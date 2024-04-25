package controller;

import java.io.IOException;
// import java.io.PrintWriter;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
//包含model包中的类
import model.UserService;

public class LoginServlet extends HttpServlet {
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        //1.获取输入
        request.setCharacterEncoding("UTF-8");
        String userid = request.getParameter("userid");
        String passowrd = request.getParameter("password");
        //2.调用模型
        UserService service = new UserService();
        boolean result = service.login(userid, passowrd);
        //3.转发视图（根据调用结果
        if (result) {
            //key-value
            request.setAttribute("userid", userid);
            RequestDispatcher rd = request.getRequestDispatcher("main.jsp");
            rd.forward(request, response);
        }
        else
            response.sendRedirect("login.jsp");
    }

    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        doGet(request, response);
    }
}
