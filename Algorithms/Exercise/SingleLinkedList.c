#include "SingleLinkedList.h"

//初始化
void SLInit(SL** pphead) {
	*pphead = NULL;
}
//分配空间，只需要x一个参数即可
SL* SLBuyCapacity(SLDataType x) {
	//1. 分配空间
	SL* newnode = (SL*)malloc(sizeof(SL));
	//判断是否分配成功
	if (newnode == NULL) {
		printf("Malloc Failed\n");
		exit(-1);
	}
	//把值给结点
	newnode->data = x;
	//置成空，这就是尾结点的标志
	newnode->next = NULL;
	//返回结点
	return newnode;
}
//新版的尾插和头插
//1. 新版的尾插
void SLPushBack(SL** pphead, SLDataType x) {
	//调用分配结点的函数
	SL* newnode = SLBuyCapacity(x);
	
	//判断头结点是否为空
	//1. 为空就把新结点赋给头结点
	//2. 不为空就找尾结点，然后把新结点接在尾结点的后面
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else {
		SL* tail = *pphead;
		//tail->next即tail的指针域，待tail的指针域为空的时候，就到尾结点了，指针域为空是尾结点的标志
		while (tail->next) {
			tail = tail->next;
		}
		//把tail->next赋为newnode，因为newnode在分配空间的函数——SLBuyCapacity()中，指针域已经被置为空了，所以这里无需再次置空。
		tail->next = newnode;
	}
}
//2. 新版的头插
void SLPushFront(SL** pphead, SLDataType x) {
	//分配结点
	SL* newnode = SLBuyCapacity(x);
	//判断头指针是否为空
	//1. 为空，则把新结点赋给它
	//2. 不为空，则把新结点的指针域赋为头指针（把新结点接在最前面），然后把头指针指向新结点（让头指针一直指向最开始的结点）
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else {
		newnode->next = *pphead;
		*pphead = newnode;
		//因为写新版的头插时又差点出错，所以放在这里起个警视作用吧。
		//这是闭环了
		//经典的错误，标准的零分
		//(*pphead)->next = newnode;
	}
}
//尾删
void SLPopBack(SL** pphead) {

}
//头删
void SLPopFront(SL** pphead) {

}
//在pos前面插入
void SLInsert(SL ** pphead, SL * pos, SLDataType x) {
	//pphead是二级指针，指向的是链表的头指针，如果为空，那么链表就没有意义了。
	assert(pos && pphead);
	//如果要pos位置与头指针相等，可以直接使用头插
	//如果pos的位置是尾指针，在其前面插入和其他除了头指针以外的地方操作相同
	if (*pphead == pos) {
		SLPushFront(pphead, x);
	}
	else {
		SL* newnode = SLBuyCapacity(x);
		//找指针域指向pos的结点，即pos前的一个结点
		SL* pre_pos = *pphead;
		
		//遍历
		while (pre_pos->next != pos) {
			pre_pos = pre_pos->next;
		}
		//把新结点的指针域指向pos
		//把pos结点的前一个结点的指针域指向新结点
		newnode->next = pos;
		pre_pos->next = newnode;
	}
}
//在pos后面插入
void SLInsertAfter(SL* pos, SLDataType x) {
	assert(pos);
	//pos指针和头结点尾结点相等时，和其他结点操作相同
	//1. 因为是在后面插入，所以头结点的特性对此没有一点影响
	//2. 如果pos和尾结点相等也没有关系，因为我要先把新结点的指针域指向pos指针域指向的位置，
	//当尾结点为空时，即pos->next为空，newnode->next = pos->next等价于newnode->next = NULL
	//完全没有影响，因为在尾上插入时newnode这个结点本来就是尾结点，指针域必然指向NULL
	SL* newnode = SLBuyCapacity(x);
	//把新结点指向pos的下一个结点，即在pos后插入数据
	newnode->next = pos->next;
	//用把pos的下一位设置为新结点，插入操作完成
	pos->next = newnode;
}
//删除pos位置
void SLErase(SL ** pphead, SL* pos) {
	assert(*pphead && pos);
	//如果头指针和要删除的位置的指针相等，直接调用头删函数
	if (*pphead == pos) {
		SLPopFront(pphead);
	}
	//位置指针与头指针不相等则做其他情况处理
	// 1. 找到pos前一个指针pre_pos
	// 2. 把pre_pos的指针域指向pos的指针域，就是pos结点的下一个结点
	// 即：pre_pos->next = pos->next;
	// 3. 把pos释放
	// 其中当pos为尾指针时，pos->next == NULL，
	// 所以pre_pos->next = pos->next等价于pre_pos->next = NULL，故可以把pos为尾指针的情况做一般情况讨论
	else {
		SL* pre_pos = *pphead;
		while (pre_pos->next != pos) {
			pre_pos = pre_pos->next;
		}
		pre_pos->next = pos->next;
		free(pos);
	}
}
//删除pos后面的位置
void SLEraseAfter(SL* pos) {
	//pos为尾结点时，后面没有结点，删除它没有意义
	//所以只能到尾结点的前一个结点
	assert(pos && pos->next);
	//pos的位置不影响该删除操作
	//直接把pos的指针域指向pos->next的指针域即可
	SL* tmp = pos->next;
	pos->next = pos->next->next;
	free(tmp);
}


//打印
void SLPrint(SL* phead) {
	assert(phead);
	SL* tail = phead;
	while (tail) {
		printf("%d ", tail->data);
		tail = tail->next;
	}
}












//老版的尾插和头插
////尾插
//void SLPushBack(SL** pphead, SLDataType x) {
//	//1. 分配空间
//	SL* newnode = (SL*)malloc(sizeof(SL));
//	//判断是否分配成功
//	if (newnode == NULL) {
//		printf("Malloc Failed\n");
//		exit(-1);
//	}
//	//把值给结点
//	newnode->data = x;
//	//置成空，这就是尾结点的标志
//	newnode->next = NULL;
//
//	//2. 接数据
//	//如果头指针是空的就把这个节点给头指针
//	if (*pphead == NULL) {
//		*pphead = newnode;
//	}
//	//如果有其他元素，就找尾结点，然后把newnode接上去
//	else {
//		//从头开始往下遍历，直到tail->next == NULL，此时tail就是尾结点
//		SL* tail = *pphead;
//		while (tail->next) {
//			tail = tail->next;
//		}
//		//找到尾结点之后，开始接数据，把tail->next赋为newnode，然后把newnode->next置空
//		tail->next = newnode;
//		//newnode->next = NULL;
//	}
//}
//
//
////头插
//void SLPushFront(SL** pphead, SLDataType x) {
//	//分配空间
//	SL* newnode = (SL*)malloc(sizeof(SL));
//	if (newnode == NULL) {
//		printf("Malloc Failed\n");
//		exit(-1);
//	}
//	newnode->data = x;
//	newnode->next = NULL;
//
//	//头节点为空，把新结点赋给它
//	if (*pphead == NULL) {
//		*pphead = newnode;
//	}
//	//若不为空，则直接把新结点接到第一个结点上，然后让头指针指向新结点
//	else {
//		newnode->next = *pphead;
//		*pphead = newnode;
//		//这是闭环了
//		//经典的错误，标准的零分
//		//(*pphead)->next = newnode;
//	}
//}

SL * SLReverse(SL * phead) {
    SL* p = NULL;
    SL* q = phead;
    SL* tmp;
    while (q)
    {
        tmp = q->next;
        q->next = p;
        p = q;
        q = tmp;
    }

    return p;
}
