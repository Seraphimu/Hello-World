//用指針和數組兩種方法實現如下功能：將一個字符串逆序存放
//要求（1）：主函數中完成輸入和輸出字符串
//要求（2）：逆序存放功能用子函數完成
#include <stdio.h>
#include <string.h>
#define MAX 20
char * sort1(char ch[])
{   
    char s[MAX];
    int i;
    int j = 0;
    for (i = strlen(ch); i > 0; i--)
    {
        s[j] = ch[i];
        j++;
    }
    char * str = s;

    return str;
}
int main(void)
{
    char ch[MAX];
    int i;
    scanf("%s", ch);

    printf("%s", sort1(ch));

    return 0;
}