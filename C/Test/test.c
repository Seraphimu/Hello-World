#include <stdio.h>

int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6}, i, j, k;

    for (i = 0, j = 5; i < j; i++, j--)
        k = arr[i], arr[i] = arr[j], arr[j] = k;
    
    for (i = 0; i < 6; i++)
        printf("%d ", arr[i]);

    return 0;
}