# C语言中的常用转义字符

## C常用转义字符如下：
| 转义序列 | 含义                  |
|:----:|:-------------------:|
| \a   | 警报                  |
| \b   | 退格                  |
| \f   | 换页                  |
| \n   | 换行                  |
| \r   | 回车                  |
| \t   | 水平制表符               |
| \v   | 垂直制表符               |
| \\\  | 反斜杠                 |
| \'   | 单引号                 |
| \"   | 双引号                 |
| \?   | 问号                  |
| \0oo | 八进制值（oo必须是有效八进制值）   |
| \xhh | 十六进制值（hh必须是有效十六进制值） |
## 代码如下

```c
#include <stdio.h>

int main(void)
{
    //转义字符"\n"表示换行：
    //输出结果：
    //Hello
    //world!
    printf("Hello\nworld!\n\n");

    //"\t"表示水平制表符：
    //输出结果：hello   world!
    printf("hello\tworld!\n\n");

    //"\v"是垂直制表符：
    //输出结果：
    //Hello
    //     world!
    printf("Hello\vworld!\n\n");

    //"\f"是换页：
    //输出结果：
    //Hello
    //     world!
    printf("Hello\fworld!\n\n");

    //"\a"用于发出一声警告：
    //输出一声警告：
    printf("\a\n\n");
    
    //"\r"将当前位置滚回本行开头：
    //输出结果：world
    printf("hello\rworld!\n\n");

    //"\b"表示退格：
    //输出结果：hellworld
    printf("hello\bworld\n\n");


    //转义字符 \" 可以打印双引号，单引号同理：\'
    //输出：老师说："大家好"
    printf("老师说：\"大家好\"\n\n");
    
    //"\?"可以打印出问号：
    //输出一个问好
    printf("\?\n");

    // "\\"可以打印斜杠：
    //输出结果：C:\Users\Download
    printf("C:\\Users\\Download\n\n");

    //\0是空字符：
    printf("\0\n");
    return 0;
}
```