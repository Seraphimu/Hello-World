// #include <stdio.h>
// #define ROWS 3
// #define COLS 5

// int main(void)
// {
//     int arr[ROWS][COLS];
//     int (*p)[COLS] = arr;

//     //p == arr
//     //*p == *arr == &a[0][0]
//     //*(*(p)) == arr[0][0]

//     for (int i = 0; i < ROWS; i++)
//         for (int j = 0; j < COLS; j++)
//             scanf("%d", *(p + i) + j);      //*(p + i) + j == &a[i][j]
    
//     for (int i = 0; i < ROWS; i++)
//     {
//         for (int j = 0; j < COLS; j++)
//         {
//             printf("%d ", *(*(p + i) + j));
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>


// int main(void)
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int start = 0;
//     int end = sizeof(arr) / sizeof(arr[0]) - 1;    
//     int value = 0;
//     scanf("%d", &value);

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
//         if (arr[mid] == value)
//         {
//              printf("下标是%d\n", mid);
//              break;
//         }
//         else if (arr[mid] > value)
//             end = mid - 1;
//         else if (arr[mid] < value)
//             start = mid + 1;
//         else
//         {
//             printf("找不到\n");
//             break;
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int start = 0;
//     int end = sizeof(arr) / sizeof(arr[0]) - 1;
//     //sizeof(arr) = 40
//     //sizeof(arr[0]) = 4
//     //40 / 4 = 10
//     //10 - 1 = 9
//     int mid;
//     int value;
//     scanf("%d", &value);
//     while (start <= end)
//     {
//         mid = (start + end) / 2;
//         if (arr[mid] == value)
//         {
//             printf("下标是%d\n", mid);
//             break;
//         }
//         else if (arr[mid] < value)
//             start = mid + 1;
//         else if (arr[mid] > value)
//             end = mid - 1;
//     }
//     if (start > mid)
//         printf("找不到\n");

//      return 0;
// }

#include <stdio.h>
#define MAX 114515
int main(void)
{
    int arr[MAX];
    for (int i = 0; i < MAX; i++)
        arr[i] = i + 1;
    
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]);
    int mid, value;
    scanf("%d", &value);

    while (start <= end)
    {
        mid = (start + end) / 2;        //关键步骤，不写直接死循环
        if (arr[mid] == value)          //错了三次，mid是下标而不是数组
        {
            printf("下标是%d\n", mid);
            break;                      //判断完了就退出，不然直接死循环
        }
        else if(value < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }

    if (start > end)
        printf("找不到\n");

    return 0;
}