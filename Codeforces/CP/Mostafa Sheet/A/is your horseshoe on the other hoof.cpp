#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        mpp[x]++;
    }
    int cnt = 0;
    for (auto p : mpp)
    {
        if (p.second > 1)
        {
            cnt+=(p.second-1);
        }
    }
    cout << cnt << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
