#include <iostream>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll cnt = 0;
    for (ll i = 5; n / i >= 1; i *= 5)
    {
        cnt += n / i;
    }

    cout << cnt << endl;
}

int main()
{
    solve();
    return 0;
}
