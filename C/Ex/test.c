#include <stdio.h>
#define N 3
#define M 3
typedef struct Stu {
    char id[20];
    double s[N];
}stu;
void max(stu * a, int len)
{
    int i, j;
    int max = 0;
    int num = 0;
    for (i = 0; i < len; i++)
    {
        num = 0;
        max = 0;
        for (j = 0; j < N; j++)
        {
            // printf("%s: %lf\n", a[i].id, a[i].s[j]);
            // if (a[i].s[max] <=  a[i].s[j])
            // {
            //     // printf("%s: %lf\n", a[i].id, a[i].s[j]);
            //     max = j;
            //     num = i;
            // }
            if (a[i].s[j] <= a[i].s[max])
            {
                max = j;
                num = i;
            }
        }
    }
    printf("最高分同學的學號是%s, 成績是%.2lf", a[num].id, a[num].s[max]);
}
int main(void)
{
    stu a[N];
    int i, j;
    for (i = 0; i < N; i++)
    {
        printf("請輸入學號\n");
        scanf("%s", a[i].id);
        for (j = 0; j < M; j++)
        {
            printf("請輸入第%d個學生的第%d門成績", i + 1, j + 1);
            scanf("%lf", &a[i].s[j]);
        }
    }
    max(a, N);
    
    return 0;
}