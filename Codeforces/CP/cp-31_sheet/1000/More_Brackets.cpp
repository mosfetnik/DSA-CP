#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll bracket = n / 2;

        ll count = 0;
        ll ans = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                ++count;
            }
            else
            {
                --count;
                if (count < 0)
                {
                    count=0;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}