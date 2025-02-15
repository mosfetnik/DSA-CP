#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << endl;
        } else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            if (n % 2 == 1) {
                cout << 3 << " ";
                for (int i = 0; i < n / 2 - 1; i++) {
                    cout << 2 << " ";
                }
            } else {
                for (int i = 0; i < n / 2; i++) {
                    cout << 2 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}