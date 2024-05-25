#include "SeqList.c"

void Test1(void)
{
    SL sl;
    SeqListInit(&sl);
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 4);
    SeqListPushBack(&sl, 5);
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 4);

    //SeqListPushFront(&sl, 114514);
    SeqListPopBack(&sl);
    SeqListPopFront(&sl);

    SeqListPrint(sl);
    // SeqListDestory(&sl);
}

int main(void)
{
    Test1();

    return 0;
}