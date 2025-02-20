#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int res = 1;
        int count = 1;

        for (int i = 1; i < n; i++)
        {

            if (s[i] != s[i - 1])
            {
                count = 1;
            }
            else
            {
                count++;
            }
            res = max(res, count);
        }

        cout << res + 1 << endl;
    }
    return 0;
}