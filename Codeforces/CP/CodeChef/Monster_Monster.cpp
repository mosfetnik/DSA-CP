#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n>>k;
       
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(),arr.end());
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            ans = max(ans, arr[i] + i * k);
        }
        cout << ans << endl;
    }

    return 0;
}