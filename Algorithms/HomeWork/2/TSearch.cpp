#include <iostream>

using namespace std;

int Search(int a[], int low, int high, int x)
{
    if (high < low)     //序列中没有元素
    {
        return -1;
    }
    else if (high == low)
    {
        if (x == a[low])
        {
            return low;
        }
        else
        {
            return -1;
        }
    }
    if (high - low < 2)     //只有两个元素
    {
        if (x == a[low])
        {
            return low;
        }
        else if (x == a[low + 1])
        {
            return low + 1;
        }
        else
        {
            return -1;
        }
    }

    int length = (high - low + 1) / 3;  //每个子序列的长度
    int mid1 = low + length;
    int mid2 = high - length;
    if (x == a[mid1])
    {
        return mid1;
    }
    else if (x < a[mid1])
    {
        return Search(a, low, mid1 - 1, x);
    }
    else if (x == a[mid2])
    {
        return mid2;
    }
    else if (x < a[mid2])
    {
        return Search(a, mid1 + 1, mid2 + 2, x);
    }
    else
        return Search(a, mid2 + 1, high, x);
}

int main(void)
{


    return 0;
}