#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin >> s;

    ll n = s.length();
    ll swapCount = 0;

    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
            swapCount++;
        
    }

    ll result = n- (swapCount+1);
    cout << result << '\n';
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
