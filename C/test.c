#include <stdio.h>
#define MAX 10

//It is a array that I will judge.
int judge(int arr[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0)
            continue;
        count++;
    }
    return count;
}

//Delete an argument in the array.
//1,2,3,4,5
//arr[2] = arr[3]
//arr[3] = arr[4]
int del(int arr[], int length, int index)
{
    if (index < 0 || index > length)
        return -1;
    for (int i = index; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    return 0;
}

int main(void)
{
    int arr[MAX] = {1, -2, 3, -4, 5};
    printf("The array's used %d length\n", judge(arr, MAX));
    
    int n = 2;
    del(arr, MAX, n);
    printf("Then I delete arr[%d].\n", arr[n]);
    for (int i = 0; i < MAX; i++)
        printf("%d ", arr[i]);

    return 0;
}