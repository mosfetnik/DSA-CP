#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll best = INT_MAX;

    for (int i = 0; i <= m - n; ++i)
    {
        best = min(best, arr[i + n - 1] - arr[i]);
    }
  

    cout << best << endl;

    return 0;
}
