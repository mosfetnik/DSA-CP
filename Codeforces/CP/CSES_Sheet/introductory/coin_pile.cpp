#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll x, y;
    cin >> x >> y;

    if ((x + y) % 3 == 0 && min(x, y) * 2 >= max(x, y))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
        solve();
    return 0;
}
