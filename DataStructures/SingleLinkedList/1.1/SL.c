#include "SL.h"

//初始化
void SLInit(SL** pphead)
{
	//传表头的地址的地址过来，然后解引用对其地址进行修改
	*pphead = NULL;
}
//分配空间
SL* SLBuyCapacity(SLDataType x)
{
	SL* newNode = (SL*)malloc(sizeof(SL));

	if (newNode == NULL)
	{
		exit(-1);
		printf("Malloc Failed!\n");
	}

	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

//尾插
void SLPushBack(SL** pphead, SLDataType x)
{
	//如果是空表就创建一个节点让头指针指向它
	if (*pphead == NULL)
	{
		*pphead = SLBuyCapacity(x);
	}
	else
	{
		SL* tail = *pphead;
		//找到最后一个节点
		while (tail->next)
		{
			tail = tail->next;
		}
		//指向新节点
		tail->next = SLBuyCapacity(x);
	}
}
//头插
void SLPushFront(SL** pphead, SLDataType x)
{
	//Create a new node to insert at the head of list.
	SL* newNode = SLBuyCapacity(x);
	//newNode pointer field to *pphaed (head of the list)
	newNode->next = *pphead;
	//head pointer to newNode
	*pphead = newNode;
}
//在pos前面插入
void SLInsert(SL** pphead, SL* pos, SLDataType x)
{
	//pos == NULL, then can insert before the tail node.
	//if (pos == NULL)
	//{
	//	exit(-1);
	//}
	if (pos == *pphead)
	{
		SLPushFront(pphead, x);
	}
	else
	{
		SL* cur = *pphead;
		SL* newNode = SLBuyCapacity(x);
		//cur is not a null pointer and cur->next not equal pos, cur = cur->next
		//while loop will be break when the cur is null or the pos == cur->next
		while (cur && cur->next != pos)
		{
			cur = cur->next;
		}
		//insert newNode when the cur->next == pos, and cur not equal null
		if (cur != NULL && cur->next == pos)
		{
			newNode->next = pos;
			cur->next = newNode;
		}
	}
}
//在pos后面插入
void SLInsertAfter(SL* pos, SLDataType x)
{
	if (pos == NULL)
	{
		exit(-1);
	}
	SL* newNode = SLBuyCapacity(x);
	pos->next = newNode;
}

//尾删
void SLPopBack(SL** pphead)
{
	if (*pphead == NULL)
	{
		printf("linked list is null\n");
		exit(-1);
	}
	SL* tail = *pphead;

	//previous of the tail node is tail->next->next
	//tail->next is tail node
	//tail->next->next is null
	while (tail->next->next)
	{
		tail = tail->next;
	}

	SL* tmp = tail->next;
	tail->next = tmp->next;
	free(tmp);
}
//头删
void SLPopFront(SL** pphead)
{
	if (*pphead == NULL)
	{
		exit(-1);
	}

	SL* tmp = *pphead;
	*pphead = tmp->next;
	free(tmp);
}
//删除pos位置
void SLErase(SL** pphead, SL* pos);
//删除pos后面的位置
void SLEraseAfter(SL* pos);

//打印
void SLPrint(SL* phead)
{
	SL* cur = phead;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}