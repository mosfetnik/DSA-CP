#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<ll> x(q);
    for (int i = 0; i < q; ++i)
        cin >> x[i];
    for (int j = 0; j < q; j++)
    {
        ll x_i = x[j];
        ll x_pow = 1LL << x_i;
        ll x_div = 1LL << (x_i - 1);

        for (int k = 0; k < n; k++)
        {
            if (a[k] % x_pow == 0)
                a[k] += x_div;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}