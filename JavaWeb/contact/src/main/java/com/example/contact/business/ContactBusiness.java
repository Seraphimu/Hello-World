package com.example.contact.business;

import java.util.ArrayList;
//导入Contact类
import com.example.contact.model.Contact;
public interface ContactBusiness {
    public int addContact(Contact myContact);
    public int deleteContact(String userId);
    public ArrayList<Contact> disContact();
}