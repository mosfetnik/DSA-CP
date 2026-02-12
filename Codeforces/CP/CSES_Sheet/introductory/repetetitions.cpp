#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // need to implement sliding window

    string s;
    cin >> s;
    int n = s.size();

    int cnt = 1;
    int max_cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
            cnt = 1;
        max_cnt = max(cnt, max_cnt);
    }
    cout << max_cnt;
}

int main()
{
    solve();
    return 0;
}