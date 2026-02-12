#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll w, h;
        cin >> w >> h;
        ll ans = 0;
        for (int i = 0; i < 4; i++)
        {

            int k;
            cin >> k;

            vector<ll> points(k);
            for (int j = 0; j < k; j++)
            {
                cin >> points[j];
            }
            ans = max(ans, (points[k - 1] - points[0]) * (i < 2 ? h : w));
        }
        cout << ans << endl;
    }
    return 0;
}