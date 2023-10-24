//输入一段文字，以#结尾，然后判断空格、换行和其他字符的个数

#include <stdio.h>

int main(void)
{
    int space = 0, row = 0, others = 0;
    char ch;
    while ((ch = getchar()) != '#') {
        if (ch == ' ') {
            space++;
        }
        else if (ch == '\n') {
            row++;
        }
        else {
            others++;
        }
    }

    printf("space: %d, row: %d, others: %d\n", space, row, others);

    return 0;
}