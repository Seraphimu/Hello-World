//5.1.Shores.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//convert unit:
#define ADJUST 7.31

int main(void)
{
    const double SCALE = 0.333;
    double shoe = 9.0;
    double foot = 0;

    foot = SCALE * shoe + ADJUST;
    printf("Shoe size(men's) foot length\n");
    printf("%10.1f %14.2f inches\n", shoe, foot);

    return 0;
}
