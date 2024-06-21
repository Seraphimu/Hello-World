package com.example.contact.model;

public class Contact {
    private String userId;
    private String email;
    private String who;
    //通讯录相关的表项
    public Contact(String userId, String email, String who) {
        this.userId = userId;
        this.email = email;
        this.who = who;
    }
    
    //账号操作
    public String getUserId() {
        return userId;
    }
    public void setUserId(String userId) {
        this.userId = userId;
    }

    //邮箱操作
    public String getEmail() {
        return email;
    }
    public void setEmail(String email) {
        this.email = email;
    }

    //所属者操作
    public String getWho() {
        return who;
    }
    public void setWho(String who) {
        this.who = who;
    }
}
