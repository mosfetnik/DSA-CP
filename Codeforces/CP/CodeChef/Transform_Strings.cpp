#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    long long n = a.size();
    long long  m = b.size();
    long long  ptr = m - 1;
    long long  ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (ptr >= 0 && b[ptr] == a[i])
        {
            ptr--;
        }
        else
        {
            ans += ptr + 2;
        }
    }
    if (ptr >= 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}