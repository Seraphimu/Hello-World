#include <stdio.h>
int f(int n)
{
    if (n < 16)
        printf("%d ", n % 16);
    else {
        f(n / 16);
    }
}

void g(int n)
{
    printf("%d\n", n);
    if (n > 0)
        g(n - 1);
}

void h(int n)
{
    int i = 128;
    for (i = 128; i >= 1; i /= 2) {
        if (n >= i) {
            if (n <= 0) {
                break;
            }
            n -= i;
            printf("%d\n", i);
        }
    }
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    //f(n);
    h(n);
    //g(n);

    return 0;
}
