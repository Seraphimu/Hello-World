#include <iostream>
#define MAX 114
using namespace std;

//描述det
double det[MAX][MAX];

int n;

//按行输入det
void inputDet()
{
    cout << "请输入行列式的阶数：" << endl;
    cin >> n;
    cout << "请按行输入一个行列式：" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> det[i][j];
        }
    }
}

//打印det
void disDet()
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << det[i][j] << "\t";
        }
        cout << endl;
    }
}

//运算det
void solve()
{
    inputDet();

    double temp;

    int flag = 1;
    for (int j = 0; j < n; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            //处理首行首列的0行
            if (det[0][0] == 0)
            {
                //当前行，所有列，找到第一个非0的元素就交换
                for (int i = 0; i < n; i++)
                {
                    //当前行第一个非0元素，i为其所在行
                    if (det[i][0] != 0)
                    {
                        //交换两行
                        for (int j = 0; j < n; j++)
                        {
                            int temp = det[i][j];
                            det[i][j] = det[0][j];
                            det[0][j] = temp;
                        }
                        //每次交换之后符号变负
                        flag = -flag;
                        //防止多次交换
                        break;
                    }
                }
            }
            //分母不能为0
            else
            {
                //从当前列自顶向下变0
                temp = -det[i][j] / det[j][j];

                for (int k = 0; k < n; k++)
                {
                    det[i][k] += temp * det[j][k];
                }
            }
        }
    }

    //主对角相乘再乘以一个符号
    double result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= det[i][i] * flag;
    }
    
    disDet();

    cout << " = " << result << endl;
}

int main(void)
{
    solve();

    return 0;
}