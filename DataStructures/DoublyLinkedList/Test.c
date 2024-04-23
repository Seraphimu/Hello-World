#include "SingleLinkedList.h"

void Test(void) {
	SL* plist;
	SLInit(&plist);
    
    SLPushFront(&plist, 0);
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 8);
	SLPushFront(&plist, 9);
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 9);
	SLPushFront(&plist, 1);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 4);
	SLPushBack(&plist, 5);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 4);


	// SLEraseAfter(plist->next->next->next);
	// SLPrint(plist);



	//SLInsert(&plist, plist->next->next->next->next, 114514);
	//SLInsert(&plist, plist, 114514);

	//SLErase(&plist, plist->next->next->next->next);
	//SLInsertAfter(plist, 114514);
	//SLInsertAfter(plist->next->next->next->next->next, 114514);

	SLPrint(plist);

}

int main(void) {
	Test();

	return 0;
}