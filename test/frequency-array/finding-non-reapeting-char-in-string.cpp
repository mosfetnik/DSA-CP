#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "blockchain technology";
    int n = s.length();
    vector<int> freq(26, 0);

    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ')
            freq[s[i] - 'a']++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (freq[s[i] - 'a'] == 1 && s[i] != ' ')
        {
            cout << s[i] << " ";
        }
    }

    return 0;
}