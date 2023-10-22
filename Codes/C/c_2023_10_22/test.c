#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m, n;
    scanf("%d%d", &m, &n);
    
    int i, j;
    int ** arr = (int **)malloc(m * sizeof(int *));
    
    for (i = 0; i < m; i++) {
        *(arr + i) = (int *)malloc(n * sizeof(int));
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &(*(*(arr + i) + j)));
        }
    }

    printf("Ret:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    return 0;
}








// #include <stdio.h>
// #include <malloc.h>
// const int num = 2;

// int main() {
// 	int **a = (int**)malloc(num*sizeof(int*));
// 	for (int i = 0; i < num; i++) 
// 		a[i] = (int*)malloc(num*sizeof(int)); 
// 	for (int i = 0; i < num; i++) {
// 		for (int j = 0; j < num; j++) 	
// 			printf("%p ", &a[i][j]); //输出元素的地址 
// 		printf("\n");
// 	}
// 	for (int i = 0; i < num; i++) //记得释放空间
// 		free(a[i]);
// 	free(a);
// 	return 0;
// } 















// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     int m, n;
//     scanf("%d%d", &m, &n);
//     int ** arr = (int **)malloc(sizeof(int) * m * n);
//     int i, j;
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", (arr + i) + j);
//             // scanf("%d", ((arr + i) + j));
//         }
//     }

//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             printf("%d ", *(*(arr + i) + j));
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define MONTHS 12
// #define YEARS 5

// int main(void) {
//     const float rain[YEARS][MONTHS] =
//     {
//         {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//         {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//         {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//         {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//         {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//     };

//     int year, month;
//     float subtot, total;

//     for (year = 0, total = 0; year < YEARS; year++) {
//         for (month = 0, subtot = 0; month < MONTHS; month++) {
//             subtot += *(*(rain + month) + year);
//         }
//         total += subtot;
//     }

//     printf("\nThe yearly average is %.1f inches.\n\n",
//            total/YEARS);
//     printf("MONTHLY AVERAGES:\n\n");
//     printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
//     printf(" Nov  Dec\n");

//     for (month = 0; month < MONTHS; month++) {
//         for (year = 0, subtot = 0; year < YEARS; year++) {
//             subtot += *(*(rain + year) + month);
//         }
//         printf("%4.1f ", subtot/YEARS);
//     }
//     printf("\n");

//     return 0;
// }



























// #include <stdio.h>
// #define MONTHS 12
// #define YEARS 5

// int main(void) {
//     const float rain[YEARS][MONTHS] =
//     {
//         {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//         {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//         {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//         {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//         {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//     };

//     int year, month;
//     float subtot, total;

//     printf("YEAR    RAINFALL    (inches)\n");
//     for (year = 0, total = 0; year < YEARS; year++) {
//         for (month = 0, subtot = 0; month < MONTHS; month++) {
//             subtot += rain[year][month];
//         }
//         printf("%5d %15.1f\n", 2010 + year, subtot);
//         total += subtot;
//     }
//     printf("\nThe yearly verages is %1.f inches.\n\n", total / YEARS);
//     printf("MONTHLY AVERAGES:\n\n");
//     printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
//     printf(" Nov  Dec\n");

//     for (month = 0; month < MONTHS; month++) {
//         for (year = 0, subtot = 0; year < YEARS; year++) {
//             subtot += rain[year][month];
//         }
//         printf("%4.1f ", subtot/YEARS);
//     }

//     return 0;
// }