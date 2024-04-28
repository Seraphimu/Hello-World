#include "Sorting.h"

void TestSelectionSort(void)
{
	DataType Array[] = { 50, 10, 90, 30, 70, 40, 80, 60, 20 };
	int Length = sizeof(Array) / sizeof(DataType) - 1;
	SelectionSort(Array, Length);
}

void TestBubbleSort(void)
{
	DataType Array[] = { 50, 10, 90, 30, 70, 40, 80, 60, 20 };
	int Length = sizeof(Array) / sizeof(DataType) - 1;
	BubbleSort(Array, Length);
}

int main(void)
{
	//TestSelectionSort();
	TestBubbleSort();

	return 0;
}