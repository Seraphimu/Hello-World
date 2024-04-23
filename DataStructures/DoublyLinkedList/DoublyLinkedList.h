#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SListNode {
	SLDataType data;
	struct SListNode* prev;
	struct SListNode* next;
}SL;

//初始化
void SLInit(SL** pphead);
//分配空间
SL* SLBuyCapacity(SLDataType x);

//尾插
void SLPushBack(SL** pphead, SLDataType x);
//头插
void SLPushFront(SL** pphead, SLDataType x);
//在pos前面插入
void SLInsert(SL** pphead, SL* pos, SLDataType x);
//在pos后面插入
void SLInsertAfter(SL* pos, SLDataType x);

//尾删
void SLPopBack(SL** pphead);
//头删
void SLPopFront(SL** pphead);
//删除pos位置
void SLErase(SL** pphead, SL* pos);
//删除pos后面的位置
void SLEraseAfter(SL* pos);

//打印
void SLPrint(SL* phead);
