#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int curr_count = 1;
    int max_count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            curr_count++;
        }
        else
        {
            curr_count = 1;
        }
        max_count = max(curr_count, max_count);
    }

    cout << max_count << endl;

    return 0;
}
