//4.17.Skip2.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    int n = 0;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}