### 【C语言】数组指针
顾名思义，数组指针是指向数组的指针。
例如，p是一个指向含有3个int元素的一维数组的指针：
```c
int (*p)[3];            //圆括号的优先级更高，让p先与*结合再与[]结合
```

用法：
```c
#include <stdio.h>

// void display1(int p[][3])            //等价下行写法
void display1(int (*p)[3])
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(p + i) + j));
            // printf("%d ", p[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    
    int zippo[2][3] = {{1, 1, 4}, {5, 1, 4}};
    int (*pz)[3] = zippo;            //int (*pz)[3]是一个指向含有3个int元素的一维数组的指针。
    display1(pz);
    printf("pz = %p\n", pz);
    printf("pz + 1 = %p\n", pz + 1);    //和pz相差12个字节，即3个int的大小。

    return 0;
}
```