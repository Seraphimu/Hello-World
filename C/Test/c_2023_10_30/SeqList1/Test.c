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

	SLPrint(&sl);
}

int main(void) {
	Test();

	return 0;
}