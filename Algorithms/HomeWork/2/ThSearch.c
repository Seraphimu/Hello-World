int Trichotomy(int Array[], int Low, int High, int Target);
int main(void)
{
    //有序数组
    int Array[] = {-114, -5, 11, 44, 51, 514, 1919};
    //数组的开始和结束位置
    int Low = 0;
    int High = sizeof (Array) / sizeof (int) - 1;
    int Result = Trichotomy(Array, Low, High, 51);
    
    return 0;
}

int Trichotomy(int Array[], int Low, int High, int Target)
{
    int SegmentA = (Low + High) / 3;
    int SegmentB = SegmentA + 1 + SegmentA;
    //int SegmentC = SegmentB + 1 + SegmentA;

    if (Low <= High)
    {
        //在第一段
        if (Array[SegmentA] == Target)
            return SegmentA;
        else if (Target > Array[Low] && Target < Array[SegmentA])
            return Trichotomy(Array, Low, SegmentA, Target); 
        //在第二段
        else if (Target == Array[SegmentB])
            return SegmentB;
        else if (Target > Array[SegmentA] && Target < Array[High])
            return Trichotomy(Array, Array[SegmentA], Array[High], Target); 
       // 第三段
       // else if (Target == Array[SegmentC])
        //    return SegmentC;
        //else if (Target > Array[SegmentC] && Target < Array[High])
         //   return Trichotomy(Array, Array[SegmentC], Array[High], Target); 
    }
    //找不到
    else
        return -1;
}
