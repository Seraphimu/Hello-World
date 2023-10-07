#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20

typedef int ElemType;
typedef int Status;
typedef struct {
    ElemType data[MAXSIZE];
    int length;
}SqList;

Status visit(ElemType c);
Status InitList(SqList * L);
Status ListEmpty(SqList L);
Status ClearList(SqList * L);
int ListLength(SqList L);