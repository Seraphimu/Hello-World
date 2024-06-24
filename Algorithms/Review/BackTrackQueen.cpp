#include <iostream>
#include <cstdlib>
#define N 20
using namespace std;

int Q[N];
int Count = 0;
void DisSolution(int n) {
    printf("第%d个解: ", ++Count);
    for (int i = 1; i <= n; i++) {
        printf("%d, %d ", i, Q[i]);
    }
    cout << endl;
}

//(i, j)表示当前第i个皇后的坐标
//测试(1, i - 1)个皇后与第i个皇后的兼容问题，若不兼容在主调函数中j++更换一个列再次尝试
bool Place(int i, int j) {
    //第一行的皇后直接放置，无条件，皇后的行由递归函数NQueen()控制
    if (i == 1) {
        return true;
    }
    else {
        int k = 1;

        //第k行的纵坐标 == 当前要放置的纵坐标，则在同一个列上，不被允许
        //i - k表示第k个皇后与第i个皇后的横坐标相减，
        //j - Q[k]为第k个皇后的坐标与第i个皇后的纵坐标相减
        //若结果的绝对值相等，则构成等腰直角三角形，在同一对角线上
        //k(1, i - 1)
        while (k < i) {
            if (Q[k] == j || abs(i - k) == abs(j - Q[k])) {
                return false;
            }
            k++;
        }
        //循环完成之后说明找到合适的位置了，返回true
        return true;
    }
}

void NQueen(int i, int n) {
    if (i > n) {
        //第n个皇后放置完毕
        DisSolution(n);
    }
    else {
        //控制皇后的行
        for (i = 1; i <= n; i++) {
            //控制皇后的列
            for (int j = 1; j <= n; j++) {
                //放置成功
                if (Place(i, j)) {
                    Q[i] = j;
                }
                //放置失败，回溯
                else {
                    i--;
                }
            }
        }
    }
}

int main(void)  {
    NQueen(1, 6);

    return 0;
}