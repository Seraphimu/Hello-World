#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SListNode {
	SLDataType data;
	struct SListNode* next;
}SL;


//Basic Operate

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

//Exercise

// 面试题 02.03. 删除中间节点
// 若链表中的某个节点，既不是链表头节点，也不是链表尾节点，则称其为该链表的「中间节点」。
// 假定已知链表的某一个中间节点，请实现一种算法，将该节点从链表中删除。
void deleteMidNode(SL* pos);


//反转链表
SL * SLReverse(SL * phead);

//倒数第k个数
SL* SLKth(SL * phead, int k);