//test.c 测试通讯录的驱动程序
#include "contact.h"
//通讯录
//1000人
//信息：
//1. 姓名
//2. 年龄
//3. 性别
//4. 电话
//5. 地址

//功能：
//1. 增加指定人的信息
//2. 删除指定人的信息
//3. 修改指定人的信息
//4. 查找指定人的信息
//5. 排序指定人的信息

void menu() {
    printf("***************************************\n");
    printf("***************************************\n");
    printf("**********1. add,   2. del*************\n");
    printf("**********3. search 4. modify**********\n");
    printf("**********5. sort   6. print***********\n");
    printf("**********0.exit***********************\n");
}

enum Option {
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SORT,
    PRINT
};


int main(void) {
    int input = 0;
    //声明一个Contact类型的变量
    Contact con;
    //初始化通讯录，传指针
    InitContact(&con);

    do {
        menu();
        printf("请选择:> ");
        scanf("%d", &input);
        switch (input) {
            case ADD:
                AddContact(&con);
                break;
            case DEL:
                DelContact(&con);
                break;
            case SEARCH:
                SearchContact(&con);
                break;
            case MODIFY:
                ModifyContact(&con);
                break;
            case SORT:
                break;
            case PRINT:
                //结构体传地址效率更高，不用拷贝一整个结构
                PrintContact(&con);
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
