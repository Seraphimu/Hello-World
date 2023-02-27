// //計算1! + 2! + 3! + 4! + ... + 50!
// #include <stdio.h>
// int f(int n)
// {
//     if (n ==1)
//         return 1;
//     else if (n > 1)
//         return n * f(n - 1);
//     else 
//         return -1;
// }
// int main(void)
// {
//     int sum = 0;
//     for (int i = 1; i <= 50; i++)
//         sum += f(i);
//     printf("結果為：%d\n", sum);

//     return 0;
// }

// //求S = 1 - (1/2) + (1/3) - (1/4) + ... + (1/n)
// #include <stdio.h>
// int main(void)
// {
//     //踩坑了，這裏是小數，要使用double或float
//     double  s = 0;
//     int i, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)    //踩坑了，這裏要寫等於，不然求不到1/n
//     {
//         if (0 == i % 2)
//             s -= 1.0 / i;
//         else
//             s += 1.0 / i;
//     }

//     printf("s = %lf\n", s);

//     return 0;
// }

// //輸出下列形式的楊輝三角前十行
// /* 
// 1
// 1  1
// 1  2  1
// 1  3  3  1

// 1  4  6  4  1
// 1  5  10 10 5 1
// 1  6  15 20 15 6 1 
// */
// /*
//     arr[0] = 1
//     arr[1] = 1, 1
//     arr[2] = 1, 1+1, 1
//     arr[3] = 1, 1+1 +1, 1+1 +1, 1
//     arr[4] = 1, 1+1+1 +1, 1+1+1+ 1+1+1, 1
//     arr[5] = 1, 1+1+1+1+1, 1+1+1+1+1+1+ 1+1+1+1, 1
//     arr[i][j] = arr[i - 1][j]
// */
#include <stdio.h>
#define MAX 10
void f(int arr[][MAX], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        arr[i][0] = 1;
    }
}
void g(int arr[][MAX], int len)
{
    f(arr, MAX);
    int i, j;
    for (i = 1; i < len; i++)
    {
        for (j = 1; j <= i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
}
int main(void)
{
    int arr[MAX][MAX] = {0};
    g(arr, MAX);

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%5d", arr[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
// //遞歸方法
// #include <stdio.h>
// #define MAX 10
// int f(int i, int j)
// {
//     if (j == 0 || j == i)
//         return 1;
//     else
//         return f(i - 1, j - 1) + f(i - 1, j);
// }
// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%4d", f(i, j));
//         }
//         putchar('\n');
//     }
//     return 0;
// }

