#include <stdio.h>

void f(int * a) {
    *a = 5;
    printf("%d\n", a);      //今天下午就犯了这个错误，定义了一个结构体指针，是，类型没有错，函数参数确实是和它同类型的，但是这个是没有被初始化的指针，存放的是随机值，对其解引用的结果不确定。
}

int main(void)
{
    int * a;        //这是一个没有被初始化的地址，对其解引用毫无意义。
    f(a);

    return 0;
}

//总之，午万不要解引用没有初始化的指针，这一点很重要。
