#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); 
    ll num1 = arr[n-1];
    ll num2 = arr[0];

    ll gcd_value = arr[n-1] - arr[0];

    cout << gcd_value << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
