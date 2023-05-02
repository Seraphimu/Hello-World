#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main(void)
//{
//	printf("Hello World!\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//void BubbleSort(int* arr, int len);
//void Swap(int* a, int* b);
//int main(void)
//{
//	int n, * arr;
//	int i;
//	scanf("%d", &n);
//	arr = (int*)malloc(sizeof(int) * n);
//	for (i = 0; i < n; i++)
//		scanf("%d", arr + i);
//	BubbleSort(arr, n);
//	for (i = 0; i < n; i++)
//		printf("%d ", *(arr + i));
//
//	return 0;
//}
//
//void BubbleSort(int* arr, int len)
//{
//	int i, j;
//	for (i = 0; i < len - 1; i++)
//		for (j = 0; j < len - 1 - i; j++)
//			if (*(arr + j) < *(arr + j + 1))
//				Swap(arr + j, arr + j + 1);
//}
//
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}


//#include <stdio.h>
//void SelectionSort(int arr[], int len);
//void Swap(int* a, int* b);
//int main(void)
//{
//	int arr[100];
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	SelectionSort(arr, n);
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}
//
//void SelectionSort(int arr[], int len)
//{
//	int i, j;
//	int max;
//	for (i = 0; i < len - 1; i++)
//	{
//		max = i;
//		for (j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		Swap(&arr[max], &arr[i]);
//	}
//}
//
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}

//#include <stdio.h>
//void Test();
//int main(void)
//{
//	void (*pf)(void);
//	pf = Test;
//	pf();
//
//	return 0;
//}
//void Test()
//{
//	printf("Hello World!\n");
//}

//#include <stdio.h>
//void main()
//{
//	printf("Hello World!\n");
//}

