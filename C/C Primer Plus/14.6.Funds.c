//14.6.Funds.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define FUNDILEN 50

struct funds {
    char bank[FUNDILEN];
    double bankfund;
    char save[FUNDILEN];
    double savefund;
};

double sum(const struct funds* money);
int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };

    printf("Stan has a total of $%.2f.\n", sum(&stan));

    return 0;
}

double sum(const struct funds* money)
{
    return (money->bankfund + money->savefund);
}