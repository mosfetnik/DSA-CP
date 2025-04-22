#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve()
{
    ll x, y, a;
    cin >> x >> y >> a;

    ll tar = a * 10 + 5;
    ll total = (x + y) * 10;

    ll depth = (tar / total) * total;

    if (depth + x * 10 > tar)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
