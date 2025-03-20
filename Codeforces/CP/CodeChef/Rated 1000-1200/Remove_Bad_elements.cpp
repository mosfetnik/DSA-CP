#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<ll, ll> mpp;
    ll max_freq = 0;

    for (ll i : arr)
    {
        mpp[i]++;  
        max_freq = max(max_freq, mpp[i]);
    }

    cout << n - max_freq << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
