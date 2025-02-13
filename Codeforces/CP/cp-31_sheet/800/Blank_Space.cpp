#include <bits/stdc++.h>
using namespace std;
//* Subarray problem
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
        int count = 0;
        int max_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
            else
            {
                max_count = max(max_count, count);
                count = 0; // resting the value
            }
        }
        cout << max(max_count, count) << "\n"; // finding the max count in array
    }

    return 0;
}