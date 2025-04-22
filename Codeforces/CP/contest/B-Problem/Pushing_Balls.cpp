#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int cnt1 = 0;
    bool f = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
                cnt1++;
        }
    }

    if (cnt1 & 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
