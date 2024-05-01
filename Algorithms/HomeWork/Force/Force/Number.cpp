#include "Force.h"

void FindNumber()
{
	int x;
	//存放和位的加和积
	int sum, mul;
	//限定x为一个三位数
	for (x = 100; x < 1000; x++)
	{
		//个位大于百位 && 百位大于十位
		//if ((x % 100 > x / 100) && (x / 100 > x / 10 % 10))
		//与10取余求个位数
		if ((x % 10 > x / 100) && (x / 100 > x / 10 % 10))
		{
			//三位的和 == 三位的积
			sum = x / 100 + x / 10 % 10 + x % 10;
			mul = (x / 100) * (x / 10 % 10) * (x % 10);
			//Error: if (sum = mul)
			if (sum == mul)
			{
				cout << x << endl;
			}
		}
	}
}