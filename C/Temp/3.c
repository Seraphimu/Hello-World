//n*n的二维数组，在主函数中自动赋值，编写fun(int a[][N], int m), 该函数用于使数组右上半三角元素中的值乘以m

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
void fun(int a[][N], int m);

int main(void)
{
    int a[N][N];
    int m;
    int i = 0, j = 0;
    srand((unsigned)time(NULL));
    
    //给数组自动赋值
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            a[i][j] = rand() % 100;

    //打印数组（执行fun()前）
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    //输入m
    scanf("%d", &m);
    fun(a, m);

    //打印数组（执行fun()后）
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}

void fun(int a[][N], int m)
{
    int i = 0, j = 0;
     for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == j)
                a[i][j] *= m;
        }
    }
}