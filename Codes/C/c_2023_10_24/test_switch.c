#include <stdio.h>

int main(void)
{
    char ch[40];
    scanf("%s", ch);

    switch (ch[0]) {
        case 'S':
            switch (ch[1]) {
                case 'a':
                    printf("周六\n");
                    break;
                case 'u':
                    printf("周日\n");
                    break;
            }
            break;      //外层的switch语句不要忘记用break;
        case 'T':
            switch (ch[1]) {
                case 'u':
                    printf("周二\n");
                    break;
                case 'h':
                    printf("周四\n");
                    break;
            }
            break;
        case 'W':
            printf("周三\n");
            break;
        case 'M':
            printf("周一\n");
            break;
        case 'F':
            printf("周五\n");
            break;
        default:
            printf("Error\n");
            break;
    }

    return 0;
}
