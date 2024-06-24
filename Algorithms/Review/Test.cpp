#include <iostream>
#include <cstdlib>
#define N 20
using namespace std;

int Count = 0;
int Q[N];

void DisSolution(int n) {
    printf("第%d种解: \n", ++Count);
    for (int i = 1; i <= n; i++) {
        printf("(%d, %d) ", i, Q[i]);
    }
    cout << endl;
}

bool Place(int i, int j) {
    if (i == 1) {
        return true;
    }
    else {
        int k = 1;
        while (k < i) {
            if (Q[k] == j || abs(Q[k] - j) == abs(i - k)) {
                return false;
            }
            k++;
        }
        return true;
    }
}

void NQueue(int i, int n) {
    if (i > n) {
        DisSolution(n);
    }
    else {
        for (int j = 1; j <= n; j++) {
            if (Place(i, j)) {
                Q[i] = j;
                NQueue(i + 1, n);
            }
        }
    }
}

int main(void) {
    NQueue(1, 6);

    return 0;
}

















// #include <iostream>
// using namespace std;

// void f(int n)
// {
//     if (n<1) 
//         return;
//     else
//     { 
//         printf("n=%d\n", n);
//         f(n-1);
//         printf("n=%d\n", n);
//     }
// }


// int main(void) {
//     f(3);
//     return 0;
// }