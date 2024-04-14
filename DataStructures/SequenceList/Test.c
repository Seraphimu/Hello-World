#include "SequenceList.h"

void Test1(void)
{
    SL sl;
    SLInit(&sl);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 4);
    SLPushBack(&sl, 5);
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 4);

    //SLPushFront(&sl, 114514);
    // SLPopBack(&sl);
    // SLPopFront(&sl);

    SLPrint(sl);
    // SLDestory(&sl);
}

int main(void)
{
    Test1();

    return 0;
}