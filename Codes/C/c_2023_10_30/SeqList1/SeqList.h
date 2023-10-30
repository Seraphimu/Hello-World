#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SeqList {
	SLDataType* a;
	int size;
	int capacity;
}SL;

//初始化
void SLInit(SL* pl);
//分配空间
void SLCheckCapacity(SL* pl);
//插入：在pos位置插入x
void SLInsert(SL* pl, int pos, SLDataType x);
//删除：删除在pos位置的元素
void SLErase(SL* pl, int pos);
//头插
void SLPushFront(SL* pl, SLDataType x);
//尾插
void SLPushBack(SL* pl, SLDataType x);
//头删
void SLPopFront(SL* pl);
//尾删
void SLPopBack(SL* pl);
//打印
void SLPrint(const SL* pl);
//查找
int SLFind(const SL* pl, SLDataType x);
//修改
void SLModify(SL* pl, int pos, SLDataType x);