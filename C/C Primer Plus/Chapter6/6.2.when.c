#include <stdio.h>

int main(void)
{
    int n = 5;

    //n < 7時進行循環，否則退出循環
    while (n < 7)
    {
        printf("n = %d\n", n);
        //讓n自增
        n++;
        printf("Now n = %d\n", n);
    }

    printf("The loop has finished.\n");

    return 0;
}
