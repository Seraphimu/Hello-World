#include "LinkedNode.h"

void Test(void) {
	LNode * plist;
	
	LNInit(&plist);
//	LNPushBack(&plist, 1);
//	LNPushBack(&plist, 1);
//	LNPushBack(&plist, 4);
//	LNPushBack(&plist, 5);
//	LNPushBack(&plist, 1);
//	LNPushBack(&plist, 4);
	LNPushFront(&plist, 4);
	LNPushFront(&plist, 1);
	LNPushFront(&plist, 5);
	LNPushFront(&plist, 4);
	LNPushFront(&plist, 1);
	LNPushFront(&plist, 1);

    LNPopBack(&plist);
    
    LNPrint(plist);
}

int main(void) {
	Test();	

	return 0;
}
