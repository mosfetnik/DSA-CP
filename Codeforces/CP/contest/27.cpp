#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int x, y;
    float a;
    cin >> x >> y >> a;
    int turn = -1;

    a = a + 0.5;

    while (a == 0.0)
    {
        a -= x;
        if (a <= 0)
        {
            turn = 0;
            return;
        }
        a -= y;
        if (a <= 0)
        {
            turn = 1;
            return;
        }
    }

    if (turn == 0)
    {
        cout << "NO" << endl;
    }
    if (turn == 1)
    {
        cout << "YES" << endl;
    }
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
