int BinarySearch(int Array[], int Low, int High, int Target);
int main(void)
{
    //有序数组
    int Array[] = {-114, -5, 11, 44, 51, 514, 1919};
    //数组的开始和结束位置
    int Low = 0;
    int High = sizeof (Array) / sizeof (int) - 1;
    int Result = BinarySearch(Array, Low, High, -114);

    
    return 0;
}

int BinarySearch(int Array[], int Low, int High, int Target)
{
    int Mid = (Low + High) / 2;

    if (Low <= High)
    {
        //刚好
        if (Array[Mid] == Target)
            return Mid;
        //在右边
        else if (Target > Array[Mid])
            return BinarySearch(Array, Mid + 1, High, Target);
        //在左边
        else if (Target < Array[Mid])
            return BinarySearch(Array, Low, Mid, Target);
    }
    //找不到
    else
        return -1;
}
