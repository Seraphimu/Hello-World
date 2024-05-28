#include <iostream>
#include <algorithm>
#define MAX 6
using namespace std;

//描述硬币结构
typedef struct Coin
{
    //硬币的面值
    double value;
    //硬币的个数
    int count;
    //面值递减排序
    bool operator < (const struct Coin & s)
    {
        return s.value < value;
    }
}Coin;

//需要支付的金额
const double W = 11.45;

//1.0, 0.5, 0.1, 0.05, 0.02, 0.01
Coin c[MAX] = {{0.5, 9}, {1.0, 8}, {0.01, 80}, {0.05, 50}, {0.02, 60}, {0.1, 10}};

//描述解向量
int solveVector[MAX];
//最少需要多少硬币
int minCoins;

//打印解向量
void disSolve()
{
    cout << "W = " << W << endl;
    cout << "解向量：" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << c[i].value * 100 << "分: " << solveVector[i] << endl;
    }
}

int solve()
{
    //初始化
    minCoins = 0;
    //描述当前选中硬币的总价值
    double nowValue = 0;
    int i = 0;
    //当前硬币的总价值不及W，则继续选择
    while (nowValue < W)
    {
        //剩余的价值与当前硬币价值相比较
        //当前硬币比剩余价值小，且还有，则选中
        if (W - nowValue >= c[i].value && c[i].count > 0)
        {
            //选中硬币数量增加
            minCoins++;
            //当前价值增加
            nowValue += c[i].value;
            //解向量增加
            solveVector[i] += 1;
            //硬币数量减少
            c[i].count--;
        }
        //若不行，则换下一个
        else
        {
            i++;
        }
    }

    return minCoins;
}

void disCoin()
{
    for (int i = 0; i < MAX; i++)
    {
        cout << c[i].value << ": " << c[i].count << endl;
    }
}

int main(void)
{

    cout << "排序前" << ": " << endl;
    disCoin();
    //排序
    sort(c, c+MAX);
    cout << "排序后" << ": " << endl;
    disCoin();
    cout << "最小需要的硬币枚数：" << solve() << endl;
    disSolve();

    return 0;
}