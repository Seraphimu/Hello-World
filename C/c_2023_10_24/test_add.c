//计算从1加到n
#include <stdio.h>
#include <stdlib.h>
int f1(int n);
int f2(int n);
int main(void)
{
    int n;
    //判断输入的内容是否符合要求
    if (scanf("%d", &n) != EOF && n >= 1) {
        printf("result is %d\n", f1(n));
        printf("result is %d\n", f2(n));
    }
    else {
        printf("failed\n");
        exit(-1);
    }

    return 0;
}

int f1(int n)
{
    if (n == 1) {
        return 1;
    }
    if (n > 1) {
        return f1(n - 1) + n;
    }
}
int f2(int n)
{
    int s = 0;
    int i = 0;

    for (i = 1; i <= n; ++i) {
        s += i;
    }

    return s;
}