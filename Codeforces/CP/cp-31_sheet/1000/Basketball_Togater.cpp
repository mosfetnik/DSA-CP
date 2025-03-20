#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    ll n, d;
    cin >> n >> d;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll l, r, wins;
    l = 0;
    r = n - 1;
    wins = 0;

    while (l <= r)
    {
        ll lead = arr[r];
        ll size = 1;

        while (l < r && lead * size <= d)
        {
            l++;
            size++;
        }

        if (lead * size > d)
        {
            wins++;
            r--;
        }
        else
        {
            break;
        }
    }
    cout << wins << endl;
    

    return 0;
}