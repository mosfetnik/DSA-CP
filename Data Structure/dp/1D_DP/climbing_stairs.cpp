#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &dp)
{
    if (n == 1 || n == 2 || n == 3)
        return n;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    int ans = solve(n, dp);

    cout << ans << endl;
}