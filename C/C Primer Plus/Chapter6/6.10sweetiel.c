#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    //初始化計數變量
    int count = 1;

    //判斷
    while (count <= NUMBER)
    {
        printf("%d. Be my Balentine!\n", count);
        //更新計數變量
        count++;
    }

    return 0;
}
