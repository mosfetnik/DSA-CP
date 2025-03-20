#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to rotate the range [l, r] to the right
void rotateRight(vector<ll> &arr, ll l, ll r) {
    rotate(arr.begin() + l, arr.begin() + r, arr.begin() + r + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n), arr2(n);
        
        for (ll i = 0; i < n; i++) cin >> arr[i];
        iota(arr2.begin(), arr2.end(), 1); // Initialize arr2 with 1 to n

        bool found = false;
        for (ll i = 0; i < n; ) {
            ll j = i;
            while (j + 1 < n && arr[j] == arr[j + 1]) j++; // Find range of equal values

            if (i == j) { // No valid range found
                cout << -1 << endl;
                found = true;
                break;
            }
            
            rotateRight(arr2, i, j); // Rotate the identified segment
            i = j + 1;
        }

        if (!found) {
            for (ll x : arr2) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}
