#include <stdio.h>

int main(void)
{
	int arr[100][100];
	
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			arr[j][i] = 114514;
		}
	}
	
	return 0;
}
