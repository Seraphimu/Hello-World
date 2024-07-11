#include "SingleLinkedList.h"

// 面试题 02.03. 删除中间节点
// 若链表中的某个节点，既不是链表头节点，也不是链表尾节点，则称其为该链表的「中间节点」。
// 假定已知链表的某一个中间节点，请实现一种算法，将该节点从链表中删除。
void deleteMidNode(SL* pos)
{
	//判断位置是否为空
	if (pos == NULL)
		exit(-1);

	//把pos->next的数据和指针域赋给pos，然后干掉pos->next
	SL* tmp = pos->next;
	pos->data = tmp->data;
	pos->next = tmp->next;
	free(tmp);
}

//反转链表
SL* SLReverse(SL* phead)
{
	SL* p = NULL;
	SL* q = phead;
	SL* tmp = NULL;

	//Linked List is NULL
	if (phead == NULL)
	{
		printf("Linked List is NULL\n");
		return NULL;
	}
	//Linked List has only one Node
	else if (phead->next == NULL)
	{
		return q;
	}
	//Normal Condition
	else
	{
		//in the end q and tmp will be NULL (at least has 2 nodes)
		while (q)
		{
			tmp = q->next;
			q->next = p;
			p = q;
			q = tmp;
		}



		return p;

		// In this code segment q->next = p, but p is null pointer, so q->next is null
		// Then tmp = q->next means tmp = null
		// Then p = q means p = null
		// and the end q = tmp means q = null
		// all pointers are NULL!!!!!!!!!!!
		//while (q)
		//{
		//	q->next = p;
		//	tmp = q->next;
		//	p = q;
		//	q = tmp;
		//}

	}




	//// error: tmp will pointer to a q(NULL)->next
	//q->next = p;
	//q = tmp;
	//tmp = q->next;
	//p = q;
}


//倒数第k个数
SL* SLKth(SL* phead, int k)
{
	//p is the pre pointer
	//q is the kth
	SL* p = phead;
	SL* q = phead;

	if (phead == NULL)
	{
		printf("List is NULL\n");
		return NULL;
	}
	
	//make the p move k step
	while (k)
	{
		
		k--;
		p = p->next;
	}

	//then make the q and p move together.
	//loop is broken when p is null pointer.
	while (p)
	{
		p = p->next;
		q = q->next;
	}

	return q;
}