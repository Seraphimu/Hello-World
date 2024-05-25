#include "SList.h"

void Test(void) {
	SLTNode* plist;
	SLTInit(&plist);
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 4);
	//SLTPushFront(&plist, 0);
	//SLTPushFront(&plist, 1);
	//SLTPushFront(&plist, 8);
	//SLTPushFront(&plist, 9);
	//SLTPushFront(&plist, 1);
	//SLTPushFront(&plist, 9);
	//SLTPushFront(&plist, 1);

	//SLTInsert(&plist, plist->next->next->next->next, 114514);
	//SLTInsert(&plist, plist, 114514);

	SLTInsertAfter(plist, 114514);
	SLTInsertAfter(plist->next->next->next->next->next, 114514);
}

int main(void) {
	Test();

	return 0;
}