#include <stdio.h>
#include <stdlib.h>

//单链表
typedef struct Node {
    int data;
    struct Node * next;
}Node;

typedef struct test {
    int data;
    int * pdata;
}test;

typedef struct SeqList {
    int *a;
    int size;
    int capacity;
}SL;

void SeqListInit(SL * ps)
{
    ps->size = 0;
    ps->capacity = 0;
}

int main(void)
{
    test * a;
    a->data = 114514;
    printf("%d\n", a->data);

    SL * ps;
    SeqListInit(ps);

    return 0;
}
