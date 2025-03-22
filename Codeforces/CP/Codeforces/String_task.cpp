#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, result;

    cin >> s;
    int n = s.length();

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (char c : s)
    {

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            continue;
        }
        else
        {
            result += '.';
            result += c;
        }
    }

    cout << result << '\n';

    return 0;
}