#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int k, r;
    cin >> k >> r;

    for (int i = 1; i < 10; i++)
    {
        if (((k * i) % 10 == r) || ((k * i) % 10 == 0))
        {
            cout << i << endl;
            break;
        }

    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
