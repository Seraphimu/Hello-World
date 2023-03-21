#include <stdio.h>

int main(void)
{
    int n = 3;
   
    //n爲0時結束循環
    //while循環括號內的表達式爲假時結束循環
    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n = -3;
    //同樣n爲0時結束循環
    while (n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);

    return 0;
}
