#include <iostream>
#define MAX 1000
using namespace std;
int main(void)
{
    int bucket[MAX];
    //Make array 0
    for (int i = 0 ; i < MAX; i++)
    {
        bucket[i] = 0;
    }
    int m, n;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> n;
        bucket[n]++;
        // if (n > MAX)
        // {
        //     exit(-1);
        // }
        // if (n == i)
        // {
        //     bucket[n]++;
        // }
        ////这错得就离谱
        // for (int j = 0; j < MAX; j++)
        // {
        //     bucket[n]++;
        // }
    }



    //倒着遍历
    for (int i = MAX; i >= 0; i--)
    {
        for (int j = 1; j < bucket[i];j++)
        {
            cout << i;
        }
    }

    return 0;
}