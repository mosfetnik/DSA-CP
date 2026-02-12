#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int a;
    cin>>a;

    int num_1 = 1;
    int num_2 = 1 + a;
    int num_3 = num_2 + a;
    int num_4 = num_2 * num_3;

    cout << num_4 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
