#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr1(n), arr2(n), arr3(n);

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    for (int i = 0; i < n; i++)
        cin >> arr3[i];

    int u = 0;
    for (int i = 0; i < n; i++)
    {
        int res;
        res = arr1[i] | res;
        arr1[i] = res;

        if (res == x)
        {
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
