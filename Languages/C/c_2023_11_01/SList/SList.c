#include "SList.h"

//初始化
void SLInit(SLNode ** pphead) {
    *pphead = NULL;
}

//分配空间
SLNode * SLBuyCapacity(DataType x) {
    //新建一个结构体指针给它分配一个结构体大小的空间
    SLNode * newnode = (SLNode *)malloc(sizeof(SLNode));
    //结点分配失败直接报错
    if (newnode == NULL) {
        printf("Malloc failed\n");
        exit(-1);
    }
    //申请成功之后把数据给结点的数据域，并把指针域置空
    newnode->data = x;
    newnode->next = NULL;

    return newnode;
}

//头插
void SLPushFront(SLNode ** pphead, DataType x) {
    SLNode * newnode = SLBuyCapacity(x);
    if (*pphead == NULL) {
        *pphead = newnode;
        //错误，留着丢人
        // *pphead == newnode;
    }
    else {
        newnode->next = *pphead;
        *pphead = newnode;
    }
}

void SLPushBack(SLNode ** pphead, DataType x) {
    SLNode * newnode = SLBuyCapacity(x);
    if (*pphead == NULL) {
        *pphead = newnode;
    }
    else {
        SLNode * tail = *pphead;
        while (tail->next) {
            tail = tail->next;
        }
        tail->next = newnode;
    }
}