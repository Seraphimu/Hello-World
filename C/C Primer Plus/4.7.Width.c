//4.7.width.c:
//charcter's width:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    //right:
    printf("*%10d*\n", PAGES);
    //left:
    printf("*%-10d*\n", PAGES);
    return 0;
}