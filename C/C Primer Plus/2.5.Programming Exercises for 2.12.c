//2.5.Programming Exercises for 2.12:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////Program 2.12.1:
////Output your name:
//int main(void)
//{
//	printf("First Name Last Name.\n");
//	printf("First Name\n");
//	printf("Last Name\n");
//	printf("Last Name ");
//	printf("Last Name\n");
//	return 0;
//}


////Program 2.12.2:
////Output yours name and address:
//int main(void)
//{
//	printf("Name, Address\n");
//	return 0;
//}


////Program 2.12.3:
////Convert years to days:
//int main(void)
//{
//	int years = 100;
//	int days = 366 * years;
//	printf("Yours age is %d years old, days is %d.\n", years, days);
//	return 0;
//}


////Program 2.12.4:
////Output three lines text:
//int main(void)
//{
//	printf("For he's a jolly good fellow!\n");
//	printf("For he's a jolly good fellow!\n");
//	printf("For he's a jolly good fellow!\n");
//	printf("Which nobody can deny!\n");
//	return 0;
//}



////Program 2.12.5:
////Output text:
//int main(void)
//{
//	printf("Brazil, Russia, India, China\n");
//	printf("India, China\n");
//	printf("Brazil, Russia\n");
//	return 0;
//}


////Program 2.12.6:
////toes, toes*toes and toes*2:
//int main(void)
//{
//	int toes = 10;
//	printf("toes = %d, toes * 2 = %d, toes * toes = %d", toes, toes * 2, toes * toes);
//	return 0;
//}


////Program 2.12.7:
////Smile!:
//int main(void)
//{
//	printf("Smile!Smile!Smile!\nSmile!Smile!\nSmile!\n");
//	return 0;
//}


////Program 2.12.8:
////Call another function:
//void one_three(void);
//void two(void);
//int main(void)
//{
//	printf("starting now:\n");
//	one_three();
//	printf("done!\n");
//	return 0;
//}
//
//void one_three(void)
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//void two(void)
//{
//	printf("two\n");
//}



//Test for variable's address:
int main(void)
{
	int num;
	//Garbage values:
	/*printf("%d at %p\n", num, &num);*/
	num = 6;
	printf("%d at %p\n", num, &num);
	num = 88;
	printf("%d at %p\n", num, &num);
	return 0;
}