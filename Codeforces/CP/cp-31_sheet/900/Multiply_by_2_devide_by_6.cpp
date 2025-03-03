#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long count = 0;  // Initialize count

        while (n != 1) {
            if (n % 6 == 0) {
                n /= 6;
            } else if (n % 3 == 0) {
                n *= 2;
            } else {
                count = -1;
                break;
            }
            count++;
        }

        cout << count << "\n";
    }
    return 0;
}
