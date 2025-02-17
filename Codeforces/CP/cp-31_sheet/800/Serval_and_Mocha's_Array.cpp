#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, flag = 0;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i; j < n; j++)
            {
                if (__gcd(arr[i], arr[j]) <= 2)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
