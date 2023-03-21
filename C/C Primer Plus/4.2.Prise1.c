//4.2.prise1.c -- Using different types of strings:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40] = { 0 };

    printf("What's your name? ");
    scanf("%s", name);
    printf("Helo, %s. %s\n", name, PRAISE);

    return 0;
}