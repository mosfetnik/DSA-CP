#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    int n;
    cin >> n;

    if (n == 2 || n== 3)
    {
        cout << n << endl;
    }
    else
    {
        int num = 0;
        num = n % 2;
        cout << num << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
