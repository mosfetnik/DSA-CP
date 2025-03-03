#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        long long opp = 0;

        if (a > 0 && b > 0)
        {
            int val = __gcd(a, b);
           
           cout<< val<<endl;
        }
        else
            cout << a << b<<endl;
        
    }
    return 0;
}