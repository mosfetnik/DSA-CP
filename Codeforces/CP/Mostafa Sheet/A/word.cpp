#include <bits/stdc++.h>
using namespace std;

// ascai value = A - Z = 65 -96
// ascai value = a - z = 97 -123

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cnt1++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            cnt2++;
        }
    }

    if (cnt1 >= cnt2)
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;

    return 0;
}
