編程題1：實現四頁玫瑰數字
```c
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, j;
    for (i = 1000; i < 10000; i++)
    {
        int sum = 0;        //這裏經常踩坑，每次循環不初始化結果必錯
        for (j = 1; j <= i; j *= 10)
        {
            sum += pow(i / j % 10, 4);
        }
        if (sum == i)
            printf("%d\n", i);
    }

    return 0;
}
```



編程題2：輸入10個數，冒泡排序，五個一行
```c
#include <stdio.h>
#define N 10
//冒泡排序
void sort(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1; j++)
        {
            if (arr[j] > arr[j + 1])    //從小到大，若是從大到小將">"換成"<"即可
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(void)
{
    int arr[N];
    int i, j;
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);        //輸入操作，scanf()函數又一次踩坑……
    
    for (j = 0; j < N; j++)
    {
        printf("%4d ", arr[j]); //加個4好看些沒什麽鳥用
        if (j == 4)             //控制換行，五行一個（TMD，這裏踩過一次坑，把j寫成n了……）
            putchar('\n');
    }

    return 0;
}
```

編程題3：輸入6~10上午好，輸入11~13中午好，14~18下午好，其他時間輸出休息時間
方法一：if語句
```c
#include <stdio.h>
int main(void)
{
    int time;
    scanf("%d", &time);

    if (time > 23 || time < 0)
        printf("輸入錯誤\n");
    else if (6 <= time && time <= 10)
        printf("上午好\n");
    else if (11 <= time && time <= 13)
        printf("中午好\n");
    else if (14 <= time && time <= 18)
        printf("下午好\n");
    else
        printf("休息時間");

    return 0;
}
```

方法二：switch語句
```c
#include <stdio.h>
int main(void)
{
    int time;
    scanf("%d", &time);
    switch (time)
    {
        default:
            printf("休息時間\n");
            break;
        case 6: case 7: case 8: case 9: case 10:
            printf("上午好\n");
            break;
        case 11: case 12: case 13:
            printf("中午好\n");
            break;
        case 14: case 15: case 16: case 17: case 18:
            printf("下午好\n");
            break;
    }

    return 0;
}
```

編程題4：輸入成績，輸入一次提醒一次這是第幾個學生，輸入負數結束，並輸出平均值
```c
#include <stdio.h>
int main(void)
{
    double score;
    int i = 1;
    double sum = 0;
    
    while (scanf("%lf", &score) && score > 0)
    {
        printf("第%d個學生的成績輸入完畢\n", i);
        sum += score;
        i++;
    }

    printf("平均成績為%.2lf\n", sum / (i - 1));       //踩坑：必須輸入負數才會退出，因此多輸入一次，循環多執行了一次，

    return 0;
}
```

編程題5：找出整數的所有因子，整數由鍵盤輸入
```c
#include <stdio.h>
int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    //踩坑：這個地方的判斷條件不能寫i <= n這樣就會把原數字給搞出來
    for (i = 2; i < n; i++)     //這裏我嘗試過套用找素數的方法是用sqrt函數，但是這樣導致因子只能找一點點，不能找多了(doge)
    {
        if (0 == n % i)
            printf("%d\n", i);
            
    }

    return 0;
}
```

編程題6：輸入含有空格的字符串統計多少單詞，輸出單詞個數和字符串長度
```c
#include <stdio.h>
#define MAX 1000
int main(void)
{
    char str[MAX];
    int i = 0, count = 0;
    char ch;
    printf("請輸入單詞，用空格間隔，按#鍵退出\n");
    while ((ch = getchar()) != '#')
    {
        i++;
        if (ch == ' ' || ch == '\n')
            count++;
    }

    printf("%d個單詞, 字符串長度為：%d\n", count, i);

    return 0;
}
```

編程題7：判斷閏年
```c
#include <stdio.h>
int main(void)
{
    int year;
    scanf("%d", &year);
    if (year < 0)
        printf("輸入錯誤\n");
    else if ((0 == year % 4 && 0 != year % 100) || 0 == year % 400)
        printf("%d年是個閏年\n");
    else
        printf("%d年不是閏年\n");

    return 0;
}
```

