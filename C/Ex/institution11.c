// //輸入20個元素到a數組，奇數元素整到b數組裏去
// #include <stdio.h>
// #define MAX 20
// int main(void)
// {
//     int a[MAX], b[MAX];
//     int i, j;
//     //輸入
//     for (i = 0; i < MAX; i++)
//         scanf("%d", &a[i]);
//     //放到b
//     int k = 0;
//     for (j = 0; j < MAX; j++)
//     {
//         if (0 != j % 2)
//         {
//             b[k] = a[j];
//             printf("b[%d] = %d ", k, b[k]);     //這裏踩坑了，用這種方式應該先輸出再++，先++會有垃圾值
//             k++;
//         }
//     }
//     putchar('\n');

//     return 0;
// }


// //求3, -30, 20, 6, 77, 2, 0, -4, -7, 99中的最大值和最小值
// #include <stdio.h>
// #define MAX 10
// int main(void)
// {
//     int arr[] = {3, -30, 20, 6, 77, 2, 0, -4, -7, 99};
//     int i, j;
//     int max = 0;
//     int min = 0;
//     for (i = 1; i < MAX; i++)
//     {
//         if (arr[max] < arr[i])
//             max = i;
//         if (arr[min] > arr[i])
//             min = i;
//     }

//     printf("最大值：%d, 最小值：%d\n", arr[max], arr[min]);

//     return 0;
// }

// //輸入兩個證書調用stu()求兩數之和的立方，返回主函數顯示結果
// #include <stdio.h>
// int stu(int m, int n)
// {
//     return (m + n) * (m + n) * (m + n);
// }
// int main(void)
// {
//     int a, b;
//     printf("請輸入兩個整數：\n");
//     scanf("%d%d", &a, &b);
//     printf("結果為%d\n", stu(a, b));
//     return 0;
// }

//計算1~100之間的奇數之和與偶數之和
#include <stdio.h>
int main(void)
{
    int i;
    //分別表示奇數和偶數之和
    int s1 = 0;
    int s2 = 0;

    for (i = 1; i <= 100; i++)
    {
        if (0 != i % 2)
            s1 += i;
        if (0 == i % 2)
            s2 += i;
    }

    printf("奇數和：%d, 偶數和：%d\n", s1, s2);

    return 0;
}