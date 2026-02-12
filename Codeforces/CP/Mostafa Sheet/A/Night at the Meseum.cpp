#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    string s;
    cin >> s;

    int curr = 'a';
    int sum = 0;

    for (char c : s)
    {
        int diff = abs(c - curr);
        sum += min(diff, 26 - diff);
        curr = c;
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
