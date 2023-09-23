# 递归打印m到n的值

```c
#include <stdio.h>

//递归打印min到max的值：
//min最小值max最大值：
int f(int min, int max)
{
    if (max < min)
    {
        printf("输入错误：\n");
        return 0;
    }

    printf("%d\n", min);

    if (min < max)
        return f(min + 1, max);
}

int main(void)
{
    int num1 = 0;
    int num2 = 0;

    puts("请输入想打印几到几");
    scanf("%d%d", &num1, &num2);
    f(num1, num2);
    
    return 0;
}
```