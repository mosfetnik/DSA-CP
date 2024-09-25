#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int div = n / 5;
    int rem = n % 5;

    if (rem == 0)
    {
        cout << div;
    }

    else
    {
        if (rem == 4)
        {
            cout << div + 1;
        }
        if (rem == 3)
        {
            cout << div + 1;
        }
        if (rem == 2)
        {
            cout << div + 1;
        }
        if (rem == 1)
        {
            cout << div + 1;
        }
    }
}
