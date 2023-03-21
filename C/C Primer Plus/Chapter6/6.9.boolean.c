#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    //使用布爾類型變量判斷真假
    _Bool input_is_good;

    printf("Please enter an integer to be summed(q to quit): ");
    input_is_good = (1 == scanf("%ld", &num));
    while (input_is_good)
    {
        sum += num;
        printf("Please enter next integer(q to quit): ");
        input_is_good = (1 == scanf("%ld", &num));
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
