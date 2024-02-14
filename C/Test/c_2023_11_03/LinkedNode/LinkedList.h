#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LNDataType;
typedef struct LinkedNode {
    LNDataType data;
    struct LinkedNode * next;
}LNode;

//初始化
void LNInit(LNode ** pphead);
//打印
void LNPrint(LNode * phead);
//分配空间
LNode * LNBuyCapacity(LNDataType x);
//头插
void LNPushFront(LNode ** pphead, LNDataType x);
//尾插
void LNPushBack(LNode ** pphead, LNDataType x);
//头删
void LNPopFront(LNode ** pphead);
//尾删
void LNPopBack(LNode ** pphead);
//pos位置后插入
//pos位置插入
//pos位置删除
//pos位置后删除
//查找
//替换
