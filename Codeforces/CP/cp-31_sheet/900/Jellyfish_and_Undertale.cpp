#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {

        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long count = b;
        for (long long i = 0; i < n; i++)
        {

            count += min(arr[i], a - 1);
        }
        cout << count << endl;
    }
    return 0;
}