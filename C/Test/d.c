#include <stdio.h>
#define MAX 100
int f(int head, int tail, int n)
{
    return (n * (head + tail)) / 2;
}
int g(int head, int n, int d)
{
    return (head * n) + (n * (n - 1)) / 2;
}
int main(void)
{
    printf("%d\n", f(1, 100, 100));
    printf("%d\n", g(1, 100, 1));
    return 0;
}