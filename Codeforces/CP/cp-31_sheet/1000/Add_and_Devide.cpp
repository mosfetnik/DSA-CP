#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = INT_MAX;

    for (int i = 0; i <= 40; i++)
    { // Try incrementing b from b to b+40
        int tempB = b + i;
        int tempA = a;
        int ops = i; // Number of times we incremented b

        if (tempB == 1)
            continue; // Avoid infinite loop

        while (tempA > 0)
        {
            tempA /= tempB;
            ops++;
        }

        ans = min(ans, ops);
    }

    cout << ans << endl;
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
