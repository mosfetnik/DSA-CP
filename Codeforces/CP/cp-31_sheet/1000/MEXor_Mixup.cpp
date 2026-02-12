#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int getXOR(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int pXOR = getXOR(a - 1);

        if ((pXOR ^ b) == 0)
        {
            cout << a << endl;
        }
        else if ((pXOR ^ b) != a)
        {
            cout << a + 1 << endl;
        }
        else
        {
            cout << a + 2 << endl;
        }
    }
    return 0;
}
