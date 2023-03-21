#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////1.Convert hours and minutes:
//int main(void)
//{
//	//定义转换小时和分钟的单位:
//	const int TIME = 60;
//	//定义存放小时和分钟的变量
//	unsigned int hours = 0;
//	unsigned int minutes = 0;
//	puts("Please type time in minutes:(minutes <= 0 the program is over)");
//	while (1 == scanf("%u", &minutes) && minutes > 0)
//	{
//		//转换后的时间:
//		hours = minutes / TIME;
//		unsigned int mins = minutes % TIME;
//		printf("%u minutes is %u hours and %u minutes.\n", minutes, hours, mins);
//	}
//	puts("Bye!");
//
//	return 0;
//}



////2.Enter an integer and print from it to it plus ten
//int main(void)
//{
//	int num = 0;
//	puts("Please type a integer:");
//	scanf("%d", &num);
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("num%d = %d\n", i++, num++);
//	}
//
//	return 0;
//}


////3.Enter a number of days to convert to a combination of weeks and days:
//int main(void)
//{
//	int days = 0;
//	puts("Could you please enter a number of days?");
//	scanf("%d", &days);
//	int weeks = days / 7;
//	days %= 7;
//	printf("The days is %d weeks and %d days.\n", weeks, days);
//
//	return 0;
//}


////4.以厘米输入身高，然后用分米和米显示此值：
//int main(void)
//{
//	float cm_height = 0;
//	puts("Type yours height in centimeter:");
//	scanf("%f", &cm_height);
//	float dm_height = cm_height / 10;
//	float m_height = cm_height / 100;
//	printf("%.1fcm is %.1fdm is %.1fm.\n", cm_height, dm_height, m_height);
//
//	return 0;
//}


////5. Modify the addmup.c
//int main(void)
//{
//	int count = 0;
//	int sum = 0;
//	unsigned int days = 0;
//	puts("Type days:");
//	scanf("%u", &days);
//	while (count++ < days)
//		sum += count;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


////6.Modify the exercise 5:
//int main(void)
//{
//	int count = 0;
//	int sum = 0;
//	unsigned int days = 0;
//	puts("Type days:");
//	scanf("%u", &days);
//	while (count++ < days)
//		sum += count * count;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


////7.Cube:
//double cube(double num);
//int main(void)
//{
//	double num = 0;
//	puts("Type a number in double:");
//	scanf("%lf", &num);
//	double ret = cube(num);
//	printf("The square of %lf is %lf", num, ret);
//
//	return 0;
//}
//
//double cube(double num) {
//	return num * num * num;
//}


////8.Computes moduli:
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	while (1)
//	{
//		puts("Enter an integer to serve as the second operand:");
//		scanf("%d", &num2);
//		if (num2 <= 0)
//			break;
//		puts("Now enter the first operand:");
//		scanf("%d", &num1);
//		if (num1 <= 0)
//			break;
//		printf("%d %% %d is %d", num1, num2, num1 % num2);
//	}
//
//	
//	return 0;
//}

////9.Convert:
//void Temperatures(const double fahrenheit) {
//	printf("%lf Fahrenheit is %lf Celsius\n", 
//		fahrenheit, 5.0 / 9.0 * (fahrenheit - 32.0));
//	printf("%lf Fahrenheit is %f Openness\n", 
//		fahrenheit, 5.0 / 9.0 * (fahrenheit - 32.0) + 273.16);
//	
//}
//int main(void)
//{
//	double fahrenheit = 0;
//	puts("Type an temperatures(Enter q is quit):");
//	while (1 == scanf("%lf", &fahrenheit))
//	{
//		Temperatures(fahrenheit);
//		puts("Type an temperatures(Enter q is quit):");
//	}
//	return 0;
//}