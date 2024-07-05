#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_CONTACT 1000
//联系人类型定义

typedef struct PeoInfo {
    char name[MAX_NAME];
    char sex[MAX_SEX];
    int age;
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
}PeoInfo;

enum Option {
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SORT,
    PRINT
};
//通讯录
//直接放在PeoInfo里边，在实现时用一个结构数组的话sz不易处理，这样就容易处理得多了。
typedef struct Contact {
    PeoInfo data[MAX_CONTACT];
    int sz;
}Contact;

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