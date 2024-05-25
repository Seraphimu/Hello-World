#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <cstring>

#define INFE 125
#define MAX 6

int n;
char a[MAX][MAX];    //存储图
int dist[MAX];      //dist[i]表示从当前顶点到i的目前最短路径
int v;

//顶点编号和路径长度
struct NodeType
{
    int vno;
    int length;
};

using namespace std;

void create_graph()
{
    //i和j表示顶点编号，a[i][j]就是顶点i到顶点j的权值
    int i = 0;
    int j = 0;
    
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            cin >> a[i][j];
        }
    }
}

void display_graph()
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void bfs(int v)
{
    
}

void test_routine()
{
    create_graph();
    cout << "-----------------------" << endl;
    display_graph();
}

void test_init()
{
    // memset(a, INFE, sizeof(a) - sizeof(a[0][0]));
    memset(a, INFE, sizeof(a));
    display_graph();
}

int main(void)
{
    // test_routine();
    test_init();

    return 0;
}