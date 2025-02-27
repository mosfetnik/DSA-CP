#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s, t;
        cin >> s >> t;

        vector<int> arr(26, 0);
        for (char c : t)
            arr[c - 'A']++;

        string temp = "";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (arr[s[i] - 'A'] > 0)
            {
                temp += s[i];
                arr[s[i] - 'A']--;
            }
        }
        reverse(temp.begin(), temp.end());

        if (temp == t)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
