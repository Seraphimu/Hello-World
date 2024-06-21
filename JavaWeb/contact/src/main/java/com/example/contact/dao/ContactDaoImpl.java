package com.example.contact.dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;

import com.example.contact.model.Contact;

public class ContactDaoImpl implements ContactDao {
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
    public boolean insertContact(String userId, String email, String who) {
        //创建连接对象
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
            return false;
        }
        try {
            //准备创建语句
            //向通讯录中写入信息
            String insertSQL = "INSERT INTO USERDATA VALUES(?, ?, ?)";
            myPreparedStatement = myConnection.prepareStatement(insertSQL);
            myPreparedStatement.setString(1, userId);
            myPreparedStatement.setString(2, email);
            myPreparedStatement.setString(3, who);

            int result = myPreparedStatement.executeUpdate();
            if (result != 0) {
                return true;
            }
            else {
                return false;
            }
        }
        //如果出现异常，报错
        catch (SQLException errStatus)
        {
            System.out.println("获取返回结果失败");
            errStatus.printStackTrace();
            return false;
        }
        //没有异常，finally段的代码，释放资源
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
    }
    public ArrayList<Contact> queryContact() {
        ArrayList<Contact> contactList = new ArrayList<Contact> ();
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
            String selectSQL = "SELECT DISTINCT * FROM USERDATA";
            myStatement = myConnection.createStatement();
            myResultSet = myStatement.executeQuery(selectSQL);


            while (myResultSet.next()) {
                String userId = myResultSet.getString("userid");
                String email = myResultSet.getString("email");
                String who = myResultSet.getString("who");
                Contact tmpContact = new Contact(userId, email, who);
                //插入到contactList中
                contactList.add(tmpContact);
            }
        }
        //如果出现异常，报错
        catch (SQLException errStatus)
        {
            System.out.println("获取返回结果失败");
            errStatus.printStackTrace();
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
            }
        }
        return contactList;
    }

    public boolean deleteContact(String userId) {
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
        }
        try {
            //准备创建语句
            String delSQL = "DELETE FROM USERDATA WHERE userid='" + userId + "'";
            myStatement = myConnection.createStatement();
            // 对于更新语句，应该使用executeUpdate()方法
            int result = myStatement.executeUpdate(delSQL);
            System.out.println(result + "Result");
            if (result != 0) {
                return true;
            }
            else {
                return false;
            }
        }
        //如果出现异常，报错
        catch (SQLException errStatus)
        {
            System.out.println("获取返回结果失败");
            errStatus.printStackTrace();
            return false;
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
            }
        }
    }
}














