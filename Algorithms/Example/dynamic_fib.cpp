//动态规划求斐波那契数列
#include <iostream>
#define MAX 100     //dp[]数组预留长度
using namespace std;

void fib(int n);

int dp[MAX];
int main(void)
{
    //从1求到n
    int n;
    cin >> n;
    fib(n);

    return 0;
}

void fib(int n)
{
    //第0个下标位置不用，从1开始
    dp[0] = 0;
    //给第1、2个位置赋初值
    dp[1] = 1;
    dp[2] = 1;
    cout << "fib(" << 1 << ")" << " = " << dp[1] << endl;
    cout << "fib(" << 2 << ")" << " = " << dp[2] << endl;

    //从第三项开始，前两项已经确定了。
    for (int i = 3; i <= n; i++)
    {
        //累加前两项求当前项
        dp[i] = dp[i - 1] + dp[i - 2];
        cout << "fib(" << i << ")" << " = " << dp[i] << endl;
    }

}