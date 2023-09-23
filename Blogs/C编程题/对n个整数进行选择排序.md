# 选择排序
选择排序的规则
首先找到最大或者最小的数放在序列的第一个位置上，
再从剩下的序列中找到最大或最小的数放在剩余元素的第一个位置上，
重复上面的操作，直到数组排序完成。

首先需要一个数组来存放序列
```c
int arr[100], n;
scanf("%d", &n);
for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
```

可以使用一个函数来完成交换元素的操作
```c
void Swap(int *n1, int *n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}
```

选择排序的函数
```c
void SelectionSort(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        int max = i;                    //存放最大元素下标
        for (j = i + 1; j < len; j++)       //每次比较到末尾
        {
            if (arr[max] < arr[j])      //这里相当于i和i + 1进行比较，（max = i, j = i + 1）
                max = j;
        }
        Swap(&arr[i], &arr[max]);
    }
}
```

综上所述
```c
#include <stdio.h>
#define MAX 100
void SelectionSort(int arr[], int len);
void Swap(int *n1, int *n2);
int main(void)
{
    int arr[MAX], n;        //存放元素
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    SelectionSort(arr, n);

    for (i = 0; i < n; i++)     //打印
        printf("%d ", arr[i]);
    putchar('\n');

    return 0;
}
void SelectionSort(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        int max = i;                    //存放最大元素下标
        for (j = i + 1; j < len; j++)       //比较未经排序的部分
        {
            if (arr[max] < arr[j])      //这里相当于i和i + 1进行比较，（max = i, j = i + 1）
                max = j;
        }
        Swap(&arr[i], &arr[max]);       //交换
    }
}

void Swap(int *n1, int *n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}
```