//5.7.rules.c -- priority testing:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int top = 0;
	int score = 0;
	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
	printf("top = %d, score = %d\n", top , score);
	getchar();
	return 0;
}