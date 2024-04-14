#include "SList.h"

void SLPrint(SLNode * plist) {
    SLNode * tail = plist;
    while (tail) {
        printf("%d ", tail->data);
        tail = tail->next;
    }
}

void Test(void) {
    SLNode * plist;

    SLInit(&plist);
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 4);
    SLPushBack(&plist, 5);
    SLPushBack(&plist, 1);
    SLPushBack(&plist, 4);
    // SLPushFront(&plist, 1);
    // SLPushFront(&plist, 1);
    // SLPushFront(&plist, 4);
    // SLPushFront(&plist, 5);
    // SLPushFront(&plist, 1);
    // SLPushFront(&plist, 4);

    SLPrint(plist);
}

int main(void) {
    Test(); 

    return 0;
}