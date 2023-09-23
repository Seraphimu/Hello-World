对n个整数数进行冒泡排序

步骤：

首先需要一个整形数组来存放整数，然后输入n个数到数组中去
然后对数组中的值两两比较，把最大（小）的放到最后去

```c
#include <stdio.h>
#define MAX 100
void Sort(int arr[], int len);  //排序函数原形
void Swap(int * n1, int * n2);
int main(void)
{
    int arr[MAX], n;
    scanf("%d", &n);            //输入个数

    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);   //输入元素
    Sort(arr, n);               //排序
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);  //打印

    return 0;
}

void Sort(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)           //一共要找len - 1次最大/小值
        for (j = 0; j < len - 1 - i; j++)   //每一次要跑len - 1 - i步才能找到最大/小值
            if (arr[j] < arr[j + 1])        //降序排列，若是想要升序直接改成 ">"
                Swap(&arr[j], &arr[j + 1]);
}

void Swap(int * n1, int * n2)               //交换变量内的值
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
```