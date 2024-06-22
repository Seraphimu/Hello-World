#include "Sorting.h"

void BubbleSort(DataType Array[], int Length)
{
	int i, j;

	for (i = 0; i < Length; i++)
	{
		//让j和j+1比较，j = Length - 2, j + 1 = Length - 1，正好是最后一位，
		//如果不加-1，就越界力（悲
		for (j = 0; j < Length - 1 - i; j++)		
		{
			if (Array[j] > Array[j + 1])
			{
				Swap(&Array[j], &Array[j + 1]);
			}
		}

		for (int k = 0; k < Length; k++)
		{
			printf("%d ", Array[k]);
		}
		printf("\n");
	}

	////这是一趟，把最大的一个数放在了末尾，第二趟再次从起始位置开始，比到第Length - 1 - 1即可
	////第三趟到Length - 1 - 1 - 1即可
	//for (i = 0; i < Length - 1; i++)
	//{
	//	if (Array[i] > Array[i + 1])
	//	{
	//		Swap(&Array[i], &Array[i + 1]);
	//	}
	//}
}