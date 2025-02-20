#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {

        long long n;

        cin >> n;
        for (long long i = 1;; i++)
        {
            if (n % i != 0)
            {
                cout << i - 1 << endl;
                break;
            }
        }
    }

    return 0;
}
