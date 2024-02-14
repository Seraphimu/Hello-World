#include "SeqList.h"

void SeqListInit(SL * ps)
{
    ps->a = NULL;
    ps->size = 0;
    ps->capacity = 0;
}

void SeqListPushBack(SL * ps, DataType x)       //尾插一个元素x
{
    //这两个值相等要么满了，要么一个值没有
    if (ps->capacity == ps->size) {
        int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
        DataType * tmp = (DataType *)realloc(ps, sizeof(DataType *) * newcapacity);
        if (tmp == NULL) {
            printf("Realloc error!\n");
            exit(-1);
        }
        ps->capacity = newcapacity;
    }

    *(ps->a + (ps->size)++) = x;
    for (int i = 0; i < ps->size; i++) {
        printf("%d ", *(ps->a + i));
    }
}