#include <stdio.h>
#include <math.h>
int f(int head, int q, int n)
{
    return head * (1 - pow(q, n)) / (1 - q);
}
int g(int head, int tail, int q)
{
    return (head - tail * q) / (1 - q);
}
int main(void)
{
    printf("%d\n", f(1, 2, 3));
    printf("%d\n", g(1, 4, 2));
    return 0;
}