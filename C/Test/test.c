#include <stdio.h>

int main(void) {
    //-1 = 11111111
    //11111111 = 256
    //整形补码为32位，全为1的值是-1
    //所以该值是2^32 - 1 = 4294967295，即32个1
    printf("%u\n", (unsigned)(-1));

    return 0;
}