# 用C语言实现两个整数相加

## 1.首先出于目的我们需要输入两个整数和输出两个整数相加的值，需要用到printf()函数所以需要引头文件stdio.h
`#include <stdio.h>`

## 2. 声明两个整形变量
```c
int num1 = 0;
int num2 = 0;
```

## 3. 使用scanf()函数输入两个整数
`scanf("%d%d", &num1, &num2);`

## 4. 使用printf()函数完成结果的输出
`printf("%d + %d = %d\n", num1, num2, num1 + num2);`

## 综上所述
```c
#include <stdio.h>

int main(void)
{
    //声明两个整形变量作为操作数：
    int num1 = 0;
    int num2 = 0;

    //printf()函数和scanf()函数中的转换说明和变量要一一对应
    scanf("%d%d", &num1, &num2);
    printf("%d + %d = %d", num1, num2, num1 + num2);
    
    return 0;
}
```