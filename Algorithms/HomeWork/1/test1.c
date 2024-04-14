#include <stdio.h>
#include <stdlib.h>

typedef int SLDataType;

//链表结构
typedef struct LinkedList {
    SLDataType data;
    struct LinkedList * next;
}SL;

//初始化
void SLInit(SL ** PL)
{
    *PL = NULL;
}

//分配空间
SL * SLBuyCapacity(SLDataType x)
{
    SL * newNode = (SL *)malloc(sizeof(SL));        //给新结点分配空间
    
    if (newNode == NULL)                            //判断是否分配成功
    {
        printf("Malloc Failed!\n");
        exit(-1);
    }
    else
    {
        newNode->data = x;                         //给结点的数据域赋值
        newNode->next = NULL;                      //给结点的指针域赋值
    }

    return newNode;                                //返回该结点
}

//尾插
void SLPushBack(SL ** PL, SLDataType x)
{
    //没有节点的情况
    if (*PL == NULL)
    {
        *PL = SLBuyCapacity(x);     //将头指针指向当前分配的新结点
    }
    //其他情况
    else
    {
        SL * tail = *PL;            //通过tail遍历链表，找到尾结点
        SL * newNode = SLBuyCapacity(x);//分配一个新结点
        while (tail->next != NULL)      //遍历
        {
            tail = tail->next;          //使tail指向下一个结点
        }
        tail->next = newNode;           //把新分配的结点接在表尾
    }
}

//返回第一个值为x的结点的地址，若没有这样的结点返回NULL。
SL* FindPositionX(SL * L, SLDataType x)
{
    SL * cur = L;
    if (cur == NULL || cur->data == x)      //如果链表为空或者到了尾结点，返回NULL，发现相同的数，返回该地址
        return cur;
    FindPositionX(cur->next, x);
}

//打印链表的值
void SLPrint(SL * L)
{
    SL * cur = L;
    
    while (cur != NULL)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }

    printf("\n");
}

//测试函数
void TestFindPositionX()
{
    SL * L;
    
    //初始化和尾插法构建链表
    SLInit(&L);
    SLPushBack(&L, 1);
    SLPushBack(&L, 1);
    SLPushBack(&L, 9);
    SLPushBack(&L, 5);
    SLPushBack(&L, 1);
    SLPushBack(&L, 4);

    SLPrint(L);
    printf("要找的元素%d\n", L->next->next->next->next->next->data);
    printf("要找的元素的地址%p\n", L->next->next->next->next->next);
    printf("FindPositionX求得的地址%p\n", FindPositionX(L, 4));
}

int main(void)
{
    //调用测试函数
    TestFindPositionX();

    return 0;
}