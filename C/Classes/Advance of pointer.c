#include <stdio.h>

// //指向字符串的指針
// int main(void)
// {
//     //str1和str2指向一同一個字符串常量：HelloWorld!
//     const char * str1 = "Hello World!";
//     const char * str2 = "Hello World!";
//
//     //str3和str4是兩塊獨立的空間
//     char str3[] = "Hello World!";
//     char str4[] = "Hello World!";
//
//     printf("%s", str1);
//
//     return 0;
// }


// //指針數組
// //本質是數組，存放的是指針
// #include <stdio.h>
// int main(void)
// {
//     int arr1[5] = {1, 2, 4, 4, 5};
//     int arr2[5] = {5, 6, 7, 8, 9};
//     int arr3[5] = {9, 10, 11, 12, 13};
//     //這是一個存放整型指針的數組
//     int * par[3] = {arr1, arr2, arr3};
    
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             //*(par + i)得到第i個數組的首地址
//             //*(*(par + i)) + j得到第i個數組中的第j個元素
//             printf("%d ", *(*(par + i) + j));
//         }
//         putchar('\n');
//     }

//     return 0;
// }


//數組指針
//是一種指針，指向數組的指針
#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5};
    //數組指針
    int (*parr)[10] = &arr;
    double * d[5];
    double * (*pd)[5] = &d;

    return 0;
}