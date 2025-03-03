#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        long long count_1 = 0;
        long long count_0 = 0;

        for (int i : s)
        {
            if (i == '1')
                count_1++;
            else
                count_0++;
        }

        long long val = min(count_0, count_1);

        if (val % 2 == 1)
        {
            cout << "DA\n";
        }
        else
            cout << "NET\n";
    }
    return 0;
}
