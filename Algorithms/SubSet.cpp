#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
        vector<vector<int>> subsets(vector<int> & nums)
        {
           vector<vector<int>> res;
           res.push_back({});
           for (int num : nums)
           {
                int n = res.size();
                for (int i = 0; i < n; i++)
                {
                    res.push_back(res[i]);
                    res.back().push_back(num);
                }
           }

           return res;
        }
};

int main()
{
    vector<int> a = {1, 2, 3};
    Solution * ss = new Solution();
    vector<vector<int>> aa = ss->subsets(a);
    vector<vector<int>> :: iterator it;

    for (it = aa->begin(); it != aa->end(); ++it)
        cout << *it << endl;

    return 0;
}

