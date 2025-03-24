#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n; 

    vector<ll> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); 
    
    ll min_diff = LLONG_MAX; // Use LLONG_MAX for long long
    for (int i = 0; i <= m - n; i++) // Fix loop range
    {
        min_diff = min(min_diff, arr[i + n - 1] - arr[i]);
    }

    cout << min_diff << endl;

    return 0;
}
