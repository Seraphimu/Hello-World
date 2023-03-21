//5.15.pound.c -- 定义一个带参数的函数：
#include <stdio.h>

void pound(int n);
int main(void)
{
	int times = 5;
	char ch = '!';
	float f = 6.0;
	
	pound(times);
	pound(ch);
	pound(f);

	return 0;
}

//打印＃号：
void pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}