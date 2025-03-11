#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;

    // Convert string to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // Define vowels
    string vowels = "aoyeui";

    // Process the string
    string result;
    for (char c : s)
    {
        if (vowels.find(c) == string::npos) // If it's not a vowel
        {
            result += '.';
            result += c;
        }
    }

    cout << result << '\n';

    return 0;
}
