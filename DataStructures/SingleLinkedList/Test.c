#include "SingleLinkedList.h"

void Test(void)
{
    SL * plist;
    SLInit(&plist);
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 4);
    SLPushBack(&plist, 5);
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 4);


    getchar();
    
}

void Test1()
{
    SL * plist;
    //printf("plist = %p\n", plist);      //打印一个随机值
    SLInit(&plist);                     //注意，这里要传递plist的指针
    printf("plist = %p\n", plist);      //成功置空
}

void TestFindPositionX()
{
    SL * plist;
    
    SLInit(&plist);
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 9);
    SLPushBack(&plist, 5);
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 9);

    SLPrint(plist);
    printf("%p\n", FindPositionX(plist, 4));
}

int main(void)
{
    TestFindPositionX();

    return 0;
}
