#include <stdio.h>
int f(int i, int j)
{
    if (i == j || j == 0)
        return 1;
    return f(i - 1, j - 1) + f(i - 1, j);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", f(i, j));
        }
        putchar('\n');
    }
    return 0;
}