# 分支结构switch语句

switch和if一样是选择结构中的语句，但是它们的用法大不相同，各有优势：

### switch语句的语法

switch语句的括号内只接受整型和字符型表达式，case标签也须是整数类型或者字符类型

```c
switch (整型表达式) {
    case 常量表达式1: 
        语句（可选项）
    ...
    case 常量表达式2:
        语句（可选项）
    default: （default标签行不需要的时候可以不写）
        语句
}
```

进入switch语句后，
1. C语言会自上而下判断switch语句括号中的表达式是否和case标签的表达式相等，
2. 若相等则执行该标签内的语句。注意：若该标签中没有break语句，执行完这个标签的语句之后会顺序执行其他标签中的语句
3. 若不相等则继续往下判断
4. 若到最后一个case标签依然不相等，若有default标签行则执行default中的语句
5. 若没有则直接结束switch语句





下面的代码展现switch语句的基本用法：

```c
//输入月份判断这个月有多少天（忽略闰年和平年二月的区别）：
#include <stdio.h>

int main(void)
{
    //定义一个变量作为月份：
    int month = 0;
    scanf("%d", &month);
    //switch语句后的括号内的num可以理解为判断条件：
    switch(month)
    {
        //输入的num的值如果是case后的数字，那么case后的printf()函数就会执行，否则则跳过：
        //把多句case写在一起的写法叫做“多标签“，满足以下1，3, 5……任意一个条件就会执行printf("这个月还有31天：\n");
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("这个月有31天：\n");
            //break语句的作用是当case语句中的内容执行完成之后跳出这个case语句：
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("这个月有30天：\n");
            break;
        case 2:
                printf("这个月有28天：\n");
                break;
        //当所有的case子句都不满足条件时执行default语句(可选)：
        default:
                printf("输入错误！\n");
    }
    return 0;
}
```

> 注意：break;这条短小的语句在这里非常重要，多了和少了都有大麻烦。
