#include <stdio.h>
#include <stdlib.h>

typedef int DataType;
typedef struct SListNode {
    DataType data;
    struct SListNode * next;
}SListNode;

void SListNodePrint(SListNode * phead)
{
    SListNode * cur = phead;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
}

void SListNodePushBack(SListNode ** pphead, DataType x)
{
    SListNode * newNode = (SListNode *)malloc(sizeof (SListNode));
    newNode->data = x;
    newNode->next = NULL;

    if (NULL == *pphead) {
        *pphead = newNode;
    }
    else {
        SListNode * tail = *pphead;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newNode;
    }

}

void Test1()
{
    SListNode * plist = NULL;
    SListNodePushBack(&plist, 114514);
    SListNodePrint(plist);
}

int main(void)
{
    Test1();

    return 0;
}