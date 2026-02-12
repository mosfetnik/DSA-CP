#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, b, d;

    cin >> n >> b >> d;
    vector<int> arr(n);
    int sum = 0;
    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {

        if (arr[i] <= b)
            sum += arr[i];

        if (sum > d)
        {
            sum = 0;
            cnt++;
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
