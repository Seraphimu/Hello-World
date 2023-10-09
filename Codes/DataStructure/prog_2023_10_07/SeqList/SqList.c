#include "SqList.h"

//你是一个……一个……一个……意义不明的函数啊啊啊啊啊………………（恼
Status visit(ElemType c)
{
    printf("%d\n", c);
    return OK;
}

//初始化顺序表，把长度置为0
Status InitList(SqList * L)
{
    L->length = 0;
    if (L->length == 0) {
        return OK;
    }
    else {
        return ERROR;
    }
}

//检查顺序表是否为初始状态
//说穿了就是检查长度是否为0
Status ListEmpty(SqList L)
{
    if (L.length == 0) {
        return TRUE;
    }
    else {
        return FALSE;
    }
}

//将线性表置为空表
Status ClearList(SqList * L)
{
    L->length = 0;
    if (L->length == 0) {
        return OK;
    }
    else {
        return ERROR;
    }
}

//返回线性表中的元素个数
int ListLength(SqList L)
{
    return L.length;
}

//返回第i个数的值，即下标为i - 1的值
Status GetElem(SqList L, int i, ElemType * e)
{
    //当i的值小于1，超出数组长度，顺序表长度为0时，返回错误
    if (i > L.length || i < 1 || L.length == 0) {
        return ERROR;
    }
    else {
        //因为是第i个元素，所以对应的是下标为i - 1的元素
        *e = L.data[i - 1];
        return OK;
    }
}

//返回第一个与e相等的序号（下标 + 1）
int LocalElem(SqList L, int i, ElemType e)
{
    //如果顺序表为空则返回0
    if (L.length == 0) {
        return 0;
    }
    //遍历顺序表
    for (i = 0; i < L.length; ++i) {
        if (e == L.data[i]) {
            return i + 1;
        }
    }
    //找不到返回0
    if (i >= L.length) {
        return 0;
    }
}

//在第i个位置上插入e
Status ListInsert(SqList * L, int i, ElemType e)
{
    L->length++;
    if (L->length == 0 || i > L->length || i < 1) {
        return ERROR;
    }
    int j;

    for (j = L->length - 1; j > i; --j) {
        L->data[j] = L->data[j - 1];
    }
}