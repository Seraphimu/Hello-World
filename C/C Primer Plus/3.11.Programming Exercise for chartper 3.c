//3.11.c -- Programming Exercese:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#define YEAR 3.156E7

////Program 3.11.1:
////Overflow and underflow:
//int main(void)
//{
//    int32_t num1 = 2147483647;
//    int32_t overflow = num1 + 2;
//    int32_t num2 = -2147483648;
//    int32_t underflow = num2 - 2;
//    printf("num1 = %d\n", num1);
//    printf("overflow = %d\n", overflow);
//    printf("num2 = %d\n", num2);
//    printf("underflow = %d\n", underflow);
//    return 0;
//}


////Program 3.11.2:
////ASCII to integer:
//int main(void)
//{
//    printf("Please input a ASCII, it will become a character: ");
//    int ch = 0;
//    scanf("%d", &ch);
//    printf("%d in ASCII is %c.\n", ch, ch);
//    return 0;
//}

////Program 3.11.3:
////Print text and alarm:
//int main(void)
//{
//    printf("\aStartled by the sudden sound, Sally shouted,\"By the Great Pumpkin, what was that!\"\n");
//    return 0;
//}

////Program 3.11.4:
////Print float:
//int main(void)
//{
//    printf("Enter a floating-point value: ");
//    float num = 0;
//    scanf("%f", &num);
//    printf("fixed-point notation: %f\n", num);
//    printf("exponential notation: %e\n", num);
//    printf("p notation: %a\n", num);
//    return 0;
//}


////Program 3.11.5:
////Convert age to sencends:
//int main(void)
//{
//    int age = 0;
//    printf("Please input your age: ");
//    scanf("%d", &age);
//    printf("Your age convert to seconds is: %lf\n", age * YEAR);
//    return 0;
//}


////Program 3.11.6:
////Convert units:
//int main(void)
//{
//    printf("Please input water in quart number: ");
//    int quart = 0;
//    scanf("%d", &quart);
//    printf("%d quart water is %dg is %lefen.\n", quart, quart * 950, (quart * 950) / 3.156E-23);
//    return 0;
//}


////Program 3.11.7:
////Convert inch to cm:
//int main(void)
//{
//    printf("Please input your high in inch: ");
//    float high = 0;
//    scanf("%f", &high);
//    printf("Your have %fcm\n", high * 2.54);
//    return 0;
//}


//Program 3.11.8:
//The best:
int main(void)
{
    float cups = 0;
    printf("Please input cups: ");
    scanf("%f", &cups);
    float pints = 2 * cups;
    float ounce = cups / 8;
    float spoons = ounce / 2;
    float tea_spoons = spoons / 3;
    printf("ounce = %f\npints = %f\nsooons = %f\ntea_spoons = %f\n", ounce, pints, spoons, tea_spoons);
    return 0;
}
