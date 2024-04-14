#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDataType;
typedef struct SL {
    SLDataType * a;
    int size;               //表中元素
    int capacity;           //实际长度
}SL;

//初始化
void SLInit(SL * pl);
//销毁
void SLDestory(SL *pl);
//打印
void SLPrint(SL sl);
//计算列表的容量
void SLCheckCapacity(SL * pl);
//尾插
void SLPushBack(SL * pl, SLDataType x);
//头插
void SLPushFront(SL * pl, SLDataType x);
//尾删
void SLPopBack(SL * pl);
//头删
void SLPopFront(SL * pl);
//查找
int SLFind(SL pl, SLDataType x);
//在pos位置后面插入一个数据
void SLInsert(SL *pl, int pos, SLDataType x);
//删除pos位置的数据
void SLErase(SL * pl, int pos);
//修改pos位置的数据为x
void SLModify(SL * pl, int pos, SLDataType x);