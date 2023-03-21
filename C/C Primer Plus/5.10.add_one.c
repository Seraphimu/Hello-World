//5.10.add_one.c -- ++
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int ultra = 0;
	int super = 0;

	while (super < 5)
	{
		super++;
		++ultra;
		printf("super = %d, ultra = %d\n", super, ultra);
	}
	getchar();

	return 0;
}