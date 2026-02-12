#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    for (ll i = n; i <= n + 10000; i++)
    {
        ll x = i;
        ll f = 0;
        while (x != 0)
        {
            ll d = x % 10;
            x = x / 10;
            if (d % 10 == 0)
                continue;
            if (i % d != 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
        {
            cout << i << endl;
            return;
            ;
        }
    }
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
