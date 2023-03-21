#include <stdio.h>

int main(void)
{
    int n = 0;

    //使用n++簡化6.3的代碼
    while (n++ < 3)
        printf("n is %d\n", n);
    printf("That's all this program does.\n");

    return 0;
}
