#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> arr(n);
    for (auto &num : arr)
    {
        cin >> num;
    }

    long long low = 0, high = 2'000'000'007;

    while (low < high)
    {
        long long mid = (low + high + 1) / 2;
        long long total = 0;

        for (auto num : arr)
        {
            if (num < mid)
            {
                total += (mid - num);
            }
        }

        if (total <= x)
        {
            low = mid;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << low << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
