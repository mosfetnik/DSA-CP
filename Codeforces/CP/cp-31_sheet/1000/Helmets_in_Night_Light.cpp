#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, r;
        cin >> n >> r;
        
        vector<pair<ll, ll>> v(n);
        for (ll p = 0; p < n; p++) {
            cin >> v[p].second;
        }
        for (ll p = 0; p < n; p++) {
            cin >> v[p].first;
        }
        
        sort(v.begin(), v.end());
        
        ll rem = n - 1, total = r;
        for (ll p = 0; p < n; p++) {
            if (v[p].first >= r) {
                break;
            }
            ll cnt;
            if (rem < v[p].second) {
                cnt = rem;
            } else {
                cnt = v[p].second;
            }
            total += cnt * v[p].first;
            rem -= cnt;
        }
        
        total += r * rem;
        cout << total << endl;
    }
    
    return 0;
}
