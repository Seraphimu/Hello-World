//9.7.Factor.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

long fact(int n);
long rfact(int n);
int main(void)
{
	int num = 0;
	puts("This program calculates factorials.");
	puts("Enter a value in the range 0-12 (q to quit):");
	while (1 == scanf("%d", &num))
	{
		if (num < 0)
			puts("No negative numbers, please.");
		else if (num > 12)
			puts("Keep input under 12.");
		else
		{
			printf("Loop: %d factorial = %ld\n", num, fact(num));
			printf("Recursion: % d factorial = % ld\n", num, rfact(num));
		}
		puts("Enter a value in the range 0-12(q to quit):");
	}
	return 0;
}

long fact(int n)
{
	long ans = 0;
	for (ans = 1; n > 1; n--)
		ans *= n;
	return ans;
}

long rfact(int n)
{
	long ans;
	if (n > 0)
		ans = n * rfact(n - 1);
	else
		ans = 1;
	return ans;
}