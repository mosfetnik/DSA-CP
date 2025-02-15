#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    // Check if n is large enough to be expressed using k
    if (n % 2 == 0 || (n >= k && (n - k) % 2 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
