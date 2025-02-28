#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        

        long long res = n / 2;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n % 2 == 1)
        {
            cout << res << endl;
        }
        else
        {
            cout << res + 1 << endl;
        }
    }

    return 0;
}