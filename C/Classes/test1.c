#include <stdio.h>
void fun(int x)
{
    if (x / 2 > 1)
        fun(x / 2);
    printf("%d", x);
}

int main(void)
{
    // fun(7);
    printf("%d\n", 1 << 2);
    //11110
    //00111
    //1 >> 2
    //0
    //1 << 2
    //100
    //4
    return 0;
}