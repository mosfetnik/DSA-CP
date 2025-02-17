#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) ans++;
    }

    if (s[0] == '1') ans++;
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
}