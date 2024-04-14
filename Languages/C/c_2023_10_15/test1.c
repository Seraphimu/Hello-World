#include <stdio.h>
void f(int n)
{
    if (n > 16) {
        f(n / 16);
    }
    printf("%d ", n % 16);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    f(n);

    return 0;
}
