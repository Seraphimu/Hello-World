////例1. 第一个C语言程序
//#include <stdio.h>		//复制粘贴stdio.h文件，这个文件包含了printf()函数的原型
////这里的void表示main函数不接受任何参数
//int main(void)			//任何C程序都从main()函数的第一行开始执行，main()函数是C程序的入口，整个工程有且只有一个
//{
//	printf("Hello, World!\n");	//printf()函数，可以在屏幕上打印一些内容
//
//	return 0;					//返回值，这里main()的返回类型是int，即整型，返回值是0
//}


////例2. 摄氏度和华氏度互转的程序
////摄氏度 = (5 / 9) * (华氏度 - 32)
//#include <stdio.h>
//#define LOW_FAHR 0
//#define MAX_FAHR 300
//#define STEP 20
//int main(void)
//{
//	int fahr, cel;
//	fahr = LOW_FAHR;	//用这种方式代替下面的方式可读性和可修改性会增加很多
//	//fahr = 0;
//
//	while (fahr <= MAX_FAHR)
//	{
//		cel = ((fahr - 32) * 5 )/ 9;
//		printf("%4d%4d\n", fahr, cel);
//		fahr += STEP;
//	}
//
//	return 0;
//}

////练习1-1：在自己的系统上运行hello, world程序，并有意去掉部分看看会有什么错误
//#include <stdio.h>
//
//int main(void)
//{
//	//printf("Hello, World!\n");
//	//printf("Hello, World!");
//	//printf("Hello, World!"
//	//	);
//	//printf("Hello, World);	//错误
//
//	return 0;
//}

////练习1-2：观察printf()函数中带有'\c'参数时会出现什么情况
//#include <stdio.h>
//
//int main(void)
//{
//	//会忽略掉斜线，直接出现这个字母
//	printf("Hello, World!\c");
//	putchar('\n');
//	printf("Hello, World!\p");
//
//	return 0;
//}

////例3：将摄氏度和华氏度互转的程序换成小数类型
//#include <stdio.h>
//#define MAX_FAHR 300
//#define LOW_FAHR 0
//#define STEP 20
//int main(void)
//{
//	double fahr, cel;
//
//	for (fahr = LOW_FAHR; fahr <= MAX_FAHR; fahr += STEP)
//	{
//		cel = (fahr - 32) * 5.0 / 9.0;
//		printf("%4.0lf%10.1lf\n", fahr, cel);
//	}
//
//	return 0;
//}

////练习1-3：修改温度转换程序，在开关加上标题
//#include <stdio.h>
//#define MAX_FAHR 300
//#define LOW_FAHR 0
//#define STEP 20
//
//int main(void)
//{
//	double fahr, cel;
//	
//	printf("fahr\tcel\n");
//	for (fahr = LOW_FAHR; fahr <= MAX_FAHR; fahr += STEP)
//	{
//		cel = (fahr - 32) * 5.0 / 9.0;
//		printf("%4.0lf%8.1lf\n", fahr, cel);
//	}
//
//	return 0;
//}

////练习1-4：编写一个将摄氏度转换为华氏度的程序
//#include <stdio.h>
//#define MAX_CEL 300
//#define MIN_CEL 0
//#define STEP 1
//
//int main(void)
//{
//	double cel, fahr;
//
//	for (cel = MIN_CEL; cel <= MAX_CEL; cel += STEP)
//	{
//		//(fahr - 32) * 5 / 9 = cel
//		//cel * 9 / 5 + 32 = fahr
//		fahr = cel * 9 / 5 + 32;
//		printf("%4.0lf%10.1lf\n", cel, fahr);
//	}
//
//	return 0;
//}


////练习1-5：修改温度转换程序，要求以逆序打印表
//#include <stdio.h>
//#define MAX_FAHR 300
//#define LOW_FAHR 0
//#define STEP 20
//
//int main(void)
//{
//	double fahr, cel;
//
//	for (fahr = MAX_FAHR; fahr >= LOW_FAHR; fahr -= STEP)
//	{
//		cel = ((fahr - 32) * 5) / 9;
//		printf("%3.0lf%10.1lf\n", fahr, cel);
//	}
//
//	return 0;
//}


