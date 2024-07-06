#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

#define MAX_CONTACT 1000
#define ERROR -1

// 联系人类型定义
class PeoInfo {
    public:
        string name;
        string sex;
        int age;
        string tele;
        string addr;
        //默认初始化
        PeoInfo() : name(""), sex(""), age(0), tele(""), addr("") {
            ;
        }
};

//通讯录
//直接放在PeoInfo里边，在实现时用一个结构数组的话sz不易处理，这样就容易处理得多了。
class Contact {
    public:
        // Attribute
        PeoInfo data[MAX_CONTACT];
        int sz;

        // Method
        //初始化
        void InitContact(void) {
            sz = 0;
        }
        //添加
        void AddContact(void) {
            IsFull();
            Write(sz);
            sz++;
        }
        //打印
        void PrintContact() {
            int i;
            //打印标题
            //左对齐
            cout << "Name\t" << "Age\t" << "Sex\t" << "Tele\t" << "Addr\t" << endl;

            for (i = 0; i < sz; i++) {
                Print(i);
            }
        }
        //删除
        void DelContact(string name) {
            //如果表为空
            IsEmpty();
            
            int pos = FindByName(name);
            int i;
            for (i = pos; i < sz - 1; i++) {
                data[i] = data[i + 1];
            }
            sz--;
        }

        //按名称查找
        //思路：遍历整个表，用data[i]的name字段和参数name比较
        int FindByName(string name) {
            IsEmpty();
            int i;
            for (i = 0; i < sz; i++) {
                //C++比较两个字符串相等的方法
                if (name == data[i].name) {
                    return i;
                }
            }

            return ERROR;
        }
        
        //查找联系人
        void SearchContact(string name) {
            IsEmpty();
            //按名字查找
            //接收FindByName的返回值，如果是-1,直接返回错误信息
            int pos = FindByName(name);
            if (pos == ERROR) {
                cout << "Not Exist" << endl;
                return;
            }

            //查找成功，打印其下标对应的元素
            Print(pos);
        }
        //修改
        void ModifyContact(string name) {
            IsEmpty();
            int pos = FindByName(name);
            if (pos == ERROR) {
                cout << "Not exist" << endl;
                return;
            }
            Write(pos);
        }

        void menu() {
            printf("***************************************\n");
            printf("***************************************\n");
            printf("**********1. add,   2. del*************\n");
            printf("**********3. search 4. modify**********\n");
            printf("**********5. sort   6. print***********\n");
            printf("**********0.exit***********************\n");
        }

        //为空直接报错，然后退出
        void IsEmpty() {
            if (sz == 0) {
                cout << "Is empty!" << endl;
                exit(-1);
            }
        };

        void IsFull() {
            if (sz == MAX_CONTACT) {
                cout << "Is Full!" << endl;
                exit(-1);
            }
        }

        //传入pos位，打印该位置的内容
        void Print(int pos) {
            cout << data[pos].name << "\t" 
            << data[pos].age << "\t" 
            << data[pos].sex << "\t"
            << data[pos].tele << "\t"
            << data[pos].addr << "\t"
            << endl;
        }

        //写入，传入pos位，在pos位上输入对应的信息
        void Write(int pos) {
            cout << "Please input name of person:> ";
            cin >> data[pos].name;
            cout << "Please input sex of person:> ";
            cin >> data[pos].sex;
            cout << "Please input age of person:> ";
            cin >> data[pos].age;
            cout << "Please input tele of person:> ";
            cin >> data[pos].tele;
            cout << "Please input sex of person:> ";
            cin >> data[pos].addr;
        }
};


enum Option {
    EXIT = 0,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SORT,
    PRINT
};

void Test() {
    int input = 0;
    string name;
    //声明一个Contact类型的对象
    Contact con;
    //初始化通讯录，传引用
    con.InitContact();

    do {
        con.menu();
        printf("请选择:> ");
        cin >> input;
        switch (input) {
            case ADD:
                con.AddContact();
                break;
            case DEL:
                cout << "Input Name:> ";
                cin >> name;
                con.DelContact(name);
                break;
            case SEARCH:
                cout << "Input Name:> ";
                cin >> name;
                con.SearchContact(name);
                break;
            case MODIFY:
                cout << "Input Name:> ";
                cin >> name;
                con.ModifyContact(name);
                break;
            case SORT:
                break;
            case PRINT:
                con.PrintContact();
                break;
            case EXIT:
                break;
            default:
                printf("Expection!\n");
                break;
        }

    } while (input);
}

int main(void) {
    Test();

    return 0;
}