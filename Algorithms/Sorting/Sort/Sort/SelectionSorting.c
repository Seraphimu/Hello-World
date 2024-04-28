#include "Sorting.h"

void SelectionSort(DataType Array[], int Length)
{
	int i, j, min;

	for (i = 0; i < Length; i++)
	{
		min = i;
		for (j = i + 1; j < Length; j++)
		{
			if (Array[j] < Array[min])		//让min保存较小值
			{
				min = j;
			}
		}
		Swap(&Array[i], &Array[min]);	//把最小的放在当前序列的最前面

		for (int k = 0; k < Length; k++)
		{
			printf("%d ", Array[k]);
		}
		printf("\n");
	}


}