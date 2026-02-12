#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.begin(),arr.end());

 
    int i=0;

    while(i !=x  ){
        min_val =arr[i]+arr[i+1];
 
    }

   
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
