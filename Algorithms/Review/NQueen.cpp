#include <iostream>
#include <cstdlib>
#define N 20
using namespace std;

int Q[N];
int Count = 0;

void DisSolution(int n) {
    printf("第%d个解", ++Count);
    for (int i = 0; i <= n; i++) {
        printf("%d, %d ", i, Q[i]);
    }
    cout << endl;
}


bool Place(int i, int j) {
    //第一个直接放
    if (i == 1) {
        return true;
    }
    int n = 1;
    while (n < i) {
        //前半句判断前n个皇后与之前的不同列
        //后半句判断是否在同一对角线
        //因为用数组下标表示行，所以行一定不会重复，只需要关注列和对角线即可
        //从1到i，任意一个皇后不符合要求直接返回假
        if ((Q[n] == j) || (abs(Q[n] - j) == abs(i - n))) {
            return false;
        }
        n++;
    }
    return true;
}

void Queen(int i, int n) {
    //当第n个皇后都放置好的时候，就说明得到解了
    if (i > n) {
        DisSolution(n);
    }
    else {
        //遍历第i行的第j列，找到可以放皇后的位置
        for (int j = 1; j <= n; j++) {
            if (Place(i, j)) {
                Q[i] = j;
                Queen(i + 1, n);
            }
        }
    }
}

int main(void) {


    return 0;
}