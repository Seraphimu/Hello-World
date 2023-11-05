#include <stdio.h>
#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow[2] = {
        {
            {"Ewen", "Villard"}, 
            "grilled salmon", 
            "personality coach", 
            6188112.00
        }, 
        {
            {"Rodney", "Swillbelly"}, 
            "tripe", 
            "tabloid editor", 
            432400.00
        }
    };   
    
    struct guy * him;
    //打印数组两个元素的地址
    printf("address #1: %p #2: %p\n", 
            &fellow[0], &fellow[1]);
    him = &fellow[0];   //把数组的地址赋值给指针
    //打印指针指向的地址
    printf("pointer #1: %p #2: %p\n", him, him + 1);
    //打印对应地址的元素
    printf("him->inome is $%.2f: (*him).income is $%.2f\n", 
            him->income, (*him).income);
    him++;      //打印下一位的元素值
    printf("him->favfood is %s: him->handle.last is %s\n", 
            him->favfood, him->handle.last);

    return 0;
}
