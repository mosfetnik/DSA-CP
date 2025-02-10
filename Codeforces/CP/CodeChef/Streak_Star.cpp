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

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            int prev = -1, cnt = 0;
            bool flag = true;
            for (int j = i; j < n; j++)
            {

                if (arr[j] >= prev)
                {
                    prev = arr[j];
                    cnt++;
                }
                else if ((flag == true) && (arr[j] * x >= prev))
                {

                    flag = false;
                    prev = arr[j] * x;
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans<<endl;
    }
    return 0;
}