#include <iostream>
#include <cstring>
#include <algorithm>
#define MAX 6
using namespace std;

//描述背包
typedef struct BackPack
{
    double weight;
    double value;
    double unitPrice;
}BackPack;

//最大重量和大价值
double maxWeight = 100;
double maxValue = 0;
double solveVector[MAX];

//背包数量
int n = 5;

void disSolve()
{
    for (int i = 1; i <= n; i++)
    {
        cout << solveVector[i] << endl;
    }
    cout << "Max value is: " << maxValue;
}

void disBP(BackPack bp[])
{
    cout << "编号\t" << "重量\t" << "价值\t" << "单价" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << i << ":\t" << bp[i].weight << ",\t" << bp[i].value << ",\t" << bp[i].unitPrice << endl;
    }
}

void solve()
{
    //背包编号用数组的下标表示，其中0号下标留空不用
    //此序列已按照单价排序
    BackPack bp[] = {
        {0}, {30, 66}, {10, 20}, {20, 30}, {50, 60}, {40, 40}
    };

    //求单价
    for (int i = 1; i <= n; i++)
    {
        bp[i].unitPrice = bp[i].value / bp[i].weight;
    }

    double nowWeight = 0;
    //从单价最大的往后放入背包，只有最后一个会被部分放入
    //循环退出条件为背包满
    int i = 1;
    //坑：nowWeight必须小于maxWeight，若相等，则背包已满，没有继续运行的必要
    while (nowWeight < maxWeight)
    {
        //可以整个放入
        if (nowWeight + bp[i].weight <= maxWeight)
        {
            nowWeight += bp[i].weight;
            maxValue += bp[i].value;
            solveVector[i] = 1;
        }
        //不能整个放入
        //求出可放入的百分比放入解向量
        //再未出重和价值，分别加到nowWeithg和maxValue里
        else
        {
            //剩余重量 / 当前物品的重
            solveVector[i] = (maxWeight - nowWeight) / bp[i].weight;
            nowWeight += solveVector[i] * bp[i].weight;
            maxValue += solveVector[i] * bp[i].value;
        }
        i++;
    }

    disSolve();
}

int main(void)
{
    solve();
    // solveSequence();
    // solveSort();

    return 0;
}