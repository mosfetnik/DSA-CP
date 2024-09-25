

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
        if (rem == 4 || rem == 3 || rem == 2 || rem == 1)
        {
            cout << div + 1;
        }
        }
}
