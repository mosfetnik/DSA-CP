#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> arr = {1, 2, 2, 2, 3, 3, 1, 4, 5, 5, 5};

    unordered_map<int, int> mpp;

    for (int it : arr)
    {
        mpp[it]++;
    }

    auto cmp = [&](int a, int b)
    {
        if (mpp[a] != mpp[b])
            return mpp[a] > mpp[b];
        return a < b;
    };
    sort(arr.begin(), arr.end(), cmp);

    for (int it : arr)
    {
        cout << it << " ";
    }
}

int main()
{
    solve();
    return 0;
}
