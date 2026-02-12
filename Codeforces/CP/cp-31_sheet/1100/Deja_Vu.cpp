#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    int l = 1e18, x;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        if (l > x)
        {
            l = x;
            for (int j = 0; j < n; j++)
            {

                if (a[j] % (1 << x)==0)
                {
                    a[j] += (1 << x - 1);
                }
            }
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