#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> mpp;
    vector<ll> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
        mpp[i]++;
    }
    bool flag = false;
    for (auto i : mpp)
    {
        if (i.second > 1)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
