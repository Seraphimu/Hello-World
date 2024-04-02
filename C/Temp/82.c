/*
编写fun()函数，计算sn = 1 + 1/2! + 1/3! + ... + 1/n!
其中：n(1, 100]
*/

#include <stdio.h>
double fun(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%lf\n", fun(n));

    return 0;
}

double fun(int n)
{
    double sn = 0;
    int re = 1;
    int i, j;
    //遍历从1到n
    //这里要写<=n，一开始写的<n，但是结果依然正确，是因为浮点数表示一个近似值，n==15和n==14区别不大。
    for (i = 1; i <= n; i++)
    {
        re = 1; //复位re
        //求i的阶乘
        for (j = 1; j <= i; j++)
        {
            re *= j;
        }
        //这个地方要写1.0/re，而不是1/re
        //两个int类型的没法得到这么一个浮点型的数，需要至少一边是个浮点型
        sn += 1.0 / re;   //相加
    }

    return sn;
}