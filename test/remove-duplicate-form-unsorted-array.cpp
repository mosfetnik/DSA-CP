#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> arr = {5,4,2,33,33,5,4,34,34};

    unordered_map<int, int> mpp;
    vector<int> res;
    for (auto it : arr)
    {
        if (mpp[it] == 0)
        {
            res.push_back(it);
            mpp[it]++;
        }
    }

    for (int it : res)
    {
        cout << it << " ";
    }
}

int main()
{
    solve();
    return 0;
}
