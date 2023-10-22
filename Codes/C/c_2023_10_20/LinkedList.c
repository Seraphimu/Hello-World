#include <stdio.h>
#include <stdlib.h>

typedef int DataType;
typedef struct SListNode {
	DataType data;
	struct SListNode* next;
}SListNode;

void SListInit(SListNode** pphead) {
	*pphead = NULL;
}


//对乱序的链表排序
void BubbleSort(SListNode** pphead) {
	if (*pphead == NULL) {
		return;
	}
	DataType tmp;
	//控制循环的变量
	SListNode* current = *pphead;
	SListNode* next = NULL;

	while (current != NULL) {
		next = current->next;
		while (next != NULL) {
			if (current->data > next->data) {
				tmp = current->data;
				current->data = next->data;
				next->data = tmp;
			}
			next = next->next;
		}
		current = current->next;
	}
}

//打印链表
void SListPrint(SListNode* phead) {
	SListNode* cur = phead;
	while (cur != NULL) {
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

//分配空间
SListNode* SListNodeBuy(DataType x) {
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	//检查结点是否正常分配
	if (newNode == NULL) {
		printf("Malloc Failed\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

//尾插：
void SListPushBack(SListNode** pphead, DataType x) {
	//先分配空间，如果没有结点就把头指针指向它，如果有就接在当前链表之后
	SListNode* newnode = SListNodeBuy(x);
	if (*pphead == NULL) {
		*pphead = newnode;
	}

	else {
		//找尾结点
		SListNode* tail = *pphead;
		//while (tail->next != NULL)
		while (tail->next) {
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

//头插：
void SListPushFront(SListNode** pphead, DataType x) {
	SListNode* newnode = SListNodeBuy(x);
	newnode->next = *pphead;		//把新结点的下一位指向原来的头结点
	*pphead = newnode;				//把头结点再指向新结点
}

//合并链表
SListNode* SListCombine(SListNode** pplist1, SListNode ** pplist2) {
	SListNode* p1 = *pplist1;
	SListNode* p2 = *pplist2;
	SListNode* p3 = NULL;

	////遍历
	//while (p1 != NULL) {
	//	SListPushBack(&p3, p1->data);
	//	p1 = p1->next;
	//}

	//while (p2 != NULL) {
	//	SListPushBack(&p3, p2->data);
	//	p2 = p2->next;
	//}

	//控制循环
	SListNode* tmp = p2;

	while (p1 != NULL) {
		p2 = tmp;
		while (p2 != NULL) {
			//如果p1 != p2的话，就把p1和p2传递给p3，然后让p3指向p3的下一位
			//如果p1 == p2的话，就把p1或者p2递传给p3，这里传递p1
			if (p1->data != p2->data) {
				SListPushBack(&p1, p1->data);
				SListPushBack(&p2, p2->data);
			}
			else {
				SListPushBack(&p1, p1->data);
			}
			p2 = p2->next;
		}
		tmp = tmp->next;
		p1 = p1->next;
	}

	return p3;
}

//测试合并
void Test4(void) {
	//被合并的链表
	SListNode* plist1 = NULL;
	SListNode* plist2 = NULL;
	//合并到的目标链表
	SListNode* plist3 = NULL;

	//初始化
	SListInit(&plist1);
	SListInit(&plist2);
	SListInit(&plist3);

	//插入数据到plist1
	SListPushBack(&plist1, 1);
	SListPushBack(&plist1, 1);
	SListPushBack(&plist1, 4);
	SListPushBack(&plist1, 5);
	SListPushBack(&plist1, 1);
	SListPushBack(&plist1, 4);

	//插入数据到plist2
	SListPushBack(&plist2, 1);
	SListPushBack(&plist2, 9);
	SListPushBack(&plist2, 1);
	SListPushBack(&plist2, 9);
	SListPushBack(&plist2, 8);
	SListPushBack(&plist2, 1);
	SListPushBack(&plist2, 0);



	plist3 = SListCombine(&plist1, &plist2);

	SListPrint(plist3);
}



int main(void) {
	Test4();

	return 0;
}