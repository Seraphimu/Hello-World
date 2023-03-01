// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int i, j;
//     for (i = 1000; i < 10000; i++)
//     {
//         int sum = 0;
//         for (j = 1; j <= i; j *= 10)
//         {
//             sum += pow(i / j % 10, 4);
//         }
//         if (sum == i)
//             printf("%d\n", i);
//     }

//     return 0;
// }

// //輸入10個數，冒泡排序
// #include <stdio.h>
// #define N 10
// void sort(int arr[], int len)
// {
//     int i, j;
//     for (i = 0; i < len - 1; i ++)
//     {
//         for (j = 0; j < len - 1; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
// }

// int main(void)
// {
//     int arr[N];
//     int i, j;
//     for (i = 0; i < N; i++)
//         scanf("%d", &arr[i]);
//     sort(arr, N);

//     for (j = 0; j < N; j++)
//     {
//         printf("%d ", arr[j]);
//         if (j == 4)
//             putchar('\n');
//     }
//     return 0;
// }

// #include <stdio.h>
// //正序
// void f(int n)
// {
//     if (n > 9)
//         f(n / 10);
//     printf("%d ", n % 10);
// }
// //逆序
// void g(int n)
// {
//     if (n == 0)
//         return;
//     printf("%d ", n % 10);
//     g(n / 10);
// }

// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     f(n);
//     putchar('\n');
//     g(n);

//     return 0;
// }


#include <stdio.h>
int main(void)
{
    double w, h, bmi;
    scanf("%lf%lf", &w, &h);
    bmi = w / (h * h);
    if (bmi < 18.5)
        puts("偏輕");
    else if (18.5 <= bmi && bmi < 23.9)
        puts("正常");
    else if (23.9 < bmi && bmi<= 27.9)
        puts("超重");
    else if (bmi > 27.9)
        puts("肥胖");
    printf("bmi = %lf", bmi);
    return 0;
}