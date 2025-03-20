#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        ll curr_black = 0;
        ll max_black = 0;

        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'B')
            {
                curr_black++;
            }
        }
        max_black = curr_black;

        for (int i = k; i < n; i++)
        {
            if (s[i] == 'B')
                curr_black++;
            if (s[i - k] == 'B')
                curr_black--;

            max_black = max(max_black, curr_black);
        }

        cout << k - max_black << endl;
           
    }
    return 0;
}