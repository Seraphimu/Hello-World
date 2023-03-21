//3.NoGood.c -- To correct program errors:

#define _CRT_SECURE_NO_WARNINGS 1

//Error:
//#include <stdio.h>
//int main(void)
//(
// int n, int n2, int n3;
// n = 5;
// n2 = n * n;
// n3 = n2 * n2;
// printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
//
// return 0;
//)

//Correct：
#include <stdio.h>

int main(void)
{
	int n, n2, n3;
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
	return 0;
}
