#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll x, y, k;

    cin >> x >> y >> k;
    ll ops = ((k * (1 + y) + x - 3) / (x - 1));
    ops += k;
    cout << ops << endl;
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
