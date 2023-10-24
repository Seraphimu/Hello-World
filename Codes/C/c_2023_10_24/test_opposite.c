//把一个数字的每一位逆序输出
#include <stdio.h>
void f(int n);
void g(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    f(n);
    printf("\n");
    g(n);

    return 0;
}

void f(int n)
{
    printf("%d ", n % 10);
    if (n >= 10)
        f(n / 10);
}

void g(int n)
{
   int i;
   for (i = 1; i <= n; i *= 10)
        printf("%d ", n / i % 10);
}
