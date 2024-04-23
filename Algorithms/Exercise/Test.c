#include "SingleLinkedList.h"

void Test(void) {
	SL* plist;
	SLInit(&plist);
    
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 4);
	SLPushBack(&plist, 5);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 4);

    SL * ret = SLReverse(plist);

	// SLEraseAfter(plist->next->next->next);
	// SLPrint(plist);



	//SLInsert(&plist, plist->next->next->next->next, 114514);
	//SLInsert(&plist, plist, 114514);

	//SLErase(&plist, plist->next->next->next->next);
	//SLInsertAfter(plist, 114514);
	//SLInsertAfter(plist->next->next->next->next->next, 114514);

	SLPrint(ret);

}

int main(void) {
	Test();

	return 0;
}
