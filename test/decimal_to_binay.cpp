#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string ans = "";
    while (n > 0)
    {
        int bit = n & 1;
        ans.push_back('0' + bit);
        n = n >> 1;
        reverse(ans.begin(), ans.end());
    }

    cout << ans;
}
