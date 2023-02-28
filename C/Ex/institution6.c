// //計算分段函數
// //1 - x         x < 0
// //2 * x - 2     x >= 0
// #include <stdio.h>
// int f(int x)
// {
//     if (x < 0)
//         return 1 - x;
//     if (x >= 0)
//         return 2 * x - 2;
// }
// int main(void)
// {
//     int x;
//     scanf("%d", &x);
//     int y = f(x);
//     printf("f(%d) = %d\n", x, y);

//     return 0;
// }