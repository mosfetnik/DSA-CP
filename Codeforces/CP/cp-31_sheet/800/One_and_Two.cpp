#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int total_twos = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2) total_twos++;  // Count total occurrences of '2'
        }

        int left_twos = 0;
        for (int k = 0; k < n - 1; k++) {
            if (a[k] == 2) left_twos++;  
            int right_twos = total_twos - left_twos; 

            if (left_twos == right_twos) {
                cout << k + 1 << endl;
                goto next_case;  // Exit early for this test case
            }
        }

        cout << -1 << endl;
    next_case:;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
