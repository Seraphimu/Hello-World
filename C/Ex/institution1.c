// //實現四頁玫瑰數字
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int i, j;
//     for (i = 1000; i < 10000; i++)
//     {
//         //踩坑：sum每次都要清零沒清零一次判斷不出來……
//         int sum = 0;
//         for (j = 1; j < i; j *= 10)
//         {
//             int a = i / j % 10;
//             int b = (int)pow(a, 4);
//             sum += b;
//         }
//         if (sum == i)
//             printf("%d\n", i);
//     }
//     return 0;
// }

//輸入10個數，冒泡排序
#include <stdio.h>
#define N 10
void sort(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(void)
{
    int arr[N];
    int i, j;
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    sort(arr, N);
    for (j = 0; j < N; j++)
    {
        printf("%4d ", arr[j]);
        if (j == 4)
            putchar('\n');
    }
    return 0;
}