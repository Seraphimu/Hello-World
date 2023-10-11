#include <stdio.h>
#define MAX 5
void hello();
int main(void)
{
    int i;
    int arr[MAX];
    
    for (i = 0; i < MAX; i++)
        arr[i] = i;
    hello();

    return 0;
}
void hello()
{
    printf("hello world!\n");
}
