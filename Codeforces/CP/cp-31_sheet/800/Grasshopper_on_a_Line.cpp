#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;  // Fixed input handling

        if (x % k != 0)
        {
            cout << 1 << "\n";
            cout << x << "\n";  // Added newline for clarity
        }
        else
        {
            cout << 2 << "\n";
            cout << 1 << " " << x - 1 << "\n";  // Fixed spacing issue
        }
    }
    return 0;
}
