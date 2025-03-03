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
            cin >> arr[i];
        long long cnt0 = 0, cnt1 = 0;
        for (int i = 0; i< n; ++i)
        {
            if (arr[i] == 0)
                cnt0++;
            if (arr[i] == 1)
                cnt1++;
        }
        cout<< (1LL<< cnt0) *  cnt1<<"\n";
    }

    return 0;
}
