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
    
    SLInsert(&sl, 2, 114514);

    SLPrint(sl);
    // SLDestory(&sl);
}

int main(void)
{
    Test1();

    return 0;
}
