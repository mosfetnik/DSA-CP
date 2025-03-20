#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{

    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll remain = k;
    vector<ll> result;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] <= remain)
        {
            result.push_back(1);
            remain -=  arr[i];
        }
        else
        {
            result.push_back(0);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i];
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
