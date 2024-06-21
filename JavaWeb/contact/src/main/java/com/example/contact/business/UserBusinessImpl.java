package com.example.contact.business;

import com.example.contact.dao.UserDao;
import com.example.contact.dao.UserDaoImpl;
import com.example.contact.model.User;

public class UserBusinessImpl implements UserBusiness{

    public int login(String userId, String password) {
        UserDao myDao = new UserDaoImpl();
        User user = myDao.queryUser(userId, password);
        if(user != null)
            return UserDao.loginSuccess;   //登录成功
        else 
            return UserDao.loginFailure;   //登录失败
    }

    public int signUp(String userId, String passwdSet, String passwdConfirm) {
        UserDao myDao = new UserDaoImpl();
        System.out.println(userId + passwdConfirm + passwdSet);
        // 两次输入的密码不同注册失败
        if(!passwdSet.equals(passwdConfirm)) {
            return UserDao.signUpPasswdDifferent;
        }
        // 已经有同名的用户名，注册失败
        else if(myDao.queryUser(userId)!=null)
            return UserDao.signUpUserExist;
        else if (passwdConfirm.equals("") || passwdSet.equals("")) {
            return UserDao.nullPasswd;
        }
        // 注册成功
        //取决用户名和第一次输入的密码，放入数据库中
        //调用Dao中的insertUser方法在数据库中完成注册
        else if(myDao.insertUser(userId, passwdSet))
            return UserDao.signUpSuccess;
        //其他原因注册失败
        else
            return UserDao.signUpOtherError;
    }
}