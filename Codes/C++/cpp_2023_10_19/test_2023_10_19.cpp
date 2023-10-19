#include <iostream>
#include <cstdlib>

using namespace std;

typedef int DataType;
typedef struct SListNode {
    DataType data;
    struct SListNode * next;
}SListNode;

void SListNodePrint(SListNode * phead)
{
    SListNode * cur = phead;
    while (cur != NULL) {
        cout << cur->data << " ";
        cur = cur->next;
    }
}

//尾插
void SListNodePushBack(SListNode ** phead, DataType x)
{
    //不管三七二十一，先分配空间
    SListNode * newNode = (SListNode *)malloc(sizeof(SListNode *));
    newNode->data = x;
    newNode->next = NULL;

    if (*phead == NULL) {
        *phead = newNode;
    }
    else {  //找到尾结点，然后把新结点接上去
        SListNode * tail = *phead;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = newNode;
    }
}

void Test1(void)
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