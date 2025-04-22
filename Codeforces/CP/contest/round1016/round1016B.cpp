#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{

    string s;
    cin >> s;
    int n = s.length();
    bool met_int = false;
    int cnt = 0;

    for (int i = n - 1; i >= 0; i--)
    {

        if (s[i] != '0')
        {
            met_int = true;
        }
        else if (met_int)
        {
            cnt++;
        }
    }
    cout << n - (cnt + 1) << endl;
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
