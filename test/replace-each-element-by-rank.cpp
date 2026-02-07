#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 34, 12, 9, 8, 7};

    vector<int> copy = arr;
    sort(copy.begin(), copy.end());
    unordered_map<int, int> mpp;
    int rank = 1;

    for (int it : copy)
    {
        if (mpp.find(it) == mpp.end())
        {
            mpp[it] = rank;
            rank++;
        }
    }

    vector<int> res;

    for (auto it : arr)
    {
        res.push_back(mpp[it]);
    }
    for (auto it : res)
    {
        cout << it << " ";
    }
}

int main()
{
    solve();
    return 0;
}
