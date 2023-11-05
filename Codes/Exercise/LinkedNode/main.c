#include "LinkedNode.h"

void Test(void) {
	LNode * plist;
	
	LNInit(&plist);
	LNPushBack(&plist, 1);
	LNPushBack(&plist, 1);
	LNPushBack(&plist, 4);
	LNPushBack(&plist, 5);
	LNPushBack(&plist, 1);
	LNPushBack(&plist, 4);
}

int main(void) {
	Test();	

	return 0;
}
