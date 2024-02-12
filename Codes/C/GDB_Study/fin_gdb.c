#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int * ptr;
    int n;
    int i;

    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", ptr + i);
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    putchar('\n');

    return 0;
}
