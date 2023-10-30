#include "SeqList.h"

void Test(void) {
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

	//SLPopBack(&sl);
	//SLPopFront(&sl);

	SLModify(&sl, 4, 114514);
	int a = SLFind(&sl, 114514);		//不止一次把SLFind函数写成void的返回类型了，下次要注意了
	printf("%d\n", a);
	SLPrint(&sl);
}

int main(void) {
	Test();

	return 0;
}