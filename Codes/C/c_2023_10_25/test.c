#include <stdio.h>

int main(void)
{
    char ch = '$';

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        putchar('\n');
    }

    return 0;
}
