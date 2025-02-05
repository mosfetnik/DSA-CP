#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        bool check_three_count = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                check_three_count = true;
                break;
            }
            if (s[i] == '.')
            {
                count++;
            }
        }

        if (check_three_count)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }

    return 0;
}
