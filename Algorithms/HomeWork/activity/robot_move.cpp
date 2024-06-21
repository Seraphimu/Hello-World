#include <iostream>
#define MAX 51
using namespace std;

//动态规划数组
int dp[MAX][MAX];

void robotMove(int m, int n)
{

    //初始化
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = 1;
    }

    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = 1;
    }

    //直接计算dp数组的值，得到对应的路径个数
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
}

int main(void)
{
    int m = 2;
    int n = 3;

    robotMove(m, n);

    printf("%d\n", dp[m][n]);

    return 0;
}