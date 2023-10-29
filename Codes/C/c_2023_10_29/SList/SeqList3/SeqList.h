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
void SLInit(SL* ps);

//检查空间是否够用
void SLCheckCapacity(SL* ps);

//插入
void SLInsert(SL* ps, int pos, SLDataType x);

//删除
void SLErase(SL* ps, int pos);

//尾插
void SLPushBack(SL* ps, SLDataType x);

//头插
void SLPushFront(SL* ps, SLDataType* x);

//打印
void SLPrint(SL* ps);

//头删
void SLPopFront(SL* ps);

//尾删
void SLPopBack(SL* ps);

//查找
int SLFind(SL* ps, SLDataType x);

//修改
void SLModify(SL* ps, int pos, SLDataType x);