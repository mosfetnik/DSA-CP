#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    ll min_val = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        min_val = min(arr[i], INT_MAX);
    }

    int count = 0;
    ll product = 1;

    for (int i = 0; i < n; i++){
        product *= arr[i];

        if( product %k ==0){
            cout<<
        }

    }

   
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
