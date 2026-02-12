#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
            cnt++;
    }
    cout<< cnt<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
