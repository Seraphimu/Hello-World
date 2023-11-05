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
