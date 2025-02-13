#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        int diff = 1e9;
        
        cin >> nums[0]; // Read first element
        bool isSorted = true;

        for (int i = 1; i < n; i++) {
            cin >> nums[i];
            if (nums[i] < nums[i - 1]) { 
                isSorted = false;
            }
            diff = min(nums[i] - nums[i - 1], diff);
        }

        if (!isSorted) {
            cout << 0 << endl; // If not sorted, print 0
            continue;
        }

        cout << (diff / 2) + 1 << endl;
    }

    return 0;
}
