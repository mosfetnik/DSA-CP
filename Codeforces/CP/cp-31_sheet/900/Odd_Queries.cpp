#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, q;
        cin >> n >> q;
        vector<long long> arr(n + 1, 0);
        vector<long long> prefix(n + 1, 0); // 1-based prefix sum array

        // Reading the array and building prefix sum
        for (long long i = 1; i <= n; i++) {
            cin >> arr[i];
            prefix[i] = prefix[i - 1] + arr[i]; // Compute prefix sum
        }

        // Processing queries
        while (q--) {
            long long l, r, ele;
            cin >> l >> r >> ele; // l and r are 1-based

            // Sum of subarray from l to r
            long long subarray_sum = prefix[r] - prefix[l - 1];

            // New sum after modification
            long long new_sum = (prefix[n] - subarray_sum) + ele * (r - l + 1);

            if (new_sum % 2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
