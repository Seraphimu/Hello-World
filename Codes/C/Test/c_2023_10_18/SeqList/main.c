#include "SeqList.c"

void Test1(void)
{
    SL ps;
    SeqListInit(&ps);
    SeqListPushBack(&ps, 114514);
}

int main(void)
{
    Test1();

    return 0;
}