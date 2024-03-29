#include <iostream>
#include <cstdlib>
using namespace std;

typedef char DataType;
typedef struct SListNode {
    DataType data;
    struct SListNode * next;
}SListNode;

void SListNodePrint(SListNode * phead)
{
    SListNode * cur = phead;
    while (cur != NULL) {
        cout << cur->data;
        cur = cur->next;
    }
}

void SListNodePushBack(SListNode ** phead, DataType x)
{
    SListNode * newNode = (SListNode *)malloc(sizeof (SListNode *));
    newNode->data = x;
    newNode->next = NULL;

    if (*phead == NULL) {
        *phead = newNode;
    }
    else {
        SListNode * tail = *phead;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newNode;
    }
}

void Test(void)
{
    SListNode * plist = NULL;       //初始化
    SListNodePushBack(&plist, 'a');
    SListNodePrint(plist);
}

int main(void)
{
    Test();

    return 0;
}