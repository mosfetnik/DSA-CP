#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int m, k;
        cin >> m >> k;

        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < m; i++)
        {
            if (s[i] == 'S')
                count++;
        }

        if (count >= k)
            cout << m << endl;

        else
        {
            int a = k - count;
            cout << m + (a - 1) << endl;
        }
    }
}