#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string org = "ADVITIYA";
        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < 8; i++)
        {

            int curr = s[i] - 'A';
            int target = org[i] - 'A';

            if (curr <= target)
            {

                ans += target - curr;
            }
            else
            {

                ans += 90 - curr + (target - 65 + 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
