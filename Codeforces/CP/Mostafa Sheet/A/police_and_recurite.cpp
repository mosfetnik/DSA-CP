#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int crime = 0;
    int police = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            crime++;
            if (police >= 1)
            {
                police--;
                crime--;
            }
        }
        if (arr[i] > 0)
        {
            police+=arr[i];
        }
    }
    cout << crime << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
