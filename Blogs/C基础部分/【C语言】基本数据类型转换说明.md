# C语言的基本数据类型对应的转换说明

## 1. C语言数据类型关键字

| K&R给出的关键字 | C90标准添加的关键字 | C99标准添加的关键字 |
|:---------:|:-----------:|:-----------:|
| int       | signed      | _Bool       |
| long      | void        | _Complex    |
| short     |             | _Imaginary  |
| unsigned  |             |             |
| char      |             |             |
| float     |             |             |
| double    |             |             |

## 2. 存储大小

```c
//基本数据类型的存储大小：
#include <stdio.h>

int main(void)
{
    //sizeof是C语言的内置运算符，以字节为单位给出指定类型的大小，C99和C11提供%zd转换说明匹配sizeof的返回类型——size_t类型：
    printf("sizeof(int) = %zd\n\n", sizeof(int));
    printf("sizeof(long) = %zd\n\n", sizeof(long));
    printf("sizeof(long long) = %zd\n\n", sizeof(long long));
    printf("sizeof(short) = %zd\n\n", sizeof(short));
    printf("sizeof(unsigned int) = %zd\n\n", sizeof(unsigned int));
    printf("sizeof(unsigned short) = %zd\n\n", sizeof(unsigned short));
    printf("sizeof(unsigned long) = %zd\n\n", sizeof(unsigned long));
    printf("sizeof(unsigned long long) = %zd\n\n", sizeof(unsigned long long));
    printf("sizeof(float) = %zd\n\n", sizeof(float));
    printf("sizeof(double) = %zd\n\n", sizeof(double));
    printf("sizeof(char) = %zd\n\n", sizeof(char));
    　
    return 0;
}
```

## 3. 输出结果：

```bash
sizeof(int) = 4

sizeof(long) = 8

sizeof(long long) = 8

sizeof(short) = 2

sizeof(unsigned int) = 4

sizeof(unsigned short) = 2

sizeof(unsigned long) = 8

sizeof(unsigned long long) = 8

sizeof(float) = 4

sizeof(double) = 8

sizeof(char) = 1
```