//5.4.divide.c -- show divide:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	printf("integer division: 5 / 4 is %d\n", 5 / 4);
	printf("integer division: 6 / 3 is %d\n", 6 / 3);
	printf("integer division: 7 / 4 is %d\n", 7 / 4);
	printf("integer division: 7. / 4. is %1.2f\n", 7. / 4.);
	printf("integer division: 7. / 4 is %1.2f\n", 7. / 4);
	getchar();

	return 0;
}