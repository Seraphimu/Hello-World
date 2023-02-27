//計算e的值（精確到1e-6）
#include <stdio.h>
//求階乘
int f(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else if (n > 1)
        return f(n - 1) * n;
    else
        return -1;
}
int main(void)
{
    double e = 0;
    int i, n;
    scanf("%d", &n);
    //這裏踩坑了，寫了個i<n，這樣就求不了n的階乘了
    for (i = 0; i <= n; i++)
    {
        e += 1.0/(double)f(i);
        // printf("%d! = %d ", i, f(i));
    }

    printf("%lf", e);

    return 0;
}