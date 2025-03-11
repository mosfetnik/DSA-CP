#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin >> s;
    
    // Count zeros and ones
    int zeros = 0, ones = 0;
    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
    }
    
    // Process the string
    for (int i = 0; i < s.length(); i++) {
        // If current character is '0', we remove a '1'
        if (s[i] == '0') {
            ones--;
        }
        // If current character is '1', we remove a '0'
        else {
            zeros--;
        }
        
        // Check if we can't continue removing characters
        if (zeros < 0 || ones < 0) {
            cout << s.length() - i << endl;
            return;
        }
    }
    
    // If we processed the entire string
    cout << 0 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
