#include "SeqList.h"
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
    //SeqListPopBack(&sl);
    //SeqListPopFront(&sl);
    //SeqListInsert(&sl, 3, 114514);
    //SeqListErase(&sl, 2);
    //SeqListModify(&sl, 2, 1919810);

    //printf("%d\n", SeqListFind(sl, 114514));
    
    SeqListPrint(sl);
    SeqListDestory(&sl);
}

int main(void)
{
    Test1();

    return 0;
}