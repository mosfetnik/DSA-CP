#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    long long t;
    cin >> t;
    while (t--) {
        
        string a,b,c;
        cin>>a>>b>>c;
        string ans="";
        ans+=a[0];
        ans+=b[0];
        ans+=c[0];
        cout<<ans<<endl;
    }
    return 0;
}