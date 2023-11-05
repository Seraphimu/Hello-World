#include <stdio.h>
int max(int x, int y, int z);
int min(int x, int y, int z);
int main(void)
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    printf("Max is %d\n", max(x, y, z));
    printf("Min is %d\n", min(x, y, z));

    return 0;
}

int max(int x, int y, int z)
{
    x = x < y ? y : x;      //将较大值赋给x
    x = x < z ? z : x;      //作用同上句
    
    return x;
}
int min(int x, int y, int z)
{
    x = x > y ? y : x;
    x = x > z ? z : x;

    return x;
}