#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll x, y;
    cin >> x >> y;
    if (x >= y)
    {

        if ((x & 1) == 0)
            cout << x * x - y + 1 << endl;
        else
            cout << (x - 1) * (x - 1) + y << endl;
    }
    else
    {
        if ((y & 1) == 1)
            cout << y * y - x + 1 << endl;
        else
            cout << (y - 1) * (y - 1) + x << endl;
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