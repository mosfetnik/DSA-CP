#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    // * basic if else technique
    // int a, b, c, d;
    // cin >> a >> b >> c >> d;

    // string s;
    // cin >> s;
    // int sum = 0;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] == '1')
    //     {
    //         sum += a;
    //     }
    //     if (s[i] == '2')
    //     {
    //         sum += b;
    //     }
    //     if (s[i] == '3')
    //     {
    //         sum += c;
    //     }
    //     if (s[i] == '4')
    //     {
    //         sum += d;
    //     }
    // }
    // cout << sum << endl;

    // ^ optimize array lookup techinque

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;

    int cost[5] = {0, a, b, c, d};
    int sum = 0;

    for (char ch : s)
    {
        sum += cost[ch - '0'];
    }

    cout << sum << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
