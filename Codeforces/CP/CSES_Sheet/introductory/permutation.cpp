#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 2 || n == 3)
        cout << "NO SOLUTION" << endl;
    else
    {
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    }
}
int main()
{
    solve();
    return 0;
}
