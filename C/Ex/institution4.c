// //判斷閏年
// #include <stdio.h>
// int main(void)
// {
//     int year;
//     scanf("%d", &year);
//     if (year < 0)
//         printf("輸入錯誤\n");
//     else if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//         printf("%d年是個閏年\n", year);
//     else
//         printf("%d年不是個閏年\n", year);
//     return 0;
// }

//輸入正整數，求位數，且順序和逆序打印出各位
#include <stdio.h>
//正著打印
void f(int n)
{
    if (n > 9)
        f(n / 10);
    printf("%d ", n % 10);
}
void g(int n)
{
    if (n == 0)
        return;
    else
    {
        printf("%d ", n % 10);
        g(n / 10);
    }    
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int i;
    int count = 1;
    for (i = 10; i < n; i *= 10)
    {
        if (n / i == 0)
            break;
        count++;
    }
    printf("%d是%d位數\n", n, count);
    f(n);
    putchar('\n');
    g(n);
    return 0;
}