#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;  // Read n first

        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
            cin >> arr[i];

        int count = 0;
        bool invalid = false;

        for (int i = n - 2; i >= 0; i--) {
            while (arr[i] >= arr[i + 1]) {
                if (arr[i] == 0) {
                    invalid = true;
                    break;
                }
                arr[i] /= 2;
                count++;
            }
            if (invalid) break;
        }

        if (invalid)
            cout << -1 << endl;
        else
            cout << count << endl;
    }

    return 0;
}
