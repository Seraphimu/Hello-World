#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SeqList {
	SLDataType * a;
	int size;
	int capacity;
}SL;

//初始化
void SLInit(SL* ps);
//打印
void SLPrint(SL ls);
//插入
void SLInsert(SL* ps, int pos, SLDataType x);
//删除
void SLErase(SL* ps, int pos);