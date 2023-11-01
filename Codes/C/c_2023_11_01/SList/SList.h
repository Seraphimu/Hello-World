#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;
typedef struct SLNode {
    DataType data;
    struct SLNode * next;
}SLNode;

//初始化
void SLInit(SLNode ** pphead);

//分配空间
SLNode * SLBuyCapacity(DataType x);

//头插
void SLPushFront(SLNode ** pphead, DataType x);

//尾插
void SLPushBack(SLNode ** pphead, DataType x);