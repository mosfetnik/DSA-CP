#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int max_count = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            max_count++;
        }
    }

    cout << max_count << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
