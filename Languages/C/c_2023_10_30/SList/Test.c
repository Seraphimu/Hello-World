#include "SList.h"

void Test1(void) {
	//不初始化它就是一个随机值，会对后面的函数造成干扰
	SLTNode* plist;
	SLTInit(&plist);
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 4);

	//SLTErase(&plist, plist);
	SLTEraseAfter(plist->next);
	//SLTInsert(&plist, plist->next->next->next->next->next, 114514);
	//SLTInsertAfter(plist, 114514);
	//printf("%p\n", SLTFind(plist, 114514));
	//printf("%p\n", plist->next);
	////SLTPushFront(&plist, 1);
	////SLTPushFront(&plist, 9);
	////SLTPushFront(&plist, 1);
	////SLTPushFront(&plist, 9);
	////SLTPushFront(&plist, 8);
	////SLTPushFront(&plist, 1);
	////SLTPushFront(&plist, 0);
	////SLTPopFront(&plist);
	////SLTPopFront(&plist);
	////SLTPopFront(&plist);
	////SLTPopBack(&plist);
	////SLTPopBack(&plist);
	////SLTPopBack(&plist);

	SLTPrint(plist);
}

int main(void) {
	Test1();

	return 0;
}