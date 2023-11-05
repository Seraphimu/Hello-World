#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void) {
    int** arr = (int**)malloc(sizeof(int*) * SIZE);
    int i, j;
    for (i = 0; i < SIZE; i++) {
        arr[i] = (int*)malloc(sizeof(int) * (i + 1));
        for (j = 0; j <=i; j++) { 
            if (i == j || j == 0) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j <=i; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < SIZE; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}