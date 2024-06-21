package com.example;
import java.sql.*;

public class JdbcQuickStart {
    public static void main(String [] args) {
        //第一步：加载数据库驱动
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
        }
        //加载失败报错
        catch (ClassNotFoundException errStatus) {
            System.out.println("找不到数据库驱动类");
            errStatus.printStackTrace();
            return;
        }

        // 第二步：建立数据库连接
        //使用URL、用户名、密码建立连接
        //格式：jdbc:mysql://hostname:port/data_base
        
        // 定义URL
        String connectionURL = "jdbc:mysql://localhost:3306/homo";
        // 定义用户名
        String connectionUserName = "root";
        // 定义密码
        String connectionUserPasswd = "root";

        // 定义Connection类的对象，用于建立连接
        Connection myConnection = null;

        try {
            //调用getConnection方法
            myConnection = DriverManager.getConnection(connectionURL, connectionUserName, connectionUserPasswd);
        }
        //老规矩，失败报错
        catch (SQLException errStatus)
        {
            System.out.println("无法建立数据库连接");
            errStatus.printStackTrace();
        }

        // 第三步：连接成功建立，创建Statement对象，用于发送语句给数据库
        Statement myStatement = null;
        try {
            //调用createStatement()方法
            myStatement = myConnection.createStatement();
        }
        //老规矩，失败报错
        catch (SQLException errStatus)
        {
            System.out.println("无法创建Statement对象");
            errStatus.printStackTrace();
        }

        //第四步：执行SQL语句：
        //使用myStatement对象发送SQL语句，并使用myResultSet对象存放返回结果

        String sqlQuery = "select * from userinfo";
        ResultSet myResultSet = null;

        //老规矩
        try {
            //发送，并返回
            myResultSet = myStatement.executeQuery(sqlQuery);
        }
        catch (SQLException errStatus)
        {
            System.out.println("无法执行语句");
            errStatus.printStackTrace();
            return;
        }

        //第五步：处理结果

        try {
            String userId = null;
            String userPasswd = null;
            while (myResultSet.next()) {
                userId = myResultSet.getString("userid");
                userPasswd = myResultSet.getString("passwd");
                System.out.println("UserId: " + userId);
                System.out.println("UserPasswd: " + userPasswd);
            }
        }
        catch (SQLException errStatus)
        {
            System.out.println("无法处理结果集");
            errStatus.printStackTrace();
            return;
        }

        //若对应对象不为空，则资源没有被释放，调用close()方法将其释放。
        try {
            if (myResultSet != null) {
                myResultSet.close();
            }
            if (myStatement != null)
            {
                myStatement.close();
            }
            if (myConnection != null)
            {
                myConnection.close();
            }
        }
        //老规矩，释放失败报错
        catch (SQLException errStatus)
        {
            System.out.println("无法关闭数据库资源");
            errStatus.printStackTrace();
            return;
        }
    }
}