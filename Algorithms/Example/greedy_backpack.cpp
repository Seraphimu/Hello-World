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
double maxValue;
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

void solveSequence()
{    
    //背包编号用数组的下标表示，其中0号下标留空不用
    //此序列已按照单价排序
    BackPack bp[] = {
        {0}, {30, 66}, {10, 20}, {20, 30}, {50, 60}, {40, 40}
    };

    double nowWeight = 0;
    maxValue = 0;
    int i = 1;

    while (nowWeight < maxWeight)
    {
        //如果剩余重大于当前这个货物的重，重量相加，表示放入
        if (maxWeight - nowWeight >= bp[i].weight)
        {
            nowWeight += bp[i].weight;
            maxValue += bp[i].value;
            solveVector[i] = 1;
        }
        //当第i个货物不能整体放入的时候，考虑部分放入
        //踩坑1：一开始这里忘记设置重增加了，导致while外层循环判断出现错误
        //蹲坑2：这里应该用百分比和总价值相乘，而不是单价
        else
        {
            //求能部分放入的百分比
            solveVector[i] = (maxWeight - nowWeight) / bp[i].weight;
            //重量增加
            nowWeight += bp[i].weight * solveVector[i];
            //百分比乘以价格，算出可携带价值
            maxValue += bp[i].value * solveVector[i];
        }
        
        //自增
        i++;
    }

    disSolve();
}


void solveSort()
{    
    //背包编号用数组的下标表示，其中0号下标留空不用

    BackPack bp[] = {
        {0}, {10, 20}, {20, 30}, {30, 66}, {40, 40}, {50, 60}
    };
    //求单价
    for (int i = 1; i <= n; i++)
    {
        bp[i].unitPrice = bp[i].value / bp[i].weight;
    }

    cout << "排序前" << endl;
    disBP(bp);
    //对其按照单价递减排序
    int max = 1;
    for (int i = 1; i <= n; i++)
    {
        max = i;
        for (int j = max + 1; j <= n; j++)
        {
            if (bp[j].unitPrice > bp[max].unitPrice)
            {
                max = j;
            }
        }
        BackPack tmp = bp[max];
        bp[max] = bp[i];
        bp[i] = tmp;
    }
    cout << "排序后" << endl;
    disBP(bp);


    double nowWeight = 0;
    maxValue = 0;
    int i = 1;

    while (nowWeight < maxWeight)
    {
        //如果剩余重大于当前这个货物的重，重量相加，表示放入
        if (maxWeight - nowWeight >= bp[i].weight)
        {
            nowWeight += bp[i].weight;
            maxValue += bp[i].value;
            solveVector[i] = 1;
        }
        //当第i个货物不能整体放入的时候，考虑部分放入
        //踩坑1：一开始这里忘记设置重增加了，导致while外层循环判断出现错误
        //踩坑2：这里应该用百分比和总价值相乘，而不是单价
        else
        {
            //求能部分放入的百分比
            solveVector[i] = (maxWeight - nowWeight) / bp[i].weight;
            //重量增加
            nowWeight += bp[i].weight * solveVector[i];
            //百分比乘以价格，算出可携带价值
            maxValue += bp[i].value * solveVector[i];
        }
        
        //自增
        i++;
    }
    cout << "解向量" << endl;
    disSolve();
}

int main(void)
{
    // solveSequence();
    solveSort();

    return 0;
}