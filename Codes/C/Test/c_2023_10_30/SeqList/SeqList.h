#pragma once
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
//插入， 从pos位插入
void SLInsert(SL* pl, int pos, SLDataType x);
//删除
void SLErase(SL* pl, int pos);
//头插
void SLPushFront(SL* pl, SLDataType x);
//尾插
void SLPushBack(SL* pl, SLDataType x);
//打印
void SLPrint(const SL* pl);
//头删
void SLPopFront(SL* pl);
//尾删
void SLPopBack(SL* pl);
//改变
void SLModify(SL* pl, int pos, SLDataType x);
//查找，找到了返回下标，找不到返回-1
int SLFind(const SL* pl, SLDataType x);