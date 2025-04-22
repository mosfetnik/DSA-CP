#include <bits/stdc++.h>
using ll = long long int;
#define endl '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    // vector<ll> arr(n);
    // for (ll i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    if (n & 1 == 1)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
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
