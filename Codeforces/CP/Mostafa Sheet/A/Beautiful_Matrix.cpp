#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    vector<vector<int>> arr(5, vector<int>(5, 0));
    vector<int> res(2, 0); // Initialize with size 2

    // Input matrix
    for (int i = 0; i < 5; i++) // changed from 1 to 0-based index
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                res[0] = i;
                res[1] = j;
            }
        }
    }

    int ans = abs(2 - res[0]) + abs(2 - res[1]); // Center is at index (2,2)
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
