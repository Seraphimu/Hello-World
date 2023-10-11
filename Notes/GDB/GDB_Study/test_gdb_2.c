#include <stdio.h>
#define MAX 10
void HelloWorld();
int main(void)
{
    int arr[MAX];
    int i;

    for (i = 0; i < MAX; i++)
        arr[i] = i;
    HelloWorld();

    return 0;
}

void HelloWorld() {
    printf("Hello World!\n");
}
