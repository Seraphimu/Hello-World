// #include <stdio.h>

// int main(void)
// {
//     int arr[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};

//     int (*par)[5] = arr;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%4d ", *(*(par + i) + j));
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int *ptr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);
   
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    return 0;
}