編程題8：輸入正整數，求位數，且順序和逆序打印出各位
方法一：遞歸
```c
#include <stdio.h>
//判斷位數
unsigned int f(unsigned int n)
{
    if (n > 0)
        return 1 + f(n / 10);
}
//正序排序
void g(unsigned n)
{
    if (n > 10)
        g(n / 10);
    printf("%d ", n % 10);
}
//逆序排序
void h(unsigned n)
{
    if (n == 0)
        return;
    else
    {
        printf("%d ", n % 10);
        h(n / 10);
    }
}
int main(void)
{
    unsigned int n;
    scanf("%u", &n);
    printf("%d是%d位數\n", n, f(n));
    g(n);
    printf("\n");   //不加換行太醜了
    h(n);
    putchar('\n');

    return 0;
}
```

//方法二：迭代
```c
#include <stdio.h>
int main(void)
{
    unsigned int n, arr[100];
    int i, j, k;
    int count = 0;//記錄位數
    scanf("%u", &n);
    //放到數組裏 + 統計位數
    for (i = 1; i <= n; i *= 10)
    {
        arr[count] = n / i % 10;            //踩坑：這個地方用count來記錄數組的位置，而不是i
        if (0 == (n / i))
            break;
        count++;
    }

    for (j = 0; j < count; j++)
        printf("%d ", arr[j]);
    putchar('\n');

    for (k = count - 1; k >= 0; k--)        //踩坑：這裏k要--而不是++
        printf("%d ", arr[k]);
    putchar('\n');


    return 0;
}
```

編程題9：輸入三個整數，求出最小值
```c
#include <stdio.h>
int min(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    if (b < a && b < c)
        return b;
    if (c < a && c < b)
        return c;
}
int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", min(a, b, c));

    return 0;
}
```

編程題10：輸入體重w和身高h，輸出身體體重指數BMI = w / (h * h)；
若BMI < 18.5 判斷偏輕；18.5 <= BMI <= 23.9判斷正常；
23.9 < BMI <= 27.9，判斷超重；BMI > 27.9判斷肥胖
```c
#include <stdio.h>
int main(void)
{
    double w, h;
    printf("請輸入體重（單位：公斤）和身高（單位：米）\n");
    scanf("%lf%lf", &w, &h);
    double bmi = w / (h * h);
    if (bmi < 18.5)
        printf("偏輕\n");
    else if (18.5 <= bmi && bmi <= 23.9)
        printf("正常\n");
    else if (23.9 < bmi && bmi <= 27.9)
        printf("超重\n");
    else if (bmi > 27.9)
        printf("肥胖");

    return 0;
}
```

編程題11：鍵入5整數進入數組str，找出str中的數的最大值，並計算平均值，結果保留兩位小數
```c
#include <stdio.h>
#define N 5
int main(void)
{
    int str[N];
    int i, j;
    double sum = 0;
    for (i = 0; i < N; i++)
        scanf("%d", &str[i]);       //這裏scanf()又一次踩坑
    int max = 0;
    for (j = 0; j < N; j++)
    {
        if (str[max] < str[j])  //這裏第一次寫成arr了
            max = j;          //max被賦值為j的值后再去循環
        sum += str[j];
    }
    printf("最大值是%d, 平均值是%.2lf", str[max], sum / N);

    return 0;
}
```

編程題12：計算分段函數
1 - x         x < 0
2 * x - 2     x >= 0
```c
#include <stdio.h>
double f(double x)
{
    if (x < 0)
        return 1 - x;
    else
        return 2 * x - 2;
}
int main(void)
{
    double x;
    scanf("%lf", &x);
    printf("%lf", f(x));

    return 0;
}
```

編程題13：用指針和數組兩種方法實現如下功能：將一個字符串逆序存放
要求（1）：主函數中完成輸入和輸出字符串
要求（2）：逆序存放功能用子函數完成