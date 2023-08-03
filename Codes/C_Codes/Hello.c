// #include <stdio.h>
// int main(void)
// {
//     printf("Hello World!\n");

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     printf("Hello, ");
//     printf("World!");
//     printf("\n");

//     return 0;
// }


#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;      //换算fahr 和 celsius的公式
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}