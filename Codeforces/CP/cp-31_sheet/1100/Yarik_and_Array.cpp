#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = arr[0];
    int mn = min(0, arr[0]);
    int sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i] % 2) == abs(arr[i - 1] % 2))
        {
            mn = 0;
            sum = 0;
        }
        sum += arr[i];
        ans = max(ans, sum - mn);
        mn = min(sum, mn);
    }
    cout << ans << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
