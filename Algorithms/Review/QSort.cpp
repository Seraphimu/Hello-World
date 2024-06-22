#include <iostream>

using namespace std;

void Swap(int & A, int & B) {
    int Tmp = A;
    A = B;
    B = Tmp;
}

void DisplaySort(int Array[], int Low, int High) {
    for (int i = Low; i <= High; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int Partition(int Array[], int Low, int High) {
    // 选取第一个元素为枢轴
    int PivotKey = Array[Low];
    while (Low < High) {
        // 从右向左扫描，找到第一个比枢轴元素小的
        // 本步操作是跳过那些比枢轴元素大的元素
        while (Low < High && Array[High] >= PivotKey) {
            High--;
        }
        // 交换，此时枢轴元素是Array[High]
        Swap(Array[Low], Array[High]);

        // 从左向右扫描，找到第一个比枢轴元素大的
        // 本步操作的作用是跳过那些比枢轴元素小的元素
        while (Low < High && Array[Low] <= PivotKey) {
            Low++;
        }
        // 交换，此时枢轴元素是Array[Low]
        Swap(Array[Low], Array[High]);
    }

    // 返回枢轴元素所在的位置
    // 此时返回Low和High都行，因为破坏循环的条件是Low == High
    return High;
}

void QSort(int Array[], int Low, int High) {
    // 做为枢轴使用
    int Pivot;
    // 若不满足该条件，就意味着一趟排序结束
    if (Low < High) {
        Pivot = Partition(Array, Low, High);

        // 对左子表进行排序
        QSort(Array, Low, Pivot - 1);
        // 对右子表进行排序
        QSort(Array, Pivot + 1, High);
    }

}


void Test() {
    // 要排序的数组
    int Array[] = {0, 50, 10, 90, 30, 70, 40, 80, 60, 20};
    int ArrayLow = 1;
    int ArrayHigh = sizeof (Array) / sizeof (Array[0]) - 1;
    // 执行下面这句直接除数为0，太久没用这个办法计算数组长度了，少一个sizeof ()
    // int ArrayHigh = sizeof (Array) / Array[0] - 1;
    // int ArrayHigh = 9;
    
    // 调用排序函数
    QSort(Array, ArrayLow, ArrayHigh);
    
    DisplaySort(Array, ArrayLow, ArrayHigh);
}

int main(void) {
    Test();

    return 0;
}