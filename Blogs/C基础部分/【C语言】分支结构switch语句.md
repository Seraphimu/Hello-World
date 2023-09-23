# 分支结构switch语句

switch和if一样是选择结构中的语句，但是它们的用法大不相同，各有优势：

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