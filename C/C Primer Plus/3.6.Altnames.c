//3.6.Altnames.c -- Portable type:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    //define PRId32 = d
    printf("me32 = %" PRId32 "\n", me32);
    // printf("sizeof(int32_t) = %zd\n", sizeof(int32_t));
    // printf("sizeof(int16_t) = %zd", sizeof(int32_t));
    // printf("sizeof(int64_t) = %zd\n", sizeof(int64_t));
    // printf("sizeof(int8_t) = %zd\n", sizeof(int8_t));

    return 0;
}