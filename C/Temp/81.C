/*
编写一个fun()函数，计算并输出给定整数n的因子（不包括1和本身）这和。规定n的值不大于1000
*/
#include <stdio.h>  //输出
int fun(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fun(n));

    return 0;
}

int fun(int n)
{
    if (n > 1000)
    {
        printf("数字大于1000, 不合要求!\n");
        return -1;
    }
    int sum = 0;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}