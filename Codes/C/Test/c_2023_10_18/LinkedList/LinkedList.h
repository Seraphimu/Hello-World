#include <stdio.h>
#include <stdlib.h>

typedef int DataType;

typedef struct SListNode {
    DataType data;
    struct SListNode * next;
}SLTNode;

void SListPrint(SLTNode * phead)
{
    SLTNode * cur = phead;

    while (cur != NULL) {
        printf("%d ", cur->data);
        // cur++;   //error
        cur = cur->next;
    }
}


void SListPushBack(SLTNode ** pphead, DataType x)
{
    //上来就搞一个节点
    SLTNode * newNode = (SLTNode *)malloc(sizeof(SLTNode *));
    newNode->data = x;
    newNode->next = NULL;

    //如果表为空的话就把这个新节点赋予它
    if (*pphead == NULL) {
        *pphead = newNode;
    }
    //不是空表就在后面接上
    else {
        SLTNode * tail = *pphead;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newNode;
    }
}



















