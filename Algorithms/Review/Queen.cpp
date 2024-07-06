#include <iostream>
using namespace std;
#define MAX 10
int Q[MAX];
int Count = 0;
void DisSol(int n) {
    printf("第%d个解: ", ++Count);
    for (int i = 1; i <= n; i++) {
        printf("(%d, %d) ", i, Q[i]);
    }
    printf("\n");
}

bool Place(int i, int j) {
    if (i == 1) {
        return true;
    }
    else {
        int k = 1;
        while (k < i) {
            if (Q[k] == j || abs(Q[k] - j) == abs(k - i)) {
                return false;
            }
            k++;
        }
    }

    return true;
}

void Queue(int i, int n) {
    if (i > n) {
        DisSol(n);
    }
    else {
        for (int j = 1; j <= n; j++) {
            if (Place(i, j)) {
                Q[i] = j;
                Queue(i + 1, n);
            }
        }
    }
}

int main(void) {
    Queue(1, 6);

    return 0;
}