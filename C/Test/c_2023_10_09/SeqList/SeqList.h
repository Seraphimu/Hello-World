#include <stdio.h>
#include <stdlib.h>

typedef int SLDataType;
typedef struct SeqList {
    SLDataType * a;
    int size;           //顺序表数据的个数
    int capacity;       //顺序表的实际长度
}SL;

void SeqListTest1(void);         //测试
void SeqListInit(SL * ps);          //初始化
void SeqListPushBack(SL * ps, SLDataType x);
