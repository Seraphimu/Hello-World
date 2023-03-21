//4.9.Stringf.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
    return 0;
}