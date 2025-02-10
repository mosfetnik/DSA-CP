#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        vector<long long> arr;

        int half = x / 2;
        int full = y;
        if (x > 0)
        {
            for (int i = 0; i < half; i++)
            {
                arr.push_back(1);
            }
        }
        if (y > 0)
        {
            for (int i = 0; i < full; i++)
            {
                arr.push_back(2);
            }
        }
        if (x > 0)
        {
            for (int i = 0; i < half; i++)
            {
                arr.push_back(1);
            }
        }
        for (long long num : arr)
        {
            cout << num;
        }
        cout << endl;
    }
    return 0;
}