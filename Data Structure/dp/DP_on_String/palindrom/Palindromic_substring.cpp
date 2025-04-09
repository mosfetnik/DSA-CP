#include <bits/stdc++.h>
using namespace std;
// * using recusion
bool isPalindrom(int i, int j, string s)
{
    int n = s.length();

    if (i < j)
        return true;

    if (s[i] == s[j])
        return isPalindrom(i + 1, j - 1, s);

    return false;
}

int countSubstrings(string s)
{

    int count = 0;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            if (isPalindrom(i, j, s))
                count++;
        }
    }
    return count;
}
// *  using recursion + memoization
class Solution
{
public:
    int dp[1001][1001];
    bool isPalindrom(int i, int j, string s)
    {
        int n = s.length();

        if (i > j)
            return true;

        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }

        if (s[i] == s[j])
            return dp[i][j] = isPalindrom(i + 1, j - 1, s);

        return dp[i][j] = false;
    }

    int countSubstrings(string s)
    {

        memset(dp, -1, sizeof(dp));
        int count = 0;

        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {

                if (isPalindrom(i, j, s))
                    count++;
            }
        }
        return count;
    }
};
// * using bottom up
int count_substring(string s)
{
    int n = s.length();

    vector<vector<bool>> dp(n, vector<bool>(n, false));

    int count = 0;
    for (int L = 0; L < n; L++)
    {
        for (int i = 0; i + L - 1 < n; i++)
        {
            int j = i + L - 1;

            if (i == j)
            {
                dp[i][j] = true;
            }
            else if (i + 1 == j)
            {
                dp[i][j] = (s[i] == s[j]);
            }
            else
            {
                dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
            }
            if (dp[i][j] == true)
            {
                count++;
            }
        }
    }
    return count;
}