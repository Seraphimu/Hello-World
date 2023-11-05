#include <stdio.h>
#include <stdlib.h>

//全局变量，不初始化自动初始化为0
int a;
double b;
int arr[100];

int main(void)
{
    printf("%d\n", a);
    printf("%lf\n", b);
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}