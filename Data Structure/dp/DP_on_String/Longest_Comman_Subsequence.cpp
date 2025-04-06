
#include <bits/stdc++.h>
using namespace std;
// * using recursion

int n, m;
int solve(string &s1, string &s2, int i, int j)
{

    n = s1.length();
    m = s2.length();

    if (i >= n || j >= m)
        return 0;

    if (s1[i] == s2[j])
        return 1 + solve(s1, s2, i + 1, j + 1);
    else
        return max(solve(s1, s2, i, j + 1), solve(s1, s2, i + 1, j));
}

//* using recursion + memoization

int t[1001][1001];
int solve_memo(string &s1, string &s2, int i, int j)
{

    n = s1.length();
    m = s2.length();

    if (i >= n || j >= m)
        return 0;

    if (t[i][j] != -1)
        return t[i][j];

    if (s1[i] == s2[j])
        return t[i][j] = 1 + solve(s1, s2, i + 1, j + 1);
    else
        return t[i][j] = max(solve(s1, s2, i, j + 1), solve(s1, s2, i + 1, j));
}

// * using bottom up

int solve_bottom(string &s1, string &s2, int i, int j)
{

    m = s1.length();
    n = s2.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int row = 0; row < m + 1; row++)
    {
        dp[row][0] = 0;
    }
    for (int col = 0; col < n + 1; col++)
    {
        dp[0][col] = 0;
    }

    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {

            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[m][n];
}
int main()
{
    string s1;
    string s2;
    memset(t, -1, sizeof(t));
    return solve(s1, s2, 0, 0);
}