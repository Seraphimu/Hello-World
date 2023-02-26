#include <stdio.h>

int main(void)
{
    //str1和str2指向一同一個字符串常量：HelloWorld!
    const char * str1 = "Hello World!";
    const char * str2 = "Hello World!";

    //str3和str4是兩塊獨立的空間
    char str3[] = "Hello World!";
    char str4[] = "Hello World!";

    printf("%s", str1);

    return 0;
}