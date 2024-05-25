#include <iostream>
#include <vector>
using namespace std;

void swap(int & a, int & b)
{
    int t = a;
    a = b;
    b = t;
}

int main(void)
{
    vector<int> a = {5, 3, 5, 2, 8};

    int max = 0;
    for (int i = 0; i < a.size(); i++)
    {
        max = i;
        for (int j = max + 1; j < a.size(); j++)
        {
            if (a[max] < a[j])
            {
                max = j;
            }
        }
        swap(a[max], a[i]);

    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;

    return 0;
}