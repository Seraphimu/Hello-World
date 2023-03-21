//4.15.Input.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    int age = 0;
    float assets = 0;
    char pet[30] = { 0 };

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d%f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}