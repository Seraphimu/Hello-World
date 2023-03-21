//14.5.Funds1.c；
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(double x, double y);
int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };

    printf("Stan has a total of $%.2f.\n",
        sum(stan.bankfund, stan.savefund));

    return 0;
}

double sum(double x, double y)
{
    return (x + y);
}