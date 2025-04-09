#include <bits/stdc++.h>
using namespace std;

// * using bottom up approach
class Solution
{
public:
    int minDistance(string s1, string s2)
    {
        int m = s1.length();
        int n = s2.length();

        vector<vector<int>> dp(m + 1, vector<int>(n + 1));

        for (int i = 0; i <= m; i++)
        {

            for (int j = 0; j <= n; j++)
            {

                if (i == 0 || j == 0)
                    dp[i][j] = i + j;

                else if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];

                else
                    dp[i][j] =
                        1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            }
        }
        return dp[m][n];
    }
};
// * using recusion + memoization (using index mathod)
class Solution
{
public:
    int dp[501][501];
    int solve(string &s1, string &s2, int i, int j)
    {

        int m = s1.length();
        int n = s2.length();
        if (i == m)
        {
            return n - j;
        }
        if (j == n)
        {
            return m - i;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        if (s1[i] == s2[j])
        {

            return dp[i][j] = solve(s1, s2, i + 1, j + 1);
        }
        else
        {
            int insertS = 1 + solve(s1, s2, i + 1, j);
            int deleteS = 1 + solve(s1, s2, i, j + 1);
            int replaceS = 1 + solve(s1, s2, i + 1, j + 1);

            return dp[i][j] = min({insertS, deleteS, replaceS});
        }
    }
    int minDistance(string word1, string word2)
    {

        memset(dp, -1, sizeof(dp));
        return solve(word1, word2, 0, 0);
    }
};

// * using recursion + memoization (using length in reverse order)
class Solution
{
public:
    int dp[501][501];
    int solve(string &s1, string &s2, int m, int n)
    {

        if (m == 0 || n == 0)
            return m + n;
        if (dp[m][n] != -1)
        {
            return dp[m][n];
        }

        if (s1[m - 1] == s2[n - 1])
        {

            return dp[m][n] = solve(s1, s2, m - 1, n - 1);
        }
        else
        {
            int insertS = 1 + solve(s1, s2, m, n - 1);
            int deleteS = 1 + solve(s1, s2, m - 1, n);
            int replaceS = 1 + solve(s1, s2, m - 1, n - 1);

            return dp[m][n] = min({insertS, deleteS, replaceS});
        }
    }
    int minDistance(string word1, string word2)
    {

        int m = word1.length();
        int n = word2.length();

        memset(dp, -1, sizeof(dp));
        return solve(word1, word2, m, n);
    }
};
// using recursion
class Solution
{
public:
    int solve(string &s1, string &s2, int i, int j)
    {

        int m = s1.length();
        int n = s2.length();
        if (i == m)
        {
            return n - j;
        }
        if (j == n)
        {
            return m - i;
        }

        if (s1[i] == s2[j])
        {

            return solve(s1, s2, i + 1, j + 1);
        }
        else
        {
            int insertS = 1 + solve(s1, s2, i + 1, j);
            int deleteS = 1 + solve(s1, s2, i, j + 1);
            int replaceS = 1 + solve(s1, s2, i + 1, j + 1);

            return min({insertS, deleteS, replaceS});
        }
    }
    int minDistance(string word1, string word2)
    {

        return solve(word1, word2, 0, 0);
    }
};