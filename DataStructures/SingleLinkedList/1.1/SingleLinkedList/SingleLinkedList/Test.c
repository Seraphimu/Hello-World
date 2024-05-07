#include "SL.h"

void TestPushBack()
{
	SL* plist;
	SLInit(&plist);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 4);
	SLPushBack(&plist, 5);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 4);

	//test popback
	SLPopBack(&plist);
	SLPopBack(&plist);

	SLPrint(plist);

}

void TestPushFront()
{
	SL* plist;
	SLInit(&plist);
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 4);
	SLPushFront(&plist, 5);
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 4);

	//test popfront
	SLPopFront(&plist);
	SLPopFront(&plist);

	SLPrint(plist);
}

void TestSLInsert()
{
	SL* plist;
	SLInit(&plist);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 4);
	SLPushBack(&plist, 5);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 4);

	SLInsert(&plist, NULL, 114514);
	SLInsert(&plist, plist->next->next, 1919810);

	SLPrint(plist);
}

void TestSLInsertAfter()
{
	SL* plist;
	SLInit(&plist);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 4);
	//SLPushBack(&plist, 5);
	//SLPushBack(&plist, 1);
	//SLPushBack(&plist, 4);

	SLInsertAfter(plist, 114514);
	SLInsertAfter(plist->next->next, 1919810);

	SLPrint(plist);
}

int main(void)
{
	//TestPushBack();
	TestPushFront();
	//TestSLInsert();
	//TestSLInsertAfter();

	return 0;
}