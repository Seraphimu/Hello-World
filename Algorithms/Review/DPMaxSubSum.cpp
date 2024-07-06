#include <iostream>
#define MAX 10
using namespace std;

int dp[MAX];

int max(int x, int y) {
    return x > y ? x : y;
}

//求dp
void solve(int a[], int n) {
    dp[0] = 0;
    int i;
    for (i = 1; i < MAX; i++) {
        dp[i] = max(dp[i - 1] + a[i], a[i]);
    }
}

void solution() {
    int n = 7;
    int a[] = {0, -2, 11, -4, 13, -5, -2};
    solve(a, n);

    //找最大的一个元素
    int maxi;
    for (int i = 1; i < n; i++) {
        if (dp[maxi] < dp[i]) {
            maxi = i;
        }
    }

    int mini;
    for (int i = n - 1; i > 0; i--) {
        if (dp[i] <= 0) {
            mini = i + 1;
            break;
        }
    }

    for (int i = mini; i <= maxi; i++) {
        printf("dp[%d] = %d ", i, dp[i]);
    }
    printf("\n");
}

int main(void) {
    solution();

    return 0;
}