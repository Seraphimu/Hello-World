#include "LinkedList.h"

void Test1()
{
    SLTNode * plist = NULL;
    SListPushBack(&plist, 1);
    SListPrint(plist);
}

int main(void)
{
    Test1();

    return 0;
}