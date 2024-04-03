#include "SingleLinkedList.h"

//初始化

void SLInit(SL ** pphead)
{
    *pphead = NULL;
}

SL * SLBuyCapacity(SLDataType x)
{
    SL * newNode = (SL *)malloc(sizeof(SL));        //给新结点分配空间
    
    if (newNode == NULL)                            //判断是否分配成功
    {
        printf("Malloc Failed!\n");
        exit(-1);
    }
    else
    {
        newNode->data = x;                         //给结点的数据域赋值
        newNode->next = NULL;                      //给结点的指针域赋值
    }

    return newNode;                                //返回该结点
}

void SLPushBack(SL ** pphead, SLDataType x)
{
    //没有节点的情况
    if (*pphead == NULL)
    {
        *pphead = SLBuyCapacity(x);     //将头指针指向当前分配的新结点
    }
    //其他情况
    else
    {
        SL * tail = *pphead;            //通过tail遍历链表，找到尾结点
        SL * newNode = SLBuyCapacity(x);//分配一个新结点
        while (tail->next != NULL)      //遍历
        {
            tail = tail->next;          //使tail指向下一个结点
        }
        tail->next = newNode;           //把新分配的结点接在表尾
    }
}

SL* FindPositionX(SL * phead, SLDataType x)
{
    SL * cur = phead;
    if (cur == NULL || cur->data == x)      //如果链表为空或者到了尾结点，返回NULL，发现相同的数，返回该地址
        return cur;
    FindPositionX(cur->next, x);
}

// SL* FindPositionX(SL * phead, SLDataType x)
// {
//     SL * cur = pphead;

//     while (cur != NULL)
//     {
//         if (cur->data == x)
//             break;
//         else
//             cur = cur->next;
//     }
    
//     return cur;
// }


void SLPrint(SL * phead)
{
    SL * cur = phead;
    
    while (cur != NULL)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }

    printf("\n");
}
