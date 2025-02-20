#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int xor_sum = 0;
        int count = 0;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {

            xor_sum ^= arr[i];
            count++;
        }
        if (count <= 8)
        {
            cout << "YES " << count<<endl;

        }
        else
        {
            cout << "NO " << count<<endl;
        }
    }
    return 0;
}