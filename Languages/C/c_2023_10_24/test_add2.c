//计算1 - 2 + 3 - 4 ... n
#include <stdio.h>
int f(int n);
int main(void)
{
    int n;
    if (scanf("%d", &n) != EOF && n >= 1) {
        printf("%d\n", f(n));
    }

    return 0;
}
int f(int n)
{
    int s = 0;
    int i = 0;

    for (i = 0; i <= n; ++i) {
        if (i % 2) {
            s += i;
        }
        else {
            s -= i;
        }
    }

    return s;
}