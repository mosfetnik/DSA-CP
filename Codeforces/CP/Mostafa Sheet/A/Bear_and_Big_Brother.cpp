#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, k;
    cin >> n >> k;

    int lamik = n;
    int bob = k;
    int val = 0;

    for (int i = 1; i <= 10; i++)
    {
        n = n * 3;
        k = k * 2;
        if (n > k)
        {
            val = i;
            break;
        }
    }
    cout << val << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
