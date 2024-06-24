#include <stdio.h>
#include <math.h>
#include <time.h>
#define MAXA 9
#define MAXK 11451419
double f1(int n, double a[], double x) {
    int i;
    double p = 0;
    for (i = 0; i <= n; i++) {
        p += a[i] * pow(x, i); 
    }
    
    return p;
}

double f2(int n, double a[], double x) {
    int i;
    double p = a[n];
    for (i = n; i > 0; i--) {
        //(a[i-1] + a[i] * x) * x + a[i-2]
        p = a[i - 1] + x * p;
    }

    return p;
}

void Test() {
    // typedef long clock_t;
    clock_t start, stop;
    double time;
    double a[MAXA];
    
    //_ACRTIMP clock_t __cdecl clock(void);
    //计算从main()函数到当前这个clock函数打了多少个点，所以stop - start就是从start处到stop处打了多少个点
    //CLK_TCK为一秒钟打了多少个点，所以(stop - start) / CLK_TCK就是从start到stop处运行了多少秒。
    start = clock();
    for (int i = 0; i < MAXK; i++) {
        f1(MAXA - 1, a, 1.1);
    }
    stop = clock();
    //看看执行了MAXK次之后运行了多少秒
    time = (double)(stop - start) / CLK_TCK;
    printf("f1_time = %lf\n", time);

    start = clock();
    for (int i = 0; i < MAXK; i++) {
        f2(MAXA - 1, a, 1.1);
    }
    stop = clock();
    //看看执行了MAXK次之后运行了多少秒
    time = (double)(stop - start) / CLK_TCK;
    printf("f2_time = %lf\n", time);
}

int main(void) {
    Test();

    return 0;
}