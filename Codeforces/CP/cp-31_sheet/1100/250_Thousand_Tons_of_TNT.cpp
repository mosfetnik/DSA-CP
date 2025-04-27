#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll ans = -1;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ll mx = -1e18, mn = 1e18;
            for (int j = 0; j < n; j += i)
            {
                ll sm = 0;
                for (int k = j; k < i + j; k++)
                {
                    sm += arr[k];
                }
                mx = max(mx, sm);
                mn = min(mn, sm);
            }
            ans = max(ans, mx - mn);
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
