#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int idx = -1;

    // Find the first index from the right where arr[i] < arr[i+1]
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        reverse(arr.begin(), arr.end());
    } else {
        // Find the smallest number greater than arr[idx] from the right
        for (int i = n - 1; i > idx; i--) {
            if (arr[i] > arr[idx]) {
                swap(arr[i], arr[idx]);
                break;
            }
        }
        // Reverse the suffix starting at idx + 1
        reverse(arr.begin() + idx + 1, arr.end());
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
