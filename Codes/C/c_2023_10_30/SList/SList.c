#include "SList.h"

//初始化
void SLTInit(SLTNode** pphead) {
	*pphead = NULL;
}
//打印链表
//从头指针(phead)遍历到尾指针
void SLTPrint(SLTNode* phead) {
	assert(phead);
	SLTNode* tmp = phead;
	while (tmp) {
		printf("%d->", tmp->data);
		tmp = tmp->next;
	}
	printf("NULL\n");
}
//分配空间
SLTNode* BuySListNode(SLTDataType x) {
	SLTNode* tmp = (SLTNode*)malloc(sizeof(SLTNode));
	if (tmp == NULL) {
		printf("Malloc Failed\n");
		exit(-1);
	}
	tmp->data = x;
	tmp->next = NULL;

	return tmp;
}
//在pos之前插入x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x) {
	assert(*pphead && pos);
	if (pos == *pphead) {
		SLTPushFront(pphead, x);
	}
	else {
		SLTNode* tmp = *pphead;

		while (tmp->next != pos) {
			tmp = tmp->next;
		}
		SLTNode* newnode = BuySListNode(x);
		newnode->next = pos;
		tmp->next = newnode;
	}
}

//在pos之后插入
void SLTInsertAfter(SLTNode* pos, SLTDataType x) {
	assert(pos);
	if (pos->next == NULL) {
		SLTPushBack(&pos, x);
	}
	else {
		//这一步，之前写成了tmp = pos->next，要注意
		SLTNode* tmp = BuySListNode(x);
		tmp->next = pos->next;
		pos->next = tmp;
	}
}

//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x) {
	SLTNode* newnode = BuySListNode(x);
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else {
		SLTNode* tail = *pphead;
		while (tail->next) {
			tail = tail->next;
		}
		tail->next = newnode;
		newnode->next = NULL;
	}
}

//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x) {
	SLTNode* newnode = BuySListNode(x);
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else {
		newnode->next = *pphead;
		*pphead = newnode;
	}
}

//尾删
void SLTPopBack(SLTNode** pphead) {
	assert(*pphead);
	SLTNode* tail = *pphead;
	while (tail->next->next) {
		tail = tail->next;
	}
	free(tail->next);
	tail->next = NULL;
}

//头删
void SLTPopFront(SLTNode** pphead) {
	assert(*pphead);
	SLTNode* tmp = *pphead;
	(*pphead) = (*pphead)->next;
	free(tmp);
}

//查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x) {
	assert(phead);
	SLTNode* tmp = phead;

	while (tmp) {
		if (tmp->data == x) {
			return tmp;
		}
		tmp = tmp->next;
	}

	return NULL;
}

// 删除pos位置
void SLTErase(SLTNode** pphead, SLTNode* pos) {
	assert(*pphead && pos);
	if (*pphead == pos) {
		SLTPopFront(pphead);
	}
	else {
		SLTNode* prev = *pphead;
		while (prev->next != pos) {
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}

// 删除pos的后一个位置
void SLTEraseAfter(SLTNode* pos) {
	assert(pos && pos->next);
	SLTNode* tmp = pos->next;
	pos->next = pos->next->next;
	free(tmp);
	tmp = NULL;
}