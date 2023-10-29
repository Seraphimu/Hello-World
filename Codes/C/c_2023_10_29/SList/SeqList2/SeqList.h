#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SeqList {
	SLDataType* a;
	int size;			//顺序表的大小
	int capacity;		//实际分配的大小
}SL;

//初始化
void SLInit(SL* ps);
//销毁
void SLDestory(SL* ps);
//打印
void SLPrint(SL* ps);
//分配内存
void SLCheckCapacity(SL* ps);

//头插尾插，头删尾删
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

// 返回下标，没有找打返回-1
int SLFind(SL* ps, SLDataType x);

// 在pos位置插入x
void SLInsert(SL* ps, int pos, SLDataType x);

// 删除pos位置的值
void SLErase(SL* ps, int pos);

//改变pos处的值
void SLModify(SL* ps, int pos, SLDataType x);