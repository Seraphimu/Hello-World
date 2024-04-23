#include <assert.h>

//返回两者最大数
int FindMax(int a, int b);
//返回两者中最小数
int FindMin(int a, int b);
//分治法找数组中的最大和最小数
void MaxAndMin(int Arr[], int Low, int High, int * MaxNumber, int * MinNumber);

int main(void)
{
    int Array[] = {1, 1, 4, 5, 1, 4};
    //数组的开始和结束位置
    int Low = 0;
    int High = sizeof (Array) / sizeof (int) - 1;
    //要找的最大和最小数保存在这两个变量中
    int MaxNumber, MinNumber;
    MaxAndMin(Array, Low, High, &MaxNumber, &MinNumber);

    return 0;
}

void MaxAndMin(int Arr[], int Low, int High, int * MaxNumber, int * MinNumber)
{
    //数组为空，下标小于0时报错
    assert(Arr && Low >= 0 && High >= 0);
    //只有一个元素的时候
    if (Low == High)
    {
        *MaxNumber = Arr[High];
        *MinNumber = Arr[Low];
        //不能这么搞，这么搞永远都是-65535
        //*MinNumber = INF;
    }

    //只有两个元素的时候
    else if (Low == High - 1)
    {
        *MaxNumber = FindMax(Arr[Low], Arr[High]);
        *MinNumber = FindMin(Arr[Low], Arr[High]);
        //Error, 是找最大和最小元素，不是下标的大小
        //*Max1 = Arr[High];
        //*Max2 = Arr[Low];
    }

    //两个以上元素的时候
    else
    {
        //求中间的下标，用它分治数组
        int Mid = (Low + High) / 2;
        //保存左右最大最小的变量
        int LMax, LMin, RMax, RMin;
        //处理左边[Low, Mid]
        MaxAndMin(Arr, Low, Mid, &LMax, &LMin);
        //处理右边[Mid + 1, High]
        MaxAndMin(Arr, Mid + 1, High, &RMax, &RMin);

        //比较两个分区的大小
        *MaxNumber = FindMax(LMax, RMax);
        *MinNumber = FindMin(LMin, RMin);

    }
}

int FindMax(int a, int b)
{
    return a > b ? a : b;
}
int FindMin(int a, int b)
{
    return a < b ? a : b;
}

