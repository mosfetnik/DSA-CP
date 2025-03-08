#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<int> arr(n * k);

        for (int i = 0; i < n*k; ++i)
            cin >> arr[i];

        long long sum = 0;

        int i = n * k;

        while (k--)
        {
            i = i - (n / 2 + 1);
            sum += arr[i];
        }

        cout << sum << endl;
    }
    return 0;
}