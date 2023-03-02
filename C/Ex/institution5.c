// //輸入三個整數，求出最小值
// #include <stdio.h>
// #define N 3
// int main(void)
// {
//     int arr[N];
//     int i, j;
//     for (i = 0; i < N; i++)
//         scanf("%d", &arr[i]);
//     int min = 0;
//     for(j = 1; j < N; j++)
//         if (arr[min] > arr[j])
//             min = j;
//     printf("min is %d\n", arr[min]);

//     return 0;
// }


//輸入體重w和身高h，輸出身體體重指數BMI = w / (h * h)；
//若BMI < 18.5 判斷偏輕；18.5 <= BMI <= 23.9判斷正常；
//23.9 < BMI <= 27.9，判斷超重；BMI > 27.9判斷肥胖
#include <stdio.h>
int main(void)
{
    double w, h;
    puts("請以此輸入體重和身高");
    scanf("%lf%lf", &w, &h);
    double bmi = w / (h * h);
    if (bmi < 18.5)
        printf("偏輕\n");
    else if (18.5 <= bmi && bmi <= 23.9)
        printf("正常\n");
    else if (23.9 < bmi && bmi <= 27.9)
        printf("超重");
    else if (bmi > 27.9)
        printf("肥胖\n");
    return 0;
}


// //鍵入5整數進入數組str，找出str中的數的最大值，並計算平均值，結果保留兩位小數
// #include <stdio.h>
// #define N 5
// int main(void)
// {
//     int str[N];
//     int i, j;
//     int s = 0, ave = 1;
//     for (i = 0; i < N; i++)
//         scanf("%d", &str[i]);
//     int max = 0;
//     for (j = 0; j < N; j++)
//     {
//         s += str[j];
//         if (str[j] > str[max])
//             max = j;
//     }
//     ave = s / N;
//     printf("max is %d, average is %d\n", str[max], ave);
//     return 0;
// }
