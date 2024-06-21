package com.example.contact.business;

public interface UserBusiness {
    //输入用户名和密码登陆
    public int login(String userid, String passwd);
    //输入用户名的两次确认密码进行登陆
    public int signUp(String userid, String passwdSet, String passwdConfirm);
}