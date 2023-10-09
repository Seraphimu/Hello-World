#include "SeqList.h"

void SeqListInit(SL * ps)       //初始化，把指针赋为NULL，把顺序表的个数和实际长度置为0
{
    ps->a = NULL;
    ps->size = 0;
    ps->capacity = 0;
}