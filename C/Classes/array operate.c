//數組的增刪改查
#include <stdio.h>
#define LEN 10
//有效位數檢測
int length(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
        if (arr[i] == 0)
            break;
    return i;
}
//輸出數組元素
void show(int arr[])
{
    //用有效長度做最大值
    int len = length(arr, LEN);
    int i;
    for (i = 0; i < len; i++)
        printf("%4d ", arr[i]);
    putchar('\n');
}
int del(int arr[], int index)
{
    int len = length(arr, LEN);
    if (index < 0 || index > del - 1)
        return -1;
    else
    {
        int i;
        for (i = index; i < len - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}
int main(void)
{
    int arr[LEN] = {3, 6, 9, 12, 15};
    printf("有效個數為%d\n", length(arr, LEN));
    del(arr, 3);
    show(arr);

    return 0;
}