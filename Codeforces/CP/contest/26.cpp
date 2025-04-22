#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve()
{
    int n, x;
    cin >> n >> x;

    int size = 0, str = 0, val = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int skill;
        cin >> skill;   
        size++;
        val = min(val, skill); 
        if (size * val >= x)  
        {                        
            str++;     
            size = 0;   
            val = INT_MAX; 
        }
    }

    cout << str << endl;
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
