package com.example.contact.dao;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import com.example.contact.model.User;

public class UserDaoImpl implements UserDao{
    //创建连接对象
    private Connection myConnection = null;
    //创建语句对象
    private Statement myStatement = null;
    //发送并接收返回数据的对象
    private ResultSet myResultSet = null;
    //暂不知道这是什么
    private PreparedStatement myPreparedStatement = null;

    //数据库的地址
    private static final String conURL = "jdbc:mysql://localhost:3306/contact";
    //数据库的驱动
    private static final String conDriver = "com.mysql.cj.jdbc.Driver";
    //登陆数据库的用户名
    private static final String conUser = "root";
    //登陆数据库的密码
    private static final String conPasswd = "root";

    //创建queryUser方法，返回User类型的对象
    public User queryUser(String userId, String passwd) {
        User myUser = null;
        try {
            //加载数据库驱动
            Class.forName(conDriver);
            //创建连接
            myConnection = DriverManager.getConnection(conURL, conUser, conPasswd);
        }
        //如果没有成功创建连接，执行catch段中的内容
        catch (SQLException | ClassNotFoundException errStatus)
        {
            System.out.println("创建连接失败");
            errStatus.printStackTrace();
            return null;
        }
        try {
            //准备创建语句
            myStatement = myConnection.createStatement();

            //SELECT * FROM USER WHERE USERID(表中的列) = <输入> AND PASSWD（表中的列） = <输出>
            myResultSet = myStatement.executeQuery("SELECT * FROM USERINFO WHERE userid='" 
                + userId + "' AND passwd='" + passwd + "'");

            if (myResultSet.next()) {
                //如果成功获取，设定myUser的对象，并在之后完成返回
                myUser = new User (userId, "");
                return myUser;
            }
        }
        //如果出现异常，报错
        catch (SQLException errStatus)
        {
            System.out.println("获取返回结果失败");
            errStatus.printStackTrace();
            return null;
        }
        //没有异常，finally段的代码
        finally {
            try {
                if (myResultSet != null) {
                    myResultSet.close();
                }
                if (myStatement != null) {
                    myStatement.close();
                }
                if (myConnection != null) {
                    myConnection.close();
                }
            }
            catch (SQLException errStatus)
            {
                System.out.println("释放资源失败");
                errStatus.printStackTrace();
                return null;
            }
        }

        return myUser;
    }

    public User queryUser(String userId) {
        User myUser = null;

        //建立连接
        try {
            Class.forName(conDriver);
            myConnection = DriverManager.getConnection(conURL, conUser, conPasswd);
        }
        catch (SQLException | ClassNotFoundException errStatus) {
            System.out.println("建立连接失败");
            errStatus.printStackTrace();
        }

        try {
            myStatement = myConnection.createStatement();
            myResultSet = myStatement.executeQuery("SELECT * FROM USERINFO WHERE userid='" + userId + "'");

            if (myResultSet.next()) {
                myUser = new User(userId, "");
                return myUser;
            }
        }
        catch (SQLException errStatus) {
            System.out.println("获取返回数据失败");
            errStatus.printStackTrace();
        }

        //释放资源
        finally {
            try {
                if (myResultSet != null) {
                    myResultSet.close();
                }
                if (myStatement != null) {
                    myStatement.close();
                }
                if (myConnection != null) {
                    myConnection.close();
                }
            }
            catch (SQLException errStatus)
            {
                System.out.println("释放资源失败");
                errStatus.printStackTrace();
            }
        }
        //如果未完成操作，返回值为空
        return myUser;
    }

    public boolean insertUser (String userId, String passwd) {
        //加载驱动，建立连接
        try {
            Class.forName(conDriver);
            myConnection = DriverManager.getConnection(conURL, conUser, conPasswd);
        }
        catch (SQLException | ClassNotFoundException errStatus) {
            System.out.println("创建连接失败");
            errStatus.printStackTrace();
            return false;
        }

        //发送语句
        try {
            String insertSQL = "INSERT INTO USERINFO VALUES(?, ?)";
            myPreparedStatement = myConnection.prepareStatement(insertSQL);
            //参数从1开始向后排，一开始自动写的01是大坑……
            //给第n个参数设定值，这里是从login.jsp中接收的userId和passwd
            myPreparedStatement.setString(1, userId);
            myPreparedStatement.setString(2, passwd);
            
            //执行语句，获取返回值
            int result = myPreparedStatement.executeUpdate();
            //如果result为0，注册成功，返回true
            if (result != 0) {
                return true;
            }
            else {
                return false;
            }
        }
        catch (SQLException errStatus) {
            errStatus.printStackTrace();
            return false;
        }
        //完成操作后，释放资源
            //没有异常，finally段的代码
        finally {
            try {
                if (myResultSet != null) {
                    myResultSet.close();
                }
                if (myStatement != null) {
                    myStatement.close();
                }
                if (myConnection != null) {
                    myConnection.close();
                }
            }
            catch (SQLException errStatus)
            {
                System.out.println("释放资源失败");
                errStatus.printStackTrace();
                return false;
            }
        }
    }
}
