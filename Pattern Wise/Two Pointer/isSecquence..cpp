#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {

        int m = s.size();
        int n = t.size();

        int i = 0;
        int j = 0;
        int cnt = 0;

        while ((i < m) && (j < n))
        {

            if (s[i] == t[j])
            {
                cnt++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        if (cnt == m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};