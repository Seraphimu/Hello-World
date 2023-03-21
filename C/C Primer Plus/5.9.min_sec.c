//5.9.min_sec.c -- % operate character:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SEC_PER_MIN 60

int main(void)
{
	int sec = 0;
	int min = 0;
	int left = 0;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds(<= 0 to quit):\n");
	scanf("%d", &sec);

	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minures and %d seconds.\n", 
			sec, min, left);
		printf("Enter next value (<= 0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}