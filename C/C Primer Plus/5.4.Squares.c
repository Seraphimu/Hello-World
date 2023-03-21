//5.3.Squares.c -- Calculate the square of 10 to 20:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int num = 1;
	while (num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}
	return 0;
}