#include <stdio.h>
#include <stdlib.h>

typedef int SLDataType;
//链表结构
typedef struct LinkedList {
    SLDataType data;
    struct LinkedList * next;
}SL;

void SLInit(SL ** pphead);
SL * SLBuyCapacity(SLDataType x);
void SLPushBack(SL ** pphead, SLDataType x);
SL * FindPositionX(SL * phead, SLDataType x);
void SLPrint(SL * phead);
