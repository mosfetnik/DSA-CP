#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, result;
    cin >> s;

    int n = s.length();
    char c = s[0];
    if (n == 1)
    {
        cout << toupper(c) << endl;
    }
    if (n > 1)
    {
       s[0]=  toupper(s[0]);
        for (int i = 1; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }

    return 0;
}