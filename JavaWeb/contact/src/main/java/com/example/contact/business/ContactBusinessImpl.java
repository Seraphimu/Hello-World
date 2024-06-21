package com.example.contact.business;

import java.util.ArrayList;

import com.example.contact.dao.ContactDao;
import com.example.contact.dao.ContactDaoImpl;
import com.example.contact.model.Contact;

public class ContactBusinessImpl implements ContactBusiness {
    public int addContact(Contact myContact) {
        //创建一个访问数据库的对象
        ContactDao dao = new ContactDaoImpl();
        boolean result = dao.insertContact(
            myContact.getUserId(), 
            myContact.getEmail(),
            myContact.getWho()
        );

        if (result) {
            return ContactDao.addSuccess;   //成功
        }
        else {
            return ContactDao.addFailure;   //失败
        }

    }


    public ArrayList<Contact> disContact() {
        ContactDao dao = new ContactDaoImpl();
        ArrayList<Contact> contactList = dao.queryContact();
        return contactList;
    }

    public int deleteContact(String userId) {
        ContactDao dao = new ContactDaoImpl();
        
        boolean result = dao.deleteContact(userId);

        if (result) {
            return ContactDao.deleteSuccess;   //成功
        }
        else {
            return ContactDao.deleteFailure;   //失败
        }
    }


}
