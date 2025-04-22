#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
bool isPrime(int x)
{

    if (x <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int x, k;
    cin >> x >> k;

    if (k > 1 && x > 1)
    {
        cout << "NO"<<endl;
    }
    else if (k == 1)
    {
        cout << (isPrime(x) ? "YES" : "NO")<<endl;
    }
    else
    {
        cout << ((k == 2) ? "YES" : "NO")<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
