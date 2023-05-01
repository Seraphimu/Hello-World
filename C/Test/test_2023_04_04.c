#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    int min = num1 < num2 ? num1 : num2;
    
    int i;
    for (i = min; i > 0; i--)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}