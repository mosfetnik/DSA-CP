#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "MOVE##to#front";
    int n = s.length();
    int i = 0;

    string res = "";
    int cnt = 0;
    for (char c : s)
    {
        if (c == '#')
            cnt++;
    }

    res.append(cnt, '#');

    for (int i = 0; i < n; i++)
    {
        if (s[i] != '#')
        {
            res.push_back(s[i]);
        }
    }
    cout << res << endl;

    return 0;
}