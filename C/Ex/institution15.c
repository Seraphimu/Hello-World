// //有一個函數
// //y = x             x < 1
// //y = 2x - 1        1 <= x <= 10
// //y = 3x - 11       x >= 10
// //編寫程序輸出入x的值，輸出y的值
// #include <stdio.h>
// double f(double x)
// {
//     if (x < 1)
//         return x;
    
//     if (1 <= x && x <= 10)
//         return 2 * x - 1;
    
//     if (x >= 10)
//         return 3 * x - 11;
// }
// int main(void)
// {
//     double x;
//     scanf("%lf", &x);
//     double y = f(x);
//     printf("y(%.4lf) = %.4lf\n", x, y);

//     return 0;
// }

//從鍵盤輸入a[4][4]中各元素的值，
//並選出各行元素的最大元素組成一個一維數組b[4]並輸出該數組：
#include <stdio.h>
#define MAX 4
//輸出數組b
void g(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
}
//找最大值
void f(int a[][MAX], int b[], int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        int max = 0;
        for (j = 1; j < len; j++)
        {
            //這一塊踩坑了
            //1 - 1 = 0
            if (a[i][j - 1] < a[i][j])
                max = j;
        }
        b[i] = a[i][max];
    }
}
int main(void)
{
    int a[MAX][MAX];
    int b[MAX];
    int i, j;
    //輸入操作
    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++)
            scanf("%d", &a[i][j]);       //這一塊踩坑了：要加取地址符

    f(a, b, MAX);
    g(b, MAX);

    return 0;
}