#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int xor_sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            xor_sum ^= a[i];
        }
        
        if (xor_sum == 0) {
            cout << 0 << endl;
        } else {
            if (n % 2 == 1) {
                cout << xor_sum << endl;
            } else {
                cout << -1 << endl;  // When n is even, sometimes no valid answer exists.
            }
        }
    }
    
    return 0;
}
