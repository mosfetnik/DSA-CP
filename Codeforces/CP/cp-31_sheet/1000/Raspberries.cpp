#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t; 

    while (t--) { 
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int evenCount = 0, ans = INT_MAX;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) ++evenCount;
            ans = min(ans, ((a[i] + k - 1) / k) * k - a[i]);
        }

        if (k == 4) {
            if (evenCount >= 2) ans = 0;
            else ans = min(ans, 2 - evenCount);
        }

        cout << ans << "\n";
    }

    return 0;
}
