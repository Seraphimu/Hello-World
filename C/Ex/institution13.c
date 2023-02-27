// //計算：s = 1*2 + 2*3 + 3*4 + ... + 20*21
// #include <stdio.h>
// int main(void)
// {
//     int s = 0;
//     for (int i = 1; i <= 20; i++)
//     {
//         s += i * (i + 1);
//     }
//     printf("%d\n", s);
//     return 0;
// }

//實現文本文件file1.dat的内容讀取出來，顯示到屏幕上
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char ch;
    FILE *fp;
    
    if ((fp = fopen("file1.dat", "r")) == NULL)
    {
        printf("讀取文件失敗：\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}