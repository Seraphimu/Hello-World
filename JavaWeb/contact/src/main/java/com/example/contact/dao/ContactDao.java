package com.example.contact.dao;
import java.util.ArrayList;
//导入Contact类
import com.example.contact.model.Contact;

public interface ContactDao {
    public final int deleteSuccess = 0;
    public final int deleteFailure = -1;
    public final int addSuccess = 0;
    public final int addFailure = -1;

    public boolean insertContact(String userId, String email, String who);
    public boolean deleteContact(String userId);
    public ArrayList<Contact> queryContact();
}
