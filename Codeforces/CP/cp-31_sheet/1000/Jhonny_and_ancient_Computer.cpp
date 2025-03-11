#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

LL getR(LL a) {
    while (a % 2 == 0)
        a /= 2;
    return a;
}

void solve() {
    LL a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    
    LL r = getR(a);
    if (getR(b) != r) {
        cout << "-1\n";
        return;
    }
    
    int ans = 0;
    b /= a;
    
    while (b >= 8) {
        b /= 8;
        ++ans;
    }
    if (b > 1) ++ans;
    
    cout << ans << "\n";
}

int main() {
    int quest;
    cin >> quest;
    
    while (quest--)
        solve();
    
    return 0;
}
