#include <stdio.h>

int main(void)
{
    int true_val, false_val;

    //表達式爲真的值是1，表達式爲假的值是0
    true_val = (10 > 2);
    false_val = (10 == 2);

    printf("true = %d; false = %d\n", true_val, false_val);

    return 0;
}
