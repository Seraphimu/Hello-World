#include "SeqList.h"

void SeqListInit(SL * ps)       //初始化，把指针赋为NULL，把顺序表的个数和实际长度置为0
{
    ps->a = NULL;
    ps->size = 0;
    ps->capacity = 0;
}

void SeqListPushBack(SL * ps, SLDataType x)
{
    //判断顺序表是否为空或者为满
    if (ps->size == ps->capacity) {
        //如果为空，刚给一个初始的值，比如4，如果为满，则扩大2倍
        int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
        //创建一个SLDataType类型的指针，然后开辟空间赋给ps->a，
        //一开始不明白，在想为什么不是分配内存给结构体，后来才想明白，存放数据的地方是结构体中的a这个指针，
        //所以要分配给它
        SLDataType * tmp = (SLDataType *)realloc(ps->a, sizeof(SLDataType *) * 2);
        //分配内存失败则退出这个函数  
        if (tmp == NULL) {
            printf("Realloc fail\n");
            exit(-1);
        }
        
        //分配成功则开搞
        ps->capacity = newcapacity;
        ps->a = tmp;
    }
    ps->size++;
    *(ps->a + ps->size) = x;
}
