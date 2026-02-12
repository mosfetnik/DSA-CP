#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll x;
    cin >> x;

    for (int i = 0; i < 30; i++)
    {
        for (int k = 0; k < 30; k++)
        {
            int y = (1 << i) | (1 << k);
            int z = x ^ y;

            if (y < x && (x + y > z && x + z > y && y + z > x))
            {
                cout << y << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}