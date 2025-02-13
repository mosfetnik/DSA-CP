#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<long long, long long> freq_arr;

        for (int i = 0; i < n; i++)
        {
            freq_arr[arr[i]]++;
        }
        if (freq_arr.size() >= 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            long long freq_1 = freq_arr.begin()->second;
            long long freq_2 = freq_arr.rbegin()->second;

            if (freq_1 == freq_2)
            {
                cout << "YES" << endl;
            }
            else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}