//對6.10sweetie.c的優化
#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    for (int count = 1; count <= NUMBER; count++)
        printf("Be my Valentine!\n");

    return 0;
}
