// //根據函數原型double Mean(double a[M][N], int m, int n)
// //編寫定義，要求返回a中的所有元素的平均值，
// //假定過程中采用變量v來存放纍加值和最後的平均值
// #include <stdio.h>
// #define M 200
// #define N 300
// double Mean(double a[M][N], int m, int n)
// {
//     //踩坑了，這裏要求使用浮點型返回
//     double v = 0;
//     int i, j;
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             v += a[i][j];
//         }
//     }
//     v /= (m * n);       //踩坑了求平均值應該是m*n個元素不是m+n
    
//     return v;
// }
// int main(void)
// {
//     int m, n;
//     double a[M][N];
//     printf("請輸入數組的長度和寬度：\n");
//     scanf("%d%d", &m, &n);

//     int i, j;
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("請輸入： arr[%d][%d]\n", i, j);
//             scanf("%lf", &a[i][j]);
//         }
//     }
//     printf("平均值為：%lf\n", Mean(a, m, n));


//     return 0;
// }


//根據int MM(int a[], int m)來寫定義，計算a[m]中的最大元素和最小元素之差
#include <stdio.h>
#define MAX 20
int MM(int a[], int m)
{
    int i;
    int max = 0, min = 0;
    for (i = 1; i < m; i++)
    {
        if (a[i] > a[max])
            max = i;
        if (a[i] < a[min])
            min = i;
    }
    int s = a[max] - a[min];
    return s;
}
int main(void)
{
    int a[MAX];
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("元素之差為：%d\n", MM(a, n));
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    
    return 0;
}