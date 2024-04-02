/*
typedef struct STU {
    char id[100];
    double score;
}STU;
找出最低分，通过返回主函数
*/
#include <stdio.h>
#include <stdlib.h>
#define N 3
typedef struct STU {
    char id[100];
    double score;
}STU;

void fun(STU a[], STU * s);

int main(void)
{
    //手动分配空间也可以
    //C语言是怎么自己给各个类型分配空间的？
    // STU * s = NULL;
    // s = (STU *)malloc(sizeof(STU));

    STU s;
    STU a[N];
    a[0].score = 114.514;
    a[1].score = 1919.810;
    a[2].score = 514.114;
    
    fun(a, &s);
    printf("%lf\n", s.score);

    return 0;
}

void fun(STU a[], STU * s)
{
    int i;
    int min = 0;

    for (i = 0; i < N; i++)
    {
        //用当前和min比较，用min存放当前相对小的
        //直到遍历完毕为止
        //一开始写错了草，以后写选择排序从小到大就写小于号，从大到小就写大于号
        if (a[i].score < a[min].score)
        {
            min = i;
        }
    }

    // //没有分配空间
    // s = (STU *)malloc(sizeof(STU));
    s->score = a[min].score;
}

/*
写这个程序的时候，第一是结构体忘了，把一个指针没有分配地址空间就直接拿来解引用。
还是这些细节的问题，还有一个错误就是把一个一级指针传到函数中，给它分配地址空间，这就相当于
fun(a);
fun(s)
{
    s = a;
    s = malloc();
}
只是改变了函数s这个指针的值，即使实参也用s，那也不是同一个s

写选择排序的时候，把符号方向搞反了，这个我经常弄反，今天来总结一下
if (a[i] < a[min]) min = i;     //从小到大；如果a[i]比a[min]小，就把i赋给min，从而让min拿到最小元素的下标
if (a[i] > a[min]) min = i;     //从大到小；如果a[i]比a[min]大，就把i赋给min，从而让min拿到最大元素的下标

malloc()的时候没有引头文件

不写不知道，一写吓一大跳，全是错误。
*/