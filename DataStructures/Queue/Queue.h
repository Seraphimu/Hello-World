#include <stdio.h>
#include <stdlib.h>
#define MAX 6
#define NO -65535
typedef int QElemType;
typedef struct SqQueue
{
    QElemType data[MAX];
    int front;
    int rear;
}SqQueue;

void InitQueue(SqQueue * Q);
int IsFull(SqQueue * Q);
int IsEmpty(SqQueue * Q);
void EnQueue(SqQueue * Q, QElemType e);
void DeQueue(SqQueue * Q);
void MakeEmpty(SqQueue * Q);
int LengthQueue(SqQueue Q);
