#include <stdio.h>
#include <stdlib.h>

typedef int DataType;
typedef struct SListNode {
    DataType data;
    struct SListNode * next;
}SListNode;

void SListPrint(SListNode * phead)
{
    SListNode * cur = phead;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
}

void SListPushFront(SListNode ** pphead, DataType x)
{
    SListNode * newNode = (SListNode *)malloc(sizeof (SListNode *));
    newNode->data = x;
    newNode->next = NULL;

    if (*pphead == NULL) {
        *pphead = newNode;
    }
    else {
        //让新节点指向原来的头指针，再将原来的头指针指向新的节点
        newNode->next = *pphead;
        *pphead = newNode;
        // SListNode * front = *pphead;
        // newNode = front->next;
        // front->next = newNode;
    }
}

void Test1(void)
{
    SListNode * plist = NULL;
    SListPushFront(&plist, 114514);
    SListPushFront(&plist, 114);
    SListPushFront(&plist, 514);
    SListPushFront(&plist, 1919810);
    SListPrint(plist);
}


int main(void)
{
    Test1();

    return 0;
}