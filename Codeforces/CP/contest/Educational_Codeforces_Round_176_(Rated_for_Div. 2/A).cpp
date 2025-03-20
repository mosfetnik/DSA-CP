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
        ll n, k;
        cin >> n >> k;
        ll ans = 0;

        if (n % 2 == 0 && k % 2 == 1)
        {
            k--;
        }
        else if (n % 2 == 1 && n % 2 == 0)
        {
            ans++;
            n -= (k - 1);
        }
        else if (n % 2 == 1 && n % 2 == 1)
        {
            n -= k;
            ans++;
            k--;
        }

        ans+=(n+k-1) /k;
        cout<<ans<<endl;
    }

    return 0;
}
