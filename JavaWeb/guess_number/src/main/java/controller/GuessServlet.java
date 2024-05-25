package controller;

import java.io.IOException;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

//包含model包中的类（自己写的随机数生成的那玩意）
import model.GuessService;

public class GuessServlet extends HttpServlet {
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        // 1.获取输入
        request.setCharacterEncoding("UTF-8");
        // 从html中读取输入（在WEB-INF/web.xml中配置了本文件为Servlet，在点击提交后，）
        int inputNumber = Integer.parseInt(request.getParameter("input_number"));
        // 2.调用模型
        GuessService service = new GuessService();
        int result = service.guess(inputNumber);

        // 3.转发视图（根据调用结果
        if (result == 0) {
            request.setAttribute("message", "恭喜你，猜对了！");
            // request.setAttribute("message", "猜对了，正确数字是：" + service.randomNumber);
            RequestDispatcher rd = request.getRequestDispatcher("index.jsp");
            rd.forward(request, response);
        } else if (result == 1) {
            // 设置jsp中的message
            request.setAttribute("message", "大了");
            // request.setAttribute("message", "猜错了，正确数字是：" + service.randomNumber);
            RequestDispatcher rd = request.getRequestDispatcher("index.jsp");
            rd.forward(request, response);

        } else if (result == -1) {
            request.setAttribute("message", "小了");
            // request.setAttribute("message", "猜错了，正确数字是：" + service.randomNumber);
            RequestDispatcher rd = request.getRequestDispatcher("index.jsp");
            rd.forward(request, response);

        }
    }

    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        doGet(request, response);
    }
}
