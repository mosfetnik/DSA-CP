#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length();
        int m = b.length();
        int ans = 0;

        for (int len = 1; len <= min(n, m); len++)
        {
            for (int i = 0; len + i <= n; i++)
            {
                for (int j = 0; len + j <= m; j++)
                {
                    if (a.substr(i, len) == b.substr(j, len))
                    {
                        ans = max(ans, len);
                    }
                }
            }
        }
        cout << a.size() + b.size() - 2 * ans << endl;
    }
    return 0;
}