#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &dp, int i, int n)
{
    if (i >= n)
        return 0;

    int steal = dp[i] + solve(dp, i + 2, n);
    int skip = solve(dp, i + 1, n);

    return max(steal, skip);
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    int k = dp.size();

    int ans = solve(dp, 0, k);
    cout << ans << endl;
}
