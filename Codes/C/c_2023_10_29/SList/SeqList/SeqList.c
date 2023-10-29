#include "SeqList.h"

//初始化，将a置为空，把size和capacity置为0
void SeqListInit(SL* pl)
{
    assert(pl);
    pl->a = NULL;
    pl->size = 0;
    pl->capacity = 0;
}

//销毁表
void SeqListDestory(SL* pl)
{
    assert(pl);
    free(pl->a);
    pl->a = NULL;
}

//打印
void SeqListPrint(SL sl)
{
    assert(&sl);
    int i;
    for (i = 0; i < sl.size; i++) {
        printf("%d ", sl.a[i]);
    }
    printf("\n");
}

//检查是否需要扩容
void SeqListCheckCapacity(SL* pl)
{
    assert(pl);
    //元素为0个或者满了的情况，需要扩容
    if (pl->size == pl->capacity) {
        int newcapacity = pl->capacity == 0 ? 4 : pl->capacity * 2;
        SLDataType* tmp = (SLDataType*)realloc(pl->a, sizeof(SLDataType) * newcapacity);
        if (tmp == NULL) {
            printf("Realloc failed\n");
            exit(-1);
        }
        pl->a = tmp;
        pl->capacity = newcapacity;
    }
}


void SeqListPushBack(SL* pl, SLDataType x)
{
    assert(pl);
    SeqListCheckCapacity(pl);
    pl->a[pl->size++] = x;
    //或者这么写
    // pl->a[pl->size] = x;
    // pl->size++;
}

void SeqListPushFront(SL* pl, SLDataType x)
{
    assert(pl);
    SeqListCheckCapacity(pl);
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
void SeqListPopBack(SL* pl)
{
    assert(pl && pl->size > 0);
    pl->size--;
}

//头删
void SeqListPopFront(SL* pl)
{
    assert(pl && pl->size > 0);
    int i;
    for (i = 1; i < pl->size; i++) {
        pl->a[i - 1] = pl->a[i];
    }
    pl->size--;
}

//查找，找到了返回下标，找不到返回-1
int SeqListFind(SL pl, SLDataType x)
{
    assert(&pl);
    int i;
    for (i = 0; i < pl.size; i++) {
        if (pl.a[i] == x)
            return i;
    }
    if (i == pl.size) {
        return -1;
    }
}
//在pos处插入一个数据
void SeqListInsert(SL* pl, int pos, SLDataType x)
{
    assert(pl && pos <= pl->size && pl->size >= 0);
    int end = pl->size;

    //把所有元素后移一位
    while (end > pos) {
        pl->a[end] = pl->a[end - 1];
        end--;
    }
    pl->a[pos] = x;
    pl->size++;
}
//删除pos位置的数据
void SeqListErase(SL* pl, int pos)
{
    assert(pl && pos >= 0 && pos < pl->size);
    int i = pos;
    //2 = 2 + 1, 3 = 3 + 1, 4 = 4 + 1
    while (i < pl->size - 1) {
        pl->a[i] = pl->a[i + 1];
        i++;
    }
    pl->size--;
}
//修改pos位置的数据为x
void SeqListModify(SL* pl, int pos, SLDataType x)
{
    assert(pl && pos >= 0 && pos < pl->size);
    pl->a[pos] = x;
}