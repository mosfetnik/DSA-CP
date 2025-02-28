#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        vector<long long> arr(n);

        long long sum = n * (n + 1) / 2;

        long long sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum += arr[i];

            if( )
        }

        long long sqr = sqrt(sum);
        if (sqr * sqr == n)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int num : arr)
            {
                cout << num << " ";
            }
        }
    }
    return 0;
}