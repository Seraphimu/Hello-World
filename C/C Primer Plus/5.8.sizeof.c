//5.8.sizeof.c -- the type of size_t:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int n = 0;
	size_t intsize = sizeof(int);
	printf("n = %d, n has %lu bytes; all ints have %lu bytes.\n", 
		n, sizeof(n), intsize);
	getchar();

	return 0;
}