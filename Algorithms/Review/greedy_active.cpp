#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX 15
// typedef struct Action {
//     int begin;
//     int end;
//     bool operator<(const struct Action & s) const {
//         return end < s.end;
//     }
// }Action;

class Action {
    public:
        int begin;
        int end;
        bool operator<(const struct Action & s) const {
            return end < s.end;
        }
};


//活动
const int N = 11;
Action act[MAX] = {{0}, 
    {3, 5}, {1, 4}, {0, 6}, {5, 7}, 
    {3, 8}, {5, 9}, {6, 10}, {8, 11}, 
    {8, 12}, {2, 13}, {12, 15}};

int count = 0;
bool flag[MAX];

void dis()
{
    for (int i = 0; i < N; i++) {
        cout << i << ": ";
        cout << "begin = " << act[i].begin << ", ";
        cout << "end = " << act[i].end;
        cout << endl;
    }
}

void solve()
{
    memset(flag, 0, sizeof(flag));
    sort(act, act + N + 1);
    for (int i = 1; i < N; i++) {
        if (act[i - 1].end <= act[i].begin) {
            flag[i] = true;
        }
    }
}












int main(void) {
    solve();

    return 0;
}