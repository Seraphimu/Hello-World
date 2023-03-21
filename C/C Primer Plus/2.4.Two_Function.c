//2.4.Two_Function.c -- Two Functions included to a C source file:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void butler(void);	//Function prototype:
int main(void)
{
	printf("I will summon the butler function.\n");
	//Called the butler function:
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}

void butler(void)
{
	printf("You rang, sir?\n");
}