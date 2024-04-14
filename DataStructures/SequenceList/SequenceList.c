#include "SequenceList.h"

//初始化，将a置为空，把size和capacity置为0
void SLInit(SL * pl)
{
    pl->a = NULL;
    pl->size = 0;
    pl->capacity = 0;
}

//销毁表
void SLDestory(SL * pl)
{
    free(pl);
    SLInit(pl);
}

//打印
void SLPrint(SL sl)
{
    int i;
    for (i = 0; i < sl.size; i++) {
        printf("%d ", sl.a[i]);
    }
    printf("\n");
}

//检查是否需要扩容
void SLCheckCapacity(SL * pl)
{
    //元素为0个或者满了的情况，需要扩容
    if (pl->size == pl->capacity) {
        int newcapacity = pl->capacity == 0 ? 4 : pl->capacity * 2;
        SLDataType * tmp = (SLDataType *)realloc(pl->a, sizeof(SLDataType) * newcapacity);
        if (tmp == NULL) {
            printf("Realloc failed\n");
            exit(-1);
        }
        pl->a = tmp;
        pl->capacity = newcapacity;
    }
}


void SLPushBack(SL * pl, SLDataType x)
{
    SLCheckCapacity(pl);
    pl->a[pl->size++] = x;
    //或者这么写
    // pl->a[pl->size] = x;
    // pl->size++;
}

void SLPushFront(SL * pl, SLDataType x)
{
    SLCheckCapacity(pl);
    //数据个数+1
    pl->size++;
    
    int i;
    for (int i = pl->size - 1; i >= 1; i--) {
        pl->a[i] = pl->a[i - 1];
    }
    pl->a[0] = x;

    ////也可以这么写
    // int end = pl->size;
    // while (end != 0) {
    //     pl->a[end] = pl->a[end - 1];
    //     end--;
    // }
    // pl->a[0] = x;
    // pl->size++;

    //这个戳啦，这就等于把后面的元素都变成了第一个元素的值了。留着丢人用。
    // //后移
    // int i;
    // for (i = 0; i < pl->size; i++) {
    //     pl->a[i + 1] = pl->a[i];
    // }
}

//尾删
void SLPopBack(SL * pl)
{
    pl->a[pl->size - 1] = 0;
    pl->size--;
}

//头删
void SLPopFront(SL * pl)
{
    int i;
    for (i = 1; i < pl->size; i++) {
        pl->a[i - 1] = pl->a[i];
    }
    pl->size--;
}