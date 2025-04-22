#include <bits/stdc++.h>
using ll = long long int;
#define endl '\n'
using namespace std;

void solve() {
    ll x, y;
    cin >> x >> y;

    // If x + y already satisfies the condition, k = 0 is a solution
    if ((x + y) == (x ^ y)) {
        cout << 0 << endl;
        return;
    }

    // Calculate a possible value of k
    ll k = ((x & y) ^ x);  // This finds the necessary adjustment to remove carries

    if (k <= 1e18) {
        cout << k << endl;
    } else {
        cout << -1 << endl;  // No valid k found
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
