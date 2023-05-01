// //雙指針法，數組求和
// #include <stdio.h>
// #define MAX 100
// int sump(int * start, int * end);

// int main(void)
// {
//     int arr[MAX], n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
    
//     int answer = sump(arr, arr + n); //arr等價於arr[0]的地址，arr + n等價於數組最後一位+1的地址
//     printf("sum for arr is %d\n", answer);

//     return 0;
// }

// int sump(int * start, int * end)        //雙指針
// {
//     int sum = 0;
//     //end指向數組最後一位的后一位，即“越界的地方”，
//     //但是不必擔心，這種寫法在start == end的時候就會結束循環，不會導致越界操作
//     while (start < end)
//         sum += *start++;       //求和操作
//     return sum;
// }

// //二分查找，先排后找
// //選擇排序
// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 100

// void SelectionSort(int arr[], int len);
// int BinSearch(int arr[], int len, int value);
// void Swap(int *num1, int *num2);

// int main(void)
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int answer = BinSearch(arr, n, 15);
//     printf("index = %d\n", answer);

//     return 0;
// }

// void SelectionSort(int arr[], int len)
// {
//     int i, j;
//     for (i = 0; i < len - 1; i++)
//     {
//         int min = i;
//         for (j = i + 1; j < len; j++)
//         {
//             if (arr[min] > arr[j])
//                 min = j;
//         }
//         Swap(&arr[min], &arr[i]);
//     }
// }
// int BinSearch(int arr[], int len, int value)
// {
//     SelectionSort(arr, len);
//     int left = 0;
//     int right = len - 1;
//     int mid;

//     while (left <= right)
//     {
//         //這裏踩坑了，當時寫了個減號，直接死循環
//         mid = (right + left) / 2;
//         if (value == arr[mid])
//             return (right + left) / 2;
//         else if (value > arr[mid])
//             left = mid + 1;
//         else
//             right = mid - 1;
//     }
//     printf("I can't find the value: %d\n", value);
//     return -114514;
// }

// void Swap(int *num1, int *num2)
// {
//     int tmp = *num1;
//     *num1 = *num2;
//     *num2 = tmp;
// }