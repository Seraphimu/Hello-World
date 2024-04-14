#include <stdio.h>
#include <stdlib.h>

typedef int DataType;
typedef struct SeqList {
    DataType * a;
    int size;
    int capacity;
}SL;

void SeqListInit(SL * ps);
void SeqListPushBack(SL * ps, DataType x);