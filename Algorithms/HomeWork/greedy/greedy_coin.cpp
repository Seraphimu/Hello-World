//求硬币问题：有1分、2分、5分、10分、50分和100分的硬币，支付W元，最少需要几枚硬币
//思路：
//把分化成元
//
#include <iostream>
#define MAX 6
using namespace std;

double W = 11.45;

//存放硬币
double coin[] = {1.0, 0.5, 0.1, 0.05, 0.02, 0.01};
int solveVector[MAX];
int minCoins;

void disSolve()
{
    cout << "W = " << W << endl;
    cout << "解向量：" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << coin[i] * 100 << "分: " << solveVector[i] << endl;
    }
}

int solve()
{
    //初始化
    minCoins = 0;
    double nowValue = 0;
    int i = 0;
    for (int j = 0; j < MAX; j++)
    {
        solveVector[j] = 0;
    }
    //当前硬币的总价值不及W，则继续选择
    while (nowValue < W)
    {
        //如果当前硬币的价值大于等于当前选择的硬币，则继续选择当前硬币
        //应该是剩余的价值与当前硬币相比
        // if (nowValue >= coin[i])
        if (W - nowValue >= coin[i])
        {
            minCoins++;
            nowValue += coin[i];
            solveVector[i] += 1;
        }
        //若不行，则换下一个
        else
        {
            i++;
        }
    }

    return minCoins;
}

int main(void)
{
    //还没调用solve呢，打印的当然是全0了（悲
    // disSolve();
    cout << "最小需要的硬币枚数：" << solve() << endl;
    disSolve();

    return 0;
}