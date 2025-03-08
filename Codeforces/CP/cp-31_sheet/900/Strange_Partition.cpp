#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        long long total_sum = 0;
        long long min_val = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total_sum += arr[i];
            min_val += (arr[i] + x - 1) / x; // Correctly rounds up
        }

        long long max_val = (total_sum + x - 1) / x; // Correctly rounds up

        cout << max_val << " " <<min_val  << endl;
    }

    return 0;
}
