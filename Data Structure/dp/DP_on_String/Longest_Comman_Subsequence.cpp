
#include <bits/stdc++.h>
using namespace std;
// * using recursion

int solve(string s1, string s2, int i, int j)
{

    int n = s1.length();
    int m = s2.length();

    if (i >= n || j >= m)
    {
        return 0;
    }

    if (s1[i] == s2[j])
    {

        return 1 + solve(s1, s2, i + 1, j + 1);
    }
    else
    {
        return max(solve(s1, s2, i, j + 1), solve(s1, s2, i + 1, j));
    }
}

int main()
{
    string s1;
    string s2;

    solve(s1, s2, 0, 0);
}