#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());  // Important for correct first and last

    int first = arr.front();
    int last = arr.back();
    int span = last - first;

    int cost1 = abs(x - first) + span;
    int cost2 = abs(x - last) + span;

    cout << min(cost1, cost2) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
