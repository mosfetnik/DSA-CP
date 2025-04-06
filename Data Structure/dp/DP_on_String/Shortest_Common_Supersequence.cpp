#include <bits/stdc++.h>

using namespace std;
// * using recursion
string solve(string &s1, string &s2, int i, int j)
{
    int n = s1.length();
    int m = s2.length();

    if (i == n)
        return s2.substr(j);
    if (j == m)
        return s1.substr(i);

    if (s1[i] == s2[j])
        return s1[i] + solve(s1, s2, i + 1, j + 1);

    string option1 = s1[i] + solve(s1, s2, i + 1, j);
    string option2 = s2[j] + solve(s1, s2, i, j + 1);

    if (option1.length() <= option2.length())
        return option1;
    else
        return option2;
}
// * usinng bottom up
string shortestCommonSupersequence(string s1, string s2)
{
    int n = s1.length(), m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    // Fill LCS table
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (s1[i] == s2[j])
                dp[i + 1][j + 1] = dp[i][j] + 1;
            else
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
    }

    // Build SCS from LCS table
    string result;
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            result += s1[i - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            result += s1[i - 1];
            i--;
        }
        else
        {
            result += s2[j - 1];
            j--;
        }
    }

    while (i > 0)
        result += s1[--i];
    while (j > 0)
        result += s2[--j];

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string s1;
    string s2;

    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    string scs = solve(s1, s2, 0, 0);
    cout << "Shortest Common Supersequence: " << scs << endl;

    return 0;
}
