#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{

    int k, n;
    cin >> k >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    ll sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    ll max_sum = sum;
    for (int i = k; i < n; i++)
    {

        sum += arr[i];
        sum -= arr[i - k];

        max_sum = max(max_sum, sum);
    }
    cout << max_sum;
}

int main()
{

    solve();

    return 0;
}