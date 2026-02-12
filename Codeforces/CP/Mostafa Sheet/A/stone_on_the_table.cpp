#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt=0;

    for( int i =0;i<n;i++){

        if( s[i] == s[i+1]){
            cnt++;
        }
    }
    cout<<  cnt<<endl;;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
