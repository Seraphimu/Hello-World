package model;

//核心代码，业务逻辑（做事的代码）模型类
public class UserService {
    //用int可多状态
    //调用？
    public boolean login(String userid, String password) {
        if (userid.equals("zhangsan") && password.equals("123456"))
            return true;
        else
            return false;
    }
}
