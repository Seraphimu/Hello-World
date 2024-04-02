/*
fun()，输出当x<0.97时，如下多项式的值，直到|Sn - Sn - 1| < 0.000001
Sn = 1 + 0.5x + 0.5(0.5-1)/2!*x^2 + 0.5*(0.5-1)(0.5-2)/3!*x^3 + ... + 0.5(0.5-1)...(0.5-n+1)/n!*x^n
*/

#include <stdio.h>
float fun(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%f", fun(n));

    return 0;
}

float fun(int n)
{
    float sn = 1.0f;
    float son = 1.0f;
    float x = 1.0f;
    int re = 1;
    int i, j;
    
    //i从0开始为了分子的第一项
    //re每次重置son每次都不重置，我真是个大明白
    //让sn的初值为1就不用考虑第一项的情况了，而从第二项开始，式子存在明显的递推关系
    //现在就差这个结束条件比较抽象了草。
    for (i = 0; i <= n; i++)
    {
        //求阶乘
        re = 1;
        for(j = 1;j <=i; j++)
        {
            re *= j;
        }
        son *= 0.5 - i;
        sn += (son / re) * pow(x, i);
    }

    return sn;
}