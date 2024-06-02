#include <iostream>
#define MAX 4
using namespace std;

//描述det
double det[MAX][MAX];


//按行输入det
void inputDet()
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cin >> det[i][j];
        }
    }
}

//打印det
void disDet()
{
    
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
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
    // //把第2行第0列变成0
    // temp = -det[2][0] / det[0][0];
    // det[2][0] += det[0][0] * temp;
    // det[2][1] += det[0][1] * temp;
    // det[2][2] += det[0][2] * temp;

    // //把第1行第0列变成0
    // temp = -det[1][0] / det[0][0];
    // det[1][0] += det[0][0] * temp;
    // det[1][1] += det[0][1] * temp;
    // det[1][2] += det[0][2] * temp;

    // //把第2行第1列变成0

    // temp = -det[2][1] / det[1][1];
    // det[2][0] += det[1][0] * temp;
    // det[2][1] += det[1][1] * temp;
    // det[2][2] += det[1][2] * temp;

    //把上述推导抽象化一下：
    //首先用det[0][0]把det[MAX][0],即第0行0列，把第MAX行0列变成成0，并且其他行也要跟着改变
    //然后再利用det[0][0]把det[MAX - 1][0]变成0，直到det[1][0]，即det[0][0]的下一行变成0为止
    //然后用det[1][1]将det[MAX][1]，det[MAX - 1][1]直到det[2][1]，即det[1][1]的下一行元素变成成0为止再让行+1
    //直到把这个二维数组遍历完毕为止，不过虽然这个按列遍历有点违背局部性原理，但是换存储方式还是以后再考虑罢（悲

    int flag = 1;
    for (int j = 0; j < MAX; j++)
    {
        for (int i = j + 1; i < MAX; i++)
        {
            //处理首行首列的0行
            if (det[0][0] == 0)
            {
                //当前行，所有列，找到第一个非0的元素就交换
                for (int i = 0; i < MAX; i++)
                {
                    //当前行第一个非0元素，i为其所在行
                    if (det[i][0] != 0)
                    {
                        //交换两行
                        for (int j = 0; j < MAX; j++)
                        {
                            int temp = det[i][j];
                            det[i][j] = det[0][j];
                            det[0][j] = temp;
                        }
                        //每次交换之后符号变负
                        flag = -flag;
                    }
                }
            }
            //分母不能为0
            else
            {
                //求出把当前列第n行的元素变成0的数
                //踩坑：应该是MAX - 1 - i，MAX是最大值，用MAX - i访问，当i等于0时直接越界好罢（悲
                //i 不对，应该
                temp = -det[i][j] / det[j][j];
                // temp = -det[MAX - i][j] / det[i][j];
                //用当前元素把最当前行的最后一个元素变成0
                //det[MAX - 1 - i][j] += temp * det[i][j];
                // det[MAX - i][j] += temp * det[i][j];
                //再次总结上述的推导过程，得出：
                //使用第i行，对第MAX -1 -i行操作
                //用k做列来遍历
                for (int k = 0; k < MAX; k++)
                {
                    det[i][k] += temp * det[j][k];
                }
            }
        }
    }


    // double result = det[0][0] * det[1][1] * det[2][2];
    //主对角相乘
    double result = 1;
    for (int i = 0; i < MAX; i++)
    {
        result *= det[i][i] * flag;
    }
    


    disDet();

    // cout << " = " << result << endl;
}

int main(void)
{
    solve();

    return 0;
}