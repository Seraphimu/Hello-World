# C语言入门：“Hello World” 程序：

代码如下：

```c
#include <stdio.h>  //用#include指令包含标准输入输出头文件：stdio.h。
int main(void)      //main()函数是C程序的入口，在一个工程中有且只有一个。　
{
    printf("Hello World!\n");   //在屏幕上打印“Hello World！”，其中'\n'表示换行。
    return 0;       //return 是返回的意思， return 0； 即表示main()函数返回值为0。
}
```

输出如下：

```bash
Hello World!
```