
#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    faster;

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        ll mx = LONG_LONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(a[i], mx);
            b[i] = mx;
        }
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            cout << ans + b[i] << " ";
            ans += a[i];
        }
        cout << "\n";
    }
    return 0;
}
