#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low = 1;
    int high = 1e9;
    int ans = -1; // to store the answer

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int small = 0;
        for (int i = 0; i < n; i++)
        {
            small += (arr[i] + 2 * mid) * (arr[i] + 2 * mid);

            if (small > c)
                break;
        }

        if (small == c)
        {
            cout << mid << "\n";
            return;
        }
        if (small > c)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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
