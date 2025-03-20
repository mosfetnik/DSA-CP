#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll count = 0;

        ll min_num = arr[0];
        ll max_num = arr[0];
        for (int i = 1; i < n; ++i)
        {

            if (arr[i] > max_num)
            {
                max_num = arr[i];
            }
            if (arr[i] < min_num)
            {
                min_num = arr[i];
            }

            if (max_num - min_num > 2 * x)
            {
                count++;
                max_num = min_num = arr[i];
            }
        }
        cout << count << endl;
    }

    return 0;
}