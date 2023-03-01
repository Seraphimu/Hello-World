// //找出整數的所有因子，整數由鍵盤輸入
// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int i;
//     for (i = 2; i < n; i++)
//         if (n % i == 0)
//             printf("%d ", i);
//     return 0;
// }

//輸入含有空格的字符串統計多少單詞，輸出單詞個數和字符串長度
#include <stdio.h>
#include <string.h>
#define MAX 1000
int main(void)
{
    char str[MAX];
    printf("請輸入單詞，輸入“#”退出\n");
    char ch;
    int i = 0, count = 0;
    while ((ch = getchar()) != '#')
    {
        str[i] = ch;
        i++;
        if (ch == ' ')
            count++;
    }
    int len = strlen(str);
    printf("%d個單詞, %d個字符串長度\n", count, len);

    return 0;
}