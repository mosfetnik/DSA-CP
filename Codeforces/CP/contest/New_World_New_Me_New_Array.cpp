#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long n, k, p;
        cin >> n >> k >> p;

        long long res = 0;

        long long div = abs(k) / p;
        long long mod = abs(k) % p;

        if (mod != 0)
        {
            res = div+1;
        }
        else
        {

            res = div;
        }
        if (n <= div)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
    return 0;
}