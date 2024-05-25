#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
#define MAXN 51

int n = 5;

double W = 100;
struct NodeType
{
    double w;
    double v;
    double p;
    bool operator < (const NodeType & s) const
    {
        return p > s.p;
    }
};

NodeType A[] = {{0}, {10, 20}, {20, 30}, {30, 66}, {40, 40}, {50, 60}};
double V;
double x[MAXN];

void Knap()
{
    V = 0;
    double weight = W;
    memset(x, 0, sizeof(x));
    int i = 1;
    while (A[i].w < weight)
    {
        x[i] = 1;
        weight -= A[i].w;
        V += A[i].w;
        i++;
    }
    if (weight > 0)
    {
        x[i] = weight / A[i].w;
        V += x[i] * A[i].v;
    }
}

void dispA()
{
    int i;
    cout << "\t" << W << "\t" << V << "\t" << V/W << endl;
    for (i = 0; i <= n; i++)
    {
        cout << "\t" << A[i].w << "\t" << A[i].v << "\t" << A[i].p << endl;
    }
}

int main(void)
{
    cout << "求解过程" << endl;
    for (int i = 1; i <= n; i++)
    {
        A[i].p = A[i].v / A[i].w;
    }
    cout << "排序前" << endl;
    dispA();

    sort(A + 1, A + n + 1);
    cout << "排序后" << endl;
    dispA();

    Knap();
    cout << "结果" << endl;
    cout << "x: [";
    for (int j = 1; j <= n; j++)
    {
        cout << x[j];
    }
    cout << x[n] << "]";
    cout << "总价值" << V;

    return 0;
}