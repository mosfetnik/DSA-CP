#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        ll opp;
        ll result;
        bool check = false;

        for (ll i = 1; i < x; i++)
        {
            opp = x ^ i;
            if (opp != 0)
            {
                if ((opp + i > x) && (opp + x > i) && (i + x > opp))
                {
                    result = i;
                    check = true;
                }
            }
        }

        if (check)
            cout << result << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
