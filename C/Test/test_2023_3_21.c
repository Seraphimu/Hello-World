#include <stdio.h>
#define MAX 100
int sump(int * start, int * end);

int main(void)
{
    int arr[MAX], n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int answer = sump(arr, arr + n);
    printf("sum for arr is %d\n", answer);

    return 0;
}

int sump(int * start, int * end)
{
    int sum = 0;
    while (start < end)
        sum += *start++;
    return sum;
}