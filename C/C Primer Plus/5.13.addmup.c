//5.13.addmup.c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int count = 0;
	int sum = 0;
	while (count ++ < 20)
		sum += count;
	printf("sum = %d\n", sum);
	getchar();

	return 0;
}