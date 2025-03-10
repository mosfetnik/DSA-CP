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

        vector<int> arr(n - 2);
        for (int i = 0; i < n - 2; i++)
        {
            cin >> arr[i];
        }

        float zero_count = 0;
        float one_count = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] == 1)
            {
                one_count += 3;
            }
            else
            {
                zero_count += 0.25;
            }
        }
        int val = int(zero_count + one_count);
        if (val == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
