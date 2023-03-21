//4.1.Talkback.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main(void)
{
    float weight = 0;
    float volume = 0;
    int size = 0;
    int letters = 0;
    char name[40] = { 0 };

    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}