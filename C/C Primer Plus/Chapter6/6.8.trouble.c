#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed(q to quit): ");
    status = scanf("%ld", &num);
    //while (status = 1)    error,混淆了“==”和“=”
    //有許多老司機在構建比較是否對等的表達式時喜歡將常量放在左側
    while (1 == status)
    {
        sum += num;
        printf("Please enter next integer(q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers um to %ld.\n", sum);

    return 0;
}
