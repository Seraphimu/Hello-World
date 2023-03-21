//3.8.Typesize.c -- sizeof:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    printf("sizeof(int) = %zd\n", sizeof(int));
    printf("sizeof(char) = %zd\n", sizeof(char));
    printf("sizeof(long) = %zd\n", sizeof(long));
    printf("sizeof(long long) = %zd\n", sizeof(long long));
    printf("sizeof(float) = %zd\n", sizeof(float));
    printf("sizeof(double) = %zd\n", sizeof(double));
    printf("sizeof(long double) = %zd\n", sizeof(long double));
    return 0;
}