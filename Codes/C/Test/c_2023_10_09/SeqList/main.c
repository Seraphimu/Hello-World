#include "SeqList.h"

int main(void)
{
    SeqListTest1();

    return 0;
}

//测试线性表的各种操作
void SeqListTest1(void)
{
    SL * ps;
    SeqListInit(ps);
    SeqListPushBack(ps, 114514);
    SeqListPushBack(ps, 1919810);
}
