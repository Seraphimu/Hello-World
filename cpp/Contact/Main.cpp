#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#define MAX_CONTACT 1000
#define ERROR -1

//联系人类型定义
typedef struct PeoInfo {
    public:
        string name;
        string sex;
        int age;
        string tele;
        string addr;
}PeoInfo;

//通讯录
//直接放在PeoInfo里边，在实现时用一个结构数组的话sz不易处理，这样就容易处理得多了。
class Contact {
    public:
        PeoInfo data[MAX_CONTACT];
        int sz;
        //初始化
        void InitContact(void) {
            sz = 0;
            // memset(data, 0, sizeof(PeoInfo) * MAX_CONTACT);
            // memset(&pc, 0, sizeof(pc));
        }
        //添加
        void AddContact(void) {
            if (sz == MAX_CONTACT) {
                cout << "Is Full!" << endl;
                return;
            }
            Write(sz);

            // 大错误，贴出来丢人，第一次在主函数中输入1之后，AddContact()方法中又弄一个for循环出来，
            //第一次sz初始化为0，，第2次sz的值为1，才进入了循环，这里根本就不需要循环，在主函数中循环就好
            // int i;
            // for (i = 0; i < sz; i++) {
            //     cout << "Please input name of person:> ";
            //     cin >> data[i].name;
            //     cout << "Please input sex of person:> ";
            //     cin >> data[i].sex;
            //     cout << "Please input age of person:> ";
            //     cin >> data[i].age;
            //     cout << "Please input tele of person:> ";
            //     cin >> data[i].tele;
            //     cout << "Please input sex of person:> ";
            //     cin >> data[i].addr;
            // }
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
            if (IsEmpty()) {
                return;
            }
            
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
            if (IsEmpty()) {
                return ERROR;
            }
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
            if (IsEmpty()) {
                cout << "Contact is empty" << endl;
                return;
            }

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
            if (IsEmpty()) {
                cout << "Contact is empty" << endl;
                return;
            }

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

        //为空返回true
        bool IsEmpty() {
            return sz == 0;
        };

        void Print(int pos) {
            cout << data[pos].name << "\t" 
            << data[pos].age << "\t" 
            << data[pos].sex << "\t"
            << data[pos].tele << "\t"
            << data[pos].addr << "\t"
            << endl;
        }

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

int main(void) {
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

    return 0;
}