#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; ++i)
    {

        int x;
        cin >> x;
        st.insert(x);
    }

    int k = st.size();
    cout << k << endl;

    
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
