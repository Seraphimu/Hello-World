#include <stdio.h>

int main(void)
{
    int n = 9;
    float *pFloat = (float*)&n;
    printf("n = %d\n", n);
    printf("*pFloat = %lf\n", *pFloat);

    *pFloat = 9.0;
    printf("n = %d\n", n);
    printf("*pFloat = %lf\n", *pFloat);

    return 0;
}

// //An example
// int main(void)
// {
//     float a = 5.5f;
//     //101.1
//     //s = 0, M = 1.011 E = 2
//     //s = 0, M = 011 E = 2 + 127
//     //0100 0000 1011 0000 0000 0000 0000 0000
//     //MEMO: 40 B0 00 00
//     //READ: 0 10000001 01100000000000000000000

//     return 0;
// }