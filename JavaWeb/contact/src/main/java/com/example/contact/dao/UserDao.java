package com.example.contact.dao;

//导入model.User，需要User类的对象
import com.example.contact.model.User;

public interface UserDao {
    //状态码
    public final int loginSuccess = 0;
    public final int loginFailure = -1;
    public final int signUpSuccess = 0;
    public final int nullPasswd = -2;
    public final int signUpOtherError = -1;
    public final int signUpPasswdDifferent = 2;
    public final int signUpUserExist = 1;
    //方法重载，根据参数的个数不同选择性调用
    //用来判定用户名和密码的匹配，若匹配成功就登陆，失败就返回null，不登陆
    public User queryUser(String userid, String passwd);
    //断断用户是否已经存在
    public User queryUser(String userid);
    //新加用户
    public boolean insertUser(String userid, String passwd);
}
