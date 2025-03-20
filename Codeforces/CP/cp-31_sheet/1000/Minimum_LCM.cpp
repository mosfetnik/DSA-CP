#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        int a = 1;

        for (int g = 2; g * g <= n; ++g)
        {
            if (n % g == 0)
            {
                a = n / g;
                break;
            }
        }
        cout << a << ' ' << n - a << '\n';
    }
}