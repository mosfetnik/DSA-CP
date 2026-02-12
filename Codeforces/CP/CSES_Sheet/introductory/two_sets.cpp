#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll n;
    cin >> n;

    ll total_sum = 0;

    for (int i = 1; i < n; i++)
    {
        total_sum += i;
    }
    if (total_sum & 1 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
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