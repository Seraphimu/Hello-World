//贪心法求解活动安排问题
#include <iostream>
#define MAX 15
using namespace std;

//描述活动
typedef struct Activity
{
    int actStart;   //活动开始时间
    int actEnd;     //结束时间
}Act;

int n = 11;             //活动大小
bool solveVector[MAX];  //解向量

void disSolve()
{
    for (int i = 1; i <= n; i++)
    {
        if (solveVector[i] != false)
        {
            cout << i << ": " << solveVector[i] << endl;
        }
    }
}

void solve()
{
    //创建活动，用下标表示活动的编号，0号不用
    //下列活动已经按照结束时间排序
    Act a[] = {
        {0, 0}, {1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8}, 
        {5, 9}, {6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 15}
    };

    //从第一个活动开始选择
    int preEnd = 0;
    int i = 1;
    //坑：这里应该使用i为循环变量，用这个当一个条件不满足就会退出循环
    // while (a[i].actStart >= preEnd)
    while (i <= n)
    {
        if (a[i].actStart >= preEnd)
        {
            solveVector[i] = true;
            preEnd = a[i].actEnd;
        }
        i++;
    }
    disSolve();
}

int main(void)
{
    solve();

    return 0;
}