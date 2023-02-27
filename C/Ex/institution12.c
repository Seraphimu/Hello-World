// //對10個整數進行冒泡排序（升序）
// #include <stdio.h>
// #define MAX 10
// //冒泡排序
// void bullsort(int arr[], int len)
// {
//     int i, j;
//     for (i = 0; i < len; i++)
//     {
//         for (j = 0; j < len - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// //選擇排序
// void select(int arr[], int len)
// {
//     int i, j;
//     for (i = 0; i < len - 1; i++)
//     {
//         int min = i;
//         for (j = i + 1; j < len; j++)
//             if (arr[min] > arr[j])
//                 min = j;
//         int temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }
// }
// //打印
// void dis(int arr[], int len)
// {
//     int i;
//     for (i = 0; i < len; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// int main(void)
// {
//     int arr[MAX];
//     int i;
//     for (i = 0; i < MAX; i++)
//         scanf("%d", &arr[i]);
//     // bullsort(arr, MAX);
//     select(arr, MAX);
//     dis(arr, MAX);
//     return 0;
// }

//file1.dat中的内容複製到file2.dat中去
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp1;
    FILE *fp2;
    char ch;

    //檢查文件：
    if ((fp1 = fopen("file1.dat", "r")) == NULL)
    {
        printf("讀取文件失敗：程序退出\n");
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen("file2.dat", "w")) == NULL)
    {
        printf("讀取文件失敗：程序退出\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp1)) != EOF)
    {
        fprintf(fp2, "%c", ch);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}