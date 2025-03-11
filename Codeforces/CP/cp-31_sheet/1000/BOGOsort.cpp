#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; // Read the size of the array
    
    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x; // Read array elements
    }
    
    sort(arr.rbegin(), arr.rend()); // Sort in descending order
    
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t; // Read number of test cases
    
    while (t--) {
        solve();
    }
    
    return 0;
}
