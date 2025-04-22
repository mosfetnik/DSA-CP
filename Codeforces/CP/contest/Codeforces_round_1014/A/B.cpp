#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve()
{

    string s1, s2;
    cin >> s1 >> s2;

    ll count_s1_zero = 0;
    ll count_s2_one = 0;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '0')
            count_s1_zero++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '1')
            count_s2_one++;
    }
    if (s2[0] != '1' && count_s2_one <= count_s1_zero)
    {
        cout << "YES" << endl;
    }
    // else if (s2[0] == '1' && count_s2_one <= count_s1_zero + 1)
    // {
    //     cout << "YES" << endl;
    // }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
