#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int &x : arr) cin >> x;

        int zero_count = count(arr.begin(), arr.end(), 0);
        
        if (zero_count == n) {
            cout << 0 << '\n';
            continue;
        }

        int left = 0, right = n - 1;
        while (arr[left] == 0) left++;
        while (arr[right] == 0) right--;

        bool contiguous = true;
        for (int i = left; i <= right; i++) {
            if (arr[i] == 0) {
                contiguous = false;
                break;
            }
        }

        cout << (contiguous ? 1 : 2) << '\n';
    }
    return 0;
}
