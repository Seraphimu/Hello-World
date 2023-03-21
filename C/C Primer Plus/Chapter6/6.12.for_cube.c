//求整數1 ～ 6的立方
#include <stdio.h>
#define MAX 6

int main(void)
{
    printf("number\tcubed\n");
    for (int num = 1; num <= MAX; num++)
        printf("%5d\t%5d\n", num, num * num * num);

    return 0;
}
