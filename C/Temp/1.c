//fun()，统计一行字符串的个数，作为数值返回。
//字符串在main()函数中输入，规定所有单词由小写字母组成，单词之间有若干空格隔开，一行的开始没有空格。
#include <stdio.h>
#define MAX 114514

int fun(char * str);

int main(void)
{
    char str[MAX];
    int i = 0;
    // 这种输入方式是有问题的，这种输入方式，字符串中存在空格的时候就只会读取第一个空格之前的字符串
    // scanf("%s", str);
    // printf("%s\n", str);
    printf("请输入一个一个一个一个字符，回车键中止\n");
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    printf("%d\n", fun(str));

    return 0;
}

int fun(char * str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        //当前不为空格，且下一位为空格
        //当前不为空格，且下一位为结尾
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            count++;
        }
        i++;
    }

    return count;
}


/*
用当前字符不是空格，且下一个字符是空格或者是结尾来判断当前字符是一个单词的最后一个字符。
输入字符串最好不要用scanf()这玩意一遇到空格就会把空格后面的丢掉
最好用while + getchar()
*/






//答案：
// int fun(char *s)
// {
//     int i,j=0;
//     //遍历字符串
//     for(i=0;s[i]!='\0';i++)
//         //如果当前字符不为空格 且 下一个字符为空格 或 下一个字符不为结尾则j++
//         if(s[i]!=' ' && (s[i+1] ==' '|| s[i+1]=='\0'))
//             j++;
//     return j;
// }