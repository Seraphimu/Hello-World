#include "LinkedList.h"

//初始化
void LNInit(LNode ** pphead) {
    *pphead = NULL;
}
//打印
void LNPrint(LNode * phead) {
    LNode * tag = phead;
    while (tag) {
        printf("%d ", tag->data);
        tag = tag->next;
    }
    printf("\n");
}
//分配空间
LNode * LNBuyCapacity(LNDataType x) {
    //为newnode分配一个LNode大小的空间，即一个结点大小的空间
    //int * arr = (int *)malloc(sizeof(int) * SIZE);
    LNode * newnode = (LNode *)malloc(sizeof(LNode));
    if (newnode == NULL) {
        printf("Malloc Failed\n");
        exit(-1);
    }
    else {
        //把x给newnode的数据域
        newnode->data = x;
        //把newnode的指针域置空
        newnode->next = NULL;
    }

    return newnode;
}

//头插
void LNPushFront(LNode ** pphead, LNDataType x) {
    LNode * newnode = LNBuyCapacity(x);
    //留着丢人
    //if (**pphead == NULL) {
    if (*pphead == NULL){
        *pphead = newnode;
    }
    else {
        newnode->next = *pphead;
        *pphead = newnode;
    }
}

//尾插
void LNPushBack(LNode ** pphead, LNDataType x) {
    LNode * newnode = LNBuyCapacity(x);
    if (*pphead == NULL) {
        *pphead = newnode;
    }
    else {
        LNode * tail = *pphead;
        //找尾结点
        while (tail->next) {
            tail = tail->next;
        }
        tail->next = newnode;
    }
}
