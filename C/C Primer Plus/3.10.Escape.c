//3.10.Escape.c -- using escape sequence:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary:");
    printf("$________\b\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%2.f a month is $%2.f a year.", salary, salary * 12.0);
    printf("\rGee!\n");
    return 0;
}