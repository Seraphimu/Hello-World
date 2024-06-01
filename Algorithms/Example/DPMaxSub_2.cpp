#include <iostream>

using namespace std;

//描述问题规模（数组长度）
#define SIZE sizeof (arr) / sizeof(arr[0])

//问题描述（要求子序列的数组）
int arr[] = {0, -2, 11, -4, 13, -5, -2};
//动态规划数组
int dp[sizeof (arr) / sizeof (arr[0])];

void solve()
{
    //初始化dp[0]
    dp[0] = 0;
    for (int i = 0; i < SIZE; i++)
    {
        //求dp[]数组第i个元素的值
        dp[i] = dp[i - 1] + arr[i];
        //如果dp[i]的值小于0，则放弃，从第i+1个再重新选
        if (dp[i] <= 0)
        {
            dp[i] = 0;
        }
    }
    
    //找到最大值的下标
    int end = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (dp[end] < dp[i])
        {
            end = i;
        }
    }

    //溯源，找到起始位置
    int start = 0;
    for (int i = end; i >= 0; i--)
    {
        //第一个dp[i]==0的下一位是起始位置
        if (dp[i] == 0)
        {
            start = i + 1;
            break;
        }
    }
    
    //打印dp数组
    cout << "打印dp数组："  << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << dp[i] << " " ;
    }
    cout << endl;
    
    //打印最大连续子序列:
    cout << "打印最大连续子序列: " << endl;
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << endl;
    }
}

int main(void)
{
    solve();
    
    return 0;
}