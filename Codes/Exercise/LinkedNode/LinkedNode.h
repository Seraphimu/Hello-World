#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;
typedef struct LinkedNode {
	DataType data;
	struct LinkedNode * next;
}LNode;

void LNInit(LNode ** pphead);
LNode * LNBuyCapacity(DataType x);
void LNPrint(LNode * phead);
void LNDestory(LNode ** pphead);

void LNPushBack(LNode ** pphead, DataType x);
void LNPushFront(LNode ** pphead, DataType x);
void LNPopBack(LNode ** pphead);
void LNPopFront(LNode ** pphead);

void LNInsert(LNode ** pphead, LNode * pos, DataType x);
void LNInsertAfter(LNode ** pphead, LNode * pos, DataType x);
void LNErase(LNode ** pphead, LNode * pos);
void LNEraseAfter(LNode ** pphead, LNode * pos);

LNode * LNFind(LNode ** pphead, DataType x);
void LNChange(LNode ** pphead, LNode * pos, DataType x);

