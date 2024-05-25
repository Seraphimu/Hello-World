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

// void display2(int pa[][3][4])        //等价下行的写法
void display2(int (*pa)[3][4])
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                // printf("%4d ", pa[i][j][k]);
                printf("%4d ", *(*(*(pa + i) + j) + k));
            }
            printf("\n");
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


    int arr[2][3][4] = {                //长为2， 宽为3， 高为4的三维数组
            {
                {1, 2, 3, 4}, 
                {5, 6, 7, 8}, 
                {9, 10, 11, 12}
            }, 
            {
                {13, 14, 15, 16}, 
                {17, 18, 19, 20}, 
                {21, 22, 23, 24}
            }
        };

    int (*pa)[3][4] = arr;              //声明一个N维数组的指针时，只能省去最左侧的参数。
    display2(pa);

    return 0;
}