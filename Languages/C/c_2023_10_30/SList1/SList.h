#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;
typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//初始化
void SLTInit(SLTNode** pphead);
//分配空间
SLTNode* SLTBuyCapacity(SLTDataType x);
//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x);
//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x);
//在pos前面插入
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//在pos后面插入
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//尾删
void SLTPopBack(SLTNode** pphead);
//头删
void SLTPopFront(SLTNode** pphead);