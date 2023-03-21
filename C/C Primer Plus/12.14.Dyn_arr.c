//12.14.Dyn_arr.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double* ptd;
	int max;
	int number;
	int i = 0;
	puts("What is the maximum number of type double entries?\n");
	//Error to enter:
	if (1 != scanf("%d", &max))
	{
		puts("Number not correctly enterd -- bye!");
		exit(EXIT_FAILURE);
	}
	//call the malloc() function to allocate memory:
	ptd = (double*)malloc(max * sizeof(double));
	if (NULL == ptd)
	{
		puts("Memory allocation failed. Goodbye.");
		exit(EXIT_FAILURE);
	}
	puts("Enter the values(q to quit):");
	//Input arguments to this array:
	while (i < max && 1 == scanf("%lf", &ptd[i]))
		++i;
	//Scope:
	printf("Here are your %d entries:\n", number = i);
	//Output arguments by the array:
	for (i = 0; i < number; i++)
	{
		printf("%7.2f", ptd[i]);
		if (6 == i % 7)
			putchar('\n');
	}
	if (0 != i % 7)
		putchar('\n');
	puts("Done.");
	free(ptd);

	return 0;
}