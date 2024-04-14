#include "SeqList.h"

void Test1(void) {
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 4);

	//SLPushFront(&sl, 1);
	//SLPushFront(&sl, 9);
	//SLPushFront(&sl, 1);
	//SLPushFront(&sl, 9);
	//SLPushFront(&sl, 8);
	//SLPushFront(&sl, 1);
	//SLPushFront(&sl, 0);


	SLPopFront(&sl);
	//SLPopBack(&sl);

	SLPrint(&sl);
	SLDestory(&sl);
}

int main(void) {
	Test1();

	return 0;
}