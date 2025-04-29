#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    int ans = 0;

   for(char c:s){
     if( c== '1'){
        cnt++;
     }
   }
   for(char c:s){
    if( c=='1')
        ans+= (cnt-1);
    else
        ans+=(cnt+1);
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}