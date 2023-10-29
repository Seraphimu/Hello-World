#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;
typedef struct SeqList {
    SLDataType* a;
    int size;               //表中元素
    int capacity;           //实际长度
}SL;

//初始化
void SeqListInit(SL* pl);
//销毁
void SeqListDestory(SL* pl);
//打印
void SeqListPrint(SL sl);
//计算列表的容量
void SeqListCheckCapacity(SL* pl);
//尾插
void SeqListPushBack(SL* pl, SLDataType x);
//头插
void SeqListPushFront(SL* pl, SLDataType x);
//尾删
void SeqListPopBack(SL * pl);
//头删
void SeqListPopFront(SL * pl);
//查找
int SeqListFind(SL pl, SLDataType x);
//在pos位置后面插入一个数据
void SeqListInsert(SL *pl, int pos, SLDataType x);
//删除pos位置的数据
void SeqListErase(SL * pl, int pos);
//修改pos位置的数据为x
void SeqListModify(SL * pl, int pos, SLDataType x);