//Convert units:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	float weight = 0;
	scanf("%f", &weight);
	float value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	return 0;
}