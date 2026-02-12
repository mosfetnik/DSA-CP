#include <iostream>
#define ll unsigned long long
using namespace std;

ll MOD = 1e9 + 7;

ll solve(ll base, ll expo)
{

    ll res = 1;
    while (expo > 0)
    {

        if (expo & 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;

        expo >>=1;
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    cout << solve(2, n) << " ";
    return 0;
}
