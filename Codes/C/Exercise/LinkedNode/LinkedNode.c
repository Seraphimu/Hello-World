#include "LinkedNode.h"

//初始化
void LNInit(LNode ** pphead) {
	*pphead = NULL;
}
//分配空间
LNode * LNBuyCapacity(DataType x) {
	LNode * newnode = (LNode *)malloc(sizeof(LNode));
	
	if (newnode == NULL) {
		printf("Malloc Failed!\n");
		exit(-1);
	}
	else {
		newnode->data = x;
		newnode->next = NULL;	
	}
	
	return newnode;
}
//打印
void LNPrint(LNode * phead) {
    LNode * cur = phead;
    while (cur) {
        printf("%d ", cur->data);
        cur = cur->next; 
    }
    printf("\n");
}
//尾插
void LNPushBack(LNode ** pphead, DataType x) {
	LNode * newnode = LNBuyCapacity(x);
	if (*pphead == NULL) {
		*pphead = newnode;	
	}
	else {
		LNode * tail = *pphead;
		while (tail->next) {
			tail = tail->next;	
		}
		tail->next = newnode;
	}
}

void LNPushFront(LNode ** pphead, DataType x) {
    LNode * newnode = LNBuyCapacity(x);
    
    if (*pphead == NULL) {
        *pphead = newnode; 
    }
    else {
        newnode->next = *pphead;
        *pphead = newnode;
    }
}

void LNPopBack(LNode ** pphead) {
    assert(*pphead);
    
    LNode * pre_tail = *pphead;
    //找到尾结点的前一个结点
    while (pre_tail->next->next) {
        pre_tail = pre_tail->next;
    }
    free(pre_tail->next);
    pre_tail->next = NULL;
}
