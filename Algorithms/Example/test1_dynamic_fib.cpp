#include <stdio.h>
#define MAX 100
int dp[MAX];
void solve(int n)
{
    //初始化前两个
    dp[1] = dp[2] = 1;

    printf("fin(%d) = %d\n", 1, dp[1]);
    printf("fin(%d) = %d\n", 2, dp[2]);
    int i = 3;
    while (i <= n)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
        printf("fin(%d) = %d\n", i, dp[i]);
        //坑：i++又忘了
        i++;
    }
}

int main(void)
{
    solve(5);

    return 0;
}