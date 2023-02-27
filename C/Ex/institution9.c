// //遞歸求階乘
// #include <stdio.h>
// int f(int n)
// {
//     if (n == 1 || n == 0)
//         return 1;
//     else if (n > 1)
//         return n * f(n - 1);
//     else
//         return -1;
// }

// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d! = %d\n", n, f(n));

//     return 0;
// }

// //輸入20個數字，去掉兩個高的，兩個低的，剩下的求平均值
// #include <stdio.h>
// #define MAX 20
// double f(double arr[], int len)
// {
//     int max1 = 0, max2 = 0;
//     int min1 = 0, min2 = 0;
//     int i, j, k;
//     double sum = 0;
//     //最大的和最小的
//     for (i = 0; i < len; i++)
//     {
//         if (arr[i] > arr[max1])
//             max1 = i;
        
//         if (arr[i] < arr[min1])
//             min1 = i;
//     }
//     //找第二大的和第二小的
//     for (j = 0; j < len; j++)
//     {
//         if (j == max1)
//             continue;
//         if (arr[i] > arr[max2])
//             max2 = i;
        
//         if (j == min1)
//             continue;
//         if (arr[i] < arr[min2])
//             min2 = i;
//     }

//     //求平均值：
//     for (k = 0; k < len; k++)
//     {
//         sum += arr[k];
//     }
    
//     return sum / len;
// }
// int main(void)
// {
//     double arr[MAX];
//     int i, j, k;
//     for (i = 0; i < MAX; i++)
//         scanf("%lf", &arr[i]);
//     printf("平均分為：%lf\n", f(arr, MAX));

//     return 0;
// }