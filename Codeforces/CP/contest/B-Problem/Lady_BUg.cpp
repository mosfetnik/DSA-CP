#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int cnt0, cnt1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            cnt0 += a[i] == '0';
            cnt1 += b[i] == '0';
        }
        else
        {
            cnt1 += a[i] == '0';
            cnt0 += b[i] == '0';
        }
    }
    cout << (cnt1 >= (n + 1) / 2 && cnt0 >= n / 2 ? "YES" : "NO") << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
