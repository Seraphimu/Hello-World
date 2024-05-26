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

    int count = 0;          //记录活动总数
    int preAct = 0;         //前一个活动的结束时间
    int i = 1;
    while (i <= n)
    {
        //后一个任务的开始时间要大于等于上一个任务的结束时间
        //任务为1的时候，前一个全为0，条件直接成立

        //踩坑1：不是简单的后一个活动与前一个活动的比较，
        //而是上一个被安排的活动的结束时间和当前活动的开始时间比较
        if (a[i].actStart >= preAct)
        {
            solveVector[i] = true;
            preAct = a[i].actEnd;
            count++;
        }
        //这句别忘了，而且得写外面，不然某次条件不成立的时候i不自增了就直接死循环了
        i++;
    }

    cout << "count: " << count << endl;
    disSolve();
}

int main(void)
{
    solve();

    return 0;
}