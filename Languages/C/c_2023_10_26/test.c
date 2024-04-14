#include <stdio.h>

int main(void)
{
    char ch[] = "ABCDE";
    for (char i = 0; i < 6; i++) {
        for (char j = 0; j <= i; j++) {
            printf("%c", ch[j]);
        }

        printf("\n");
    }

    return 0;
}