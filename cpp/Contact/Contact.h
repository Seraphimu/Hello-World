#include <iostream>
#include <string>

using namespace std;

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_CONTACT 1000

//联系人类型定义
class PeoInfo {
    char name[MAX_NAME];
    char sex[MAX_SEX];
    int age;
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
};

//通讯录
//直接放在PeoInfo里边，在实现时用一个结构数组的话sz不易处理，这样就容易处理得多了。
class Contact {
    PeoInfo data[MAX_CONTACT];
    int sz;
        //初始化
    void InitContact(Contact * pc);
    //添加
    void AddContact(Contact * pc);
    //打印
    void PrintContact(const Contact * pc);
    //删除
    void DelContact(Contact * pc);
    //按名称查找

    //C语言中的函数默认链接类型是extern，即外部链接，所有的源文件都可以使用这个函数，加上static关键字之后，其范围将被限定在其实现所在的源文件中，
    //另外，它和操作系统中提到的静态链接是两个不同的概念，不要搞混。
    static int FindByName(const Contact * pc, char name[]);
    //查找联系人
    void SearchContact(const Contact * pc);
    //修改
    void ModifyContact(Contact * pc);
};

enum Option {
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SORT,
    PRINT
};

void InitContact(Contact * pc) {
    pc->sz = 0;
    //pc->data[] = 0;
    //void * memset ( void * ptr, int value, size_t num );
    memset(pc->data, 0, sizeof (pc->data));
}

void AddContact(Contact * pc) {
    if (pc->sz == MAX_CONTACT) {
        printf("Full!\n");
        return;
    }

    //pc->data[sz];
    printf("Please input name:>");
    scanf("%s", pc->data[pc->sz].name);
    printf("Please input age:>");
    scanf("%d", &(pc->data[pc->sz].age));
    printf("Please input sex:>");
    scanf("%s", pc->data[pc->sz].sex);
    printf("Please input tele:>");
    scanf("%s", pc->data[pc->sz].tele);
    printf("Please input addr:>");
    scanf("%s", pc->data[pc->sz].addr);
    //++
    pc->sz++;
}