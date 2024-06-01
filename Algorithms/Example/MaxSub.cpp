#include <iostream>

using namespace std;

//描述问题规模（数组长度）
#define SIZE sizeof (arr) / sizeof(arr[0])

//问题描述（要求子序列的数组）
int arr[] = {0, -2, 11, -4, 13, -5, -2};
//动态规划数组
int dp[sizeof (arr) / sizeof (arr[0])];
//解向量
int solveVector[SIZE];

void Solve()
{
    //初始化dp[0]
    dp[0] = 0;
    for (int i = 0; i < SIZE; i++)
    {
        //求dp[]数组第i个元素的值
        dp[i] = dp[i - 1] + arr[i];
        //如果dp[i]的值小于0，则放弃，从第i+1个再重新选
        //这里注意不要考虑dp[i] == 0的情况，如果把上述的序列改一下
        //int arr[] = {0, -2, 11, -4, -7, 13, -2};
        //此时，dp[3] == 7，而a[4] == -7，若此时操作 dp[4] = dp[3] == 7，
        //那后面dp[5] = dp[4] + a[5]就会等于20，
        //而事实是得到这个结果是因为直接丢掉了a[4]进行判断，这样会直接导致误判
        //额，那我直接让它等于0不好吗？
        if (dp[i] <= 0)
        {
            dp[i] = 0;
        }
    }
}

void FindMaxSub()
{
    //找到最大值的下标
    int max = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (dp[max] < dp[i])
        {
            max = i;
        }
    }

    //溯源，找到起始位置
    //用dp[i] - dp[i - 1]就能求出a[i]
    int start = 0;
    for (int i = max; i >= 0; i--)
    {
        //dp[i-1] == 0时，dp[i]为起始位置
        //dp[4] - dp[3] = a[4] = 13
        //dp[3] - dp[2] = a[3] = -4
        //cp[2] - dp[1] = a[2] = 11
        //dp[1] - dp[0] = a[1] = 0 == dp[i]
        //即，第一个dp[i]==0的下一位是起始位置
        if (dp[i] == 0)
        {
            start = i + 1;
            //start = i;      这家伙，前一句才说的，首个为0的下一位，天，又在这错了
            break;
        }
    }
    
    //保存选择的数
    for (int i = start; i <= max; i++)
    {
        solveVector[i] = arr[i];
    }
}

void disSolve()
{
    //打印dp数组
    cout << "打印dp数组："  << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << dp[i] << " " ;
    }
    cout << endl;
    //打印解向量
    cout << "打印解向量："  << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (solveVector[i] != 0)
        {
            cout << solveVector[i] << " ";
        }
    }
    cout << endl;
}


int main(void)
{
    Solve();
    FindMaxSub();
    disSolve();

    return 0;
}
