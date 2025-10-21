#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n - 1); // we have n-1 numbers
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i]; // ✅ add array elements
    }

    ll total = (n * (n + 1)) / 2; // ✅ sum of 1..n
    ll ans = total - sum;         // missing number
    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
