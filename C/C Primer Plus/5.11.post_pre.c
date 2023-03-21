//5.11.post_pre.c -- i++ or ++i:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	//declare variable a and b to testing the ++ operate character:
	int a = 1;
	int b = 1;
	int a_post = a++;
	int b_pre = ++b;
	printf("a  a_post   b    pre_b \n");
	printf("%ld %5d %5d %5d", a, a_post, b, b_pre);
	getchar();

	return 0;
}