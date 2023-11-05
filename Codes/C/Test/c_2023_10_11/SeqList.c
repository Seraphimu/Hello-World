#include <stdio.h>
#include <stdlib.h>

typedef int SLDataType;

typedef struct SeqList {
   SLDataType * a;
   int size;
   int capacity;
}SL;

void SeqListInit(SL * ps)
{
     ps->a = NULL;
     ps->size = 0;
     ps->capacity = 0;
}

void SeqListPushBack(SL * ps, SLDataType x)
{
    if (ps->size == ps->capacity) {
        int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
        //声明一个一个一个和顺序表相同数据类型的指针，并为它分配空间，空间大小为
        SLDataType * tmp = (SLDataType *)realloc(ps->a, sizeof(SLDataType *) * newcapacity);
        
        if (tmp == NULL) {
            printf("realloc failed.\n");
            exit(-1);
        }
        ps->capacity = newcapacity;
        ps->a = tmp;
    }
    ps->size++;
    *(ps->a + ps->size) = x;
}

int main(void)
{
    SL ps;
    SeqListInit(&ps);
    SeqListPushBack(&ps, 114514);

    return 0;
}