//例4：文件复制
//#include <stdio.h>
//
//int main(void)
//{
//	int c;
//
//	c = getchar();
//	while (c != EOF) {
//		putchar(c);
//		c = getchar();
//	}
//
//	return 0;
//}

////稍微修改一下上面的程序
//#include <stdio.h>
//
//int main(void)
//{
//	int c;
//	
//	while ((c = getchar()) != EOF) {
//		putchar(c);
//	}
//
//	return 0;
//}


////练习1-6：验证表达式getchar() != EOF的值是0还是1
////是1
//#include <stdio.h>
//
//int main(void)
//{
//	int c;
//
//	if (0 == ((c = getchar()) != EOF))
//		printf("0\n");
//	else if (1 == ((c = getchar()) != EOF))
//		printf("1\n");
//	else
//		printf("else\n");
//
//	return 0;
//}


////练习1-7：编写一个打印EOF值的程序
//#include <stdio.h>
//
//int main(void)
//{
//	printf("%d\n", EOF);
//
//	return 0;
//}

//例5：统计字符
//#include <stdio.h>
//
//int main(void)
//{
//	long nc;
//	
//	nc = 0;
//	while (getchar() != EOF)
//		++nc;
//	printf("%ld\n", nc);
//
//	return 0;
//}

////另一个版本
//#include <stdio.h>
//
//int main(void)
//{
//	double nc;
//
//	for (nc = 0; getchar() != EOF; ++nc)
//		;
//	printf("%.0lf\n", nc);
//
//	return 0;
//}

////行计数（根据有几个换行符来计算行数）
//#include <stdio.h>
//
//int main(void)
//{
//	int c, nl;
//
//	nl = 0;
//	while ((c = getchar()) != EOF) {
//		if (c == '\n') {		//这里易错，容易把"=="误写成"="
//			++nl;
//		}
//	}
//	printf("%d\n", nl);
//
//	return 0;
//}


////练习1-8：编写一个统计空格、制表符与换行符个数的程序
////需要一个变量c配合getchar()函数和while循环完成输入
////需要三个变量分别为空格、制表符和换行符计数
//#include <stdio.h>
//
//int main(void)
//{
//	int c, space, table, enter;
//
//	space = table = enter = 0;
//	while ((c = getchar()) != EOF) {
//		if (c == '\n') {
//			++enter;
//		}
//		else if (c == '\t') {
//			++table;
//		}
//		else if (c == ' ') {
//			++space;
//		}
//			
//	}
//
//	printf("空格：%d, 换行：%d, 制表符：%d\n", space, enter, table);
//
//	return 0;
//}

//练习1-9：编写一个输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。
//需要变量c配合while循环和getchar()函数完成输入
//怎么吃掉多余的空格？

#include <stdio.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {		//这样应付弹掉所有的空格，不符合要求
			continue;
		}
		putchar(c);
	}

	return 0;
}


//例6：单词统计
////先自己写一个
////单词统计程序应该根据空格、换行符或水平制表符来判断个数
////用getchar()函数配合while循环来完成输入
//
//#include <stdio.h>
//
//int main(void)
//{
//	int count;
//	char c;
//
//	count = 0;
//	while ((c = getchar()) != EOF) {
//		if (c == '\n' || c == '\t' || c == ' ') {
//			++count;
//		}
//	}
//	printf("Total is %d\n", count);
//
//	return 0;
//}

////大佬写的
//#include <stdio.h>
//#define IN 1		//是单词
//#define OUT 0		//不是单词
//
//int main(void)
//{
//	int c, nl, nw, nc, state;
//
//	state = OUT;
//	nl = nw = nc = 0;
//	while ((c = getchar()) != EOF) {
//		++nc;
//		if (c == '\n')
//			++nl;
//		if (c == ' ' || c == '\n' || c == '\t')
//			state = OUT;
//		else if (state == OUT) {
//			state = IN;
//			++nw;
//		}
//	}
//
//	printf("%d %d %d\n", nl, nw, nc);
//
//	return 0;
//}