#include "LinkedNode.h"

void LNInit(LNode ** pphead) {
	*pphead = NULL;
}

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
